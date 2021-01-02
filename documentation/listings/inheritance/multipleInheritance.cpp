/* Base class foo */
class foo {
    public:
        void hello() {cout << "foo says hello !\n";}
};
/* Base class bar */
class bar {
    public:
        void hello() {cout << "bar says hello !\n";}
};
/* Derieved class baz */
class baz : public foo, public bar {
    public:
        void confused() { cout << "Which method baz have !"; }
};

baz b;
b.confused();   /* works */
b.hello();      /* Runtime error : ambiguity detected */
