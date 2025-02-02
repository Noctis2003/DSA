class Solution {
  public:
  
    
  
    vector<long long> lcmAndGcd(long long A , long long B) {
    long long a=A;
    long long b=B;
    long long c;
    while(a!=0 && b!=0){
     c=a%b;
        a=b;
        b=c;
    }
    
    long long lcm=A*B/a;
    return {lcm,a};
        
    }
};