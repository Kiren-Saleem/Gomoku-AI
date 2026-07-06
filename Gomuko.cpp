#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

void getRowColbyLeftClick(int& rpos, int& cpos) {
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    DWORD Events;
    INPUT_RECORD InputRecord;
    SetConsoleMode(hInput, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    do {
        ReadConsoleInput(hInput, &InputRecord, 1, &Events);
        if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED) {
            cpos = InputRecord.Event.MouseEvent.dwMousePosition.X;
            rpos = InputRecord.Event.MouseEvent.dwMousePosition.Y;
            break;
        }
    } while (true);
}

void gotoRowCol(int rpos, int cpos) {
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = cpos;
    scrn.Y = rpos;
    SetConsoleCursorPosition(hOuput, scrn);
}
void color(int k) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);
}

void displayGomuku()
{
    cout << endl << endl << endl;
    color(6);
    gotoRowCol(30, 35);
    cout << "   _____  " << "   ____  " << "  __  __  " << "  _   _  " << "  __  __  " << "  _   _  " << endl;
    gotoRowCol(31, 35);
    cout << "  / ____| " << "  / __ \\ " << " |  \\/  | " << " | | | | " << " |  |/  / " << " | | | | " << endl;
    gotoRowCol(32, 35);
    cout << " | |  __  " << " | |  | |" << " | |\\/| | " << " | | | | " << " | ' / /  " << " | | | | " << endl;
    gotoRowCol(33, 35);
    cout << " | | |_ | " << " | |  | |" << " | |  | | " << " | |_| | " << " |  < <   " << " | |_| | " << endl;
    gotoRowCol(34, 35);
    cout << " | |__| | " << " | |__| |" << " | |  | | " << " | |_| | " << " | . \\ \\  " << " | |_| | " << endl;
    gotoRowCol(35, 35);
    cout << "  \\_____| " << "  \\____/ " << " |_|  |_| " << "  \\___/  " << " |_|\\_\\_\\ " << "  \\___/  " << endl;
    cout << endl << endl;
    color(6);
    Sleep(2000);
    system("cls");
}
void design2()
{
    cout << endl << endl << endl;
    color(4);


    gotoRowCol(20, 38);
    cout << "  _    _  " << "  _   _  " << "  __  __  " << "  ______  " << "  _   _  " << endl;
    gotoRowCol(21, 38);
    cout << " | |  | | " << " | | | | " << " |  \\/  | " << " | |  | | " << " | \\ | | " << endl;
    gotoRowCol(22, 38);
    cout << " | |__| | " << " | | | | " << " | \\  / | " << " | |  | | " << " |  \\| |" << endl;
    gotoRowCol(23, 38);
    cout << " |  __  | " << " | | | | " << " | |\\/| | " << " | |--| | " << " | | \\ | " << endl;
    gotoRowCol(24, 38);
    cout << " | |  | | " << " | | | | " << " | |  | | " << " | |  | | " << " | | | | " << endl;
    gotoRowCol(25, 38);
    cout << " |_|  |_| " << " |_____| " << " |_|  |_| " << " |_|  |_| " << " |_| |_| " << endl;

    cout << endl << endl << endl;
    color(3);
    Sleep(500);

    gotoRowCol(30, 50);
    cout << " __      __   " << " _____   " << endl;
    gotoRowCol(31, 50);
    cout << " \\ \\    / /  " << " / ____|  " << endl;
    gotoRowCol(32, 50);
    cout << "  \\ \\  / /  " << " | (___   " << endl;
    gotoRowCol(33, 50);
    cout << "   \\ \\/ /  " << "  \\___ \\  " << endl;
    gotoRowCol(34, 50);
    cout << "    \\  /    " << " _____)|     " << endl;
    gotoRowCol(35, 50);
    cout << "     \\/    " << " |_____/     " << endl;

    cout << endl << endl << endl;
    color(5);
    Sleep(500);

    cout << endl << endl << endl;
    color(5);
    Sleep(500);

    gotoRowCol(40, 25);
    cout << "   ____   " << "  ____   " << "  __  __  " << "  _____   " << "  _   _   " << "_______  " << " ______  " << "  _____   " << endl;
    gotoRowCol(41, 25);
    cout << "  / ___|  " << " | __ |   " << "|  \\/  | " << " |  __ \\  " << " | | | |  " << "  | |   " << " |  ____| " << " |  __ \\  " << endl;
    gotoRowCol(42, 25);
    cout << " | |      " << " ||  || " << "  | \\  / | " << " | |__) | " << " | | | |  " << "  | |  " << "  | |__    " << " | |__)| " << endl;
    gotoRowCol(43, 25);
    cout << " | |      " << " ||  || " << "  | |\\/| | " << " |  ___/  " << " | | | |  " << "  | |   " << " |  __|   " << " |  ___/  " << endl;
    gotoRowCol(44, 25);
    cout << " | |____  " << " | -- |  " << " | |  | | " << " | |      " << " | | | |  " << "  | |   " << " | |____  " << " | |   \\  " << endl;
    gotoRowCol(45, 25);
    cout << "  \\_____| " << " |____|  " << " |_|  |_| " << " |_|      " << " |_____|  " << "  |_|   " << " |______| " << " |_|    \\ " << endl;

    cout << endl << endl;
    color(6);
    Sleep(1000);

}

