//#include<iostream>
//using namespace std;
//
//int main() {
//	int arr[] = { 10, 3, 44, 31, 9, 20, 45, 5, 56, 90 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i, j, min, temp;
//
//
//	cout << "Printing Unsorted Array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//	for (i = 0; i < size - 1; i++)
//	{
//		for (j = 0; j < (size - i - 1) ; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//
//
//	cout << "Printing sorted Array" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}