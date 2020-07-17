import java.util.*;
import java.lang.*;
import java.io.*;

class Lambda{
	public static void main(String args[]){
		List<Integer> l = Arrays.asList(1,2,3,4,5);
		
		// Advance For loop
		System.out.println("Advance For loop");
		for(Integer i: l) 
			System.out.println(i);

		// Lambda function
		System.out.println("Lambda function");
		l.forEach(i -> System.out.println("L = " + i));

		// Method reference
		System.out.println("Method reference");
		l.forEach(System.out :: println);

	}
}