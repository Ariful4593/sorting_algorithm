class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid, left = 0, right = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }else if(nums[i] != target){            
                while(left <= right){
                    mid = left + (right - left) / 2;
                    if(nums[mid] == target){
                        return mid;
                    }

                    if(nums[mid] < target){
                        left = mid + 1;
                    }else if(nums[mid] > target){
                        right = mid - 1;
                    }
                }
            }
        }
        return left;
    }
};


//My compiler testing...
/*
#include<iostream>

using namespace std;

int b_search(int arr[], int target){
    int mid, left = 0, right = 3;

    while(left <= right){
        mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(arr[mid] < target){
            left = mid + 1;
        }else if(arr[mid] > target){
            right = mid - 1;
        }else{
            return mid;
        }
    }


}
int main()
{
    int arr[] = {1,3,5,6};

    cout << b_search(arr, 7);

}
*/