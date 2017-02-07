class Solution {
    public int solution(int[] A) {
        int i=1, j=0, k;
        for(k=1; k<A.length+1; k++){
            i=i+k+1;
            j=j+A[k-1];
        }
        return i-j;
    }
}