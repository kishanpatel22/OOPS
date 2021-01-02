class parent {
    /* parent hello function */
};

class foo : virtual public parent {     /* virtual inheritance */
    /* foo hello function */
};

class bar : virtual public parent {     /* virtual inheritance */
    /* bar hello function */
};

class baz : public foo, public bar {
    /* baz hello function */
};

baz b;
b.parent :: hello();    /* works */
