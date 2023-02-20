// 0x126Day of 0x365Days challenge
// VEDANT BHARAD
// 18-2-2023
int Solution::maxProfit(const vector<int> &A) {
    if(A.size() == 0){
        return 0;
    }
    int toreturn = 0, temp = A[0];
    
    for(int loop = 1; loop < A.size(); loop++){
        if(A[loop] < temp){
            temp = A[loop];
        }
        if(toreturn<A[loop] - temp)
        {
            toreturn=A[loop] - temp;
        }
    }
    return toreturn;
}