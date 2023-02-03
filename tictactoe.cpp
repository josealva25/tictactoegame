#include <iostream>

using namespace std;
int space[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int row, column;
char intput = 'x';


void functionOne() {
    
    //Getting the players names
    string player1 = "";
    string player2 = "";
    cout << "Enter name of player 1: \n";
    getline(cin, player1);
    cout << "Enter name of player 2: \n";
    getline(cin, player2);
    cout << player1 << " goes first \n";
    cout << player2 << " goes second \n";

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

void functionTwo(){
    
}