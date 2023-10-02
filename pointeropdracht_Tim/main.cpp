#include <iostream>
#include "person.h"
using namespace std;

int main(void)
{
	// Opdracht: Doe wat de comments zeggen.
	// Schrijf de code onder de comments, en laat de comments staan!!!!
	// Aan 1 regel code per comment heb je genoeg

	// zeg vriendelijk gedag (deze krijg je kado)
	cout << "Hello World" << endl;

	// maak een Person op de stack:
	Person p;

	// roep de method sayHello() aan van deze Person:
	p.sayHello();

	// print het geheugenadres van deze Person:
	cout << &p << endl;

	// maak een pointer naar deze Person:
	Person *pp = &p;

	// print het geheugenadres van de pointer naar de Person:
	cout << &pp << endl;

	// maak een Person op de heap (hint: new):
	Person *pn = new Person();

	// roep de method sayHello() aan van deze Person:
	pn->sayHello();

	// print het geheugenadres van deze Person:
	cout << pn << endl;

	// print het geheugenadres van deze Person nog een keer. Dit keer dereference je de pointer en vraag je daar het geheugenadres van op:
	cout << &(*pn) << endl;

	// print het geheugenadres van de pointer naar de Person (pointer staat op de stack):
	cout << &pn << endl;

	return 0;
}
