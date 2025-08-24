#include "clsMyString.h"

int main()
{
	cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

	clsMyString S1;
	cout << "\nS1 = " << S1.Value ;

	S1.Value = "Mohamed";
	cout << "\nS1 = " << S1.Value;

	S1.Value = "Mohamed2";
	cout << "\nS1 = " << S1.Value;

	S1.Value = "Mohamed3";
	cout << "\nS1 = " << S1.Value;

	cout << "\n\nUndo : ";
	cout << "\n__________\n";

	S1.Undo();
	cout << "\nS1 after undo = " << S1.Value<<endl;
	
	S1.Undo();
	cout << "\nS1 after undo = " << S1.Value << endl;

	S1.Undo();
	cout << "\nS1 after undo = " << S1.Value << endl;

	cout << "\n\nrRedo : ";
	cout << "\n__________\n";

	S1.Redo();
	cout << "\nS1 after Redo = " << S1.Value<<endl;
	
	S1.Redo();
	cout << "\nS1 after Redo = " << S1.Value << endl;

	S1.Redo();
	cout << "\nS1 after Redo = " << S1.Value << endl;

	system("pause>0");
	return 0;
}