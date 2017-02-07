class Solution {
int result;
    public int solution(int[] A) {
	HashSet<Integer> B = new HashSet<>();
        for(int i=0; i<A.length; i++){
            if(B.contains(A[i])){ // 값 있으면 지우고
        	B.remove(A[i]);
            }else{ // 없으면 추가
        	B.add(A[i]);
            }
            // 끝까지 남은 것 체크.
           //result = ;
        }
        
        // 대괄호 제거하고 숫자만 뽑기
        Pattern p = Pattern.compile("\\[(.*?)\\]");
        Matcher m = p.matcher(B.toString());
        while(m.find()){ // find를 선행해야 함.
            result = Integer.parseInt(m.group(1));
            System.out.println(m.group(1));
        }
        return result;

    }
}