#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int m, n, i, j, A[10][10];  //Declarations
    cout << "Enter the number of rows and columns of the matrix : ";
    cin >> m >> n;
    cout << "Enter the array elements : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)     //Nested Loop.
            cin >> A[i][j];
    cout << "Matrix : \n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << "  ";    //Nested Loop.
        cout << "\n ";
    }
    if (m == n)
        cout << "<--The entered array is a square matrix-->"<<endl; //if the if statement excutes true.
    else
    {
        cout << "<--The entered array is not a square matrix-->"<<endl;	//if the if statement does not Executes true.
        exit(0);
    }
    cout << "The diagonal elements are : \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)     //Nested Loop.
        {
            if (i == j)
                cout << A[i][j];    //If statement for final execution.
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;

}