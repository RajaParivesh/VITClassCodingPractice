class ObjectOfArray{
	public static void main(String args[]){
	String name = "Raja ";
	int roll = 19;
	String address = "Delhi";
	Object arr[] = {name,roll,address};
	System.out.println("--------------");
		for (Object k: arr) {
			System.out.println(k);
		}		
	}
}