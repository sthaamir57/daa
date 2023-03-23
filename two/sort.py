with open("numbers.txt","a") as n:
    num = 1
    while num<=1000000:
        n.write(str(num)+"\n")
        num+=1

