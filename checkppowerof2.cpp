// program to check number is power of 2 or not

// n = 6 = (0110)2
// n-1 = 5 = (0101)2
// logic nand n-l , flip rightmost 1 and right digits
// n=8=1000
// n-1=7=0111
#include<iostream>
using namespace std;

int isPoweroftwo(int num){
    return  (num && !(num& num-1));
}
int main(){
   cout<<isPoweroftwo(16)<<endl;
  return 0; 
}
