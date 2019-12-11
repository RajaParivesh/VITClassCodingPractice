import java.util.*;

class sortString{
	public static void main(String args[]){

		ArrayList<String> l = new ArrayList<String>();

		l.add("raja");
		l.add("baja");
		l.add("kaja");
		l.add("taja");

		System.out.println("=========");
		System.out.println(l.get(0));
		System.out.println(l.size());
		System.out.println("=========");

	
		Collections.sort(l);
		Iterator i = l.iterator();

		while(i.hasNext()){
			System.out.println(i.next());
		}
	}
}

