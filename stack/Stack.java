public class Stack{
    int top;
    int capcity;
    int[] arr=new int[capcity];
    Stack(int capacity){
        this.top=-1;
        this.capcity=capacity;
        this.arr=new int[capacity];
    }
    public void add(int key){
            if(top==capcity-1)
               return;
            top=top+1;
            arr[top]=key;
       }
    public int pop(){
           if(top==-1)
              return -1;
           int item=arr[top];
           top=top-1;
           return item;
       }
    public int stackTop(){
          if(top==-1)
            return -1;
          return arr[top];
       }
};

