#include "clsDblLinkedList.h"

int main()
{
	clsDblLinkedList<int> MyList;
	MyList.InsertAtBeginning(5);
	MyList.InsertAtBeginning(4);
	MyList.InsertAtBeginning(3);
	MyList.InsertAtBeginning(2);
	MyList.InsertAtBeginning(1);

	cout << "\nLinked list content : \n";
	MyList.PrintList();
	system("pause>0");
	return 0;
}