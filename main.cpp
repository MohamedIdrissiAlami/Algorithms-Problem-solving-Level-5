#include "clsDblLinkedList.h"

int main()
{
	clsDblLinkedList<int> MyList;
	MyList.InsertAtBeginning(5);
	MyList.InsertAtBeginning(4);
	MyList.InsertAtBeginning(3);
	MyList.InsertAtBeginning(2);
	MyList.InsertAtBeginning(1);
	MyList.InsertAtEnd(600);

	cout << "\nLinked list content : \n";
	MyList.PrintList();

	cout << "\nNumber of items in the linked list = " << MyList.Size();

	clsDblLinkedList<int>::Node* N1 = MyList.GetNode(5);
	if (N1 != nullptr)
	{
		cout << "\nitem value is : " << N1->Value;
	}


	system("pause>0");
	return 0;
}