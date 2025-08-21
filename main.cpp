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

	MyDynamicArray.DeleteItemAt(2);
	cout << "\nArray items after deleting item (2) : \n";

	cout << "\nArray Size : " << MyDynamicArray.Size()<<endl;
	MyDynamicArray.PrintList();

	system("pause>0");
	return 0;
}