import java.util.*;

class sortNumbers{
	public static void main(String args[]){
		ArrayList<String> l = new ArrayList<String>();

		// l.add(1);
		// l.add(25);
		// l.add(37);
		// l.add(46);
		// l.add(5);


		l.add("b");
		l.add("a");
		l.add("z");
		l.add("c");

		Collections.sort(l);
		Iterator itr = l.iterator();
		while(itr.hasNext()){
			System.out.println(itr.next());
		}
	}
}