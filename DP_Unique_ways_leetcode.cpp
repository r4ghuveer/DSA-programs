class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        botrow=[1]*n
        for i in range (m-1):
            newrow=[1]*n
            for j in range (n-2,-1,-1):
                newrow[j]=newrow[j+1]+botrow[j]
            botrow=newrow
        return botrow[0]
        //its in python, find all possible ways that robot reach end.