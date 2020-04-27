#include "Rental.h"
#include <iostream>

using namespace std;

Rental::Rental()
{
}

void Rental::add_clients(Kunde c)
{
	if (clients.size() == 0)
	{
		clients.push_back(c);
		return;
	}
	for (int i = 0; i < clients.size(); i++)
	{
		if (clients.at(i).get_id()==c.get_id()) //exista deja
			return;
	}
	clients.push_back(c);
}

void Rental::delete_client(Kunde c)
{
	if (clients.size() == 0)
		return;
	for (int i = 0; i < clients.size(); i++)
	{
		if (clients.at(i).get_id() == c.get_id())
		{
			clients.erase(clients.begin() + i);
			return;
		}
	}
}

void Rental::update_client(Kunde& c,string newName)
{
	if (clients.size() == 0)
		return;
	for (int i = 0; i < clients.size(); i++)
	{
		if (clients.at(i).get_id() == c.get_id())
		{
			clients[i].set_name(newName);
			c.set_name(newName);
		}
	}
}

void Rental::add_auto(Auto m)
{
	if (autos.size() == 0)
	{
		autos.push_back(m);
		return;
	}
	for (auto i = autos.begin(); i != autos.end(); i++)
	{
		if (i->get_id() == m.get_id()) //exista deja
			return;
	}
	autos.push_back(m);
}

void Rental::delete_auto(Auto m)
{
	if (autos.size() == 0)
		return;
	for (int i = 0; i < autos.size(); i++)
	{
		if (autos[i].get_id() == m.get_id()) 
		{
		autos.erase(autos.begin() + i);
		return;
		}
	}
}

Rental::~Rental()
{
}