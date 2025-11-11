class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = ''
        word1_len = len(word1)
        word2_len = len(word2)
        
        for i in range(max(word1_len, word2_len)):
            if i< word1_len:
                result += word1[i]
            if i < word2_len:
                result += word2[i] 

        return result

# class Solution:
#     def mergeAlternately(self, word1: str, word2: str) -> str:
#         result = ''
#         i = j = 0
#         len1, len2 = len(word1), len(word2)
        
#         # Alternate adding characters while both have remaining letters
#         while i < len1 and j < len2:
#             result += word1[i]
#             result += word2[j]
#             i += 1
#             j += 1
        
#         # Add remaining letters from the longer word
#         result += word1[i:]
#         result += word2[j:]
        
#         return result
