class parent {
    public:
        void hello() {cout << "parent says hello!\n";}
};
class foo : public parent{
    public:
        void hello() {cout << "foo says hello !\n";}
};
class bar : public parent{
    public:
        void hello() {cout << "bar says hello !\n";}
};
class baz : public foo, public bar {
    public:
        void hello() { cout << "Which methods I do have !"; }
};
/* DIAMOND          parent
 * PROBLEM         /      \
 *               foo      bar
 *                 \     /
 *                   baz
 */
baz b;
b.hello();              /* call hello function of baz   */
b.parent :: hello();    /* still ambiguity error        */
