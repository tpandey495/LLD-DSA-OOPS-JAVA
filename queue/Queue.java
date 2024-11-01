public class Queue {
    int front = 0;
    int rear = 0;
    int capacity;
    int[] arr;

    Queue(int capacity) {
        this.capacity = capacity;
        this.arr = new int[capacity];
    }

    public void push(int item) {
        if (rear == capacity) {
            System.out.println("Queue is Full");
            return;
        }
        arr[rear] = item;
        rear++;
    }

    public void pop() {
        if (front == rear) {
            System.out.println("Queue is Empty");
            return;
        }
        front++;
    }

    public int frontItem() {
        if (front == rear) {
            System.out.println("Queue is Empty");
            return -1;
        }
        return arr[front];
    }
}
