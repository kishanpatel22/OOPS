Example a(3);       /* calls the parameterized constructor */
Example b = a;      /* shallow coping by calling copy constructor */

b.change_values(1); /* Objects b and a both get modified */

b.print_values();   /* output - 1 1 1 */
a.print_values();   /* output - 1 1 1 */
