for(int i=1;i<n;i++) {
        if(nums[i] == nums[i-1]) {
            nums.erase(nums.begin()+i);
            n = nums.size();
        }
    }