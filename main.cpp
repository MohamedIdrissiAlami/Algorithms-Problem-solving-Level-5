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

	cout << "\nafter inserting \"500\" after node  with index 1 : ";
	MyList.InsertAfter(1, 500);

	cout << "\nNumber of items in the linked list = " << MyList.Size();
	cout << "\nLinked list content : \n";
	MyList.PrintList();

	system("pause>0");
	return 0;
}