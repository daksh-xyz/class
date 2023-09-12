public class Test{
    static void minArray(int[] arr){
        int min = arr[0];
        for(int i=0; i<5; i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        System.out.println(min);
    }
    public static void main(String[] args) {
        int[] arr = {33, 4, 5,6,7};
        minArray(arr);
    }
}