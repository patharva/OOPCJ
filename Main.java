class vegetable{
    public static void vegg(){System.out.println("IT IS A VEGETABLE.!");}
}

class potato extends vegetable{
    public static void vegg(){System.out.println("POTATO");} 
}

public class Main{
    public static void main(String[] args){
    potato obj = new potato();
    obj.vegg();
}
}