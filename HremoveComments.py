class Solution:
    def removeComments(self, source: List[str]) -> List[str]:
        return filter(None,re.sub(r'//.*|/\*(.|\n)*?\*/','','\n'.join(source)).split('\n'))
