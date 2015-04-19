#include <iostream>
#include <cstdlib>

#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

#include "Apple.h"
#include "Banana.h"
#include "Strawberry.h"

#include "Decorator.h"
#include "DecoratorEquals.h"
#include "DecoratorHash.h"
#include "DecoratorStar.h"

using namespace std;

void clear()
{
	cout << string(50, '\n');
}

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
			<< "6) D-D-D-D-D-D-Drop the faith!" << endl << endl
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

void DecorateFruit(CComponent*& fruit)
{
	int Choice = 0;
	while (Choice != 4)
	{
		Choice = 0;
		do
		{
			cout << "Decoration menu :" << endl
				<< "1) Decorate with \"=\"." << endl
				<< "2) Decorate with \"#\"." << endl
				<< "3) Decorate with \"*\"." << endl
				<< "4) Stop decorating." << endl
				<< "Your choice : ";
			cin >> Choice;
		} while (Choice < 1 || Choice > 4);

		switch (Choice)
		{
		case 1: //=
			fruit = new CDecoratorEquals(fruit);
			break;
		case 2: //#
			fruit = new CDecoratorHash(fruit);
			break;
		case 3: //*
			fruit = new CDecoratorStar(fruit);
			break;
		case 4: //stop da beat
			return;
		default:
			cout << "CHECK WHAT YOU ARE TYPING DARNIT!" << endl;
		}
	}
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
			DecorateFruit(Fruit);
			FruitBasket->AddComponent(Fruit);
			break;
		case 2:
			// Add a strawberry.
			Fruit = new CStrawberry();
			DecorateFruit(Fruit);
			FruitBasket->AddComponent(Fruit);
			break;
		case 3:
			// Add an apple.
			Fruit = new CApple();
			DecorateFruit(Fruit);
			FruitBasket->AddComponent(Fruit);
			break;
		case 4:
		{
			CComposite* Basket = new CComposite();
			Fruit = Basket;
			DecorateFruit(Fruit);
			FruitBasket->AddComponent(Fruit);
			AddFruits(Basket);
			break;
		}
		case 5:
			// Stop ze building of ze baskets.
			return;
		case 6:
			// Quit.
			exit(EXIT_SUCCESS);
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
