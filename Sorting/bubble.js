
function bubble_sort(nums){
    for(let i=0; i<nums.length; i++){
        for(let j= i+1; j<nums.length; j++){
            if(nums[j]< nums[i]){
                let temp = nums[i];
                nums[i] = nums[j]
                nums[j] = temp;
            }

        }


    }
    return nums;
}

nums = [5,10,2,8,7,1]
console.log(bubble_sort(nums))