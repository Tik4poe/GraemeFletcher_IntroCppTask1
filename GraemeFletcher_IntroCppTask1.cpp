#include <iostream>

using namespace std;

//Global
int userInt = 0;

int main()
{
	// 1) Print Array
	int theArray[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

	int size = sizeof(theArray) / sizeof(theArray[0]);

	for (int i = 0; i < size; i++)
	{
		cout << theArray[i] << ",";
	}
	cout << "\n\n==================================================" << endl;


}