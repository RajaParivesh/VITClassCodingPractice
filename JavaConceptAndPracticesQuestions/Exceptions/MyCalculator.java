import java.util.Scanner;
class MyCalculator{

	public static long power(int n, int p){
		return (long) Math.pow(n,p);
	}

	public static void main(String args[]){
		int n, p, flag =1;
		long res =0;
		Scanner ssc = new Scanner(System.in);
		n = sc.nextInt();
		p = sc.nextInt();
		
		try{
			if(n==0 && p==0)
				throw new Exception("Both n and p should not be zero");
		}catch(Exception e){
			System.out.println(e+ "");
			flag =0;
		}
		try{
			if(n<0 || p<0)
				throw new Exception("n and p should be non-negative");
		}catch(Exception e){
			System.out.println(e+ "");
			flag =0;
		}
		if(flag==1){
			res = MyCalculator.power(n,p);
			System.out.println(res);
		}
	}

}