int Solution::repeatedNumber(const vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int xor1=a[0];
    for (int i=1;i<a.size();i++)
    {
        xor1 ^= a[i];
        xor1 ^= i;
    }
    return xor1;


}
