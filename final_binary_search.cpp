//#include<iostream>
//using namespace std;
//
//
//const int ARRAY_SIZE = 12;
//
//bool binarySearch(int* p, int val) {
//    int low = 0;
//    int high = ARRAY_SIZE - 1;
//    int mid = 0;
//
//    while (low <= high) {
//        mid = (low + high) / 2;
//
//        if (p[mid] == val) {
//            cout << "Value found at index " << mid << endl;
//            return true;
//        }
//
//        if (p[mid] < val) {
//            // Value is in the right half
//            low = mid + 1;
//        }
//        else {
//            // Value is in the left half
//            high = mid - 1;
//        }
//    }
//
//    // If the loop completes without finding the value, it's not in the array
//    cout << "Value not found in the array." << endl;
//    return false;
//}
//int main() {
//
//	int nums[ARRAY_SIZE] = {1, 10, 17, 19, 22, 27, 29, 45, 65, 76, 78, 89};
//
//    int target;
//
//    cout << "Enter the target element: ";
//    cin >> target;
//
//    binarySearch(&nums[0], target);
//
//  
//   
//	return 0;
//}