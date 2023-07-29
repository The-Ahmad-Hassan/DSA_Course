#include<iostream>
#include<vector>
using namespace std;

int main(){

//initiliaze vector

vector<int> v;

vector<int> a (5,2);
//5 mean size of elements and 2 mean initiliaze all element with 2
cout<<"Print a"<<endl;

for(int i:a){

    cout<< i <<" ";
}
cout<<endl;


//copy one vector to another vector 

vector <int> last(a);
cout<<"Print v"<<endl;

for(int i:last){

    cout<< i <<" ";
}
cout<<endl;





//capcity mean total kitne element kaylye isko memory allocate hovi hoi ha
//size mean current kitne element is ke ander parree hove han
cout << "Capacity -> "<<v.capacity()<<endl;
//for inserting element in vector  push_back();
v.push_back(3);
cout<<"Capacity -> "<<v.capacity()<<endl;

v.push_back(6);
cout<<"Capacity -> "<<v.capacity()<<endl;

v.push_back(8);
cout<<"Capacity -> "<<v.capacity()<<endl;

//size batata ha currently iss meen kitne elements pare haan 

cout<<"size ->>    "<<v.size()<<endl;
cout<<" at funtion /random access "<< v.at(2)<<endl;


cout<<"Front "<<v.front()<<endl;
cout<<"Back "<<v.back()<<endl;

cout<<"Before Pop Back"<<endl;

for(int i:v)
{


cout<<i<<" ";

}
cout<<endl;
v.pop_back();


cout<<"After Pop Back"<<endl;

for(int i:v)
{


cout<<i << " ";

}
cout<<endl;
cout<<"Before Clear Size "<<v.size()<<endl;
v.clear();
cout<<"After Clear Size "<<v.size()<<endl;




}
