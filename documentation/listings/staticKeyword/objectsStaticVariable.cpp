/* NOTE : only once memory is allocated for the static variable and
 *        it is shared among the multiple objects that are created.
 */
Example a, b;   
/* manipulating the static variable i */
a.i = 1;        
b.i = 2;
cout << a.i;    /* outputs 2 */
cout << b.i;    /* outputs 2 */
