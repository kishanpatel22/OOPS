#include<bits/stdc++.h>
using namespace std;

class foo {
    public:
        void hello() {cout << "old foo says hello !\n";}
};

class new_foo : public foo {
    public:
        void hello() {cout << "new foo says hello !\n";}
};

int main(int argc, char const *argv[]) {
    
    new_foo nf;

    nf.foo :: hello();
    nf.hello();

    return 0;
}
