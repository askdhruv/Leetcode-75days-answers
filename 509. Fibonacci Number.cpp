class Solution {
public:
    int fib(int n) {
        if (n==0)
            return 0;
        else if(n<2)
            return 1;        
        int arr[n];
            arr[0]=0;
            arr[1]=1;
        for(int i = 1; i<n-1; i++){
            arr[i+1] = arr[i] + arr[i-1];
       }
            int sum = 0;

            sum = arr[n-1] + arr[n-2];
    return sum;
    }
};
