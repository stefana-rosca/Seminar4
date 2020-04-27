#pragma once
#include "Kunde.h"
//#include "LKW.h"
//#include "PKW.h"
#include "Auto.h"
#include <vector>
using namespace std;

class Rental
{
private:
	vector <Kunde> clients;
	vector <Auto> autos;

public:
	Rental();

	void add_clients(Kunde c);
	void delete_client(Kunde c);
	void update_client(Kunde& c, string newName);
	void add_auto(Auto m);
	void delete_auto(Auto m);

	int size_auto() { return autos.size(); }
	int size_clients() { return clients.size(); }

	~Rental();
};