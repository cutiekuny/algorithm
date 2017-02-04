#include <iostream>
#include <vector>

using namespace std;

typedef struct MINMAX{
	int a;
	int b;
}MINMAX;

int rAMax(int *, int, int);
MINMAX minmax(int *, int, MINMAX);

int main(void){
	// �迭
	int A[5] = {3,6,1,10,4};

	// �迭ũ��
	int n = sizeof(A) / sizeof(int) - 1;

	MINMAX mm;
	mm.a = A[0];
	mm.b = A[0];
	// �� �ʱⰪ A[0]����
	cout << "�ִ�, �ּ� : " << minmax(A, n, mm).b << ", " << minmax(A, n, mm).a << endl;
	
	return 0;
}

int rAMax(int *a, int n, int result){
	if (n < 1){
		return result;
	}
	else{
		if (result < a[n]){
			result = a[n];
		}
		return rAMax(a, n - 1, result);
	}
}

MINMAX minmax(int *a, int n, MINMAX result){
	if (n == 1){
		return result;
	}
	else{
		if (result.a > a[n]){
			result.a = a[n];
		}
		if (result.b < a[n]){
			result.b = a[n];
		}
		return minmax(a, n - 1, result);
	}
}
