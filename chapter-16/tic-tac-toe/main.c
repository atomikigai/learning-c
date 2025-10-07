#include <stdio.h>

typedef enum
{
    X = 'X',
    O = 'O'
} Symbol;

typedef enum
{
    VICTORY,
    NOVICTORY,
    PLAYING,
} State;

typedef struct
{
    char *name;
    Symbol symbol;
    int number_turn;
} Player;

#define BOARD_LEN 3

void init_board(char board[BOARD_LEN][BOARD_LEN])
{
    int pos = 0;

    for (int i = 0; i < BOARD_LEN; i++)
    {
        for (int j = 0; j < BOARD_LEN; j++)
        {
            pos++;
            board[i][j] = pos + '0';
        }
    }
}

void print_board(char board[BOARD_LEN][BOARD_LEN])
{
    printf("\n------- BOARD --------\n");

    for (int i = 0; i < BOARD_LEN; i++)
    {
        for (int j = 0; j < BOARD_LEN; j++)
        {
            printf(" %c ", board[i][j]);

            if (j == (BOARD_LEN - 1))
            {
                printf("\n");
            }
        }
    }

    printf("------- BOARD --------\n\n");
}

void replace_value(int val, char board[BOARD_LEN][BOARD_LEN], Player p)
{
    char pos = val + '0';

    for (int i = 0; i < BOARD_LEN; i++)
    {
        for (int j = 0; j < BOARD_LEN; j++)
        {
            if (board[i][j] == pos)
            {

                if (board[i][j] == X || board[i][j] == O)
                {
                    printf("¡Error! Esa posición ya esta ocupada.\n");
                    return;
                }

                board[i][j] = p.symbol;
                break;
            }
        }
    }
}

void victory_message(char *name)
{
    printf("¡Victoria de:  %s!\n", name);
}

State check_diagonal(char board[BOARD_LEN][BOARD_LEN], Player p)
{
    if (board[0][0] == p.symbol && board[1][1] == p.symbol && board[2][2] == p.symbol)
    {
        return VICTORY;
    }

    if (board[0][2] == p.symbol && board[1][1] == p.symbol && board[2][0] == p.symbol)
    {
        return VICTORY;
    }

    return PLAYING;
}

State check_rows(char board[BOARD_LEN][BOARD_LEN], Player p)
{
    if (board[0][0] == p.symbol && board[0][1] == p.symbol && board[0][2] == p.symbol)
    {
        return VICTORY;
    }

    if (board[1][0] == p.symbol && board[1][1] == p.symbol && board[1][2] == p.symbol)
    {
        return VICTORY;
    }

    if (board[2][0] == p.symbol && board[2][1] == p.symbol && board[2][2] == p.symbol)
    {
        return VICTORY;
    }

    return PLAYING;
}

State check_columns(char board[BOARD_LEN][BOARD_LEN], Player p)
{
    if (board[0][0] == p.symbol && board[1][0] == p.symbol && board[2][0] == p.symbol)
    {
        return VICTORY;
    }

    if (board[0][1] == p.symbol && board[1][1] == p.symbol && board[2][1] == p.symbol)
    {
        return VICTORY;
    }

    if (board[0][2] == p.symbol && board[1][2] == p.symbol && board[2][2] == p.symbol)
    {
        return VICTORY;
    }

    return PLAYING;
}

State validate_result(char board[BOARD_LEN][BOARD_LEN], Player p)
{
    State result;
    result = check_rows(board, p);
    result = check_columns(board, p);
    result = check_diagonal(board, p);

    return result;
}

void read_value(char board[BOARD_LEN][BOARD_LEN])
{
    int number = 0;

    Player player_x = {"Jostick", X};
    Player player_o = {"Jose", O};

    Player *current_player = &player_x;
    State state = PLAYING;

    for (;;)
    {

        printf("Turno del jugador: %s\n", current_player->name);
        printf("Presiona el numero donde quieres colocar tu marca: ");
        scanf("%d", &number);

        if (number == 0)
        {
            printf("Por favor introduce un número valido\n");
        }

        replace_value(number, board, *current_player);
        print_board(board);
        state = validate_result(board, *current_player);

        if (state == VICTORY)
        {
            victory_message(current_player->name);
            break;
        }

        if (state == PLAYING)
        {
            if (current_player->symbol == X)
            {
                current_player = &player_o;
            }
            else
            {
                current_player = &player_x;
            }
        }

        if (state == NOVICTORY)
        {
            printf("Sin ganadores. Finalizar el juego");
        }
    }
}

int main(void)
{

    char board[BOARD_LEN][BOARD_LEN];

    init_board(board);
    print_board(board);
    read_value(board);

    return 0;
}