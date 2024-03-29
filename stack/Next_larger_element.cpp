//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        //wrong code
    //     long long res;
    //     for (int i=0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //             if(arr[i]<arr[j]){
    //                 res=arr[j];
    //                 break;
    //             }
    //             else{
    //                 res=-1;
    //                 break;
    //             }
    //         }
    //     }
    //     vector<long long int>a1;
    //     for(int i=0; i<n; i++){
    //         a1.push_back(res);
    //     }
    //     return a1;
           
       
        
        vector<long long> result(n, -1); // Initialize result vector with -1 for each element
        
        stack<long long> st;  //stack contain indexes
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[i] > arr[st.top()])
            {
                result[st.top()] = arr[i];
                st.pop();
            }
            st.push(i); //stack contain indexes
        }

        return result;
    
     }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
