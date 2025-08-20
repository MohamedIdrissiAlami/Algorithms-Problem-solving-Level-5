#pragma once 
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;

public:
	T* OriginalArray;
	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;
		_Size = Size;
		OriginalArray = new T[_Size];
	}
	~clsDynamicArray()
	{
		delete []OriginalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index < 0 || Index >= _Size)
			return false;
		OriginalArray[Index] = Value;
		return true;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	int Size()
	{
		return _Size;
	}

	void PrintList()
	{
		for (short i = 0; i < _Size; i++)
			cout << OriginalArray[i] << " ";
		cout << "\n";
	}

};