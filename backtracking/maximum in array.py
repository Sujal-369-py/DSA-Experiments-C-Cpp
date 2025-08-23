def maximum(arr,i): 
    if i == len(arr)-1: 
        return arr[i]
    rest = maximum(arr,i+1) 
    return max(arr[i],rest)

arr = [2,5,7,4,9,86,11,23] 
curr = arr[0] 
i = 0
print(maximum(arr,i,curr))

def rev_linklist(head): 
    if head is None or head.next is None: 
        return head 
    rev_linklist(head.next) 
    pre = head.next 
    pre.next = head
    head.next = None
def count_linklsit(head): 
    if head is None: 
        return 0 
    return 1 + count_linklsit(head.next)