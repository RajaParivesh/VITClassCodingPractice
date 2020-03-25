import java.util.*;
import java.io.*;
import java.lang.*;

class HeapSort{

	static void heapSort(int arr[]){
		PriorityQueue<Integer> pQ = new PriorityQueue<Integer>(); 
  		
  		for(int i=0; i<arr.length; i++){
  			pQ.add(arr[i]);
  		}

  		while(pQ.size()>0)
  			System.out.printf("%d ", pQ.poll());
	}

	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number : ");
		int n = s.nextInt();
		int arr[] = new int[n];

		for(int i=0; i<n; i++){
			System.out.printf("\nEnter number %d : ", i+1);
			arr[i] = s.nextInt();
		}
		heapSort(arr);
	}
}
