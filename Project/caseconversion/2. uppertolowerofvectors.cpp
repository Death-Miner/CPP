#include<iostream>
#include <vector>
#include <iterator>
using namespace std;

void uppertolower(vector <string> v1){
    char temp;
    
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++){
            v1[i][j]=tolower(v1[i][j]);
            

        }
    }
    vector <string> ::iterator itr=v1.begin();
    for(itr;itr!=v1.end();itr++){
        cout<<*itr<<endl;
    }
    
}

int main(){
    int no_elements;
    string elements;
    vector <string> v1;
    cout<<"Enter the number of elements you want to enter in the vector "<<endl;
    cin>>no_elements;
    int i=0;
    while(i<no_elements){
        cout<<"Enter the "<<i+1<<" Element "<<endl;
        cin>>elements;
        v1.push_back(elements);
        i++;

    }
    uppertolower(v1);

    return 0;
}
