import java.lang.*;

class A {
	
	A(){
		System.out.println("This is the first function");
	}

	A(int a){
		a = 10; 
		System.out.println("This is the second function");
	}

}

class FunctionOverloading{
	public static void main(String args[]){
		A obj1 = new A();
		A obj2 = new A(3);
	}
}