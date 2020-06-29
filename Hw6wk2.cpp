#include <iostream>
using namespace std;

int main () {
	
	int x[3][3], i, j;

	
	for (int i = 0; i < 3; ++i) {

		for (int j = 0; j < 3; ++j){
			if(x[i][j] == x[i][j - 1])
			return true;
			else 
			return false;
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
