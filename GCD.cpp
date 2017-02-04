#include <iostream>
using namespace std;

int gcd(int, int);
int gcd2(int, int);

int main(void){
	cout << "test1" << endl;
	cout << gcd(48, 16) << endl;
	cout << gcd(78, 104) << endl;
	cout << gcd(368, 138) << endl;

	cout << "test2" << endl;
	cout << gcd2(48, 16) << endl;
	cout << gcd2(78, 104) << endl;
	cout << gcd2(368, 138) << endl;
	return 0;
}

int gcd(int a, int b){
	if (b == 0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}
}

int gcd2(int a, int b){
	if (a == b){
		return a;
	}
	else{
		if (a > b){
			return gcd2(a - b, b);
		}
		else{
			return gcd2(a, b - a);
		}
	}
}