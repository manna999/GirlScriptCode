#include <iostream>
using namespace std;

int main () {

	int x, y, r, i=0;

	cout << "Enter a number: " << endl;
	cin >> x;
	y = x;
	
	
	while (x > 0)
	{
		r = x % 10;
		x = x/10;
		i = i + r;
	}
		cout << "Sum is" << i;	

	
	
	
	
	
	
	
	
	
	return 0;
}
