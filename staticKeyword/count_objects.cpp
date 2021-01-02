#include<bits/stdc++.h>
using namespace std;

class Example {
    public:
        static int i;
        Example() {
            i++; 
        }
        static void print_var() {
            cout << i << endl;
        }
};

int Example :: i = 0;

int main(int argc, char const *argv[]) {
    Example a, b, c;
    Example :: print_var();

    return 0;
}
