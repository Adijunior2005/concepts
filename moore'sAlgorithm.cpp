#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    int freq=0;
int ans=0;

for (int i=0;i<nums.size();i++){
    if(freq==0){
        ans=nums[i];
    }
    if (ans==nums[i]){
        freq++;
    }
    else{
        freq--;
    }
}
return ans;


}
int main(){
    int nums[]={1,2,2,1,1};
    majorityElement(nums);
    return 0;
}