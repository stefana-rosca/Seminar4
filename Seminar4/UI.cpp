#include "UI.h"
#include "Auto.h"
#include <iostream>
using namespace std;

UI::UI() : AutoController() {}

UI::~UI() {}


void UI::meniu()
{
	cout << endl;
	cout << "0.Exit\n";
	cout << "1.Find auto by Id\n";
	cout << "2.Find all autos\n";
	cout << "3.Save auto\n";
	cout << "4.Update Auto\n";
	cout << "5.Delete Auto\n";
	cout << endl;
}

void UI::optiuni()
{
	AutoController ctrl;
	AutoInMemoryRepository repo;

	while (true) 
	{
		meniu(); 
		repo.add_autos();
		//ctrl.adding_autos();
		cout<<repo.size_autos()<<endl;

		cout << "Choose an option:\n";
		int opt;
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			int id;
			cout << "Enter id for the searched auto\n";
			cin >> id;
			Auto* r = ctrl.findAutoById(id);
			//(*r).toString();
			cout<<r->toString();
			break;
		}
		case 2:
		{
			ctrl.findAll2();
			break;
		}
		case 3:
		{
			cout << "Adding a new auto\n";
			cout << "Enter id:\n";
			int id;
			cin >> id;
			cout << "Enter Marke:\n";
			string marke;
			cin >> marke;
			cout << "Enter Modell:\n";
			string modell;
			cin >> modell;
			Auto newAuto = Auto (id, marke, modell);
			//Auto* ptrNew = &newAuto;
			ctrl.saveAuto(&newAuto);
			break;
		}
		case 4:
		{
			cout << "Updating an auto\n";
			cout << "Enter id of the updated auto:\n";
			int id;
			cin >> id;
			cout << "Enter Marke of the updated auto:\n";
			string marke;
			cin >> marke;
			cout << "Enter Modell of the updated auto:\n";
			string modell;
			cin >> modell;
			Auto updatedAuto = Auto( id,marke,modell );
			//Auto* ptrUpdated = &updatedAuto;
			ctrl.updateAuto(&updatedAuto);
			break;
		}
		case 5:
		{
			cout << "Deleting an auto\n";
			cout << "Enter id of the auto to be deleted\n";
			int id;
			cin >> id;
			ctrl.deleteAuto(id);
			break;
		}
		case 0:
			return;
		}
	}

}