void timer()
{
    cout << endl << endl;
    Sleep(1000);
    system("cls");
    color(6);
    cout << endl << "\t\t\t\t\t\tGAME STARTING IN" << endl;
    cout << "\t\t\t\t\t\t\t" << "3\r";
    color(2);
    Sleep(1000);
    cout << "\t\t\t\t\t\t\t" << "2\r";
    color(3);
    Sleep(1000);
    cout << "\t\t\t\t\t\t\t" << "1\r";
    color(4);
    Sleep(1000);
    cout << "\t\t\t\t\t\t\t" << "0\r";
    Sleep(1000);
    system("cls");


}

int instructions()
{
    int delay = 2000;
    color(7);

    cout << "Here are the Rules for Gomoku: " << endl;
    cout << "                                                                                      Press 's' to SKIP " << endl;

    if (_kbhit() && _getch() == 's') return 0;

    Sleep(1000);
    cout << " 1. The goal of the game is to get five of your marks (X or O or any symbol u want) in a row, either horizontally, vertically, or diagonally.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 2. The game is usually played on a 15x15 grid.U can select the dimension from 5 to 20\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 3. Players take turns to place their marks (X or O) on the grid.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 4. The game is in between Humanan and Computer.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 5. To place your mark, choose an empty spot on the grid.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 6. Player cannot place their marks on a spot that is already occupied.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 7. The player who gets five marks in a row (horizontal, vertical, or diagonal) wins.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 8. If the entire grid is filled and no player has won, the game ends in a draw.\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    cout << " 9. Pay attention to the grid and plan your moves strategically!\n" << endl;
    if (_kbhit() && _getch() == 's')
    {
        system("cls");
        return 0;
    }
    Sleep(delay);

    color(6);
    cout << "  Enjoy playing Gomoku! Good Luck!" << endl;
    Sleep(delay);

    system("cls");
    system("pause");
    return 0;
}
void displayLeaderboard(string* NS, char* Psym, int* whowins, int NOPs, int rounds)
{

    for (int i = 0; i < NOPs - 1; i++) {
        for (int j = i + 1; j < NOPs; j++) {
            if (whowins[i] < whowins[j]) {

                swap(whowins[i], whowins[j]);

                swap(NS[i], NS[j]);

                swap(Psym[i], Psym[j]);
            }
        }
    }


    system("cls");
    cout << "Leaderboard after Round " << rounds << ":\n";
    for (int i = 0; i < NOPs; i++) {
        cout << "Rank " << (i + 1) << ": " << NS[i] << " (" << Psym[i] << ") - Wins: " << whowins[i] << endl;
    }
    Sleep(1000);
}
void init(int& dim, int& WC, int& NOPs, char**& B, string*& NS, char*& Psym, int& turn)
{
    color(3);
    do {
        cout << "Enter board dimension (5 to 20): ";
        cin >> dim;
    } while (dim < 5 || dim > 20);

    WC = 5;
    NOPs = 2;

    system("cls");
    color(15);
    B = new char* [dim];
    for (int i = 0; i < dim; i++)
    {
        B[i] = new char[dim];
    }
    NS = new string[NOPs];
    Psym = new char[NOPs];

    for (int ri = 0; ri < dim; ri++)
    {
        for (int ci = 0; ci < dim; ci++)
        {
            B[ri][ci] = '-';
        }
    }
    for (int i = 0; i < NOPs; i++)
    {
        if (i == 0)
        {
            cout << "Enter Player " << i + 1 << " name: ";
            cin >> NS[i];
            cout << "Enter Player " << i + 1 << " symbol: O" << endl;
            Psym[i] = 'O';
        }
        if (i == 1)
        {
            cout << "Enter Player " << i + 1 << " name: Computer" << endl;
            NS[i] = "Computer";
            cout << "Enter Player " << i + 1 << " symbol: X" << endl;
            Psym[i] = 'X';
            Sleep(3000);
        }
    }
    turn = 0;
}

