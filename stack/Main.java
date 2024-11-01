public class Main{
    public static void main(String[] arg){
           Stack st=new Stack(10);
           st.add(1);
           st.add(2);
           st.add(3);
           System.out.println(st.pop());
           System.out.println(st.stackTop());
    }
}