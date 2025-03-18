#include<bits/stdc++.h>
using namespace std;
class mystack{

        int* ptr;
        int max_capacity;
        int arr_size;

    public:
    mystack(int g){
        ptr=new int[g];
        max_capacity=g;
        arr_size=0;
    }
    void push(int val){
        if(arr_size==max_capacity){
            cout<<"array is full .";
            return;
        }
        ptr[arr_size]=val;
        cout<<"element "<<val<<" pushed in stack ."<<endl;
        arr_size++;

    }
    void pop(){
        if (arr_size==0){
            cout<<"cannot pop! stack is empty !";
            return ;
        }
        cout<<"element poped"<<endl;
        arr_size--;
    }

    int top(){

        if(arr_size==0){
            cout<<"stack is empty !!";
            return -1;
        }
        cout<<"top of the stack is "<<ptr[arr_size-1]<<endl;
        return ptr[arr_size-1];

    }
    int size(){
        return arr_size;
    }

    int empty(){
        if(arr_size==0){
            cout<<"stack is empty"<<endl;
            return 1;
        }

        cout<<"stack is not empty "<<endl;
    }


};

int main(){
 mystack s1(7);
 s1.push(1);
 s1.push(7);
 s1.pop();
 s1.size();
 s1.top();
 s1.empty();
 return 0;
}