import java.lang.*;
import java.util.Scanner;

class Fact {
	public static void main(String args[]){
		int f=1, n;
		Scanner s = new Scanner(System.in);
		System.out.println("Input a number: ");
		n = s.nextInt();
		if(n < 0){
			System.out.println("Invaild input");
			return ;
		}
		for(int i=1; i <= n; i++){
			f = f * i; 
		}
		System.out.println("Factorial :  " + f);
	}
}