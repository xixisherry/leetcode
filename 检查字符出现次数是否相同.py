from collections import Counter

class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        freq = Counter(s)   # 每个字符的实际频数
        occ = len(s) // len(freq)    # 每个字符的理论频数
        return all(v == occ for v in freq.values())

# all() python内置函数，当内部全为true时返回true，否则返回false
# values() 返回所有字典中的值
