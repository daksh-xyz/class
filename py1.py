# def primeproduct(m):
#     flag = 0
#     print("Enter beginning number: ")
#     beg = int(input())
#     print("Enter ending number: ")
#     end = int(input())
#     i=beg
#     while i<=end:
#         if m==0 or m==1:
#             flag = 0
#             break
#         else:
#             flag = 1
#         j=2
#         while j<=i//2:
#             if i%j==0:
#                 flag = 0
#             j +=1
#         if flag == 1:
#             print(i)
#         i+=1
# primeproduct(6)

      
# def shuffle(l1,l2):
#     c=[]
#     if len(l1)!=0 and len(l2)!=0:
#       for i in range(min(len(l1), len(l2))):
#         c.extend([l1[i],l2[i]])      
#       c.extend(l1[i+1:] or l2[i+1:])
#     else:
#       c.extend(l1[0:] or l2[0:])      
#     print(c)
# shuffle(l1 = [1,2,3,4],l2 = [100, 200, 300, 400, 500])


# def expanding(l):
#     i=0
#     while i<len(x)-2:
#         t1 = x[i+1] - x[i]
#         t2 = x[i+2] - x[i+1]
#         if t2>t1:
#             flag = 0
#         else:
#             flag = 1
#         i+=1
#                                           OR
#     differencesIncreasing = all(l[i+1]-l[i]>l[i+2]-l[i+1] for i in range(len(l)-2))
#      THE ALL() FUNCTION ITERATES THROUGH ALL THE ITERABLES LIKE  A LIST OR TUPLE AND CHECKS TRUE PR FALSE FOR THE GIVEN CONDITION
#     if differencesIncreasing:
#         return True
#     else:
#         return False
# expanding([1,2,5,9,14])

# l =  [1,2,300,4,5,6]

# for i in l:
#     print(i)

# def mystery(l):
#     if l == []:
#         return l
#     else:
#         return l[-1:] + mystery(l[:-1])

# print(mystery([23,35,19,58,93,46]))

# pairs = [ (x,y) for x in range(6,1,-1) for y in range(3,1,-1) if (x+y)%2 == 0 ]
# print(pairs)

# goals = {"Country":{"Ronaldo":123,"Messi":103,"Pele":83},"Club":{"Ronaldo":[512,51,158],"Pele":[604,49,26]}}
# Which of the following statements does not generate an error?
# goals["Club"]["Messi"][0:] = [496,71,145]
# goals["Club"]["Messi"].extend([496,71,145])
# # correct goals["Club"]["Messi"] = [496,71,145]
# goals["Club"]["Messi"] = goals["Club"]["Messi"] + [496,71,145]
# print(goals)

# wickets = {}
# Which of the following generates an error?
# wickets["Muralitharan, tests"] = 800
# wickets["Muralitharan"] = {"tests":800}
# wickets[("Muralitharan","tests")] = 800
# wickets[["Muralitharan","tests"]] = 800

# print(wickets)

def histogram(l):
    for i in l:
        key = i
        count = 0
        for j in range(0,len(l)):
            if key == l[j]:
                count += 1
        print(i,count)
histogram([1,2,300,400,400,5,6])