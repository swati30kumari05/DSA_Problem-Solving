class MyStack {

    public MyStack() {
    }
     Queue<Integer>pri = new ArrayDeque<>();
     Queue<Integer>sec = new ArrayDeque<>();
    public void push(int x) {
     sec.offer(x);
     while(!pri.isEmpty()){
        sec.offer(pri.poll());
     }
     Queue<Integer>temp = pri;
     pri = sec;
     sec = temp;
    }
    
    public int pop() {
        return pri.poll();
    }
    
    public int top() {
        return pri.peek();
    }
    
    public boolean empty() {
     return pri.isEmpty();
 }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */