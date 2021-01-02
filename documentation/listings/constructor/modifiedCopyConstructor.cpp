/* copy constructor */ 
Example(const Example &obj) {
    size = obj.size;            /* bitwise copy */
    arr = new int[size];        /* creating a new memory */ 
    for(int i = 0; i < size; i++) { 
        arr[i] = obj.arr[i];    /* deep coping */
    }
}
