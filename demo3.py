x=int(input("enter the value\n"))
y=int(input("enter the second value\n"))
Arithmetic=(input("enter the arthmethic opearation\n"))
match Arithmetic:
    case "+":
        print("adtion of two number is\n",x+y)
    case "-":
        print("adtion of two number is\n",x-y)
    case '*':
        print("adtion of two number is\n",x*y)
    case '/':
        print("adtion of two number is\n",x/y)
    case _:
        print("invalid number")

