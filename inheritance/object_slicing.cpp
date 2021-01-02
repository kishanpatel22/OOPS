#include<bits/stdc++.h>
using namespace std;

class foo {
    public:
        int f;
        foo() { f = 0; }

};
class bazz : public foo {
    public:
        int b;
        /* constructor initializer list 
         * calling foo class constructor
         */
        bazz(int x, int y) { f = x; b = y; }
};

int main(int argc, char const *argv[]) {
    bazz b(10, 20);
    foo f = b;
    cout << f.f << endl;

    return 0;
}
