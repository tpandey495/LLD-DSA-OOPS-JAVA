package sequential;

public class SequentialExcution {
    public static void main(String[] arg){
      demo1();
      demo2();
    }

    private static void demo1(){
       for(int i=0;i<5;i++){
          System.out.println("From Demo 1  " +i);
       }
    }

    private static void demo2(){
     for(int i=0;i<5;i++){
        System.out.println("From Demo 2  " +i);
     }
    }
}
