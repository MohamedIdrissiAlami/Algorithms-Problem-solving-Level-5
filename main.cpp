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

	cout << "\n----\n";
	clsDblLinkedList<int>::Node* N1 = MyList.Find(3);
	MyList.InsertAfter(N1, 702);
	cout << "\nLinked list content : \n";
	MyList.PrintList();

	system("pause>0");
	return 0;
}