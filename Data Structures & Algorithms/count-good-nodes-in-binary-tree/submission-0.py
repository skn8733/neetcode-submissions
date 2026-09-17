# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        if not root:
            return 0
        count = 0
        queue_node = deque([(root,root.val)]) # [root,max]
        while queue_node:
            node, max_value = queue_node.popleft() #
            if node.val >= max_value:
                count += 1
            max_value = max(max_value, node.val)
            if node.left:
                queue_node.append((node.left, max_value))
            if node.right:
                queue_node.append((node.right, max_value))

        return count
    

            

        