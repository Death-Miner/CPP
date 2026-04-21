#include <iostream>
using namespace std;

namespace first{
    string name=" Alex ";
    int age=45;
    
}
namespace second{
    string name="Mathew";
    int age=41;
    
}
namespace third{
    string name="Charles";
    int age=40;
}
using namespace first;
int main(){
    age=54;
    cout<<name<<endl;
    cout<<age<<endl<<endl;//gonna print 54 not 45
    cout<<first::age<<endl;//gonna print 54 not 45

    cout<<second::name;

}

