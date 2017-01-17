for i in range(1,26):
    a = "RLCOPY"
    x = ""
    for r in range(0,len(a)):
        c = ord(a[r]) + i
        if(c>90):
            c = c-26
        m = chr(c)
        x = x+m
    print(x)
