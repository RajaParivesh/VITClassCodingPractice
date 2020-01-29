import java.util.Scanner;

class FirstDuplicateElement{
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int ar[]=new int[n];
			
		for(int i=0; i<n; i++){
			ar[i]=s.nextInt();	
		}
		boolean flag=true;
		for(int i=0; i<n; i++){
			for (int j=i; j<n-1; j++){
				if(ar[i]==ar[j+1]){
					System.out.println("First Duplicate element is : "+ar[i]);
					flag=false;
				}
			}
		}
		if(flag){
			System.out.println("No duplicate element found");
		}
	}
}