import java.util.Scanner;

class emp{
   int emp_id;
   String name;
  public void getdata()
  {
      Scanner scan = new Scanner(System.in);
      System.out.println("Enter the name of name of the employee");
      name=scan.nextLine();
      System.out.println("Enter the id of the employee");
      emp_id=scan.nextInt();
      scan.nextLine();
  }
  void putdata()
  {
      System.out.println("The name of the employee is:" + name);
      System.out.println("The id of the employee is:" + emp_id);
  }
   /*void earning()
   {
       System.out.println("The skjdnwjdaj");
   }*/
   
}

class emp2 extends emp{
	int wages;
	int hours;
	public void getdata()
	{
		super.getdata();
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the wages of the employee");
        wages=scan.nextInt();
        scan.nextLine();
        System.out.println("Enter the hours worked by the employee");
        hours=scan.nextInt();
        scan.nextLine();
	}
	public void putdata()
    {
        super.putdata();
        System.out.println("The wages of teh employee is:" + wages);
        System.out.println("The hours worked by the employee is:" + hours);
    }
    /*public void earning()
    {
        int hoursal;
        hoursal=wages*hours;
        System.out.println("The wages of the employee is:" + hoursal);
        
    }*/
	

}


public class Main{
public static void main(String []args)
{
    emp e = new emp2();
    
    
    e.getdata();
    e.putdata();
    //e.earning();
    //h.getdata();
    //h.putdata();
    //h.earning();
}
}
















		