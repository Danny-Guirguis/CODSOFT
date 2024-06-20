#include <iostream>
#include <string>
using namespace std;

void ticTacToeGame(string &X, string &O, bool &turn, bool &firstToPlay);
void assignMove(string (&grid)[5][5],bool turn,string &X, string &O, bool &firstToPlay);
void checkPosition(string (&grid)[5][5], bool turn ,string &X,string &O,bool &firstToPlay);
void playAgain(string &X, string &O , bool &turn, bool &firstToPlay);

/*for(int i = 0; i <= 4 ; i++){                                     //loop for printing the grid
        for (int j = 0; j <= 4; ++j) {
            cout << grid[i][j];
        }
        cout << "\n";
    }*/

/*if   ((grid[0][0] == grid[0][2] && grid[0][0] == grid[0][4]) ||
        (grid[0][0] == grid[2][0] && grid[0][0] == grid[4][0]) ||
        (grid[4][0] == grid[4][2] && grid[4][0] == grid[4][4]) ||
        (grid[0][4] == grid[2][4] && grid[0][4] == grid[4][4]) ||
        (grid[2][2] == grid[0][2] && grid[2][2] == grid[4][2]) ||   //condition for checking the current state of the game
        (grid[2][2] == grid[2][0] && grid[2][2] == grid[2][4]) ||
        (grid[2][2] == grid[4][0] && grid[2][2] == grid[0][4]) ||
        (grid[2][2] == grid[4][4] && grid[2][2] == grid[0][0]))*/

//alternate between games with a flag, if the flag is 1 X starts and changes to 0 to make O play

int main(){

    string X = "Player 1";
    string O = "Player 2";
    bool firstToPlay = true;
    bool turn = true;

    ticTacToeGame(X,O,turn,firstToPlay);
}

void ticTacToeGame(string &X, string &O , bool &turn, bool &firstToPlay){

    string grid[5][5]{{" 1 ","|"," 2 ","|"," 3 "},
                      {"---","|","---","|","---"},
                      {" 4 ","|"," 5 ","|"," 6 "},
                      {"---","|","---","|","---"},
                      {" 7 ","|"," 8 ","|"," 9 "}};

    if (turn) {
        cout << X << ": Enter your move with X\n\n";

        for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
            for (int j = 0; j <= 4; ++j) {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    else{
        cout << O << ": Enter your move with O\n\n";

        for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
            for (int j = 0; j <= 4; ++j) {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    assignMove(grid,turn,X,O,firstToPlay);
}

void checkPosition(string (&grid)[5][5], bool turn, string &X,string &O,bool &firstToPlay){
    if   ((grid[0][0] == grid[0][2] && grid[0][2] == grid[0][4]) ||
          (grid[0][0] == grid[2][0] && grid[2][0] == grid[4][0]) ||
          (grid[4][0] == grid[4][2] && grid[4][2] == grid[4][4]) ||
          (grid[0][4] == grid[2][4] && grid[2][4] == grid[4][4]) ||
          (grid[2][2] == grid[0][2] && grid[0][2] == grid[4][2]) ||   //condition for checking the current state of the game
          (grid[2][2] == grid[2][0] && grid[2][0] == grid[2][4]) ||
          (grid[2][2] == grid[4][0] && grid[4][0] == grid[0][4]) ||
          (grid[2][2] == grid[4][4] && grid[4][4] == grid[0][0])){
        if (turn){
            for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                for (int j = 0; j <= 4; ++j) {
                    cout << grid[i][j];
                }
                cout << "\n";
            }
            cout << X << " Wins";
            playAgain(X,O,turn,firstToPlay);
        }
        else{
            for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                for (int j = 0; j <= 4; ++j) {
                    cout << grid[i][j];
                }
                cout << "\n";
            }
            cout << O << " Wins";
            playAgain(X,O,turn,firstToPlay);
        }
    }
    else if (grid[0][0] != " 1 " && grid[0][2] != " 2 "  && grid[0][4] != " 3 " &&
             grid[2][0] != " 4 " && grid[2][2] != " 5 "  && grid[2][4] != " 6 " &&
             grid[4][0] != " 7 " && grid[2][2] != " 8 "  && grid[2][4] != " 9 "){
        for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
            for (int j = 0; j <= 4; ++j) {
                cout << grid[i][j];
            }
            cout << "\n";
        }
        cout << "The game is a draw";
        playAgain(X,O,turn,firstToPlay);
    }
}

void assignMove(string (&grid)[5][5], bool turn, string &X, string &O, bool &firstToPlay){

    string c;
    cin >> c;

    int choice = stol(c);

    switch (choice) {
        case 1:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[0][0] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                }
                else{
                    grid[0][0] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                }
                turn = !turn;
                return assignMove(grid,turn,X,O,firstToPlay);
            }
        case 2:
            if (grid[0][2] != " 2 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[0][2] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[0][2] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 3:
            if (grid[0][4] != " 3 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[0][4] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[0][4] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 4:
            if (grid[2][0] != " 4 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[2][0] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[2][0] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 5:
            if (grid[2][2] != " 5 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[2][2] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[2][2] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 6:
            if (grid[2][4] != " 6 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[2][4] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[2][4] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 7:
            if (grid[4][0] != " 7 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[4][0] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[4][0] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 8:
            if (grid[4][2] != " 8 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[4][2] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[4][2] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        case 9:
            if (grid[4][4] != " 9 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn,X,O,firstToPlay);
            }
            else{
                if (turn){
                    grid[4][4] = " X ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
                else{
                    grid[4][4] = " O ";
                    checkPosition(grid,turn,X,O,firstToPlay);
                    for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
                        for (int j = 0; j <= 4; ++j) {
                            cout << grid[i][j];
                        }
                        cout << "\n";
                    }
                    turn = !turn;
                    return assignMove(grid,turn,X,O,firstToPlay);
                }
            }
        default:
            cout << "Invalid move, choose another move\n";
            return assignMove(grid,turn,X,O,firstToPlay);
    }
}

void playAgain(string &X, string &O , bool &turn, bool &firstToPlay){
    cout << "\nDo you want to play again?\n1 = YES\n2 = NO\n";
    int c;
    cin >> c;
    if(c == 1){
        firstToPlay = !firstToPlay;
        turn = firstToPlay;
        return ticTacToeGame(X,O,turn,firstToPlay);
    }
    else if (c == 2){
        terminate();
    }
    else{
        cout << "\nInvalid choice\n";
        return playAgain(X,O,turn,firstToPlay);
    }
}
