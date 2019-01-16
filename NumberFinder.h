#pragma once
#include "BinarySearchTree.h"
template<class ItemType>
class NumberFinder :
	private BinarySearchTree<ItemType>
{
public:
	NumberFinder();
	~NumberFinder();
	void insert(const ItemType& item);
	void deleteLeaf(const ItemType& item);
	void findAndDisplay(const ItemType& item);

};

template<class ItemType> // Constructor
NumberFinder<ItemType>::NumberFinder()
{
}

template<class ItemType> // Destructor
NumberFinder<ItemType>::~NumberFinder()
{
}

template<class ItemType> // Inserts into tree
void NumberFinder<ItemType>::insert(const ItemType& item) {
	BinarySearchTree<ItemType>::add(item);
}

template<class ItemType> // Deletes from tree
void NumberFinder<ItemType>::deleteLeaf(const ItemType& item) {
	BinarySearchTree<ItemType>::remove(item);
}

template<class ItemType>
void NumberFinder<ItemType>::findAndDisplay(const ItemType& item) {
	int count = 1; // Count variable

	if (BinarySearchTree<ItemType>::contains(item, count)) { // If the item is found
		std::cout << item << " is found!" << std::endl; //Show the item found...
		std::cout << count << " comparison(s) until the number was found." << std::endl; // And the number of comparisons it took to find it.
	}
	else {
		std::cout << item << " couldn't be found..." << std::endl; // Same thing happens when the number CAN'T be found.
		std::cout << count << " comparison(s) until the search was finished." << std::endl;
	}
	cout << endl;
}