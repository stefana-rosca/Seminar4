#include "AutoController.h"
#include "Rental.h"
#include "Auto.h"
using namespace std;

AutoController::AutoController()
{
}

AutoController::~AutoController()
{
}

Auto* AutoController::findAutoById(int id)
{
	//cout << "Find Auto by Id\n";
	Auto* rez = repo.findOne(id);
	return rez;
} 

vector<Auto*> AutoController:: findAll2()
{
	//cout << "Find all autos\n";
	vector<Auto*> rez = repo.findAll();
	return rez;
}

Auto* AutoController::saveAuto(Auto* a)
{
	//cout << "Save Auto\n";
	Auto* rez = repo.save(a);
	return rez;
}

Auto* AutoController::updateAuto(Auto* a)
{
	//cout << "Update Auto\n";
	Auto* updated = repo.update(a);
	return updated;
}

Auto* AutoController::deleteAuto(int id)
{
	//cout << "Delete Auto\n";
	Auto* deleted = repo.del(id);
	return deleted;
}

void AutoController::adding_autos()
{
	repo.add_autos();
}