#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; // pointer to dynamic array
	int size;  //array size 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output()const;// console output
	int* GetPointer()const;
	int GetSize()const;

	void Resize(int size);		//change size
	void Sort();				//sort array
	int Search(int a);			//find element in array
	void Reverse();				//rewrite elements in reverse order

	// реилизовать следующие методы:
	//void ReSize(int size);// изменение размера массива
	//void Sort();// сортировка(любой алгоритм сортировки)
	//int Search(int a); // поиск элемента в массиве, возвращает индекс наиденного эл., либо -1.
	//void Reverse(); // перезаписывает последовательность элементов в обратном порядке, напрмер 12345 -> 54321

};
