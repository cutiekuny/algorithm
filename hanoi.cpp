#include <iostream>
using namespace std;

void hanoi(int, char, char, char);

int main(void){
	int n = 4;
	cout << "For n = " << n << endl;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char a, char b, char c){
	if (n == 1){
		cout << "move from " << a << " to " << c << endl;
	}
	else{
		hanoi(n - 1, a, c, b);
		cout << "move from " << a << " to " << c << endl;
		hanoi(n - 1, b, a, c);
	}
	

}