#include<iostream>
#include<list>
using namespace std;

int main(){
//initilize list
list<int> l;
//copy a list
list<int> a(l);
//initilize with another way
list<int> n(5,100);
cout<<"Printing n "<<endl;
for(int i:n){
cout<< i << " ";

} cout<<endl;

l.push_back(1);
l.push_front(2);
for(int i:l){
cout<< i << " ";

} cout<<endl;

l.pop_back();
for(int i:l){
cout<< i << " ";

} cout<<endl;


l.erase(l.begin());

cout<<"After Erase "<<endl;

for(int i:l){
    cout<< i <<" ";
}cout<<endl;

cout<<"size of list "<<l.size()<<endl;







}