#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	const int Province = 3;
	const int Days = 7;
	char arr[Province][Province] = { "A", "B", "C" };
	int temp[Province][Days];

	cout << "Enter all temperature for a week of Province A, Province B, and then Province C.";

	for (int Area = 0; Area < Province; Area++)
	{
	for (int Day = 1; Day <= Days; ++Day)
	{
	cout << "\nProvince " << arr[Area] << ", Day " << Day << ": ";
	cin >> temp[Area][Day];
	}
	}

	cout << "\nDisplaying Values: \n";

	for (int Area = 0; Area < Province; Area++)
	{
	for (int Day = 1; Day <= Days; ++Day)
	{
	cout << "\nProvince " << arr[Area] << ", Day " << Day << ": " << temp[Area][Day] << endl;
	}
	}

	system("pause");
	return 0;
}