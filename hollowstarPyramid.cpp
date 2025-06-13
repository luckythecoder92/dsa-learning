#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int spc = 0; spc < n - row - 1; spc++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2*row + 1; col++)
        {
            if (col == 0)
            {
                cout << "*";
            }
            else if (col == 2 * row)
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    for (int row = 0; row < n; row++)
    {
        //spaces
        for (int spc = 0; spc < row; spc++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < 2*n-2*row-1; col++)
        {
            if (col==0 || col == 2*n-2*row-2)
            {
                cout<<"*";
            }
         
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
}
