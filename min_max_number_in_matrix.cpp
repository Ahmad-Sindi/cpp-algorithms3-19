#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * ------------------------------------------------------------
 * Algorithm Challenge – Level 3 | #19 Minimum and Maximum Number in Matrix (3x3)
 *
 * This program finds and prints the minimum and maximum values inside a 3x3 matrix.
 *
 * Core concepts:
 * - Full matrix traversal
 * - Maintaining state while scanning data
 * - Comparing values efficiently
 * - Treating matrices as bounded numeric spaces
 *
 * Author: Ahmad sindi
 * Language: C++
 * ------------------------------------------------------------
 */

// Prints a 3x3 matrix in a formatted layout
void PrintMatrix(int Matrix1[3][3], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            cout << setw(3) << Matrix1[i][j] << "  ";
        }
        cout << endl;
    }
}

// Returns the minimum number found in the matrix
int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Colms)
{
    // Assume the first element is the minimum initially
    int MinNumber = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            // Update minimum if a smaller value is found
            if (Matrix1[i][j] < MinNumber)
            {
                MinNumber = Matrix1[i][j];
            }
        }
    }

    return MinNumber;
}

// Returns the maximum number found in the matrix
int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Colms)
{
    // Assume the first element is the maximum initially
    int MaxNumber = Matrix1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            // Update maximum if a larger value is found
            if (Matrix1[i][j] > MaxNumber)
            {
                MaxNumber = Matrix1[i][j];
            }
        }
    }

    return MaxNumber;
}

int main()
{
    int Matrix1[3][3] = {
        {100, 77, 90},
        {5, 24, 62},
        {85, 2, 14}};

    cout << "Matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMin Number In Matrix: "
         << MinNumberInMatrix(Matrix1, 3, 3) << endl;

    cout << "Max Number In Matrix: "
         << MaxNumberInMatrix(Matrix1, 3, 3) << endl;

    return 0;
}
