//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include <iostream>
#include "NumberFinder.h"  // ADT binary tree operations

using namespace std;

int main()
{
	//Variable
	int first, fiveHundredth, fiveThousandth, last, largestNum = 0, unlistedNum = 500, ranNum;
	NumberFinder<int>* treeList = new NumberFinder<int>;


	for (int i = 0; i < 10000; i++) { // For 10,000 numbers...
		ranNum = rand() % 20000; // Make a random number between 1 and 20,000.
		treeList->insert(ranNum); //Insert the random number.
		if (largestNum < ranNum) { // If the random number is larger than the largest number possible in the list...
			largestNum = ranNum + 1; // Make the largest number the random number + 1;
		}
		if (unlistedNum = ranNum) { //If the random number equals the unlisted number...
			unlistedNum++; //Increase the unlisted number by one.
		}
		switch (i) { //Store the 1st, 500th, 5,000th, 10,000th numbers.
			case 0:
				first = ranNum;
				break;
			case 499:
				fiveHundredth = ranNum;
				break;
			case 4999:
				fiveThousandth = ranNum;
				break;
			case 9999:
				last = ranNum;
				break;
			default:
				break;
		}

	}
	
	cout << "1st number: " << first << " 500th Number: " <<fiveHundredth << " 5,000th number: " << fiveThousandth << " 10,000th Number: " << last << endl;
	cout << endl;
	//Find and display all the of the variables stored.
	treeList->findAndDisplay(first);
	treeList->findAndDisplay(fiveHundredth);
	treeList->findAndDisplay(fiveThousandth);
	treeList->findAndDisplay(last);
	treeList->findAndDisplay(largestNum);
	treeList->findAndDisplay(unlistedNum);

	cin.get();
	return 0;
}  