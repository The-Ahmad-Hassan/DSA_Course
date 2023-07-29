#include<iostream>
#include<vector>

using namespace std;


int main(){

//create dynamic arrays

               
//              size      intilizing with elemnt
vector<int> arr(4     ,   5);
vector<int> arr1={1,2,3,4};

// copying elements from one vector to another vector
vector<int> last(arr1);
  cout<<"Element in the last vector array  ";
for(int i:last){
    cout<< i << " ";
}

cout<<endl;


//printing dynamic array(vector)
for(int i:arr1){
    cout<< i << " ";
}

cout<<endl;
//accessing element through at operator

cout<<"Element at index -> " << arr.at(3)<<endl; 

// before capacity mutlab arr ki length
cout<<"Before capaicity "<<arr1.capacity() <<endl;

//doubling the size of vector (dynamic array)
arr1.push_back(5);


cout<<"After Inserting 1 element then the capacity -> "<<arr1.capacity() << endl;

//calculating the size 
//size mutlab total kitne  element iss array inder modoood haan

cout<< "Size of array/Total Element Present in array "<<arr1.size()<<endl;

// deleting element from array 
cout<<"Before Pop "<<endl;
for(int i:arr1){
    cout<< i << " ";
}

cout<<endl;
arr1.pop_back();
cout<<" After Pop/deleting the element from back "<<endl;

for(int i:arr1){
    cout<< i << " ";
}

cout<<endl;


//GET front element using front opeartor
cout<<"front -> "<<arr1.front()<<endl;

//getting end element using back operator
cout<< "Back -> " << arr1.back()<<endl;

//clearing the size using clear opeartor
cout<< "Before clearing the size "<< arr1.size()<<endl;
arr1.clear();
cout<< "After clearing the size "<< arr1.size()<<endl;
  



}