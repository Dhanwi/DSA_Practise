class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        /*******************WRONG ONE**************** isme example 2 k case handle nhi ho pa rha*/
        // string s="";
        // int n = min(str1.length(), str2.length());
        
        // for(int i=0; i<n; i++){
        //     if(str1[i] == str2[i]){
        //         s += str1[i];
        //     } else{
        //         break;
        //     }
        // }
        // return s;

        if(str1 + str2 != str2 + str1){
            return "";
        }

            int gcdLength = gcd(str1.length(), str2.length());
            
        
        return str1.substr(0, gcdLength);
    }

     int gcd(int a, int b){
                return b == 0 ? a : gcd(b, a%b);
            }
};

/***NOTE: 
Suppose we want to find the GCD of a = 48 and b = 18.

The function starts with the initial values of a = 48 and b = 18.

In the function, we have a ternary conditional operator (? :) that checks if b is equal to 0. If b is equal to 0, the function returns a as the GCD because the GCD of any number and 0 is the number itself.

In our example, b is not equal to 0 (b = 18), so the function proceeds to the else part of the ternary operator, which calls itself recursively with the arguments b and a % b.

a % b calculates the remainder when a is divided by b. In this case, 48 % 18 results in a remainder of 12.

So, the function is called again with the new values a = 18 and b = 12.

Again, it checks if b is equal to 0. In this step, b is not 0, so it goes to the else part.

The function is called recursively once more with a = 12 and b = 6.

It continues this process, calculating a % b and calling itself recursively until b becomes 0. When b becomes 0, the function starts returning the value of a at each step.

The GCD of 48 and 18 is found to be 6, which is the value of a when b becomes 0. */
