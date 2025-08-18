function find_nth_largest(nums, n){

    const sorted = nums.sort((a,b) => b-a); // JS hybrid sorting (merger sort + insertion) O(Nlog(N))
    const largest = nums[n-1]; // accessing element O(1) time 
    if( largest){
        return largest
    }
    return 'not in the list';
}

const nums = [20,100,200,300,500,700]
n = 5
console.log(find_nth_largest(nums, n))