class Example {
    private:
        int *arr;
        int size;
    public:
        /* parameterized constructor */
        Example(int n) {
            size = n;
            /* dynamically allocates an array */
            arr = new int[size];  
            /* initializes all elements to zero */
            for(int i = 0; i < size; i++) {
                arr[i] = 0;       
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
                cout << arr[i];
            }
        }
        /* changes all the values in the array to new values */
        void change_values(int new_value) {
            for(int i = 0; i < size; i++) {
                arr[i] = new_value;
            }
        }
};
