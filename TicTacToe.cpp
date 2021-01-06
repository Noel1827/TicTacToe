#include <iostream>

using namespace std;
char matrix[3][3] ={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
int n;
void draw(){
    system("cls");
    cout << "NOel Tic Tac Toe" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Input()
{
    int a;
    cout << "Press the number of the field: ";
    cin >> a;

if(a == 1){
    if(matrix[0][0] == '1'){
        matrix[0][0] = player;
    }else {cout << "Field occupied" <<endl;
    Input();}}
    if(a == 2){
        if(matrix[0][1] == '2'){
            matrix[0][1] = player;
        }else {cout << "Field occupied"<<endl;
    Input();}}
    if(a==3){
        if(matrix[0][2] == '3'){
            matrix[0][2] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}
          if(a==4){
        if(matrix[1][0] == '4'){
            matrix[1][0] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}
          if(a==5){
        if(matrix[1][1] == '5'){
            matrix[1][1] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}
          if(a==6){
        if(matrix[1][2] == '6'){
            matrix[1][2] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}
          if(a==7){
        if(matrix[2][0] == '7'){
            matrix[2][0] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}
          if(a==8){
        if(matrix[2][1] == '8'){
            matrix[2][1] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}
          if(a==9){
        if(matrix[2][2] == '9'){
            matrix[2][2] = player;
        }else{cout <<"Field occupied" << endl;
        Input();}}

}
void TogglePlayer(){
    if(player == 'X'){
        player = 'O';
    }else player = 'X';
}

char Win()
{

    // FIRST PLAYER
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') // derecha arriba
        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') // abajo del primero
        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') // diagonal hacia la derecha
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') // abajo del medio
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') // ultimo hacia abajo
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') // derecha del medio
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') // derecha del ultimo
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X') // diagonal hacie la izquierda
        return 'X';

    // SECOND
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O') // derecha arriba
        return 'O';
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') // abajo del primero
        return 'O';
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') // diagonal hacia la derecha
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') // abajo del medio
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') // ultimo hacia abajo
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O') // derecha del medio
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O') // derecha del ultimo
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O') // diagonal hacie la izquierda
        return 'O';

    return '/';

    // 00 01 02
    // 10 11 12
    // 20 21 22
}
void reset(){
  matrix[0][0] = '1';
    matrix[0][1] = '2';
    matrix[0][2] = '3';
    matrix[1][0] = '4';
    matrix[1][1] = '5';
    matrix[1][2] = '6';
    matrix[2][0] = '7';
    matrix[2][1] = '8';
    matrix[2][2] = '9';
}

 bool Replay()
{
  
    // char replay;
    // cout << "Tie"<< endl;
    // cout << "Want to play again?? Y/N" << endl;
    // cin>> replay;
    // if(replay == 'Y'){
    // reset();
    // draw();
    // return true;
    // }else if(replay == 'N'){
    //      cout << "ByeBye" << endl;
    //     return false;
    // }
    char replay;
    bool replayy;
        cout << "Tie" << endl;
        do
        {

            cout << "Want to play again?? Y/N" << endl;
            cin >> replay;
            replay = toupper(replay);
            if (replay == 'Y')
            {
                reset();
                draw();
                replayy = true;
                break;
            }
            else if (replay == 'N')
            {
                cout << "Bye Bye" << endl;
                replayy = false;
                break;
            }
            else
            {
                cout << "YOU NEED TO TYPE Y OR N ROACHHHH!!!" << endl;
            }
        } while (true);
        return replayy;
}
int main()
{
    n = 0;
    int i=0;
    draw();
    while(1){
        i++;
        Input();
        draw();
        if(Win() == 'X'){
            cout << "X wins!";
            break;
        }else if(Win() == 'O'){
            cout << "O Wins!";
            break;
        }
        TogglePlayer();
        if(i == 9 ){
            i=0;
            if(Replay() == false)
            break;
        }
    }
    return 0;
}