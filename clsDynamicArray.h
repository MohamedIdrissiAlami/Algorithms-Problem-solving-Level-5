#pragma once 
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	// TODO: Refactor to use local temp variables later
	T* _TempArray; // Currently used in Resize/Delete methods
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

	T GetItem(int Index)
	{
		if (Index < 0 || Index >= _Size)
			return NULL;
		return OriginalArray[Index];
	}

	void Clear()
	{
		delete[]OriginalArray;
		_TempArray = new T[0];
		OriginalArray = _TempArray;
		_Size = 0;
	}

	void Reverse()
	{
		_TempArray = new T[_Size];
		//copy original array items ot temporary array in reverse order
		for (int i=0;i<_Size;i++)
		{
			_TempArray[i] = OriginalArray[_Size - 1 - i];
		}
		//cleanup old array and update references :
		delete[]OriginalArray;
		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int Index)
	{
		if (Index < 0 || Index >= _Size)
			return false;
		_TempArray = new T[_Size - 1];
		//copy OriginalArray items into _TempArray except for the requested item : 
		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		for (int i = Index + 1; i < _Size; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		//clean up old array and change references
		delete[]OriginalArray;
		OriginalArray = _TempArray;
		--_Size;
		return true;

	}

	bool DeleteFirstItem()
	{
		return DeleteItemAt(0);
	}

	bool DeleteLastItem()
	{
		return DeleteItemAt(_Size - 1);
	}
	
	int Find(T Value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
				return i;
		}
		//if you reached here this means that the item you're looking for doesn't exist
		return -1;
	}

	bool DeleteItem(T Value)
	{
		return DeleteItemAt(Find(Value));
	}
};