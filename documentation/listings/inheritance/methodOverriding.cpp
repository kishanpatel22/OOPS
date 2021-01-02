/* base class foo */
class foo {
    public:
        /* base class overridden method */
        void hello() {
            cout << "old foo says hello !\n"
        }
};

/* derieved from base class foo */
class new_foo : public foo {
    public:
        /* derieved class overridding method */
        void hello() {
            cout << "new foo says hello !\n";
        }
};

new_foo f;
f.hello()   
/* OUTPUT - new foo says hello ! */
