#include <iostream>
using namespace std;

int solidSquare(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    cout<<solidSquare(n);
}