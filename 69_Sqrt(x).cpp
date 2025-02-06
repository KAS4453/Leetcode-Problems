class Solution {
public:
    int mySqrt(int x) {
        long long i=1, sqr, sqrplus;
        while(i!=0){
            sqr = i*i;
            i++;
            sqrplus = i * i;
            if(x >= sqr && x < sqrplus){
                return i-1;
            }
        }
        return 0;
    }
    
};
