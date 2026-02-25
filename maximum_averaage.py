class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        window=sum(nums[:k])
        maxi=window
        for i in range(k,len(nums)):
            window+=nums[i]-nums[i-k]
            maxi=max(maxi,window)
        return maxi/k