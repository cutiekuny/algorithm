#include <iostream>

using namespace std;
int product(int, int);
int modulo(int, int);
int quotient(int, int, int);
int main(void){
	
	
	cout << product(3, 4) << endl;
	cout << modulo(10, 4) << endl;
	cout << quotient(20, 3, 0) << endl;

	return 0;

}

int product(int a, int b){
	if (a == 1){
		return a*b;
	}
	else{
		return product(a-1,b) + b;
	}
}

int modulo(int a, int b){
	if (a < b){
		return a;
	}
	else{
		return modulo(a-b, b);
	}
}

int quotient(int a, int b, int cnt){
	if (a < b){
		return cnt;
	}
	else{
		cnt++;
		return quotient(a-b, b, cnt);
	}
}

// 모범답안
int quot(int a, int b){
	if (a < b){
		return 0;
	}
	else{
		return quot(a - b, b) + 1;
	}
}