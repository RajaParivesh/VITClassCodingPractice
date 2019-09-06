// Paying with string
import java.util.Scanner;

class StringClass{
	//defination string
	String a = "India";
	String b;
	StringClass(){
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a line : ");
		b = s.nextLine();
		System.out.println("This is the String first : "  + a);
		System.out.println("Char at 3 is : "  + b.charAt(3));
		System.out.println("Length of the string : "  + b.length());
		System.out.println("Upper case the string : "  + b.toUpperCase());
		System.out.println("lower case the string : "  + b.toLowerCase());
		System.out.println("Cut the string : "  + b.substring( 1,3));
		
		if(a.equals(b)){
			System.out.println("Both lines are same, i.e : "  + b);
		}else{
			System.out.println("Both lines are different");
		}

		if(a.compareTo(b)>0){
			System.out.println("Value of String \"a\" is greater");
		}else if(a.compareTo(b) ==0){
			System.out.println("Value of String \"a\" is equal");
		}else{
			System.out.println("Value of String \"a\" is lesser");
		}

	// charAt();
	// length();
	// toUpperCase();
	// toLowerCase();
	// substring(stating index no, to );
	// equals()
	// compareTo()
	}
}




class PlayingWithString{
	public static void main(String args[]){
		StringClass s = new StringClass();	
	}
}