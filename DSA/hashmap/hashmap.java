import java.util.*;

//finding frequency in an array

public class hashmap {
    public static void main(String [] args){
        HashMap<Integer,Integer> freq = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int [] arr = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            freq.put(arr[i],freq.getOrDefault(arr[i],1));
//            if(freq.containsKey(arr[i])){
//               freq.put(arr[i],freq.get(arr[i])+1);
//            }
//            else {
//                freq.put(arr[i],1);
//            }
        }

//        freq.remove(2);

        freq.clear();

        System.out.println(freq.keySet());

        for(int key: freq.keySet()){
            System.out.println(key+"+=>"+freq.get(key));
        }
        sc.close();
    }
}
