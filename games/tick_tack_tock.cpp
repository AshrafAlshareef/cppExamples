#include <iostream>
#include <vector>
#include <cctype>

std::ostream& operator<<(std::ostream& os, const std::vector<char>& row)
{
    for (const char element : row)
    {
        os << " | " << element << " | ";
    }
    os << std::endl << std::endl;
    return os;
}


std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<char>>& board)
{
    for (const std::vector<char> element : board)
    {
        os << element;
    }
    os << std::endl;
    return os;
}

struct Position
{
    int _x;
    int _y;
};


bool validateInput(char input)
{
     if (!std::isdigit(input))
     {
        return false;
     }

     if (input < '1' || input > '2')
     {
        return false;
     }

     return true;
}




Position readPosition()
{
    char row;
    char column;

    do
    {
        std::cout << "Please choose a position to be set. rows: 0 1 2 , columns: 0 1 2" << std::endl;
        std::cin >> row;
        std::cin >> column;
    } while (!validateInput(row)  || !validateInput(column));
    
    return Position{static_cast<int>(row) - '1', static_cast<int>(column) - '1'};
}

void changeContent(std::vector<std::vector<char>>& board, Position position, char newSign)
{
    board[position._y][position._x] = newSign;
}

int main()
{
    char element = '*';
    std::vector<char> row_1{element, element, element};
    std::vector<char> row_2{element, element, element};
    std::vector<char> row_3{element, element, element};

    std::vector<std::vector<char>> board{row_1, row_2, row_3};
    
    std::cout << board;

   Position position = readPosition();

   changeContent(board, position, 'X');

    std::cout << board;

    return 0;
}
