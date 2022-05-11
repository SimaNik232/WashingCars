#include <string>
#include <iostream>
#include <list>

#include "Service.h"

Service::Service(int id, std::string name, int price)
{ 
	Id = id;
	Price = price;
	Name = name;
}

Service::~Service()
{
}

