//#include <iostream>
//using namespace std;
//
//bool sorted(int arr[], int n) {
//	if (n == 1) {
//		return true;
//	}
//	bool restarray = sorted(arr + 1, n - 1);
//	if (arr[0] < arr[1] && restarray) {
//		return true;
//	}
//}
//
//int main() {
//	const int size = 7;
//	int arr[size];
//	for (int i = 0;i < size;i++) {
//		cin >> arr[i];
//	}
//
//	if (sorted(arr,size) == true) {
//		cout << "The array is sorted" << endl;
//	}
//	else {
//		cout << "The array is not sorted" << endl;
//	}
//
//	return 0;
//}