void displayboard(char**& B, int dim, int startRow, int startCol, char* Psym, int NOPs) {
    for (int ri = 0; ri < dim; ri++) {
        for (int ci = 0; ci < dim; ci++) {
            gotoRowCol(startRow + ri, startCol + ci * 2);
            bool symbolColored = false;


            for (int i = 0; i < NOPs; i++) {
                if (B[ri][ci] == Psym[i]) {
                    color(i + 3);
                    cout << B[ri][ci];
                    symbolColored = true;
                    break;
                }
            }
            if (!symbolColored) {
                color(7);
                cout << B[ri][ci];
            }
        }
    }
    color(7);
}
void newdisplayboard(char**& B, int dim, int startRow, int startCol)
{
    for (int ri = 0; ri < dim; ri++)
    {
        for (int ci = 0; ci < dim; ci++) {
            gotoRowCol(startRow + ri, startCol + ci * 2);
            cout << (B[ri][ci] = '-');
        }
    }
}
void turnMsg(string NS[], char Psym[], int turn, int msgRow)
{
    gotoRowCol(msgRow, 50);
    cout << "It's " << NS[turn] << "'s turn (" << Psym[turn] << ")";
}
void roundMsg(int msgRow, int r, int ri, int ci)
{
    gotoRowCol(ri, 50);
    cout << "ROUND " << r << "!";
}
void selectposition(int& ri, int& ci, int dim, int startRow, int startCol)
{
    int rClick, cClick;
    getRowColbyLeftClick(rClick, cClick);
    ri = rClick - startRow;
    ci = (cClick - startCol) / 2;
    if (ri < 0 || ri >= dim || ci < 0 || ci >= dim) {
        ri = ci = -1;
    }
}
bool isvalid(char** B, int dim, int ri, int ci)
{
    return ri >= 0 && ci >= 0 && ri < dim && ci < dim && B[ri][ci] == '-';
}
void updateboard(char** B, int ri, int ci, char* Psym, int turn)
{
    B[ri][ci] = Psym[turn];
}
bool doIsWinHorizontally(char**& B, int dim, int ri, int ci, int WC, char* Psym, int turn)
{
    if (ci + WC > dim) return false;
    for (int c = ci; c < ci + WC; c++)
    {
        if (B[ri][c] != Psym[turn]) return false;
    }
    return true;
}

