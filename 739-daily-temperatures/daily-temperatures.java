class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
     int n = temperatures.length;
    Stack<Integer> s = new Stack<>();
    int[] result = new int[n];
  for(int idx = n -1;idx>=0;idx--){
    while(!s.isEmpty() && temperatures[idx]>=temperatures[s.peek()]){
        s.pop();
    }
    if(!s.isEmpty()){
        result[idx] = s.peek() - idx;
    }
s.push(idx);
  } return result;

    }
}