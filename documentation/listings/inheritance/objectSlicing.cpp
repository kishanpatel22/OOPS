class foo {
    public:
        int f;
        /* constructor for foo */
        foo() { f = 0; }

};
class bar : public foo {
    public:
        int b;
        /* constructor for bar */
        bar(int x, int y) { f = x; b = y; }
};
/* initializing base class using derieved class */
bar b(10, 20);
/* data member b in bar is slicied off and value of f = 10 */
foo f = b; 
