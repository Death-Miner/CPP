#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
template <typename T>
void display(vector <T> &v){
    typename vector <T> :: iterator itr;

    cout<<"The elements of the vector are"<<endl;
    
    for(auto itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }

}
int main(){
    int n;
    float element;
    int choice;
    cout<<"Enter the following what you want "<<endl;
    cout<<"1 if you want to do repetation of a single number "<<endl;
    cout<<"2 if you want to enter different different element "<<endl;
    cout<<"Currently working on other number "<<endl;
    
    cout<<"Enter the choice you want to make "<<endl;
    cin>>choice;
    
    cout<<"Enter the total repetition "<<endl;
    cin>>n;
    cout<<"Enter the element you want to repeat"<<endl;
    cin>>element;

    vector <int> v1(n,element);
    cout<<v1.size()<<endl;
    display(v1);

}