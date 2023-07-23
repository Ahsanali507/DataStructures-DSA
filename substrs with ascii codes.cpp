//#include <iostream>
//#include <string>
//using namespace std;
//
//void substrsWithCodes(string s, string ans) {
//	if (s.length() == 0) {
//		cout << ans << endl;
//		return;
//	}
//	char ch = s[0];
//	int code = ch;
//	string ros = s.substr(1);
//	substrsWithCodes(ros, ans);
//	substrsWithCodes(ros, ans+ch);
//	substrsWithCodes(ros,ans+to_string(code));
//}
//
//int main() {
//	string str = "AB";
//	string empty = "";
//	substrsWithCodes(str, empty);
//
//	return 0;
//}