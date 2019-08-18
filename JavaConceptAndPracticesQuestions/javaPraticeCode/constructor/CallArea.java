import java.lang.*;
import java.util.Scanner;

class Area {
	
	Area(){
		int a = 14;
		int b = 2;
		System.out.println(a*b);
	}

	Area(int a, int b){
		System.out.println(a*b);
	}

	Area(int a){
		double b = 34.3;
		System.out.println(a*b);
	}
}

class CallArea{
	public static void main(String[] args){
		Area a = new Area();
		Area b = new Area(2,8);
		Area c = new Area(2);
	}
}