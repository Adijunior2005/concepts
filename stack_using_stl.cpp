#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<int> s1;

    cout<<s1.empty()<<endl;

    s1.push(7);

    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;

    s1.push(9);

    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;

    s1.pop();

    
    cout<<s1.size()<<endl;

    cout<<s1.empty()<<endl;

    return 0;
}