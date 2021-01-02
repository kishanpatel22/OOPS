class foo { 
    public:
        foo()  { cout << "foo says hii"; } /* foo constructor  */ 
        ~foo() { cout << "foo says bye"; } /* foo destructor   */ 
};
class bar : public foo {
    public:
        bar()  { cout << "bar says hii"; } /* bar constructor */ 
        ~bar() { cout << "bar says bye"; } /* bar destructor  */
};
/* object instance of bar */
bar b;     
/* OUTPUT :      (constructor of parent class)  foo says hii
 *               (constructor of derived class) bar says hii
 *               (destructor of derived class)  bar says bye
 *               (destructor of parent class)   foo says bye
 */
