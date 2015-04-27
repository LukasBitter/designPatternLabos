/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Composite.h"
#include <iostream>

using namespace std;

CComposite::CComposite()
{
	Name = "Fruit basket";
}

CComposite::~CComposite()
{
	// Get an iterator over the Collection.
	vector<CComponent*>::iterator CollectionIterator = Collection.begin();

	// Navigate the Collection and delete each element.
	for (; CollectionIterator != Collection.end(); CollectionIterator++)
	{
		// Delete the element pointed to by the iterator.
		delete *CollectionIterator;
	}
    // Clear the Collection as it should now be empty.
	Collection.clear();
}

void CComposite::AddComponent(CComponent* Component)
{
	Collection.push_back(Component);
}

void CComposite::Print()
{
	cout << Name << "[";
	vector<CComponent*>::iterator CollectionIterator = Collection.begin();
	for (; CollectionIterator != Collection.end(); CollectionIterator++)
	{
		(*CollectionIterator)->Print();
		// If we reached the end of the collection, don't show the comma.
		if (CollectionIterator + 1 != Collection.end())
		{
			cout << " , ";
		}
	}
	cout << "]";
}

bool CComposite::IsWithSeed()
{
	vector<CComponent*>::iterator CollectionIterator = Collection.begin();
	// Iterate over the collection to determine if any of it's components has seeds.
	for (; CollectionIterator != Collection.end(); CollectionIterator++)
	{
		if ((*CollectionIterator)->IsWithSeed())
		{
			// Found a component with seeds, stop the iteration.
			return true;
		}
	}

	return false;
}
