#include <iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int spc = 0; spc < n-row-1; spc++)
        {
            cout<<" ";  
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}