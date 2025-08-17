#include "clsMyQueue.h"

int main()
{
	clsMyQueue<int> MyQueue;
	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	cout << "\nQueue : \n";
	MyQueue.Print();

	cout << "\nQueue Size : " << MyQueue.Size();
	cout << "\nQueue Front : " << MyQueue.Front();
	cout << "\nQueue Back :  " << MyQueue.Back();

	MyQueue.Pop();
	cout << "\n\nQueue after Pop() : \n";
	MyQueue.Print();

	//Extension #1 : 
	cout << "\n\n item(2) : " << MyQueue.GetItem(2);

	//Extension #2 : 
	MyQueue.Reverse();
	cout << "\n\nQueue after reverse() : \n";
	MyQueue.Print();

	system("pause>0");
	return 0;
}