"""
Python solutions one:

The solution is...
  1. When ever we get open bracket entity like ( or { or[ we push this to stack.
  2. When we get a closing entity then we pop from stack and match it with input.
"""

MAPPER = {
    "}": "{",
    ")": "(",
    "]": "["
}

OPEN_ENTITIES = MAPPER.values()


def solution(input):
    stack = []
    for ent in input:
        if ent in OPEN_ENTITIES:
            stack.append(ent)
        else:
            open_ent = stack.pop()
            if MAPPER[ent] != open_ent:
                print("Doesn't close properly")
                break
    else:
        print("Closed properly")

solution("()([{})")
