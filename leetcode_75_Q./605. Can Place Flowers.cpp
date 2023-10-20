// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int l= flowerbed.size();
        
    
//         for(int i=1; i<flowerbed.size()-1; i++){
//             if(flowerbed[0]==0 && flowerbed[1]==0 && flowerbed[2]==1){
                    
//             flowerbed[0]=1;
            
//             }
//             if(flowerbed[l-3]==1 && flowerbed[l-2]==0 && flowerbed[l-1]==0){
//             flowerbed[l-1]==1;
            
//             }

//             else if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
//                     flowerbed[i]=1;
                    
//                 }
                
                
//                 n--;
//             }
        
//         if(n == 0){
//             return true;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = flowerbed.size();
        if (n == 0) {
            return true;  // No flowers to plant.
        }

        for (int i = 0; i < l; i++) {
            if (flowerbed[i] == 0) {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == l - 1 || flowerbed[i + 1] == 0)) { //yha is line me wo 3 case handle kr rkha h, jise maine upad alg alg likha tha that is: 
      //          "_0 0 0 _" , "0 0 _" and "_ 0 0" mtlb bitch k case, starting case & end case
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        return n <= 0;
    }
};
