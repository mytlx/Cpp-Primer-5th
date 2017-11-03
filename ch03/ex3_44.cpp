#include <iostream>
using std::cout; using std::endl;

int main()
{
    int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };

    // range for
    using int_array = int[4];
    for (int_array &row : ia)
        for (int col : row)
            cout << col << " ";
    cout << endl << endl;

    // subscript
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << endl << endl;

    // pointer
    for (int(*row)[4] = ia; row != ia + 3; row++)
        for (int *col = *row; col != *row + 4; col++)
            cout << *col << " ";
    cout << endl << endl;
}
