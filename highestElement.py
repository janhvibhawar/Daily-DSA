def highestOccurringElement(nums):
    if not nums:
        return None

    hashMap = {}
    maxElement = nums[0]
    maxCount = 0

    for num in nums:
        hashMap[num] = hashMap.get(num,0)+1

        if hashMap[num] > maxCount or (hashMap[num] == maxCount and num<maxElement):
            maxCount = hashMap[num]
            maxElement = num
    
    return maxElement
