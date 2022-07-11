class N:
    def __init__(self, d):
        self.data = d
        self.Link = None

head = None

def detect(head):
    slowPointer = head
    fastPointer = head

    while slowPointer != None and fastPointer != None and fastPointer.Link != None:
        slowPointer = slowPointer.Link
        fastPointer = fastPointer.Link.Link
        if slowPointer == fastPointer:
            return 1
    return 0


head = N(10)
head.Link = N(20)
head.Link.Link = N(30)
head.Link.Link.Link = N(40)
head.Link.Link.Link.Link = N(50)

temp = head
while (temp.Link != None):
    temp = temp.Link

temp.Link = head

if (detect(head)):
    print("Loop exists in the Linked List")
else:
    print("Loop does not exists in the Linked List")
