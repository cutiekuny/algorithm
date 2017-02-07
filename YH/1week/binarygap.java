class Solution {
    public int solution(int N) {
        // write your code in Java SE 8
        int i;
	    int count = 0, tmp1=0, tmp2=0, chk=0;

        

	    for(i=0; N>0 ; i++){
	    	tmp2 = N%2;
	    	if(tmp2 == 1){
	    	   chk = 1; 
	    	}
	    	if(chk == 1){
    	    	if(tmp2==0){
    	    	    count++;
    	    	}else{
    	    	    if(tmp1<count){
        	    	    tmp1 = count;
    	    	    }
    	    	    count = 0;   
    	    	}
	    	}
	    	N = N/2;
	    }
	    return tmp1;
    }
}