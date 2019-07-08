#include <iostream>
using namespace std;
int main()
{
	int arr[10], Num, Max, Min, size;
	float Sum = 0, average;

	cout << "Enter array size:\n";
	cin >> size;

	if (size <= 15) 
	{
		cout << "Input " << size << " integers:\n";

		for (Num = 0; Num < size; Num++)
		cin >> arr[Num];
		Max = arr[0];
		Min = arr[0];

		for (Num = 0; Num < size; Num++)
		{
			if (Min > arr[Num])
				Min = arr[Num];
		}

		cout << "The smallest integer is " << Min;

		for (Num = 0; Num < size; Num++)
		{
			if (Max < arr[Num])
				Max = arr[Num];
		}
		cout << " and the largest integer is " << Max;
		
		for (Num = 0; Num < size; Num++)
		{
			Sum += arr[Num];
			average = Sum / size;
		}
		cout << ". The total of the array is " << Sum << ". The average of the array is " << average;
	}

	else
	{
		cout << "Enter a number less than or equal to 15.";
	}

	system ("pause");
	return 0;
}