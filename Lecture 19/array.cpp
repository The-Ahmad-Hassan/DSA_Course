#include<iostream>
#include<array>

using namespace std;



int main(){

// static array
array<int,4> basic={1,2,3,4};
    //calculating size    
 int size=basic.size();
  // printing element 
 for(int i=0; i<size; i++){
    cout<< basic[i]<< " ";
}
  cout<<endl;
//check array is empty or not
cout<<"Array is empty -> "<<basic.empty()<<endl;

  
//calculating size in different way in the array

cout<<"Get maximum size -> "<< basic.max_size()<<endl;

  
   //Get front element in the array
    cout<<"Front Element ->>>  "<< basic.front()<<endl;

     //Get last element in the array
    cout<<"Last Element ->>>  "<< basic.back()<<endl;

    


    //Get Element at any index using at operator OF THE ELEMENT 
    cout<<"Accessing Element using at operator ->> "<< basic.at(2)<<endl;

   

     
  






}