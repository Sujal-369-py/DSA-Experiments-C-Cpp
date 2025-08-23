class Node:
    def __init__(self,val): 
        self.data = val
        self.next = None


class LinkedList: 
    def __init__(self):
        self.start = None
        self.last = None
        self.count = 0
    def insert_at_beg(self,val): 
        if self.start == None: 
            self.start = Node(val) 
            self.last = self.start
        else: 
            temp = Node(val) 
            temp.next = self.start 
            self.start = temp 
        self.count+=1
    def insert_at_end(self,val): 
        if self.last != None:
            temp = Node(val)
            self.last.next = temp
            self.last = temp
        else: 
            temp = Node(val) 
            self.last = self.start = temp
        self.count+=1
    def insert_at_pos(self,val,pos):
        if pos < 1 and pos > self.count: 
            print("Invalid position")
            return
        search = self.start 
        sl = None 
        for i in range(pos-1):
            sl = search
            search = search.next 
        temp = Node(val)
        sl.next = temp 
        temp.next = search
        self.count+=1        
    def traverse(self):
            temp = self.start 
            while temp != None: 
                print(temp.data,end=" ") 
                temp = temp.next
    def reverse(self,search):
        sl = None
        while search != None: 
            temp = search.next 
            search.next = sl 
            sl = search 
            search = temp
        return sl
    def swap_even(self,head):
        if head is None or head.next is None: return head
        sl = head
        search = head.next 
        pre = None
        first_time = True 
        while search: 
            temp = search.next
            search.next = sl
            sl.next = temp 
            if first_time: 
                first_time = False 
                head = search
            else: 
                pre.next = search 
            pre = sl
            if sl.next and sl.next.next:  
                search = sl.next.next 
                sl = sl.next 
            else: 
                break
        return head
                

ob = LinkedList() 
ob.insert_at_end(10)
ob.insert_at_end(20)
ob.insert_at_end(30)
ob.insert_at_end(40)
ob.insert_at_end(50)
sl = None
value = ob.swap_even(ob.start)

while value != None: 
    print(value.data,end=" ") 
    value = value.next 
