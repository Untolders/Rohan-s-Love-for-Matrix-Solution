#################################################################################  Question  ###################################################################################################################################################


Rohan has a special love for the matrices especially for the first element of the matrix. Being good at Mathematics, he also loves to solve the different problem on the matrices. So one day he started to multiply the matrix with the original matrix.  The elements of the original matrix a are given by [a00=1 , a01=1, a10=1, a11=0].
Given the power of the matrix, n calculate the an and return the a10 element mod 1000000007.

Example 1:

Input: 
n = 3
Output: 
2 
Explanation: Take the cube of the original matrix 
i.e a3 and the (a10)th element is 2.
Example 2:

Input: 
n = 4
Output: 
3
Explanation: Take the cube of the original matrix 
i.e a4 and the (a10)th element is 3.
Your Task:  
You dont need to read input or print anything. Complete the function firstElement() which takes n as input parameter and returns the a10 element mod 1000000007 of an.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1<= n <=106







##################################################################################  Solution  ##################################################################################################################################################


  //{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
       int mod=1000000007;
       
       int a[2][2];
       int ans[2][2];
       ans[0][0]=a[0][0]=1;
       ans[0][1]=a[0][1]=1;
       ans[1][0]=a[1][0]=1;
       ans[1][1]=a[1][1]=0;
       
       
       
       while(n>1){
           int p=ans[0][0];
           ans[0][0]=((ans[0][0]*a[0][0])+(ans[0][1]*a[1][0]))%mod;
          
           ans[0][1]=((p*a[0][1])+(ans[0][1]*a[1][1]))%mod;
           int c=ans[1][0];
           ans[1][0]=((ans[1][0]*a[0][0])+(ans[1][1]*a[1][0]))%mod;
           
           ans[1][1]=((c*a[0][1])+(ans[1][1]*a[1][1]))%mod;
           
           
           n--;
       }
        return ans[1][0];   
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
