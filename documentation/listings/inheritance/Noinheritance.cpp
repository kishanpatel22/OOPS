/* structure of basic phone */
class phone {
    /* defination for phone */
    int phone_id;
    double battery_status;

    /* functions for using phone */
    void call();
    void power_off();
};

/* structure of Iphone */
class Iphone {
    /* defination for phone */           //
    int phone_id;                        //         BAD DESIGN 
    double battery_status;               //  Same code for providing 
                                         //  basic phone functionality 
    /* functions for using Iphone */     //   
    void call();                         //    NO CODE RESUABILITY 
    void power_off();                    //

    /* additional feature */ 
    void seri();
};
