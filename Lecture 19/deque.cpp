#include<iostream>
#include<deque>

using namespace std;

int main(){

deque<int> d;
//deque is the double ending queue in which we can insert element at front and back both sides
  d.push_front(2);
  d.push_back(1);
   d.push_back(3);
     d.push_back(3);
  
 for(int i:d){
    cout<< i <<" ";
 }
 cout<<endl;



//accessing element using at operator 

cout<<"AT -> operator " << d.at(1);
cout<<endl;
//accsing front and end element

cout<< "Front Element "<<d.front()<<endl;

//accessing  back element

cout<< "Back Element "<<d.back()<<endl;


//check deque is empty or not 
cout<<"Empty(1) or Not(0) "<<d.empty()<<endl;

//deleting elements from a range using erase function
d.erase(d.begin(),d.begin()+1);
cout<<" After Erase  ->" <<endl;

 for(int i:d){
    cout<< i <<" ";
 }
 cout<<endl;







//clearing all the element/size from the deque using clear operator
d.clear();
 for(int i:d){
    cout<< i <<" ";
 }
 cout<<endl;



}