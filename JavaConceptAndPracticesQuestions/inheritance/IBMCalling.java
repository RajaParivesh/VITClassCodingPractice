class IBM extends Emp{
	double inc;
	IBM(int i, String n, double b, double inct){
		super(i,n,b);
		inc = inct;
	}

	void sal(){
		gross = basic + (basic*0.25) + inc;
		System.out.println(gross);
	}
}

class IBMCalling{
	public static void main(String args[]){
		Emp obj1 = new Emp(1, "Rohit", 3);
		IBM obj2 = new IBM(1,"Raja",2,5);
		obj1.sal();
		obj2.sal();
		obj2.show();
	}
}