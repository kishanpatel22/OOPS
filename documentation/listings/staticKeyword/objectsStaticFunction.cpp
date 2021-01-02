Example a, b;       
/* static variable i shared among objects a and b */
a.i = 10;       
Example :: foo();   /* increments the static memeber i */
cout << a.i;        /* outputs 11 */
cout << b.i;        /* outputs 11 */