bool doIsWinvertically(char**& B, int dim, int ri, int ci, int WC, char* Psym, int turn)
{
    if (ri + WC > dim) return false;
    for (int r = ri; r < ri + WC; r++) {
        if (B[r][ci] != Psym[turn]) return false;
    }
    return true;
}

bool doIsWindignalleft(char**& B, int dim, int ri, int ci, int WC, char* Psym, int turn)
{
    if (ri + WC > dim || ci - WC + 1 < 0) return false;
    for (int t = 0; t < WC; t++) {
        if (B[ri + t][ci - t] != Psym[turn]) return false;
    }
    return true;
}

bool doIsWindignolright(char**& B, int dim, int ri, int ci, int WC, char* Psym, int turn) {
    if (ri + WC > dim || ci + WC > dim) return false;
    for (int t = 0; t < WC; t++) {
        if (B[ri + t][ci + t] != Psym[turn]) return false;
    }
    return true;
}

bool doIsWin(char**& B, int dim, int ri, int ci, int WC, char* Psym, int turn) {
    return (doIsWinHorizontally(B, dim, ri, ci, WC, Psym, turn) ||
        doIsWinvertically(B, dim, ri, ci, WC, Psym, turn) ||
        doIsWindignalleft(B, dim, ri, ci, WC, Psym, turn) ||
        doIsWindignolright(B, dim, ri, ci, WC, Psym, turn));
}

bool isWin(char**& B, int dim, int WC, char* Psym, int turn) {
    for (int ri = 0; ri < dim; ri++) {
        for (int ci = 0; ci < dim; ci++) {
            if (doIsWin(B, dim, ri, ci, WC, Psym, turn)) return true;
        }
    }
    return false;
}

void turnchange(int& turn, int NOP)
{
    turn = (turn + 1) % NOP;
}

