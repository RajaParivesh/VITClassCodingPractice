import java.lang.*;
import java.util.Scanner;

class Base{
	String name;
	int roll;
	Scanner s = new Scanner(System.in);
	void read(){
		System.out.println("Input your name: ");
		name = s.nextLine();
		System.out.println("Input your roll: ");
		roll = s.nextInt();
	}

	void display(){
		System.out.println("Your name is : " +  name);
		System.out.println("Your roll is : " +  roll);
	}



}

class BaseCalling{
	public static void main(String args[]){
		Base b = new Base();
		b.read();
		b.display();
	}
}
