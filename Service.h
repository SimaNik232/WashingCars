#include <string>

class Service
{
public:
	std::string Name;
	int Id;
	int Price;

public:
	Service(int id, std::string name, int price);
	~Service();
private:
};