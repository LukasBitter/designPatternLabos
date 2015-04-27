/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include <iostream>
#include <cstdlib>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

#include "Apple.h"
#include "Banana.h"
#include "Strawberry.h"

using namespace std;

int ChooseFruit()
{
	int Choice;
	do
	{
		cout << "Main menu: " << endl
			<< "1) Add a banana." << endl
			<< "2) Add a strawberry." << endl
			<< "3) Add an apple (no mac)." << endl
			<< "4) Add a basket." << endl
			<< "5) Stop adding to basket," << endl
			<< "6) D-D-D-D-D-D-Drop the faith! Run away with the basket. (Quit)" << endl << endl
			<< "Your choice : ";
		cin >> Choice;
	} while (Choice < 1 || Choice > 6);
	return Choice;
}

void PrintBasket(CComposite* FruitBasket)
{
	cout << "\n\n\nContents of DA Groot BASKET (case):" << endl;
	FruitBasket->Print();
	cout << endl << "Oh, are there any Seeds in them fruits? : " << boolalpha << FruitBasket->IsWithSeed() << endl << endl;
}

void AddFruits(CComposite* FruitBasket)
{
	while (true)
	{
		PrintBasket(FruitBasket);

		int Choice = ChooseFruit();
		CComponent* Fruit;

		switch (Choice)
		{
		case 1:
			// Add a banana.
			Fruit = new CBanana();

			FruitBasket->AddComponent(Fruit);
			break;
		case 2:
			// Add a strawberry.
			Fruit = new CStrawberry();

			FruitBasket->AddComponent(Fruit);
			break;
		case 3:
			// Add an apple.
			Fruit = new CApple();

			FruitBasket->AddComponent(Fruit);
			break;
		case 4:
		{
			CComposite* Basket = new CComposite();
			Fruit = Basket;

			FruitBasket->AddComponent(Fruit);
			AddFruits(Basket);
			break;
		}
		case 5:
			// Stop ze building of ze baskets.
			return;
		case 6:
			// Quit.
			exit(0);
			break;
		default:
			cout << "D-D-D-D-D-D-D-Drop the faith!" << endl;
		}
	}
}

int main()
{
	CComposite* GrootBasket = new CComposite();
	AddFruits(GrootBasket);
	delete GrootBasket;

	return 0;
}
