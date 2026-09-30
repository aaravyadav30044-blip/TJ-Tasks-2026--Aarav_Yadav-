def is_balanced(s):
    # Dictionary to quickly match closing brackets with opening ones
    bracket_map = {')': '(', ']': '[', '}': '{'}
    stack = []

    for char in s:
        # If it's a closing bracket
        if char in bracket_map:
            # Pop the top element from stack if it's not empty, else use a dummy value
            top_element = stack.pop() if stack else '#'
            
            # If the mapping doesn't match the popped element, it's not balanced
            if bracket_map[char] != top_element:
                return "NO"
        else:
            # It's an opening bracket, push it onto the stack
            stack.append(char)

    # If the stack is empty, all brackets were matched correctly
    return "YES" if not stack else "NO"

# --- Reading Input and Printing Output ---
if __name__ == "__main__":
    import sys
    # Read the input string and remove trailing/leading whitespaces or newlines
    input_str = sys.stdin.read().strip()
    
    if input_str:
        print(is_balanced(input_str))
