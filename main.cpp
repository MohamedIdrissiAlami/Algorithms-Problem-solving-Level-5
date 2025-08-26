#include "clsQueueLine.h"

int main()
{
	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);

	cout<<"\nSubscription Queue info : \n";
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintFrontToBack();
	SubscriptionsQueue.PrintBackToFront();

	SubscriptionsQueue.PrintAllTickets();

	SubscriptionsQueue.ServeNextClient();
	cout << "\n\nSubscriptions Queue after serving one client \n";
	SubscriptionsQueue.PrintInfo();


	system("pause>0");
	return 0;
}