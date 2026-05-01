#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

template <class c1>
class marks{
    public:
    vector <c1> marks;
    c1 mark
    int n;
    void get_makrs(){
        for(int i=0;i<n;i++){
            cout<<"Enter the marks of the "<<i+1<<"subject"<<endl;
            cin>>mark;
            marks.push_back(mark);
        }


    }
    void display_marks(){
        vector <c1> ::iterator itr;
        int i=1;
        for(auto itr=marks.begin();itr!=marks.end();itr++,i++){
            cout<<"marks of the subject "<<i <<" are "<<*itr;
        }
    }

};
template <class c1,class c2>
class student_profile:public marks{
    c1 name;
    c2 reg_id;
    public:
    void get_details(){
        cout<<"Enter student  name "<<endl;
        cin>>name;
        cout<<"Enter student registration id "<<endl;
        cin>>reg_id;
        
    }


};