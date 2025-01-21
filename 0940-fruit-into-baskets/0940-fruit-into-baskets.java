class Solution {
    public int totalFruit(int[] fruits) {
        Map<Integer,Integer> fruitBasket=new HashMap<>();
        int left=0;
        int maxFruits=0;
        for(int right=0;right<fruits.length;right++){
            fruitBasket.put(fruits[right],fruitBasket.getOrDefault(fruits[right],0)+1);
            while(fruitBasket.size()>2){
                fruitBasket.put(fruits[left],fruitBasket.get(fruits[left])-1);
                if(fruitBasket.get(fruits[left])==0){
                    fruitBasket.remove(fruits[left]);
                }
                left++;
            }
            maxFruits=Math.max(maxFruits,right-left+1);
        }
        return maxFruits;
    }
}