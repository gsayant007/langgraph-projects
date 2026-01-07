def ch_tree(n:int):
    star = "*"
    space = " "
    res = ""
    for i in range(1,n+1):
        if(i%2==1):
            space_multiplier = (n-i)//2
            res = space*space_multiplier + star*i 
            print(res,end="\n")

def main():
    ch_tree(30)
if __name__=="__main__":
    main()