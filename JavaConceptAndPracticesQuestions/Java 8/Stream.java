import java.util.*;
import java.lang.*;
import java.io.*;

class Stream{
	public static void main(String args[]){
		List<Integer> l = Arrays.asList(1,2,3,4,5);
		
		//  Stream

		
		// filter
		System.out.print("stream() + Filter() + findFirst() : ");
		// intermediate value
		l.stream().filter(i -> {
			System.out.println(i);
			return true;
		}).findFirst();

		// Map()
		// findFirst()
		// forEach()
		// forEach(i -> System.out.println("L = " + i));

		// Method reference
		// System.out.println("Method reference");
		// l.stream().forEach(System.out :: println);

	}
}