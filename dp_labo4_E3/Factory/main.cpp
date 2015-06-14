/**
Authors: Horia Mut & Lukas Bitter & Quentin Jeanmonnod
*/
#include <iostream>
#include "Enums.h"
#include "Factory.h"
#include "MealMenu.h"
#include <iostream>


/**
ONLY USABLE WITH COMPILER FLAG
-std=c++11
*/
using namespace std;

int main()
{
	int TryAgain = 5;
	CMealMenu* Meal;
	do
	{
		cout << "Let's build a menu." << endl;
		cout << "What type would you want?" << "\n"
			<< "1 : Cuisson\n"
			<< "2 : Vapeur\n"
			<< "3 : Salade\n"
			<< "4 : Potage\n" << endl;

		int ChoiceMenuType;

		cin >> ChoiceMenuType;

		switch (ChoiceMenuType)
		{
		case 1:
			Meal = Factory::CreateMeal(Cuisson);
			break;
		case 2:
			Meal = Factory::CreateMeal(Vapeur);
			break;
		case 3:
			Meal = Factory::CreateMeal(Salad);
			break;
		case 4:
			Meal = Factory::CreateMeal(Potage);
			break;
		default:
			break;
		}
		cout << "Your menu has been build: here you go:\n" << endl;
		Meal->PrintMenu();
		Meal->DeleteMenu();

		cout << "\nBuild another one? \nECOLOGICAL WARNING:\n\nWe will throw out the last one, like MacDonald's. Insert (0) to stop." << endl;
		cin >> TryAgain;
	} while (TryAgain != 0);

	delete Meal;
	return 0;
}
