import Bank.*;

public class UseofPackage {
    public static void main(String [] arg){
        Bank.info Account1 = new Bank.info();
        Account1.name = "Shaikat";
        Account1.email = "asmshaikat1952@gmail.com";
        System.out.println("Account name: "+Account1.name);
        System.out.println("Account email:  "+Account1.email);
        System.out.println("Account password:  "+Account1.getPassword());
        System.out.println("Nomini name:  "+Account1.setNomineName());

    }
}
