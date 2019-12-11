import java.lang.*;
import java.util.*;

class arrayList{
	public static void main(String args[]){
		ArrayList al = new ArrayList();
		al.add("A");
		al.add(1);
		al.add(null);

		System.out.println(al);
		al.remove(1);
		al.remove(1);
		System.out.println(al);

	}
}