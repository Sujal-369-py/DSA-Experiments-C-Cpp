class Node :
    def __init__(self,value):
        self.value = value
        self.next = None


a = Node(1)
print(a.next)
print(a.value)