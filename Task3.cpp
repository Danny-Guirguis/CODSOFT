#include <iostream>
#include <string>
using namespace std;

void ticTacToeGame(string &X, string &O, bool &turn);
void assignMove(string grid[5][5],bool turn);
void checkPosition(string grid[5][5], bool &turn);
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
    bool flag = true;

    ticTacToeGame(X,O,flag);

}

void ticTacToeGame(string &X, string &O , bool &turn){

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

        assignMove(grid,turn);



    }
    else{
        cout << O << ": Enter your move with O\n\n";

        for (int i = 0; i <= 4; i++) {                                     //loop for printing the grid
            for (int j = 0; j <= 4; ++j) {
                cout << grid[i][j];
            }
            cout << "\n";
        }

        int choice;
        cin >> choice;
    }
}

void checkPosition(string grid[5][5], bool &turn){
    if   ((grid[0][0] == grid[0][2] && grid[0][0] == grid[0][4]) ||
          (grid[0][0] == grid[2][0] && grid[0][0] == grid[4][0]) ||
          (grid[4][0] == grid[4][2] && grid[4][0] == grid[4][4]) ||
          (grid[0][4] == grid[2][4] && grid[0][4] == grid[4][4]) ||
          (grid[2][2] == grid[0][2] && grid[2][2] == grid[4][2]) ||   //condition for checking the current state of the game
          (grid[2][2] == grid[2][0] && grid[2][2] == grid[2][4]) ||
          (grid[2][2] == grid[4][0] && grid[2][2] == grid[0][4]) ||
          (grid[2][2] == grid[4][4] && grid[2][2] == grid[0][0])){
        if (turn){
            cout << X << " Wins";
        }
        else{
            cout << O << " Wins";
        }
    }
}

void assignMove(string grid[5][5], bool turn){

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 2:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 3:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 4:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 5:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 6:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 7:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 8:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        case 9:
            if (grid[0][0] != " 1 "){
                cout << "You can't play here, choose another move";
                return assignMove(grid,turn);
            }
            else{
                if (turn){
                    grid[0][0] == " X ";
                    break;
                }
                else{
                    grid[0][0] == " O ";
                    break;
                }
            }
        default:
            cout << "Invalid move, choose another move";
            return assignMove(grid,turn);
    }
}


