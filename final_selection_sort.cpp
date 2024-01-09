//#include<iostream>
//using namespace std;
//
//
//int main() {
//	int arr[] = {10, 3, 44, 31, 9, 20, 45, 5, 56, 90};
//
//	int i, j, min, temp;
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Printing Unsorted Array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//	for (i = 0; i < size -1; i++)
//	{
//		min = i;
//		for (j = i+1; j < size; j++)
//		{
//			if (arr[j] < arr[min]) { min = j; }
//		}
//
//		if (min != j) {
//			temp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//
//	}
//
//
//	cout << "Printing sorted Array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}