/*
Pattern 15
A B C D E
A B C D
A B C 
A B 
A
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
}