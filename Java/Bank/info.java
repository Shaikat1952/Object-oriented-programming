package Bank;

import static java.lang.Math.random;

class Pro{
    protected String Nomine_name; //Protected member is accessible when it it inherited
}

public class info extends Pro{
    public String name;
    public  String email;
    private  String password; //private member not accessible from outside of info class

    public String getPassword(){
        return this.password = String.valueOf(random());

    }

    public String setNomineName(){
        return Nomine_name = "Ipsum";
    }
}

