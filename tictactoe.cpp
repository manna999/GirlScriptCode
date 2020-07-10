#include <iostream>
using namespace std;

// 1- Game chart 
// 2- chnge the value
//3- check win
 
char square[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row, column;

void display_board(){
	system("cls");
	cout << endl;
	cout << endl;
	cout << "PLAYER - 1 [X] | PLAYER - 2 [O]";
	cout << endl;
	cout << endl;
	cout << " " << square[0][0] << " | " << square[0][1] << " | " << square[0][2] << endl;
	cout <<	"------------\n";
	cout << " " << square[1][0] << " | " << square[1][1] << " | " << square[1][2] << endl;
	cout <<	"------------\n";
	cout << " " << square[2][0] << " | " << square[2][1] << " | " << square[2][2] << endl;
	cout << endl;
	cout << endl;	
}

void game_over(){
	//hw that compares elements of a row and checks if they have the same element
		for (int i=0; i<3; i++) {
		for(int j=0; j<3; j++)
		{ 
			cout << square[i][j]<< " ";
			
		}
		cout << endl;
		
	}
	for (int i=0; i<3;i++) {
		if (square[i][0]==square[i][1] && square[i][1]==square[i][2])
		{
			cout<<"Game over" ;
			
			exit(1);
		}
	}
	cout <<endl;

	
		
	}

void player_turn(){
	int choice;
	
	if (turn == 'X')
	cout <<endl << "Player 1[X] Turn: " << endl ;
	
	if(turn == 'O')
	cout <<endl << "Player 2[O] Turn: " << endl ;
	
	cin >> choice;

	switch(choice) 
		{
			case 1: row=0; column=0; break;
			case 2: row=0; column=1; break;
			case 3: row=0; column=2; break;
			case 4: row=1; column=0; break;
			case 5: row=1; column=1; break;
			case 6: row=1; column=2; break;
			case 7: row=2; column=0; break;
			case 8: row=2; column=1; break;
			case 9: row=2; column=2; break;	
			default:
			cout << "Invalid Move";
				 
}
if (turn == 'X'&& square[row][column]!= 'X' && square[row][column]!= 'O') {
	
	square[row][column]='X';
	turn = 'O' ;
	}
	
else if (turn == 'O'&& square[row][column]!= 'X' && square[row][column]!= 'O') {
	square[row][column]='O';
	turn = 'X' ;	
}
else 
{
	cout << "This box is already filled! " << endl;
	
	game_over();
	player_turn();
}
	display_board();
	
}


	
	


int main()
{
	while(true)
	{
		display_board();
	player_turn();
	game_over();
	

	}
	
	
return 0;
}

