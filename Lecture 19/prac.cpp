#include<iostream>
#include<array>
#include<vector>
#include<stack>
using namespace std;

int main(){

stack<int> a;

//LIFO LAST IN FAST OUT 

a.push(1);

a.push(2);

a.push(3);

a.push(4);

a.push(5);



cout<<" Top "<<a.top();

cout<<endl;
a.pop();
cout<<" After "<<endl;
cout<<" Top "<<a.top();

cout<<" Top "<<a.top();

cout<<endl;
a.pop();
cout<<" After "<<endl;
cout<<" Top "<<a.top();


cout<<" Top "<<a.top();

cout<<endl;
a.pop();
cout<<" After "<<endl;
cout<<" Top "<<a.top();


cout<<" Top "<<a.top();

cout<<endl;
a.pop();
cout<<" After "<<endl;
cout<<" Top "<<a.top();







}

