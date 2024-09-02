#include<bits/stdc++.h>
using namespace std; 
vector<int> printDivisors(int n)
{
    vector<int>ans;
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal, print only one
            if (n / i == i)
               ans.push_back(i);
            else // Otherwise print both
                {
                     ans.push_back(i) ;
                     ans.push_back(n/i);
                }
        }
    }
    return ans;
}

int main(){

    vector<int>ans=printDivisors(30);
    sort(ans.begin(),ans.end());
    vector<int>nums={0,5,10,15,20,25};
 for(auto i:ans)
 {
    cout<<i<<" ";
 }
cout<<"hello";
    for(auto i:ans)
    {
        cout<<*lower_bound(nums.begin(),nums.end(),i-1)<<" ";
    }

return 0;
}