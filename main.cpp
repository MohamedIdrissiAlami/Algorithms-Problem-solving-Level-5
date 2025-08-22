#include "clsDynamicArray.h"

int main()
{
	clsDynamicArray<int> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);

	cout << "\nIs Empty ? " << MyDynamicArray.IsEmpty();
	cout << "\nArray Size : " << MyDynamicArray.Size() << endl;

	cout << "\nArray items : \n";
	MyDynamicArray.PrintList();
	
	MyDynamicArray.InsertAtBeginning(400);
	cout << "\n\nArray after Insert 400 at the beginning : ";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertBefore(2, 500);
	cout << "\n\nArray after insert 500 before Index 2 : ";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAtEnd(800);
	cout << "\n\nArray after insert 800 at End : ";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	system("pause>0");
	return 0;
}