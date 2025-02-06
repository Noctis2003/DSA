class Solution {
public:
// its is very easy
// how do i do it?
    int reverse(int x) {
        long long  ans=0;
        int  i=0;
        int  n=0;
        int  test=x;
         while(test!=0){
           test=test/10;
            n++;
        }
        bool lola=true;
        if(x<0){
           lola= false;
        }
        x=abs(x);
        while(x!=0){
            ans=ans+(x%10)*pow(10,n-i-1);
            i++;
            x=x/10;
        }
  if(ans>pow(2,31)-1 ){
    return 0;
  }     
  if(ans<-pow(2,31)){
    return 0;
  } 
if(lola==false){
    return ans*(-1);
}
else{
    return ans;
}
    }
};