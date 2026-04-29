#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
template <typename T>
void display(vector <T> &v){
    typename vector <T> :: iterator itr;

    cout<<"The elements of the vector are"<<endl;
    cout<<"[";
    
    for(auto itr=v.begin();itr!=v.end();itr++){
        cout<<*itr;
        if(itr<(v.end()-1)){
            cout<<",";
            
        }
        
    }
    cout<<"]";
}
int main(){
    int n;
    int element;
    int choice;
    
    cout<<"Enter the following what you want "<<endl;
    cout<<"1 if you want to do repetation of a single number "<<endl;
    cout<<"2 if you want to enter different different element "<<endl;
    cout<<"Currently working on other number "<<endl;
    
    cout<<"Enter the choice you want to make "<<endl;
    cin>>choice;
    if(choice==1){
        
        cout<<"Enter the total repetition "<<endl;
        cin>>n;
        cout<<"Enter the element you want to repeat"<<endl;
        cin>>element;
        vector <int> v1(n,element);
        display(v1);
    }
    else if(choice==2) {
        cout<<"Enter the total elements you wanna add ";
        cin>>n;
        vector <int> v1;
        for(int i=0;i<n;i++){
            cout<<"Enter the element "<<i+1<<endl;
            cin>>element;
            v1.push_back(element);
        }
        display(v1);
    }
    else{
        cout<<"Already told working with others "<<endl;
    }

}