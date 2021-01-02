#include<bits/stdc++.h>
using namespace std;

class Example {
    private:
        int *arr;
        int size;
    public:
        /* parameterized constructor */
        Example(int n) {
            size = n;
            arr = new int[size];  /* dynamically allocates an array */
            for(int i = 0; i < size; i++) {
                arr[i] = 0;       /* initializes all elements to zero */
            }
        }
        /* copy constructor */
        Example(const Example &obj) {
            arr = obj.arr;
            size = obj.size;
        }
        /* prints all the values in the array */
        void print_values() {
            for(int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        /* changes all the values to new values in the array */
        void change_values(int new_value) {
            for(int i = 0; i < size; i++) {
                arr[i] = new_value;
            }
        }
};

int main(int argc, char const *argv[]) {
    Example a(2); 
    Example b = a;

    a.print_values();
    b.print_values();
    
    b.change_values(1);

    a.print_values();
    b.print_values();
    
    return 0;
}

