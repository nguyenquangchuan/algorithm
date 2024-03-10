#include <iostream>
using namespace std;

void function_Enter(int n, int arr[100])
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]:";
		cin >> arr[i];
	}
}

void function_Display(int n, int arr[100])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void insertion_Sort(int n, int arr[100])
{
	for (int i = 1; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j] <= arr[j - 1])
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}
int main()
{
	int n;
	int arr[100];
	cout << "enter n:";
	cin >> n;
	function_Enter(n, arr);
	cout << "day so ban dau la:";
	function_Display(n, arr);
	cout << endl;
	insertion_Sort(n, arr);
	cout << "day so sau khi duoc sap xep lai la:";
	function_Display(n, arr);
	return 0; 
}

