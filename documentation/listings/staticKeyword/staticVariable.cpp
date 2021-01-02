class Example {
    public:
        /* static variable in the class */
        static int i;   
        Example() {
            /* do something */ 
        }
};
/* explicit defination in this scope */
int Example::i = 10;

