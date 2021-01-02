#include<bits/stdc++.h>
using namespace std;

class parent {
    public:
        void hello() {cout << "parent says hello!\n";}
};

class foo : virtual public parent{
    public:
        void hello() {cout << "foo says hello !\n";}
};

class bar : virtual public parent{
    public:
        void hello() {cout << "bar says hello !\n";}
};

class baz : public foo, public bar {
    public:
        void hello() { cout << "Which methods I do have !"; }
};

int main(int argc, char const *argv[]) {
    
    baz b;
    b.parent :: hello();
    

    return 0;
}
