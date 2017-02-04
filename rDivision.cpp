#include <iostream>

typedef struct RD{
	int modulo;
	int quotient;
}RD;

using namespace std;
int main(void){
	RD rd;
	cout << "½Ö : " << rDivision(7, 3, rd).modulo << ", " << rDivision(7,3).quotient;
	return 0;
}
RD rDivision(int a, int b, RD real){
	if (a < b){
		return a;
	}
	else{
		return modulo(a - b, b);
	}
}


// ¸ð¹ü´ä¾È
int quot(int a, int b){
	if (a < b){
		return 0;
	}
	else{
		return quot(a - b, b) + 1;
	}
}