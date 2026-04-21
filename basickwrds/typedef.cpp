#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vecint;
typedef vector<string> vecstr;
typedef vector<float> vecflt;

int main() {
    vecint v1={34, 345, 245, 24532};
    vecstr v2={"ch", "char", "Str"};
    vecflt v3={34.24, 34.3, 3211.4};

    vecint::iterator itr;

    for (itr=v1.begin(); itr!=v1.end(); itr++) {
        cout<<*itr<<" ";
    }

    cout<<endl;

    return 0;
}
