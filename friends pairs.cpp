//#include <iostream>
//using namespace std;
//
//int friendsPairs(int n) {
//	if (n == 0 || n == 1 || n == 2) {
//		return n;
//	}
//	return friendsPairs(n - 1) + friendsPairs(n - 2) * (n - 1);
//}
//
//int main() {
//	int n = 4;
//	cout << "The total no.of ways for single and pairs people are: " << friendsPairs(n);
//
//	return 0;
//}