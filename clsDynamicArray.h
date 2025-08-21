#pragma once 
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;
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
		for (int i = 0; i < _Size; i++)
			cout << OriginalArray[i] << " ";
		cout << "\n";
	}
	void Resize(int NewSize)
	{
		if (NewSize < 0) NewSize = 0;

		//create new array with the requested size : 
		_TempArray = new T[NewSize];
		//copy elements from older array to _TempArray: 
		int ElementsToCopy = (_Size < NewSize) ? _Size : NewSize;
		for (int i = 0; i < ElementsToCopy; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		//initialize new Elements if expanding
		for (int i = _Size; i < NewSize; i++)
		{
			_TempArray[i] = T();//default initialization
		}
		//Clean up old  array and update references : 
		delete[]OriginalArray;
		OriginalArray = _TempArray;
		_Size = NewSize;
	}
};