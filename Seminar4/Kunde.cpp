#include "Kunde.h"
#include <string>

Kunde::Kunde(int id, string name)
{
	this->id = id;
	this->name = name;
}

int Kunde::get_id()
{
	return this->id;
}
void Kunde::set_id(int id)
{
	this->id = id;
}

string Kunde::get_name()
{
	return this->name;
}
void Kunde::set_name(string name)
{
	this->name = name;
}

Kunde::~Kunde()
{
}