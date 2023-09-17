#pragma once
#include "DynamicArray.h"
using namespace std;

DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
void main()
{
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();

	DynamicArray rezult = GetObj();
	rezult.Output();
	cout << endl << endl;


	//resize
	int userNum;
	cout << "How many cells should we add?/ ";
	cin >> userNum;
	rezult.Resize(userNum);
	cout << "Resize Result: " << endl;
	rezult.Output();
	cout << endl;

	//sort
	rezult.Sort();
	cout << "Sort result: " << endl;
	rezult.Output();
	cout << endl;

	//search
	int userElement;
	cout << "Enter number: ";
	cin >> userElement;
	cout << "Index: " << rezult.Search(userElement) << endl;
	cout << endl;

	//reverse
	rezult.Reverse();
	cout << "Reverse Result: " << endl;
	rezult.Output();
	cout << endl;

}