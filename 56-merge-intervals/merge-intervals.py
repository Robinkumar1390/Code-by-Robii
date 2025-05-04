class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        list= []
        for i in intervals:
            if not list or list[-1][1] < i[0]:
                list.append(i)
            else:
                list[-1][1] = max(list[-1][1], i[1])
        return list