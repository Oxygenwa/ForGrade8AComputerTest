g_formula='1+1*[2*3+(301+90)]'
gg='1+1*[2*3+(301+90)]'
Index_zkh1=0
Index_zkh2=0
Index_xkh1=0
Index_xkh2=0
lst_num=[0 for i in range(1000)]
lst_oper=[0 for i in range(1000)]
lst_for_clean_num=[0 for i in range(1000)]
lst_for_clean_oper=[0 for i in range(1000)]
count_for_clean=0
bool_for_clean=False
#create functions
def clean2(operstr):
    n=0
    lst_for_clean_oper[n]='0'
def clean1(numstr):
    n=0
    while bool_for_clean==False:
        lst_for_clean_num[n]=int(numstr)
        n+=1
    else:
        for i in range(1000):
            sum=0
            sum+=lst_for_clean_num[i]*(10**(n-i))
            print(sum)
def cal():      #计算函数
    n=0
    for i in range(Index_xkh1+1, Index_xkh2, 1):
        while g_formula[i]=='1'or g_formula[i]=='2' or g_formula[i]=='3' or g_formula[i]=='4'or g_formula[i]=='5' or g_formula[i]=='6' or g_formula[i]=='7'or g_formula[i]=='8' or g_formula[i]=='9' or g_formula[i]=='0':
            clean1(g_formula[i])
            count_for_clean+=1
        else:
            bool_for_clean=True
        if g_formula[i]=='+':
            lst_oper[n]=1
            n+=1
        elif g_formula[i]=='-':
            lst_oper[n]=2
            n+=1
        elif g_formula[i]=='*':
            lst_oper[n]=3
            n+=1
        elif g_formula[i]=='/':
            lst_oper[n]=4
            n+=1
        elif g_formula[i]=='!':
            lst_oper[n]=0
            n+=1
    #归类完毕
    for i in range(Index_xkh1+1, Index_xkh2, 1):
        print('开始计算')
        
def find():     #寻找括号的函数
    #中括号开始
    Index=0
    g_formula=gg
    for i in g_formula:
        if i=='[':
            Index_zkh1=Index
            print(Index_zkh1)
        elif i== ']':
            Index_zkh2=Index
            print(Index_zkh2)
            break
        Index+=1
    #中括号结束
    #小括号开始
    if Index_zkh1==-1:
        Index=0
        while Index<len(g_formula):
            for i in g_formula:
                if i=='(':
                    Index_xkh1=Index
                elif i==')':
                    Index_xkh2=Index
                    print('start1')
                    cal()       #计算1
                    break
                else:
                    #没有小括号的时候
                    #直接开始计算2
                    print('start2')
                    cal()
    else:
        Index=Index_zkh1
        for i in range(Index_zkh1, Index_zkh2+1, 1):
            if g_formula[i]=='(':
                Index_xkh1=Index
            elif g_formula[i]==')':
                Index_xkh2=Index
                print('start3')
                cal()       #计算3
        else:
            gg_f=list(g_formula)
            gg_f[Index_zkh1]='('
            gg_f[Index_zkh2]=')'
            g_formula=str(gg_f)
            print('start4')
            cal()       #计算4

def start():
    find()
start()

    