bool isDraw(char** B, int dim) {
    for (int ri = 0; ri < dim; ri++) {
        for (int ci = 0; ci < dim; ci++) {
            if (B[ri][ci] == '-') {
                return false;
            }
        }
    }
    return true;
}
void selectpositionBYcomputer(char** B, int& ri, int& ci, int dim, string* NS, char* Psym, int turn, int WC)
{
    for (int w = WC; w >= 0; w--)
    {
        for (int r = 0; r < dim; r++) {
            for (int c = 0; c < dim; c++) {
                if (isvalid(B, dim, r, c)) {
                    B[r][c] = Psym[turn];
                    if (isWin(B, dim, w, Psym, turn)) {
                        ri = r;
                        ci = c;
                        B[r][c] = '-';
                        return;
                    }
                    B[r][c] = '-';
                }
            }
        }

        int opponent = (turn + 1) % 2;
        for (int r = 0; r < dim; r++) {
            for (int c = 0; c < dim; c++) {
                if (isvalid(B, dim, r, c)) {
                    B[r][c] = Psym[opponent];
                    if (isWin(B, dim, w, Psym, opponent)) {
                        ri = r;
                        ci = c;
                        B[r][c] = '-';
                        return;
                    }
                    B[r][c] = '-';
                }
            }
        }
    }
    for (int r = 0; r < dim; r++) {
        for (int c = 0; c < dim; c++) {
            if (isvalid(B, dim, r, c)) {
                ri = r;
                ci = c;
                return;
            }
        }
    }
}
int main()
{
    cout << "Make sure that the width of your console screen is 120 and hight is 80 . THANK YOU";
    Sleep(3000);
    system("cls");
    displayGomuku();
    design2();
    timer();
    instructions();
    int dim, ri, ci, WC, NOPs, turn;
    char** B;
    string* NS;
    char* Psym;
    int rounds = 3;
    int max = -1;

    init(dim, WC, NOPs, B, NS, Psym, turn);
    const int N = 4;
    system("cls");
    int r = 0;
    int whowins[N] = {};
    int startCol = (120 - dim * 2) / 2;
    int startRow = (80 - dim) / 2;
    int msgRow = startRow + dim + 2;
    int roundmsg = startRow - 1;
    int msgCol = startCol + (dim * 2) / 2;
    int drawRounds = 0;

    displayboard(B, dim, startRow, startCol, Psym, NOPs);

    do {
        roundMsg(msgRow, r + 1, roundmsg, msgCol);
        turnMsg(NS, Psym, turn, msgRow);

        if (turn == 0)
        {
            do
            {
                selectposition(ri, ci, dim, startRow, startCol);
            } while (!isvalid(B, dim, ri, ci));
        }
        if (turn == 1)
        {

            selectpositionBYcomputer(B, ri, ci, dim, NS, Psym, turn, WC);
            Sleep(1000);
        }

        updateboard(B, ri, ci, Psym, turn);
        system("cls");
        displayboard(B, dim, startRow, startCol, Psym, NOPs);

        if (isWin(B, dim, WC, Psym, turn))
        {
            whowins[turn] += 1;
            gotoRowCol(msgRow + 1, 50);
            cout << "Congratulations! " << NS[turn] << " wins!" << endl;
            gotoRowCol(msgRow + 2, 50);
            cout << "Round " << r + 1 << " Over!";
            Sleep(1000);
            gotoRowCol(msgRow + 1, 50);
            cout << "                                            " << endl;
            gotoRowCol(msgRow + 2, 50);
            cout << "                                  ";
            system("cls");
            displayLeaderboard(NS, Psym, whowins, NOPs, r + 1);
            Sleep(1000);
            newdisplayboard(B, dim, startRow, startCol);

            r++;
        }
        else if (isDraw(B, dim))
        {
            drawRounds++;
            gotoRowCol(msgRow + 1, 50);
            cout << "Round " << r + 1 << " ends in a DRAW!" << endl;
            Sleep(1000);
            gotoRowCol(msgRow + 1, 50);
            cout << "                                            " << endl;
            system("cls");
            displayLeaderboard(NS, Psym, whowins, NOPs, r + 1);
            Sleep(1000);
            newdisplayboard(B, dim, startRow, startCol);
            r++;
        }

        if (r == rounds)
        {

            for (int i = 0; i < NOPs; i++) {
                if (whowins[i] > max) {
                    max = whowins[i];
                }
            }

            system("cls");
            gotoRowCol(20, 40);

            if (max == 0) {
                cout << "The entire tournament ends in a DRAW! No winners." << endl;
            }
            else {
                gotoRowCol(0, 0);
                cout << "Tournament Winner(s):" << endl;
                for (int i = 0; i < NOPs; i++) {
                    if (whowins[i] == max) {
                        cout << NS[i] << " with " << whowins[i] << " win(s)!" << endl;
                    }
                }
                cout << "Number of Draw Rounds: " << drawRounds << endl;
            }
            Sleep(3000);
            system("cls");
            gotoRowCol(30, 10);
            cout << "\t\t\  #####     ##     ##       ##  ######   ######    ##    ##  ######  ######  \n";
            gotoRowCol(31, 10);
            cout << "\t\t\ ##    #   #  #    ###     ###  ##      ##    ##   ##    ##  ##      #    #  \n";
            gotoRowCol(32, 10);
            cout << "\t\t\ ##       ######   ## #   # ##  ####    ##    ##   ##    ##  ####    ######  \n";
            gotoRowCol(33, 10);
            cout << "\t\t\ ##   ### ##  ##   ##  # #  ##  ##      ##    ##   ##    ##  ##      ##    #    \n";
            gotoRowCol(34, 10);
            cout << "\t\t\  #####   ##  ##   ##   #   ##  ######   ######     ######   ######  ##     #  \n";
            gotoRowCol(35, 20);

            break;
        }

        turnchange(turn, NOPs);
    } while (r != rounds);

    for (int i = 0; i < dim; i++)
    {
        delete[] B[i];
    }
    delete[] B;
    delete[] NS;
    delete[] Psym;
    return 0;
}

