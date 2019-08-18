import java.lang.*;
import java.util.Scanner;

class AddTwoNumbers {

	static int add(int a, int b){
		return a+b;
	}

	public static void main(String args[]){
		int f=1, n1, n2;
		Scanner s = new Scanner(System.in);
		System.out.println("Input first number: ");
		n1= s.nextInt();
		System.out.println("Input second number: ");
		n2= s.nextInt();
		
		System.out.println("Addition of both the numbers are :  " + add(n1,n2));
	}
}