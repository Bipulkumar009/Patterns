/*
Pattern 18
E
D E
C D E
B C D E
A B C D E
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j<n;j++){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
}