//#include <iostream>
//using namespace std;
//
//string removeDupl(string s) {
//	if (s.length() == 0) {
//		return "";
//	}
//	char ch = s[0];
//	string ans = removeDupl(s.substr(1));
//
//	if (ch == ans[0]) {
//		return ans;
//	}
//	return ch + ans;
//}
//
//int main() {
//	string str = "aaaabbbccdeee";
//	cout << "After removing duplicates from string " << str << " the string is: ";
//	cout<<removeDupl(str)<<endl;
//
//	return 0;
//}