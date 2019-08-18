import java.lang.*;
import java.util.Scanner;

class Derived extends Base{
	String address;
	int rank;
	Scanner s = new Scanner(System.in);
	void readDetails(){
		System.out.println("Input your address: ");
		address = s.nextLine();
		System.out.println("Input your rank: ");
		rank = s.nextInt();
	}

	void display(){
		System.out.println("Your address is : " +  address);
		System.out.println("Your rank is : " +  rank);
	}
}

class DerivedCalling{
	public static void main(String args[]){
		Base a = new Base();
		Derived b = new Derived();
		a.read();
		b.readDetails();
		a.display();
		b.display();
	}
}
