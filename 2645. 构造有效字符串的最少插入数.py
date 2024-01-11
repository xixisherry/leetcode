"""
给你一个字符串 word ，你可以向其中任何位置插入 "a"、"b" 或 "c" 任意次，返回使 word 有效 需要插入的最少字母数。

如果字符串可以由 "abc" 串联多次得到，则认为该字符串 有效 。

示例 1：
输入：word = "b"
输出：2
解释：在 "b" 之前插入 "a" ，在 "b" 之后插入 "c" 可以得到有效字符串 "abc" 。

示例 2：
输入：word = "aaa"
输出：6
解释：在每个 "a" 之后依次插入 "b" 和 "c" 可以得到有效字符串 "abcabcabc" 。

示例 3：
输入：word = "abc"
输出：0
解释：word 已经是有效字符串，不需要进行修改。 
"""
class Solution:
    def addMinimum(self, word: str) -> int:
        n = len(word)
        d = [0] * (n + 1)
        for i in range(1, n + 1):
            d[i] = d[i - 1] + 2
            if i > 1 and word[i - 1] > word[i - 2]:
                d[i] = d[i - 1] - 1
        return d[n]

