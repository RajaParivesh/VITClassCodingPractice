import java.util.*;

class test{
	static boolean Pallindrome(String n){
		
		String rev="";

		for(int i = n.length() - 1; i >= 0; i--)
        {
            rev = rev + n.charAt(i);
        }

		System.out.println(rev);
		
		if(n.compareTo(rev)==0)
			System.out.println("equals");
		else if(n.compareTo(rev)>0)
			System.out.println("greater");
		else if(n.compareTo(rev)<0)
			System.out.println("lesser");
		
		// if(n.equals(rev))
		// 	return true;
		// else 
			return false;

		


	}
	public static void main(String args[]){

		Scanner s = new Scanner(System.in);
		
		System.out.println(Pallindrome(s.next()));

	}
}