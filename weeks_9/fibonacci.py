FibArray = [0,1]


def fibonacci_dynamic(n):
    if n<0:
        print("Incorrect input")
    elif n<=len(FibArray):
        return FibArray[n-1]
    else:
        temp_fib = fibonacci_dynamic(n-1)+fibonacci_dynamic(n-2)
        FibArray.append(temp_fib)
        return temp_fib


print(fibonacci_dynamic(9))
            

        
