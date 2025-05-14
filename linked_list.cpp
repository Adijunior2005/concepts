#include<iostream>
using namespace std;

class node{
    public:
 int data;
 node* next;

 node(int val){
    data=val;
    next=NULL;
 }
};

class list{
 node* head;
 node* tail;
 public:
 list(){
    head=tail=NULL;
 }

 void pushfront(int val){
    node* newNode = new node(val);
    if (head==NULL){
        head=tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

void pushback(int val){
    node* newNode = new node(val);
    if (head==NULL){
        head=tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
}}
void display(){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        ;
    }
    cout<<"NULL"<<endl;
}

void popfront(){
    if(head==NULL){
        cout<<"no value present";
    }
    else{
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
}
void popback(){
    if(head==NULL){
        cout<<"no value present";
        return;
    }
    else{
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;

    }
}
void insertInMid(int val,int pos){
    if(pos<0){
        return;
    }
    if(pos==0){
        pushfront(val);
    }
    node* newNode = new node(val);
    node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
        
    }
   
    newNode->next=temp->next;
    temp->next=newNode;
}
void search(int key){
    node* temp=head;
    int index=0;
    while(temp != NULL){
        if(key==temp->data){
            cout<<"index  of "<<key<<": "<<index;
        }
        temp=temp->next;
        index++;
        ;
    }
}

};


int main(){
    list ll;
    ll.pushfront(1);
    ll.pushfront(2);
    ll.pushback(3);
    ll.pushback(4);
    ll.display();
    ll.popfront();
    ll.popback();
    ll.insertInMid(2,1);
    ll.display();
    ll.search(2);
    return 0;
}

