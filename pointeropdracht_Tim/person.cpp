#include <iostream>
#include "person.h"

Person::Person()
{
	static int next_id = 0;
	this->id = next_id++;
}

Person::~Person()
{

}

void Person::sayHello()
{
	std::cout << "Person, id: " << this->id << std::endl;
}
