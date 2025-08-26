#pragma once 
#include <iostream>
#include <stack>
#include <queue>
#include "clsDate/clsDate.h"

using namespace std;
class clsQueueLine
{
private:
	short _TotalTickets = 0;
	short _AverageServeTime = 0;
	string  _Prefix = "";
	class clsTicket
	{
	private:
		short _Number = 0;
		string _Prefix = "";
		string _TicketTime = "";
		short _WaitingClient = 0;
		short _AverageServeTime = 0;
		short _ExpectedServeTime = 0;
	public:
		clsTicket(string Prefix, short Number, short WaitingClients, short AverageServeTime)
		{
			_Prefix = Prefix;
			_Number = Number;
			_WaitingClient = WaitingClients;
			_AverageServeTime = AverageServeTime;
			_TicketTime = clsDate::GetSystemDateTimeString();
		}
		short Number()
		{
			return _Number;
		}
		string Prefix()
		{
			return _Prefix;
		}
		string TicketTime()
		{
			return _TicketTime;
		}
		short WaitingClients()
		{
			return _WaitingClient;
		}
		short AverageServeTime()
		{
			return _AverageServeTime;
		}
		short ExpectedServeTime()
		{
			return AverageServeTime() * WaitingClients();
		}
		string FullNumber()
		{
			return Prefix() + to_string(Number());
		}
		void Print()
		{
			cout << "\n\t\t\t\t__________________________________";
			cout << "\n\t\t\t\t\t " << FullNumber();
			cout << "\n\t\t\t\t\t " << TicketTime();
			cout << "\n\t\t\t\t\t Waiting clients = " << WaitingClients();
			cout << "\n\t\t\t\t\t Serve time in = " << ExpectedServeTime() << " minutes.";
			cout << "\n\t\t\t\t__________________________________\n";
		}
	};

public :
	queue<clsTicket>QueueLine;
	clsQueueLine(string Prefix,short AverageServeTime)
	{
		_AverageServeTime = AverageServeTime;
		_Prefix = Prefix;
		_TotalTickets = 0;
	}

	void IssueTicket()
	{
		++_TotalTickets;
		clsTicket Ticket(_Prefix,_TotalTickets,QueueLine.size(),_AverageServeTime);
		QueueLine.push(Ticket);
	}

	short ServedClients()
	{
		return _TotalTickets - QueueLine.size();
	} 

	short WaitingClients()
	{
		return QueueLine.size();
	}
	
	bool ServeNextClient()
	{
		if (QueueLine.empty())
		{
			return false;
		}
		else
		{
			QueueLine.pop();
			return true;
		}
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t\t__________________________________";
		cout << "\n\t\t\t\t\t Queue info";
		cout << "\n\t\t\t\t__________________________________";
		cout << "\n\t\t\t\t\t Prefix = " << _Prefix;
		cout << "\n\t\t\t\t\t Total tickets = " << _TotalTickets;
		cout << "\n\t\t\t\t\t Served clients = " << ServedClients();
		cout << "\n\t\t\t\t\t Waiting clients = " << WaitingClients();
		cout << "\n\t\t\t\t__________________________________";
	}

	void PrintFrontToBack()
	{
		cout << "\n\nTickets : ";
		if (QueueLine.empty())
		{
			cout<<"<No available tickets>";
			return;
		}
		queue<clsTicket>TempQueueLine = QueueLine;
		while (!TempQueueLine.empty())
		{
			clsTicket Ticket = TempQueueLine.front();
			cout << " " << Ticket.FullNumber() << " <-- ";
			TempQueueLine.pop();
		}
		cout << "\n";
	}

	void PrintBackToFront()
	{
		cout << "\n\nTickets : ";
		if (QueueLine.empty())
		{
			"<No available tickets>";
			return;
		}
		stack<clsTicket>stqTempStackLine;
		queue<clsTicket>TempQueueLine=QueueLine;
		while (!TempQueueLine.empty())
		{
			stqTempStackLine.push(TempQueueLine.front());
			TempQueueLine.pop();
		}
		while (!stqTempStackLine.empty())
		{
			cout << stqTempStackLine.top().FullNumber() << " --> ";
			stqTempStackLine.pop();
		}
		cout << "\n";
	}

	void PrintAllTickets()
	{
		cout << "\n\n\t\t\t\t\t. . . Tickets . . .";
		if (QueueLine.empty())
		{
			cout << "\n\t\t\t\tN o  T i c k e t s";
		}
		queue<clsTicket>TempQueueLine = QueueLine;
		while (!TempQueueLine.empty())
		{
			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}
	}

};