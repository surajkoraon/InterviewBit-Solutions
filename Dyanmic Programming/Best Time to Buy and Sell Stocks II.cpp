int Solution::maxProfit(const vector<int> &A) {
     int ans = 0;
    for(int i = 1; i < A.size(); ++i) {
        if(A[i] - A[i-1] > 0) {
            ans += (A[i] - A[i-1]);
        }
    }
    return ans;
}
