#include <iostream>
#include <cstring>
using namespace std;
int main() {

	char arr[100];
	int Amo = 0, Temp, TempAmo;

	cout << "Input the array: ";
	cin >> arr;

	cout << "\nReversing the array...\n\n";

	while (arr[Amo] != '\0')
	Amo++;

	cout << "The reverse array is: ";

	TempAmo = Amo - 1;

	for (Temp = TempAmo; Temp >= 0; Temp--)
	{
		cout << arr[Temp];
	}

	cout << "\n\nThe size of the array is: " << Amo;

	system("pause");
	return 0;
}