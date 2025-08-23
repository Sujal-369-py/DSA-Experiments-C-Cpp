class Node: 
    def __init__(self,val,height):
        self.val = val 
        self.left = None
        self.right = None
        self.height = height


class Avl:
    def balance_factor(self, root): 
        if root is None: 
            return 0 
        left = self.balance_factor(root.left)
        right = self.balance_factor(root.right)
        return 1 + (left - right)
    
    
