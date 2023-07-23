//#include <iostream>
//using namespace std;
//
//void substrs(string s, string ans) {
//	if (s.length() == 0) {
//		cout << ans << endl;
//		return;
//	}
//	char ch = s[0];
//	string ros = s.substr(1);
//	
//	substrs(ros, ans);
//	substrs(ros, ans + ch);
//}
//
//int main() {
//	string str = "ABC";
//	string empty = "";
//	substrs(str, empty);
//
//	return 0;
//}