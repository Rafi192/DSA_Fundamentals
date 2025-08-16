const nums = [80,52,6,9,2,3,0,100]

// ascending order sorting by selection sort
function selection_sort(nums){
    for(let i=0; i<nums.length; i++){
        let curr_min = i;

    for (let j=i+1; j<nums.length; j++){
        if(nums[j] < nums[curr_min]){
            curr_min = j; // Tracking the index till the end of the array where min element is

        }     

    }
    // after the first pass, we are assigning the curr_min value into the i index
    
    if(curr_min != i){
        let temp = nums[i];
        nums[i] = nums[curr_min];
        nums[curr_min] = temp;  
    }
  

}
return nums;

}

console.log(selection_sort(nums))
