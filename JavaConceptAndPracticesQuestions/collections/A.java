import java.util.*;
import java.lang.*;
class A{
	public static void main(String args[]){
		List<Integer> l = new ArrayList<Integer>();
		l.add(1);
		l.add(13);
		l.add(31);
		l.add(14);
		l.add(15);

		Collection.sort(l);
		
		for(int e : l){
			System.out.println(e);
		}
	}
}