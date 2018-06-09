#include <iostream>
using namespace std;

void Swap(int *a,int *b) {
	int *t=*a;
	*a=*b;
	*b=*t;
}

int main() {
	int x,y;
	cin >> x >> y;
	Swap(&x,&y);
	cout << x << y << endl;
	return 0;
}
