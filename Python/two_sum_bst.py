# Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.
def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
      st = []
      def dfs(node):
          nonlocal st
          if node:
              st.append(node.val)
              dfs(node.left)
              dfs(node.right)
      dfs(root)
      st.sort()
      i=0
      j=len(st)-1
      while i < j:
          s = st[i]+st[j]
          if s == k:
              return True
          elif s > k:
              j -= 1
          else:
              i += 1
      return False
