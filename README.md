# TJ Tasks 2026 - Balanced Brackets Solution

## Approach & Algorithm
To solve this problem efficiently within the given constraints, I used a **Stack** data structure:
1. As we iterate through each character of the string, any opening bracket (`(`, `[`, `{`) is pushed onto the stack.
2. When a closing bracket (`)`, `]`, `}`) is encountered, we check the top element of the stack.
3. If the stack is empty or the top element does not match the corresponding opening bracket, the string is unbalanced, returning `NO`.
4. If it matches, we pop the opening bracket from the stack and continue.
5. After checking the entire string, if the stack is completely empty, it means all brackets matched correctly (`YES`). Otherwise, it returns `NO`.

## Tech Stack
- **Language:** Python
- **Concepts:** Data Structures (Stack), Strings
