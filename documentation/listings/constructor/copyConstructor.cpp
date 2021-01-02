class Example {
    private :
        int x, y;
    public:
        /* parameterized constructor */
        Example(int a, int b) { x = a; y = b; }

        /* Copy constructor */
        Example(const Example &obj) { x = obj.x; y = obj.y; } 
};
