public class Sort {
    int cap;      
    int size;     
    int[] arr;    

    Sort(int capacity) {
        this.cap = capacity;
        this.arr = new int[capacity];
        this.size = 0; 
    }

    void add(int item) {
        if (size < cap) {
            arr[size++] = item; 
        } else {
            System.out.println("Array is full, cannot add more items.");
        }
    }

    void merge(int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int[] L = new int[n1];
        int[] R = new int[n2];
        
        for (int i = 0; i < n1; i++) {
            L[i] = arr[l + i];
        }
        for (int j = 0; j < n2; j++) {
            R[j] = arr[m + 1 + j];
        }
       
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
            }
        }

        while (i < n1) {
            arr[k++] = L[i++];
        }

        while (j < n2) {
            arr[k++] = R[j++];
        }
    }

    void mergeSortHelper(int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;
            mergeSortHelper(l, mid);
            mergeSortHelper(mid + 1, r);
            merge(l, mid, r);
        }
    }

    void mergeSort() {
        if (size > 0) {
            mergeSortHelper(0, size - 1);
        }
    }
    //Quick Sort
    void Partition(){

    }

    void QuickSort(){
        
    }

    void printArray() {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
