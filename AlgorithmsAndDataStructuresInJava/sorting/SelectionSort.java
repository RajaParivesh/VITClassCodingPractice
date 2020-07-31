import java.util.*;

class SelectionSort{
    private static void printArr(int[] arr) {
        for(Integer i: arr){
            System.out.print(i + " ");
        }
    }

    private static void swap(int[] arr, int i, int minIndex) {
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    private static void section_Sort(int[] arr) {
       
        for(int i = 0; i < arr.length; i++){
            int min = Integer.MAX_VALUE;
            int minIndex = 0;
            for(int j = i; j < arr.length; j++){
                if(arr[j] < min){
                    min = arr[j];
                    minIndex = j;
                } 
            }
            swap(arr, i,minIndex);
        }
        printArr(arr);
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        section_Sort(arr);
    }
}