#include "clsMyStack.h"

int main()
{
	clsMyStack <int> MyStack;

	MyStack.Push(10);
	MyStack.Push(20);
	MyStack.Push(30);
	MyStack.Push(40);
	MyStack.Push(50);

	cout << "\nstack : \n";
	MyStack.Print();

	cout << "\nStack size : " << MyStack.Size();
	cout << "\nstack Top : " << MyStack.Top();
	cout << "\nstack bottom : " << MyStack.Bottom();

	MyStack.Pop();

	cout << "\n\nStack after pop() ; \n";
	MyStack.Print();

	//Extension #1:
	cout << "\n\n Item(2) : " << MyStack.GetItem(2);

	//Extension #2 : 
	MyStack.Reverse();
	cout << "\n\nStack after Reverse() : \n";
	MyStack.Print();

	system("pause>0");
	return 0;
}