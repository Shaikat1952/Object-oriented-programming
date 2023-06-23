public class House {
    int House_price;
    String name;
    public House(String name){
//        constractor called
        System.out.println(name);
    }
    public  void setPrice(int price){
        House_price =  price;
    }

    public int getPrice(){
        return House_price;
    }
    public  static  void  main(String []arg){
        System.out.println("Hello i am main function");
        House obj = new House("Duplex");
        obj.setPrice(1000);
        System.out.println(obj.getPrice());
    }
}
