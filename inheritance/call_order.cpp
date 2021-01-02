#include<bits/stdc++.h>
using namespace std;

class foo {
    public:
        foo()  { cout << "foo says hii"; }   /* foo constructor  */
        ~foo() { cout << "foo says bye"; }   /* foo destructor   */

};
class bazz : public foo {
    public:
        bazz()  { cout << "bazz says hii"; } /* bazz constructor */
        ~bazz() { cout << "bazz says bye"; } /* bazz destructor  */
};


int main(int argc, char const *argv[]) {
    bazz b;
    return 0;
}
