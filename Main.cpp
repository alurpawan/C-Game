#include <iostream>
using namespace std;
class game
{
	char board[3][3];

public:
	game();
	void Intro();
	void Play_game(int);
	void Display_Board();
	int AskMove(int);
	void AddMove(int,int);
	bool IsWin();

};
int Choose_Game_Type();
int main()
{
	game g;
	g.Intro();
	int player_count = Choose_Game_Type();
	g.Play_game(player_count);
	return 0;
}

int Choose_Game_Type()
{
	int player_count;
	do{
	cout<<"Enter 1 for a 1 person game, and 2 for a 2 person game : ";
	cin>>player_count;}while(player_count != 1 && player_count != 2);
	return player_count;
}

void game :: Intro()
{
	cout<<"Welcome to Tic Tac Toe.\nThe goal of the game is to get 3 X or 3 O's in one line,row or diagonal.\n";
	Display_Board();
}

void game :: Play_game(int player_count)
{
	if(player_count == 1)
	{

	}
	else
	{
		int i;
		for(i = 0;i < 9;i++)
		{
			int position = AskMove(i%2);
			AddMove(position,i%2);
			cout<<endl;
			Display_Board();
			if(IsWin())
			{
				cout<<"\nPlayer "<<(i%2)+1<<" wins\n";
				break;
			}
		}
		if(i == 9)
			cout<<"Draw Game...";
	}	
}

void game :: Display_Board()
{
	cout<<endl;
	for(int i = 0;i < 3;i++)
	{
		cout<<" ";
		for(int j = 0;j < 3;j++)
		{
			if(j == 2)
				cout<<board[i][j];
			else
				cout<<board[i][j]<<"  | ";
		}
		if(i != 2)
			cout<<"\n---------------\n";
	}
	cout<<endl;
}

int game :: AskMove(int player_num)
{
	return 1;
}

void game :: AddMove(int position, int player_num)
{

}

bool game :: IsWin()
{
	return 0;
}

game :: game()
{
	for(int i = 0;i < 3;i++)
		for(int j = 0;j < 3;j++)
			board[i][j] = ' ';

}