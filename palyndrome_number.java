class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)                                   
            return false;
        int reversed = 0;            
        int copyOfx = x;
        while(copyOfx!=0){
            reversed = reversed*10+copyOfx%10;  
            copyOfx=copyOfx/10;
        }                                       
        
        return x==reversed;                      
    }
}
