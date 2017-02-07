class Solution {
    public int[] solution(int[] A, int K) {
        final int MAX = 100;
	        final int MIN = 0;
	        int j;
	        int l = A.length;
	        if( l == 1 || l > MAX || l <= MIN || K > MAX || K <= MIN){ return A; }
	        K=K%l;
	        int[] B = new int [l];
            for( j=0; j<l; j++ ){
            	if( j+K < l ){
            		B[j+K] = A[j];
            	}else{
            		B[j+K-l] = A[j];
            	}
            }
	        return B;
    }
}