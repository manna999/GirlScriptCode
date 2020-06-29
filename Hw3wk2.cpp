#include <iostream>
using namespace std;

int main () {
	int x, factorial=1;
	cout << "Enter a positive integer:" << endl;
	cin >> x;
	
	for (int i=1 ; i<=x; ++i) {
		factorial = factorial*i; 
}
cout << "Factorial = " << factorial << endl;
	return 0;

}
