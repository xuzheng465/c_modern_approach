class TreeNode:
    def __init__(self, val):
        self.val = val
        self.traverse_path = []
        self.left, self.right = None, None

    def preorder(self, root):
        if root:
            self.traverse_path.append(root.val)
            self.preorder(root.left)
            self.preorder(root.right)

    def inorder(self, root):
        # if root:

        #     self.preorder(root.left)
        #     # self.traverse_path.append(root.val)
        #     print(root.val)
        #     self.preorder(root.right)
        # # print(self.traverse_path)
        # else:
        #     return
        if root is None:
            return
        self.inorder(root.left)
        self.traverse_path.append(root.val)
        self.inorder(root.right)

        # if root is None:
        #     return
        # self.inorder(root.left)
        # print(root.val, end=' ')
        # self.inorder(root.right)

    def postorder(self, root):
        if root:
            self.preorder(root.left)
            self.preorder(root.right)
            self.traverse_path.append(root.val)

    def inoder_stack(self, root):
        cur = root
        stack = []
        done = 0

        while True:
            # Reach the left most Node of the current Node
            if cur is not None:
                # Place pointer to a tree node on the stack
                # before traversing the node's left subtree
                stack.append(cur)
                cur = cur.left

            # Backtrack from the empty subtree and visit the Node
            # at the top of the stack; however, if the stack is empty you are done
            elif (stack):
                cur = stack.pop()
                print(cur.val, end=" ")
                cur = cur.right

            else:
                break
        print()


""" Constructed binary tree is 
                1 
             /    \ 
            2      3 
        /     \ 
       4       5   """
if __name__ == "__main__":
    # Driver program to test above function

    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    root.inoder_stack(root)
    root.inorder(root)
    print(root.traverse_path)
