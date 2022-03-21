import java.util.Scanner;

class Base{
	public int x;
	public int getx() 
	{                                      
		return x;
	}
	public  void setx(int x)
	{
		System.out.println("I am in base class and setting the value");
		this.x=x;
	}
}  
                                       
class Derived extends Base{

		public int y;
		public int gety()    
		{                                      
			return y;
		}
		public  void sety(int y)
		{
			System.out.println("I am in derived  class and setting the value");
			this.y=y;
		}
}                                         
public class InheritanceExample
{
	public static void main(String[] args)
	{
		Base  b = new Base();
		b.setx(45);
		System.out.println(b.getx());
	
		Derived d =new Derived();
		d.sety(50);
		System.out.println(d.gety());
}
}


