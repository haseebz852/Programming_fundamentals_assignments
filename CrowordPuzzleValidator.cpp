#include <iostream>
using namespace std;

void inputPuzzle(char puzzle[5][5])
{
    cout << "Enter puzzle (# for empty):\n";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> puzzle[i][j];
        }
    }
}

int countHorizontal(char puzzle[5][5])
{
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        int length = 0;
        for(int j = 0; j < 5; j++)
        {
            if(puzzle[i][j] != '#')
            {
                length++;
            }
            else
            {
                if(length >= 3)
                    count++;
                length = 0;
            }
        }
        if(length >= 3)
            count++;
    }

    return count;
}

int countVertical(char puzzle[5][5])
{
    int count = 0;

    for(int j = 0; j < 5; j++)
    {
        int length = 0;
        for(int i = 0; i < 5; i++)
        {
            if(puzzle[i][j] != '#')
            {
                length++;
            }
            else
            {
                if(length >= 3)
                    count++;
                length = 0;
            }
        }
        if(length >= 3)
            count++;
    }

    return count;
}

int longestWord(char puzzle[5][5])
{
    int maxLen = 0;

    for(int i = 0; i < 5; i++)
    {
        int length = 0;
        for(int j = 0; j < 5; j++)
        {
            if(puzzle[i][j] != '#')
            {
                length++;
                if(length > maxLen)
                    maxLen = length;
            }
            else
            {
                length = 0;
            }
        }
    }

    for(int j = 0; j < 5; j++)
    {
        int length = 0;
        for(int i = 0; i < 5; i++)
        {
            if(puzzle[i][j] != '#')
            {
                length++;
                if(length > maxLen)
                    maxLen = length;
            }
            else
            {
                length = 0;
            }
        }
    }

    return maxLen;
}

int main()
{
    char puzzle[5][5];

    inputPuzzle(puzzle);

    int hWords = countHorizontal(puzzle);
    int vWords = countVertical(puzzle);
    int longest = longestWord(puzzle);

    cout << "\nHorizontal words: " << hWords << endl;
    cout << "Vertical words: " << vWords << endl;
    cout << "Longest word length: " << longest << endl;

    return 0;
}
