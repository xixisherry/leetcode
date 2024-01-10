2696. 删除子串后的字符串最小长度

给你一个仅由 大写 英文字符组成的字符串 s 。

你可以对此字符串执行一些操作，在每一步操作中，你可以从 s 中删除 任一个 "AB" 或 "CD" 子字符串。

通过执行操作，删除所有 "AB" 和 "CD" 子串，返回可获得的最终字符串的 最小 可能长度。

注意，删除子串后，重新连接出的字符串可能会产生新的 "AB" 或 "CD" 子串

class Solution:
    def minLength(self, s: str) -> int:
        while("AB" in s or "CD" in s):
            s = s.replace("AB", "")
            s = s.replace("CD", "")
        return len(s)
"""
string.replace(old, new[, count])
old: 要被替换的子字符串。
new: 用于替换的新字符串。
count（可选）: 指定替换的次数。如果提供了 count 参数，则只替换前 count 次出现的子字符串
print str.replace("is", "was", 3);
"""
