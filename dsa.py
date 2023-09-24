"""  --------------------SELECTION SORT IN PYTHON----------------------
"""
def SelectionSort(l):
    for start in range(0,len(l)):
        minpos = start
        for i in range(start, len(l)):
            if(l[minpos]>l[i]):
                minpos = i
        (l[start], l[minpos]) = (l[minpos], l[start])
    print(l)
SelectionSort([9,8,7,6,5,4,3,2,1])

"""  --------------------INSERTION SORT IN PYTHON----------------------
"""
def InsertionSort(lo):
    for start in range(len(lo)):
        pos = start
        while pos > 0 and lo[pos] < lo[pos-1]:
            (lo[pos],lo[pos-1]) = (lo[pos-1],lo[pos])
            pos-=1 # DO NOT FORGET THISSSS!!!!!! 
InsertionSort([9,8,7,6,5,4,3,2,1])
"""  --------------------MERGE SORT IN PYTHON----------------------
"""        
def msort(x):
    if len(x) < 2:
        return x
    result =  []
    mid  = len(x)//2
    y = msort(x[:mid])
    z = msort(x[mid:])
    i=0
    j=0
    while i< len(y) and j < len(z):
        if y[i] > z[j]:
            result.append(z[j])
            j += 1
        else:
            result.append(y[i])
            i += 1
    result += y[i:]
    result += z[j:]
    return result
print(msort([9,8,78,67,56,34,66,90]))

""" --------------------- BINARY SEARCH IN PYTHON--------------------
"""
class skjdhs:
    def BinarySearch(self,target, low, high, arr):
        if high>=low:
            mid = (low + high)//2
            if arr[mid] == target:
                return mid
            if target > arr[mid]:
                return self.BinarySearch(target, mid + 1,high, arr)
            else:
                return self.BinarySearch(target, low, mid-1, arr)
        else:
            return -1
    def caller(self):
        arr = [1,3,5,7, 9, 11, 13, 15, 17]
        result = self.BinarySearch(7, 0,len(arr)-1, arr)
        if result == -1:
            print("Element not found!")
        else:
            print("found at index", result)
bs = skjdhs()
bs.caller()
"""======================DICTIONARY IN PYTHON CUZ I FORGOR========================
"""
def Dictionary():
    score = {'Test1': ["Dhawan", "Kohli"],
             'Test2':["Kanishk", "Anushka"],
             'Test3': "Daksh"
            }
    """--------------Methods to print the dictionary--------------"""
    print(score) # Outputs the whole dictionary: {'Test1': ['Dhawan', 'Kohli'], 'Test2': ['Kanishk', 'Anushka']}
    print(score["Test1"]) # Outputs the value stored at the key given (ONLY 1)
    print(score.values()) # Outputs the values of dictionary in the form of tuples: dict_values([['Dhawan', 'Kohli'], ['Kanishk', 'Anushka']])
    print(score.get("Test2")) # Ouputs the value of the key entered(ONLY 1): ['Kanishk', 'Anushka']
    print(score.items()) # Outouts all the itens in a dict: dict_items([('Test1', ['Dhawan', 'Kohli']), ('Test2', ['Kanishk', 'Anushka'])])
    print(score.keys()) # Outputs the keys of dictionary: dict_keys(['Test1', 'Test2'])
    """--------------------Methods to access and change items in a dictionary--------------------"""
    score["Test3"] =  "Daksh Lal" # Simply accessing and changing the value of the given key.. 
    print(score["Test3"])
    score["Test4"] = "Janhvi" # Compile time allocation of key and value pair..
    print(score["Test4"])
    score.update({"Test5": "Himalaya"}) # Compile time allocation using update
    print(score["Test5"])
    score.update({"Test4": "Janhvi Kurkure"}) # Update in place using key value pair, pretty lame tbh..
    print(score["Test4"])
    score["Test4"] = "Janhvuu" # Updating a pre-existing key's value..
    print(score["Test4"])
    if "Test1" in score:    # in keyword used to detect presence of a key in dictionary
        print("OUI!")
    """---------------------------Removal methods in a dictionary-------------------------"""
    score.pop("Test5") # pops/removes the key from dictionary, gives error when printing using key hence, we use whole dictionary
    print(score)
    score.popitem() # pops/removes the last added value
    print(score)
    del score["Test3"] # Can pop individual keys also if a key is not given 'del' deletes the entire dictionary
    print(score)
    score.clear() # Clears the dictionary without deleting it..
    print(score)

Dictionary()

"""========================LINKED LIST IN PYTHON============================="""
# class Node:
#     def __init__(self, data=None, next = None):
#         self.data = data
#         self.next = next

# class LinkedList:
#     def __init__(self):
#         self.head = None

#     def InsertatBeg(self, data):
#         node = Node(data, self.head)
#         self.head = node

