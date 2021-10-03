# Given the head of a singly linked list, reverse the list, and return the reversed list.

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def reverseList(head):
    node = head
    curr = None
    while node:
        nnode = node.next
        node.next = curr
        curr = node
        node = nnode
    return curr
