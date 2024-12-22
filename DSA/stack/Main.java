import java.util.Scanner;


public class Main{
    public static void main(String[] arg){
           Stack st=new Stack(10);
           Scanner scanner=new Scanner(System.in);
           for(int i=0;i<10;i++){
            int key=scanner.nextInt();
            st.add(key);
           }
           scanner.close();
           System.out.println(st.pop());
           System.out.println(st.stackTop());
    }
}