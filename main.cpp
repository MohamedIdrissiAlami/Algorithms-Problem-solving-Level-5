#include "clsDblLinkedList.h"

int main()
{
	clsDblLinkedList<int> MyList;
	MyList.DeleteLastNode();
	MyList.InsertAtBeginning(5);
	MyList.InsertAtBeginning(4);
	MyList.InsertAtBeginning(3);
	MyList.InsertAtBeginning(2);
	MyList.InsertAtBeginning(1);
	MyList.InsertAtEnd(600);

	MyList.DeleteLastNode();
	cout << "\nLinked list content : \n";
	MyList.PrintList();


	system("pause>0");
	return 0;
}