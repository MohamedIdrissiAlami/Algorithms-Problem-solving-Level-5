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

	void InsertAtEnd(T Value)
	{
		Node* NewNode = new Node();
		NewNode->Value = Value;
		NewNode->Next = nullptr;
		if (Head == nullptr)
		{
			NewNode->Prev = nullptr;
			Head = NewNode;
			return;
		}
		Node* LastNode = Head;
		while (LastNode->Next != nullptr)
		{
			LastNode = LastNode->Next;
		}
		LastNode->Next = NewNode;
		NewNode->Prev = LastNode;
	}

	Node* Find(T Value)
	{
		if (Head != nullptr)
		{
			Node* Current = Head;
			while (Current != nullptr && Current->Value != Value)
				Current = Current->Next;
			if (Current != nullptr)
				return Current;
		}
		return nullptr;
	}

	void InsertAfter(Node* Current, T Value)
	{
		if (Head == nullptr || Current == nullptr)
			return;
		Node* NewNode = new Node();
		NewNode->Value = Value;
		NewNode->Next = Current->Next;
		NewNode->Prev = Current;
		if (Current->Next != nullptr)
			Current->Next->Prev = NewNode;
		Current->Next = NewNode;
	}

	void DeleteFirstNode()
	{
		if (Head != nullptr)
		{
			Node* FirstNode = Head;
			Head = Head->Next;

			if (Head != nullptr)
				Head->Prev = nullptr;

			delete FirstNode;
		}
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

