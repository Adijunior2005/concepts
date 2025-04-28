// count the number of ones in binary representation of number

#include<iostream>
using namespace std;
int numberofones(int n){

    int c=0;
    while(n){
        n=n&(n-1);
        c++;
    }
    return c;
}
int main(){
 cout<<numberofones(19);
}