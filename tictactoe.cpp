#include <iostream>
#include <stdlib.h>

using namespace std;
char space[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int choice;
int row, column;
char turn = 'x';
bool draw = false;


void displayboard() {

    //Setting up the table
    cout << "  |   | \n";
    cout << ""<<space[0][0]<<" | " << space[0][1] << " | " << space[0][2] << endl;
    cout << "__|___|__\n";
    cout << "  |   | \n";
    cout << ""<<space[1][0]<<" | " << space[1][1] << " | " << space[1][2] << endl;
    cout << "__|___|__\n";
    cout << "  |   | \n";
    cout << ""<<space[2][0]<<" | " << space[2][1] << " | " << space[2][2] << endl;
    cout << "  |   | \n";
}

void playerturn(){
    if (turn == 'x') {
        cout << "Player-1 [x] turn: " << endl;
    }
    else {
        cout << "Player-2 [o] tunr: " << endl;
    }

    cin >> choice;

    switch(choice){
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
            cout << "You cannot make that move\n";
    }

    if (turn == 'x' && space[row][column] != 'x' && space[row][column] != 'o'){
        //update the position of X if its not being occupied
        space[row][column] = 'x';
        turn = 'o';
    }else if (turn == 'o' && space[row][column] != 'x' && space[row][column] != 'o'){
        //update position of O if not occupied
        space[row][column] = 'o';
        turn = 'x';
    }else {
        cout << "Box has been already filled by the other player, make another choice\n";
        playerturn();
    }
    displayboard();
    
}

bool end(){
    //check to see who wins, loses or draw
    for (int i = 0; i < 3; i++){
        if(space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][2] == space[2][0]){
            return false;
        }
    }
if(space[0][0] == space[1][1] && space[0][0] == space[2][2] || space[0][2] == space[1][1] && space[0][2] == space[2][0])
    return false;

    //Checking the game is in continue mode or not
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(space[i][j] != 'X' && space[i][j] != 'O')
    return true;

    //Checking the if game already draw
    draw = true;
    return false;

}
int main()
{
    cout<<"tttT I C K -- T A C -- T O E -- G A M Ettt";
    cout<<"nttttFOR 2 PLAYERSnttt";
    while(end()){
        displayboard();
        playerturn();
        end();
    }
    if(turn == 'X' && draw == false){
        cout<<"nnCongratulations!Player with 'X' has won the game";
    }
    else if(turn == 'O' && draw == false){
        cout<<"nnCongratulations!Player with 'O' has won the game";
    }
    else
    cout<<"nnGAME DRAW!!!nn";
} 