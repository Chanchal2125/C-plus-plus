#include <iostream>
using namespace std;

int main() {
		int t;
		cin >> t;
		while(t--){
		int n;
		cin >> n;
		bool prime = true; 
		
		for (int i = 2; i <= n/2; ++i)
		{
			if(n%i==0) {
				prime = false;
				break;
			} 
		}
		if(n==1) prime = false;
		cout << (prime ? "yes\n" : "no\n");
}
return 0;
}
