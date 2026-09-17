# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        output = []
        def right_dfs(node, level):
            if node == None:
                return
            if level == len(output):
                output.append(node.val)
            right_dfs(node.right,level+1)
            right_dfs(node.left,level + 1)
        
        right_dfs(root,0)
        return output
                


        