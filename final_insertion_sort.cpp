//#include<iostream>
//using namespace std;
//
//void insertionSort(int arr[], int n) {
//	for (int i = 1; i < n; ++i) {
//		int current = arr[i];
//		int j = i - 1;
//
//		// Move elements greater than current to one position ahead of their current position
//		while (j >= 0 && arr[j] > current) {
//			arr[j + 1] = arr[j];
//			--j;
//		}
//
//		// Place the current at its correct position
//		arr[j + 1] = current;
//	}
//}
//
//int main() {
//	int arr[] = { 10, 3, 44, 31, 9, 20, 45, 5, 56, 90 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//
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
//	insertionSort(arr, size);
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