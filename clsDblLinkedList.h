#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsDblLinkedList
{
private :
	int _Size=0;
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
		++_Size;
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
		++_Size;

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
		++_Size;
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
			--_Size;
		}
	}

	void DeleteLastNode()
	{
		if (Head != nullptr)
		{
			Node* LastNode = Head;
			
			while (LastNode->Next != nullptr)
				LastNode = LastNode->Next;
			
			if (LastNode->Prev != nullptr)
				LastNode->Prev->Next = nullptr;
			else
				Head = nullptr;
			
			delete LastNode;
			--_Size;
		}
	}

	void DeleteNode(Node* NodeToDelete)
	{
		if (Head == nullptr || NodeToDelete == nullptr)
			return;
		if (NodeToDelete->Prev != nullptr)
			NodeToDelete->Prev->Next = NodeToDelete->Next;
		else
		{
			NodeToDelete->Next->Prev = nullptr;
			Head = NodeToDelete->Next;
		}
		if (NodeToDelete->Next != nullptr)
			NodeToDelete->Next->Prev = NodeToDelete->Prev;

		delete NodeToDelete;
		--_Size;
	}

	void PrintList()
	{
		Node* Current = Head;
		if (Head == nullptr)
			cout << "\nempty list!";
		while (Current != nullptr)
		{
			cout << Current->Value << " ";
			Current = Current->Next;
		}
	}

	int Size()
	{
		return this->_Size;
	}

	bool IsEmpty()
	{
		return this->_Size == 0;
	}

	void Clear()
	{
		while (_Size > 0)
			DeleteLastNode();
	}

	void Reverse()
	{
		Node* Current = Head;
		Node* temp = nullptr;
		while (Current != nullptr)
		{
			temp = Current->Prev;
			Current->Prev = Current->Next;
			Current->Next = temp;
			Current = Current->Prev;
		}
		if (temp != nullptr)
		{
			Head = temp->Prev;
		}
	}

	Node* GetNode(short Index)
	{
		if (Index >= 0 && Index < _Size)
		{
			short CurrentIndex = 0;
			Node* Current = Head;
			while (Current != nullptr)
			{
				if (CurrentIndex++ == Index)
					return Current;
				Current = Current->Next;
			}

		}
		return nullptr;
	}
	T GetItem(short Index)
	{
		Node* ItemNode = GetNode(Index);
		if (ItemNode != nullptr)
			return ItemNode->Value;
		else
			return NULL;
	}
};

