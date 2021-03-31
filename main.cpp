#include <iostream>
#include <vector>

using namespace std;

bool get_empty(char vec[3][3], int position)
{
    bool empty = true;
    if(position==1)
    {
        if(vec[0][0] != '*')
        {
            empty = false;
        }
    }
    else if(position==2)
    {
        if(vec[0][1] != '*')
        {
            empty = false;
        }
    }
    else if(position==3)
    {
        if(vec[0][2] != '*')
        {
            empty = false;
        }
    }
    else if(position==4)
    {
        if(vec[1][0] != '*')
        {
            empty = false;
        }
    }
    else if(position==5)
    {
        if(vec[1][1] != '*')
        {
            empty = false;
        }
    }
    else if(position==6)
    {
        if(vec[1][2] != '*')
        {
            empty = false;
        }
    }
    else if(position==7)
    {
        if(vec[2][0] != '*')
        {
            empty = false;
        }
    }
    else if(position==8)
    {
        if(vec[2][1] != '*')
        {
            empty = false;
        }
    }
    else if(position==9)
    {
        if(vec[2][2] != '*')
        {
            empty = false;
        }
    }
    else
    {
        cout << "Invalid Entry !" << endl;
    }
    return empty;
}

void insert_TICTAC(char gameboard[3][3],int position,char xo)
{
    if(position==1)
    {
        gameboard[0][0] = xo;
    }
    else if(position==2)
    {
        gameboard[0][1] = xo;
    }
    else if(position==3)
    {
        gameboard[0][2] = xo;
    }
    else if(position==4)
    {
        gameboard[1][0] = xo;
    }
    else if(position==5)
    {
        gameboard[1][1] = xo;
    }
    else if(position==6)
    {
        gameboard[1][2] = xo;
    }
    else if(position==7)
    {
        gameboard[2][0] = xo;
    }
    else if(position==8)
    {
        gameboard[2][1] = xo;
    }
    else if(position==9)
    {
        gameboard[2][2] = xo;
    }
    else
    {
        cout << "Invalid entry !" << endl;
    }
}

bool p1_check_win(char gameboard[3][3] )
{
    bool p1_won = false;
    //winning horizontally
    if( (gameboard[0][0]=='X') && (gameboard[0][0] == gameboard[0][1]) && (gameboard[0][1]== gameboard[0][2]) )
    {p1_won = true;}
    else if( (gameboard[1][0]=='X') && (gameboard[1][0] == gameboard[1][1]) && (gameboard[1][1]== gameboard[1][2]) )
    {p1_won = true;}
    else if( (gameboard[2][0]=='X') && (gameboard[2][0] == gameboard[2][1]) && (gameboard[0][1]== gameboard[2][2]) )
    {p1_won = true;}
    //winning vertically
    else if( (gameboard[0][0]=='X') && (gameboard[0][0] == gameboard[1][0]) && (gameboard[1][0]== gameboard[2][0]) )
    {p1_won = true;}
    else if( (gameboard[0][1]=='X') && (gameboard[0][1] == gameboard[1][1]) && (gameboard[1][1]== gameboard[2][1]) )
    {p1_won = true;}
    else if( (gameboard[0][2]=='X') && (gameboard[0][2] == gameboard[1][2]) && (gameboard[1][2]== gameboard[2][2]) )
    {p1_won = true;}
    //diagnally winning
    else if( (gameboard[0][0]=='X') && (gameboard[0][0] == gameboard[1][1]) && (gameboard[1][1]== gameboard[2][2]) )
    {p1_won = true;}
    else if( (gameboard[2][0]=='X') && (gameboard[2][0] == gameboard[1][1]) && (gameboard[1][1]== gameboard[0][2]) )
    {p1_won = true;}

    return p1_won;
}

