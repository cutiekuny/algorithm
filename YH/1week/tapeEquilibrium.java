class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        int i, j, k, l=0;
        k = A.length;
        int[] B = new int[A.length];
        int[] C = new int[A.length+1];
        B[0] = 0;
        C[k] = 0;
        for(i=1; i<k; i++){
            B[i] = B[i-1] + A[i-1];
            C[k-i] = C[k-i+1] + A[k-i];
        }
        for(i=1; i<k; i++){
            B[i] = B[i] - C[i];
            // |x|
            if(B[i]<0){
                B[i] = -B[i];
            }
            // minimal value
            if(B[i]<l || i==1){
                l = B[i];
            }
        }
        return l;
    }
}