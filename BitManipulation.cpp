#include<iostream>
using namespace std;

//get bit 
int getBit(int num,int pos){
    return ((num & (1<<pos)) != 0);
}

//set bit
int setBit(int num,int  pos){
    return (num | (1<<pos));
}

//clear bit
int clearBit(int  num, int pos){
     int mask=~(1<<pos);
     return (mask & num);
}

//update bit
int updateBit(int num,int pos,int val){
    int mask=~(1<<pos);
    num=num & mask ;
    return (num | (val<<pos));
}

int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;

}