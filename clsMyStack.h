#pragma once
#include "clsDblLinkedList.h"
template <class T>
class clsMyStack
{
protected:
	clsDblLinkedList<T> _MyList;
public :
	void Push(T Value)
	{
		_MyList.InsertAtBeginning(Value);
	}

	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	T Top()
	{
		return _MyList.GetItem(0);
	}

	T Bottom()
	{
		return _MyList.GetItem(Size() - 1);
	}

	void Pop()
	{
		_MyList.DeleteFirstNode();
	}

	T GetItem(int Index)
	{
		return _MyList.GetItem(Index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyList.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyList.InsertAfter(Index, NewValue);
	}

	void InsertAtTop(T NewValue)
	{
		_MyList.InsertAtBeginning(NewValue);
	}

	void InsertAtBottom(T NewValue)
	{
		_MyList.InsertAtEnd(NewValue);
	}

	void Clear()
	{
		_MyList.Clear();
	}
};

