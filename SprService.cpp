#include <fstream>
#include <iostream>
#include <msxml.h>
//#include "Lib\sqlite_orm.h"
#include "Lib\sqlite3.h"
//#include "Lib\sqlite3ext.h"
#include "SprService.h"

//using namespace sqlite_orm;
using namespace std;

struct UserType {
	int id;
	std::string name;
};



SprService::SprService()
{

}

SprService::~SprService()
{
}

void SprService::Save()
{
	//auto storage = sqlite_orm::make_storage("db.sqlite",
	//	make_table("users", sqlite_orm::make_column("id", &UserType::id, autoincrement(), primary_key())));
	sqlite3* s;
}

void SprService::Load()
{
	

}

