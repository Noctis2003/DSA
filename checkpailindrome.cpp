class Solution {
public:
//i can do it in a much better way
// code is gonna be very sexy

long long reverse(long long x){
long long ans=0;
while(x!=0){
    ans=ans*10+x%10;
    x=x/10;
}
return ans;
}
    bool isPalindrome(int x) {
    if(x==reverse(abs(x))){
        return true;
    }
    return false;
    }
};