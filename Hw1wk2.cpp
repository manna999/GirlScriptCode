#include <iostream>
using namespace std;

int main () {
	char x;
	cout << "Enter a character"<< endl;
	cin >> x;
	
	switch (x) {
	case 'a':
		cout << "this is a vowel" << endl ;
		break;	
	case 'e':
		cout << "this is a vowel" << endl ;
		break;
	case 'i':
		cout << "this is a vowel" << endl ;
		break;
	case 'o':
		cout << "this is a vowel" << endl ;
		break;
	case 'u':
		cout << "this is a vowel" << endl ;
		break;
	default:
	cout << "Not a vowel" << endl;
	
	}
	
	return 0;
	
	
}
