class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        List<Integer> result=new ArrayList<>();

        result.add(0);
        for(int i:flowerbed){
            result.add(i);
        }
        result.add(0);

        for(int i=1;i<result.size()-1;i++){
            if (result.get(i)==0 && result.get(i-1)==0 && result.get(i+1)==0){
                result.set(i,1);
                n--;
                if (n==0){return true;}
            }
        }
        return n<=0;
    }
}



"""
Concept Used:
Greedy placement + virtual boundary padding

Time Complexity:
O(n)

Space Complexity:
O(n)
"""