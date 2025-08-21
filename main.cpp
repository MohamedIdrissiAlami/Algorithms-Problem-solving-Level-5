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

	cout << "\nItem(2) : " << MyDynamicArray.GetItem(2) << "\n";

	MyDynamicArray.Clear();
	cout << "\nArray items after clear :  \n";
	MyDynamicArray.PrintList();

	system("pause>0");
	return 0;
}