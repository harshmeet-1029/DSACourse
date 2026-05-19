# Python 3.11+
# Goal:
# Understand:
# 1. How recursion works
# 2. How function calls are created
# 3. How the call stack grows
# 4. How the stack gets removed after base case

def counter(value=0, level=0):
    """
    value -> current number
    level -> only used to visually show stack depth
    """

    # This creates spaces so we can SEE the stack depth
    space = "   " * level

    print(f"{space}📦 FUNCTION CALL CREATED -> counter({value})")

    # Base case
    if value == 3:
        print(f"{space}🛑 BASE CASE HIT -> value is {value}")
        print(f"{space}📤 RETURNING FROM counter({value})")
        return

    print(f"{space}⬇ Going deeper from {value} to {value + 1}")

    # Recursive call
    counter(value + 1, level + 1)

    # This runs AFTER the deeper call finishes
    print(f"{space}⬆ BACK TO counter({value}) AFTER child finished")

    print(f"{space}📤 FUNCTION REMOVED -> counter({value})")


counter()