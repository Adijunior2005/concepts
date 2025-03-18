#include<bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node* next;
};

class mystack{
    node* head;
    int stacksize;
    public:

    mystack(){
        head=NULL;
        stacksize=0;
    }
    void push(int val){
        node* temp = new node();
        temp->val=val;
        temp->next=head;
        head=temp;

        cout<<"element"<<val<<"added"<<endl;
        stacksize++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        cout<<"element popoed"<<endl;
        stacksize--;
    }
    int top(){
        if(head=NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        cout <<"top element is "<< head->val <<endl;
        return head->val;  
    }
    int size(){
        cout<<"size of stack is "<<stacksize<<endl;
        return stacksize;
    }

    int empty(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
            return 1;
        }
        cout<<"stack is not empty"<<endl;
        return -1;
    }
};

int main(){
    mystack s1;
    s1.empty();
    s1.push(1);
    s1.push(5);
    s1.size();
    s1.pop();
    return 0;
}
