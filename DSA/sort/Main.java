import java.util.Scanner;

public class Main{
    public static void main(String[] arg){
           Sort sort=new Sort(10);
           Scanner scanner=new Scanner(System.in);
           for(int i=0;i<10;i++){
            int key=scanner.nextInt();
            sort.add(key);
           }
           scanner.close();
           System.out.println("Original Array:");
           sort.printArray();
           sort.mergeSort();
           System.out.println("Sorted Array:");
           sort.printArray();
    }
}