class Example {
    public:
        /* static variable in the class */
        static int i;   
        /* static member function */
        static void foo() {
            cout << "static variable incremented!" << endl;
            i++;
        }
};
/* explicit defination in this scope */
int Example::i = 10;
