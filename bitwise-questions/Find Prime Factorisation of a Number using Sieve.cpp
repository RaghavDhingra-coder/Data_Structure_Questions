// User function Template for C++

class Solution {
  public:
    void sieve() {}

    vector<int> findPrimeFactors(int n) {

        vector<int>primes(n+1);
        vector<int>ans;
        for(int i=2; i<=n; i++)
        {
            primes[i] = 1;
        }
        
        for(int i = 2; i*i<=n; i++)
        {
            if(primes[i] == 1)
            {
                for(int j= i*i; j<=n; j+=i)
                {
                    primes[j] = 0;
                }
            }
        }
        for(int i=2; i<=n; i++)
        {
            if(primes[i] == 1)
            {
               int t = n;
               
               while(t%i == 0)
               {
                   ans.push_back(i);
                   t = t/i;
               }
            }
        }
        return ans;
    }
};
