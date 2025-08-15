#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsDblLinkedList
{
public:
	class Node
	{
	public :
		T Value;
		Node* Prev, * Next;
	};
	Node* Head = nullptr;

	void InsertAtBeginning(T Value)
	{
		Node* NewNode = new  Node();
		NewNode->Value = Value;
		NewNode->Prev = nullptr;
		NewNode->Next = Head;
		if (Head != nullptr)
		{
			Head->Prev = NewNode;
		}
		Head = NewNode;
	}

	void PrintList()
	{
		Node* Current = Head;
		while (Current != nullptr)
		{
			cout << Current->Value << " ";
			Current = Current->Next;
		}
	}

};

