class Build{
    String name;
    int age;
    String address;
    Build(String Sname,String Saddress,int Sage){
        this.name = Sname;
        this.address = Saddress;
        this.age = Sage;

    }

//    Copy constructor
    Build(Build build2){
//      Receiving first object's property
        this.name = build2.name;
        this.address = build2.address;
        this.age = build2.age;
    }

    public void ShowInfo(){
        System.out.println("Name is "+this.name);
        System.out.println("Address is "+this.address);
        System.out.println("Age is "+this.age);
    }
}


public class CopyCons {
    public  static  void main(String []arg){
        Build build1 = new Build("Abu Shadat Shaikat","Rangpur",22);
        build1.ShowInfo();
        Build build2 = new Build(build1); //Sending first object property
        build2.ShowInfo();
    }
}
