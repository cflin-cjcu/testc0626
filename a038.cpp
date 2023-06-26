#include<iostream>
using namespace std;
int main() {
	
	string a;
	
	while(cin >> a) {
		int flag=0;
		for(int i=a.length()-1;i>=0;i--) {
			if(a[i]=='0' && flag ==0) {
			   continue;
			} else {
				cout << a[i];
				flag = 1;	
			} 
		}
		if(a.length()== 1) {
			cout << '0';
		}
	}
	
	return 0;
}