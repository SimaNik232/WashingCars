#include <string>
#include <iostream>
#include <list>
#include "Service.h"

class SprService : std::list<Service>
{
public:
	SprService();
	~SprService();

	void Load();
	void Save();
};