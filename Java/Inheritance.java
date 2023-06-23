class Parent{
    String name;
    int amount;
}


public class Inheritance extends  Parent {

    public void setinfo(String Cname, int Camount){
        this.name = Cname;
        this.amount = Camount;
    }

    public  void showinfo(){
        System.out.println("Name is "+this.name);
        System.out.println("Amount is "+this.amount);
    }
    public static void main(String []arg){
        Inheritance P1 = new Inheritance();
        P1.setinfo("Lorem",9999);
        P1.showinfo();
    }
}
