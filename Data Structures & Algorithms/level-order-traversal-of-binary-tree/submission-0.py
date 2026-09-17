# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        output = []
        temp_list = []
        if root is None:
            return output
        queue_nodes = deque([root])

        while queue_nodes:
            temp_list = []
            for i in range(len(queue_nodes)):
                node = queue_nodes.popleft()
                temp_list.append(node.val)
                if node.left:
                    queue_nodes.append(node.left)
                if node.right:
                    queue_nodes.append(node.right)
            output.append(temp_list)
        
        return output
        