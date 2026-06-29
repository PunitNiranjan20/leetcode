class Solution(object):
    def numOfStrings(self, patterns, word):
        """
        :type patterns: List[str]
        :type word: str
        :rtype: int
        """
        a = 0
        for i in range(len(patterns)):
            if patterns[i] in word:
                a = a+1
        return a