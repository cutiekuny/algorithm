class Solution {
int result;
    public int solution(int[] A) {
	HashSet<Integer> B = new HashSet<>();
        for(int i=0; i<A.length; i++){
            if(B.contains(A[i])){ // �� ������ �����
        	B.remove(A[i]);
            }else{ // ������ �߰�
        	B.add(A[i]);
            }
            // ������ ���� �� üũ.
           //result = ;
        }
        
        // ���ȣ �����ϰ� ���ڸ� �̱�
        Pattern p = Pattern.compile("\\[(.*?)\\]");
        Matcher m = p.matcher(B.toString());
        while(m.find()){ // find�� �����ؾ� ��.
            result = Integer.parseInt(m.group(1));
            System.out.println(m.group(1));
        }
        return result;

    }
}