#     def print(self):
#         if self.head is None:
#             raise Exception ("List is empty!!")
#         itr = self.head
#         llstr = ''
#         while itr:
#             llstr += str(itr.data) + "-->"
#             itr = itr.next
#         llstr += "None"
#         print(llstr)
    
#     def append(self, data):
#         if self.head is None:
#             node = Node(data, None)
#             self.head = node 
#             return
#         itr = self.head
#         while itr.next:
#             itr = itr.next
#         itr.next = Node(data, None)
    
#     def Insert(self, data_list):
#         #self.head = None       used to clear list
#         for i in data_list:
#             self.append(i)

#     def getLength(self):
#         count = 0
#         itr = self.head
#         while itr:
#             count += 1
#             itr= itr.next
#         return count
    
#     def Remove(self, position):
#         if self.head is None:
#             raise Exception ("Linked List is empty!")
#         if position < 0 or position >= self.getLength():
#             raise Exception ("Index out of bounds")
#         if position == 0:
#             self.head = self.head.next
#         itr = self.head
#         count = 0
#         while itr:
#             if count == position - 1:
#                 itr.next = itr.next.next
#                 break
#             itr = itr.next
#             count += 1
            
#     def InsertatIndex(self, position, data):
#         if position < 0 or position > self.getLength():
#             raise Exception ("Invalid index!")
#         if position == 0:
#             self.InsertatBeg(data)
#             return
#         count = 0
#         itr = self.head
#         while itr:
#             if count == position - 1:
#                 node = Node(data, itr.next)
#                 itr.next = node
#                 break
#             itr = itr.next
#             count += 1
class Node:
    def __init__(self, data = None, next = None):
        self.data = data
        self.next = next
class LinkedList:
    def __init__(self):
        self.head = None
    
    def InsertatBeg(self, data):
        node = Node(data, self.head)
        self.head = node
    
    def print(self):
        if self.head is None:
            raise Exception ("List is empty!")
        llstr = ''
        itr = self.head
        while itr:
            llstr += str(itr.data) + '-->'
            itr = itr.next
        llstr += "None"
        print(llstr)

    def append(self, data):
        if self.head is None:
            node = Node(data, None)
            self.head = node
            return
        itr = self.head
        while itr.next:
            itr = itr.next
        itr.next = Node(data,None)
    
    def getLength(self):
        count = 0
        itr = self.head
        while itr:
            itr = itr.next
            count += 1
        return count
    
    def Insert(self, data_list):
        for i in data_list:
            self.append(i)

    def Remove(self, position):
        if self.head is None:
            raise Exception ("List is already empty!!")
        if position<0 or position>=self.getLength():
            raise Exception ("Index out of bounds")
        itr = self.head
        if position == 0:
            self.head = self.head.next
        count = 0
        while itr:
            if count == position-1:
                itr.next = itr.next.next
                break
            itr = itr.next
            count+=1

    def InsertatIndex(self, position, data):
        if position == 0:
            self.InsertatIndex(data)
            return
        if position >= self.getLength() or position < 0:
            raise Exception ("Invalid Index!!")
        count = 0
        itr = self.head
        while itr:
            if count == position -1:
                node = Node(data, itr.next)
                itr.next = node
                break
            itr = itr.next
            count += 1
        

if __name__ == "__main__":
    ll = LinkedList()
    ll.InsertatBeg(89)
    ll.InsertatBeg(90)
    ll.print()   
    ll.append(45)
    ll.append(56)     
    ll.print()
    ll.Insert([1,2,3,4,5,6,7,8,9])
    ll.print()
    ll.Remove(4)
    ll.print()
    ll.InsertatIndex(5,45)
    ll.print()



"""=====================RECURSION===================="""
# def recursion(n):
#     printf(n)
# def printf(n):
#     if n == 10:
#         return
#     print(n)
#     printf(n+1)
# recursion(1)

stk = []
stk.append(67)
print(stk)
stk.pop()
print(stk)

from collections import deque
q = deque()
q.appendleft(45)
q.appendleft(90)
q.appendleft(91)
q.pop()
print(q)

from time import sleep

i = 1
while(i<3):
    print("\r\\\r", end=" ")
    sleep(0.5)
    print("\r|\r", end=" ")
    sleep(0.5)
    print("\r/\r", end=" ")
    sleep(0.5)
    print("\r—\r", end=" ")
    sleep(0.5)
    i+=1


"""  --------------------INSERTION SORT IN C----------------------
#include<stdio.h>
void main(){
    int n;
    printf("Enter size of arra: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int pos = i;
        while(pos>0 && arr[pos]<arr[pos-1]){
            int temp = arr[pos];
            arr[pos] = arr[pos-1];
            arr[pos-1] = temp;
            pos--;  //DO NOT FORGET THISSS!!!!!!
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
"""

""" --------------------SELECTION SORT IN C----------------------
#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int min_index = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    for(int i=0; i<n; i++){
        printf("arr[%d]: %d ", i, arr[i]);
    }
}
"""