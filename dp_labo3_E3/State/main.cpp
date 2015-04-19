#include "Order.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	COrder c;
	char choix = 0;
	while (choix != 'q')
	{
		cout << "Actual state : " << endl;
		c.ProcessOrder();

		cout << endl <<
			"Possible actions :\n" <<
			"Press any key : Next state.\n" <<
			"q : Quit."
			<< endl;
		cout << "Your choice : ";
		cin >> choix;
	}

	return 0;
}
