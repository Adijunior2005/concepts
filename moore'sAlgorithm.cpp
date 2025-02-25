#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    int freq=0;
int ans=0;
int n=sizeof(nums);

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
int c=0;
for(int val :nums){
    if(val==ans){
        c++;
    }
}
if (c>n/2){
    return ans;
}
else{return -1;}
}
int main(){
    vector<int>nums={1,2,2,1,1};
    cout<<majorityElement(nums);
    return 0;
}