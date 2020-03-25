import java.util.*;
import java.io.*;
import java.lang.*;

class InsertionSort{

	static void printArray(int arr[]){
		for(int k=0; k<arr.length; k++)
			System.out.printf("%d ", arr[k]);
		System.out.println();
	}

	static void insertionSort(int arr[]){

		for(int i=1; i < arr.length; i++){
			int temp = arr[i];
			int j;
			for(j=i-1; j >= 0 && arr[j]>temp; j--){
				arr[j+1] = arr[j];
			}
			arr[j+1] = temp; 
		}
		System.out.print("Sorted numbers are : ");
		printArray(arr);
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

		insertionSort(arr);
	}
}