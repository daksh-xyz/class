# INFIX TO POSTFIX
### This is an application of stack

**For conversion we follow some rules as follows :**
1. If character is " ( " left paranthesis, then push.
2. If character is operand, add to postfix expression.
3. If character is operator check if stack is empty.  
    1) If stack is empty, push.
    2) ( i ) If priority of incoming operator (>) priority of top operator then push  
    ( ii ) if priority of incoming priority (<=) priority of top operator then pop.  
4. if right parentheses " ) " is encountered then pop all the ch till " ( " left parentheses is traced.
5. At last, if stack is not empty, apply pop() till stack is empty

## Priority Order

 " * / % + - "

**QUESTION**  
(A-(B/C + (D%E*F)G)*H)

# INFIX TO PREFIX   

**For conversion we follow some rules as follows :**
1. Reverse the expression
1. If character is " ( " left paranthesis, then push.
2. If character is operand, add to postfix expression.
3. If character is operator check if stack is empty.  
    1) If stack is empty, push.
    2) ( i ) If priority of incoming operator (>=) priority of top operator then push  
    ( ii ) If priority of incoming priority (<) priority of top operator then pop.  
4. if right parentheses " ) " is encountered then pop all the ch till " ( " left parentheses is traced.
5. At last, if stack is not empty, apply pop() till stack is empty