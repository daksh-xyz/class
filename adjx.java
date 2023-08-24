public class adjx {
    public static void main(String[] args) {
        int a[][] = {{10,8,9}, {5,4}, {7,2,1}};
        int max=a[0][0], min= a[0][0];
        for(int i=0; i< a.length; i++){
            for(int j=0; j<a[i].length;j++){
                if(a[i][j] > max){
                    max=a[i][j];
                    break;
                }
            }
            for(int j=0; j<a[i].length; j++){
                if(a[i][j] < min){
                    min = a[i][j];
                    break;
                }
            }
            System.out.println("Greatest element of " + i + " row:" +max);
            System.out.println("Smallest element of " + i + " row:" +min);
            System.out.println();
            if(i<a.length-1){
                max=a[i+1][0];
                min = a[i+1][0];
            }
        }
    }
}
