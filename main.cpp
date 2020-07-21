#include "Classes/Managers/GameManager.h"
int main(){
    GameManager gm;
    gm.start();

    return 0;
}

//Main function :D.

/*
int main() {
	//fastInput
	srand(time(0));
	char PlayAgain = 'Y';
	int x;
	GameBoardManager gbManager;
	VeiGoBot veigo;
	veigo.setTurn(2);
	//loop to play a new game.
	while (PlayAgain == 'y' || PlayAgain == 'Y') {
		string name;
		cout << "Enter player 1 name , please : ";
		getline(cin, name);
		Players player1(name);
		player1.setTurn(1);
		*/
/*cout << "Enter player 2 name , please : ";
		getline(cin, name);
		Players player2(name);
		player2.setTurn(2);*//*

		//Call GameBoard to display it;
		gbManager.Display_GameBoard_Console();
		gbManager.Display_AvailablePositions();
		//loop that makes the players repeat their movements till one of them wins.
		int NumberOfMovements = 64;
		while (NumberOfMovements > 0 && player1.isWinner() == false && veigo.isWinner() == false) {
			//if conditions to determine which player got to play.
			if (NumberOfMovements % 2 == 0) {
				loop1:
				gbManager.Display_AvailablePositions();
				cout << player1.getName() << " , please enter (x) position : ";
				cin >> x;
				if (gbManager.AvailablePositionsCheck(x) == -1) {
					cout << "Invalid move , please try again." << endl;
					goto loop1;
				}
				else {
					gbManager.insertPieceAt(player1.getTurn(), x);
					NumberOfMovements--;
				}
			}
			*/
/*else {
				loop2:
				cout << player2.getName() << " , please enter (x) position : ";
				cin >> x;
				if (gbManager.AvailablePositionsCheck(x) == -1) {
					cout << "Invalid move , please try again." << endl;
					goto loop2;
				}
				else {
					gbManager.insertPieceAt(2, x);
					NumberOfMovements--;
				}
			}*//*

			else
			{
				veigo.veigoPlay(gbManager);
				NumberOfMovements--;

			}
			//Call GameBoard to display it;
			gbManager.Display_GameBoard_Console();
			//Check the winner.
			if(gbManager.findWinner() == 1)
				player1.setWinner(true);
			else if(gbManager.findWinner() == 2)
				veigo.setWinner(true);
		}
		//Determine the winner.
		cout << endl;
		if (player1.isWinner()) cout << "Congratulations " << player1.getName() << " wins." << endl;
		else if (veigo.isWinner()) cout << "Congratulations " << veigo.getName() << " wins."
				<< endl;
		else cout << "Amazing a Tie !" << endl;
		player1.setWinner(false);
		veigo.setWinner(false);
		//Check if the player wants to play again.
		cout << endl;
		cout << "Want to play again? (y/n) : ";
		cin >> PlayAgain;
	}
	return 0;
}
*/
