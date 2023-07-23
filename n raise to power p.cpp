//#include <iostream>
//using namespace std;
//
//int power(int num, int p) {
//	if (p == 0) {
//		return 1;
//	}
//	if (num == 0) {
//		return 0;
//	}
//	int prevPower = power(num,p - 1);
//	return (num * prevPower);
//}
//
//int main() {
//	int n, p;
//	cout << "enter number: ";
//	cin >> n;
//	cout << "enter power: ";
//	cin >> p;
//	cout <<n<<" raise to the power "<< p << " is " << power(n, p) << endl;
//
//	return 0;
//}