bool p2_check_win(char gameboard[3][3] )
{
    bool p2_won = false;
    //winning horizontally
    if( (gameboard[0][0]=='0') && (gameboard[0][0] == gameboard[0][1]) && (gameboard[0][1]== gameboard[0][2]) )
    {p2_won = true;}
    else if( (gameboard[1][0]=='0') && (gameboard[1][0] == gameboard[1][1]) && (gameboard[1][1]== gameboard[1][2]) )
    {p2_won = true;}
    else if( (gameboard[2][0]=='0') && (gameboard[2][0] == gameboard[2][1]) && (gameboard[0][1]== gameboard[2][2]) )
    {p2_won = true;}
    //winning vertically
    else if( (gameboard[0][0]=='0') && (gameboard[0][0] == gameboard[1][0]) && (gameboard[1][0]== gameboard[2][0]) )
    {p2_won = true;}
    else if( (gameboard[0][1]=='0') && (gameboard[0][1] == gameboard[1][1]) && (gameboard[1][1]== gameboard[2][1]) )
    {p2_won = true;}
    else if( (gameboard[0][2]=='0') && (gameboard[0][2] == gameboard[1][2]) && (gameboard[1][2]== gameboard[2][2]) )
    {p2_won = true;}
    //diagnally winning
    else if( (gameboard[0][0]=='0') && (gameboard[0][0] == gameboard[1][1]) && (gameboard[1][1]== gameboard[2][2]) )
    {p2_won = true;}
    else if( (gameboard[2][0]=='0') && (gameboard[2][0] == gameboard[1][1]) && (gameboard[1][1]== gameboard[0][2]) )
    {p2_won = true;}

    return p2_won;
}

void display_game_board(char game_board[3][3])
{
    cout << "_____________" << endl;
    cout << "| " << game_board[0][0] << " | " << game_board[0][1] << " | " << game_board[0][2] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << game_board[1][0] << " | " << game_board[1][1] << " | " << game_board[1][2] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << game_board[2][0] << " | " << game_board[2][1] << " | " << game_board[2][2] << " |" << endl;
    cout << "-------------" << endl;
}

int main()
{
    char game_board[3][3] = {{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    bool p1wins = false;
    bool p2wins = false;
    bool empty;
    bool empty2;
    int player1; // is X
    int player2; // is 0
    vector<int> pos_taken;
    
    while( pos_taken.size() < 9)
    {
        display_game_board(game_board);
        cout << "Enter position P1(0-9): ";
        cin >> player1;
        while((player1<0) || (9<player1))
        {
            cout << "-------------------------------------" << endl;
            cout << "Invalid Entry ! Enter Position(0-9): ";
            cin >> player1;
            cout << "-------------------------------------" << endl;
        }
        empty = get_empty(game_board, player1);
        cout << empty << endl;
        if(empty==true)
        {
            pos_taken.push_back(player1);
            insert_TICTAC(game_board, player1, 'X');
        }
        else
        {
            while(empty==false)
            {
                cout << "-------------------" << endl;
                cout << "Position is taken !" << endl;
                cout << "New Position P1: ";
                cin >> player1;
                cout << "-------------------" << endl;
                empty = get_empty(game_board, player1);
            }
            insert_TICTAC(game_board, player1, 'X');
        }
        p1wins = p1_check_win(game_board);
        if(p1wins==true)
        {
            display_game_board(game_board);
            cout << "********************" << endl;
            cout << "P1 wins this round !" << endl;
            cout << "********************" << endl;
            break;
        }
        
        if(pos_taken.size()==9)
        {
            cout << "-----------" << endl;
            cout << "ITS A TIE !" << endl;
            cout << "-----------" << endl;
            break;
        }
        
        cout << "Enter position P2(0-9): ";
        cin >> player2;
        while((player2<0) || (9<player2))
        {
            cout << "-------------------------------------"<<endl;
            cout << "Invalid Entry ! Enter Position(0-9): ";
            cin >> player2;
            cout << "-------------------------------------" << endl;
        }
        empty2 = get_empty(game_board, player2);
        cout << empty << endl;
        if(empty2==true)
        {
            pos_taken.push_back(player2);
            insert_TICTAC(game_board, player2, '0');
        }
        else
        {
            while(empty2==false)
            {
                cout << "-------------------" << endl;
                cout << "Position is taken !" << endl;
                cout << "New Position P2: ";
                cin >> player2;
                cout << "-------------------" << endl;
                empty2 = get_empty(game_board, player2);
            }
            insert_TICTAC(game_board, player2, '0');
        }
        p2wins = p2_check_win(game_board);
        if(p2wins==true)
        {
            display_game_board(game_board);
            cout << "********************" << endl;
            cout << "P2 wins this round !" << endl;
            cout << "********************" << endl;
            break;
        }
    }
    
    return 0;
}
