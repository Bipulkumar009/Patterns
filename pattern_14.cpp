/*
Pattern 14
A
A B
A B C
A B C D
A B C D E
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;

    }
}