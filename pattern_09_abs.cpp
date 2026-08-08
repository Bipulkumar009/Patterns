/*
Pattern 9 using abs()
        *
      * * *
    * * * * * 
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<2*n;i++){
        int spaces = abs(n-i);
        int stars = 2*n-1-2*spaces;

        for(int j=0;j<spaces;j++){
            cout<<"  ";
        }
        for(int j=0;j<stars;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}