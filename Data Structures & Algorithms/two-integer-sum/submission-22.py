class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = 0
        r = 1
        for i in range(l, len(nums)):
            for j in range(r, len(nums)):
                if (nums[i] + nums[j]) == target:
                    return [i, j]
            l = l + 1
            r = r + 1
        return