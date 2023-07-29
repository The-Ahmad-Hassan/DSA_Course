#include<iostream>
#include<stack>

using namespace std;

int main(){

stack<string> s;
s.push("love");
s.push("babber");
s.push("kumar");

cout<<"Top element -> "<< s.top()<<endl;
s.pop();

cout<<"Top element -> "<< s.top()<<endl;

cout<<"Stack is empty or not "<<s.empty()<<endl;


}
