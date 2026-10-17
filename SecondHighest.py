def secondHighestOccurringElement(arr):
    if not arr:
        return -1

    hashMap = {}
    for num in arr:
        hashMap[num] = hashMap.get(num,0) + 1

    uniqueFrequency = sorted(list(set(hashMap.values())), reverse = True)

    if len(uniqueFrequency) < 2:
        return -1

    secondHighestFreq = uniqueFrequency[1]

    candidates = []
    for num,count in hashMap.items():
        if count == secondHighestFreq:
            candidates.append(num)

    return min(candidates)
