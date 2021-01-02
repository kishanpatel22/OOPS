#include<bits/stdc++.h>
using namespace std;

class foo {
    private :
        int foo_private;
        void foo_private_hello() {
            cout << "foo cannot hello !" << endl;
        }
    public:
        int foo_public;
        void foo_public_hello() {
            cout << "foo says hello !" << endl;
        }
};

class bar: public foo {
    public:
        void bar_public_hello() {
            cout << "bar says hello !" << endl;
        } 
};


int main(int argc, char const *argv[]) {
    bar b;

    return 0;
}
