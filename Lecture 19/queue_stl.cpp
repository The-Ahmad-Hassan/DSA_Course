#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<string> q ;

q.push("love");
q.push("babber");
q.push("kumar");


cout<<"Size before pop "<<q.size()<<endl;

cout<<"First element "<<q.front()<<endl;

   q.pop();
cout<<"First element "<<q.front()<<endl;

cout<<"Size after pop "<<q.size()<<endl;




}