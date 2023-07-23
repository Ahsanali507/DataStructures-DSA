//#include <iostream>
//using namespace std;
//
//void towerOfHanoi(int n, char s, char d, char h) {
//	if (n == 0) {
//		return;
//	}
//	towerOfHanoi(n-1, s, h, d);
//	cout << "Move from " << s << "To " << d << endl;
//	towerOfHanoi(n - 1, h, d, s);
//}
//
//int main() {
//	int n = 3;
//	char src = 'A';
//	char dest = 'B';
//	char helper = 'C';
//	towerOfHanoi(n, src, dest, helper);
//
//	return 0;
//}