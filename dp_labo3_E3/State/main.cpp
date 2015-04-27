/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Order.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    COrder* Order = new COrder();
    char Choice = 0;
    while (Choice != 'q')
    {
        cout << endl << "Actual state : ";
        Order->ProcessOrder();

        cout << endl <<
             "Possible actions :\n" <<
             " - Press any key : Process order.\n" <<
             " - 'q' : Quit."
             << endl;
        cout << "Your choice : ";
        cin >> Choice;
    }
    delete Order;
    return 0;
}
