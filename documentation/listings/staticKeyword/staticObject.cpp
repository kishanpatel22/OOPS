void foo() {
    static Example a;       /* declared a static object */
    /* Do something */
}
int main() {
    foo();                  /* function creates static object */
    /* 
     * Do something 
     */
    cout << "End of main";  /* main function ends here */
    return 0;               /* scope of static object ends here */
}
