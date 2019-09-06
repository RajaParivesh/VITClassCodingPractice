class Emp{
	int id;
	String name;
	double basic, gross;

	Emp(int i, String nm, double b){
		i = id;
		name = nm;
		basic = b;
	}

	void sal(){
		gross = basic + (basic*0.50) + (basic*0.2);
	}

	void show(){
		System.out.println("Id : " + id);
		System.out.println("Name : " + name);
		System.out.println("Basic : " + basic);
		System.out.println("Gross : " + gross);

	}
}