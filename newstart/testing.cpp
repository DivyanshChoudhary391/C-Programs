# include <iostream>
using namespace std;
int main(){


int lo=0;
        int hi = nums.size(); 
        int mid;

        while(hi-lo==0){
            mid= (hi)/2;
            if(target == nums[mid]){ 
            return mid;    
            }
            if(target<nums[mid]){
                hi=mid-1;
            }
            if(target>nums[mid]){
               lo=mid+1;
            }
            if(nums[lo] == target){cout<<lo}
            if(nums[hi]== target){ }
        }
        cout -1;










}