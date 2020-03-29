class Solution:
    def brokenCalc(self, X: int, Y: int) -> int:
        if Y<X:
            return X-Y
        ans=0
        while Y>X:
            ans+=1
            if not Y%2:
                Y/=2
            else:
                Y+=1
        return int(ans+X-Y)
