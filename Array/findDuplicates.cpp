//Find duplicates using hash map -- -(time complexity- O(n))
#include <bits/stdc++.h>
using namespace std;
vector<int>FindDuplicates(int a[],int n )
{
   vector<int>ans;
   unordered_map<int,int>duplicates;
   for(int i=0;i<n;i++)
   {
     duplicates[a[i]]++;
   }
   for(auto it:duplicates)
   {
       if(it.second>1) ans.push_back(it.first);//first means the key value and second means the element
   }
   if(ans.size()== 0) ans.push_back(-1);
   sort(ans.begin(),ans.end());
   return ans;
}

int main() {
   
    int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> output = FindDuplicates(a, 8);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}