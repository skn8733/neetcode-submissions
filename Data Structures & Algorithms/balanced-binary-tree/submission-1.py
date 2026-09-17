# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:

    def height_calculation(self, node):
        if node is None:
            return 0
        return 1 + max(self.height_calculation(node.left), self.height_calculation(node.right))

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        
        height_left = self.height_calculation(root.left)
        height_right = self.height_calculation(root.right)

        if abs(height_left - height_right) <= 1 and self.isBalanced(root.left) and self.isBalanced(root.right):
            return True

        return False


        