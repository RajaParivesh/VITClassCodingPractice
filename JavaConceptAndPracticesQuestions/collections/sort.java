import java.util.*;

class Sort{
	public static void main(String args[]){
		ArrayList<Integer> l = new ArrayList<Integer>();

		l.add(1);
		l.add(3);
		l.add(14);
		l.add(15);
		l.add(162);
		l.add(71);

		Collections.sort(l);
		Iterator i = l.iterator();
		while(i.hasNext()){
			System.out.println(i.next());
		}
	}
}