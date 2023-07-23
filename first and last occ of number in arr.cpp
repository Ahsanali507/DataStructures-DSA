//#include <iostream>
//using namespace std;
//
//int firstocc(int arr[], int n, int i, int key) {
//	if (i == n) {
//		return -1;
//	}
//	if (arr[i] == key) {
//		return i;
//	}
//	return firstocc(arr, n, i + 1, key);
//}
//int lastocc(int arr[], int n, int i, int key) {
//	if (i == n) {
//		return -1;
//	}
//	int restArray = lastocc(arr, n, i + 1, key);
//	if (restArray != -1) {
//		return restArray;
//	}
//	if (arr[i] == key) {
//		return i;
//	}
//	return -1;
//}
//
//int main() {
//	const int size = 6;
//	int arr[size] = { 1,2,3,4,2,5 };
//	int i = 0;
//	int key = 2;
//	cout <<"The first occurence of key 2 is at index: " << firstocc(arr, size, i, key) << endl;
//	cout <<"The last occurence of key 2 is at index: " << lastocc(arr, size, i, key) << endl;
//
//	return 0;
//}