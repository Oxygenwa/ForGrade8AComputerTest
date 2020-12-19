#设计基本框架
import math
import tkinter as tk
import tkinter.messagebox
win=tk.Tk()     #创建窗口
win.title("图形界面四则计算器")
win.geometry("350x150")
#------功能代码开始------
#---设计功能函数---
#设置变量
var_num1=tk.StringVar()
var_num1.set('');
var_oper=tk.StringVar()
var_oper.set('');
var_num2=tk.StringVar()
var_num2.set('')
menubar=tk.Menu()
Pi=3/141582654
#按钮处理函数
def aboutapp():         #关于这个py程序，信息框，下同
    tk.messagebox.showinfo(title='信息',message='功能：将电脑书上的分支结构计算器放到了tkinter模块里')
def aboutmyself():
    tk.messagebox.showinfo(title='信息',message='801xxx')
def count():            #计算函数
    num1=float(var_num1.get())
    oper=var_oper.get()
    num2=float(var_num2.get())
    if oper=='+':
        result=num1+num2
    elif oper=='-':
        result=num1-num2
    elif oper=='*':
        result=num1*num2
    elif oper=='/':
        try:
            result=num1/num2
        except:
            result='除数不为零'
    elif oper=='**':
        result=num1**num2
    elif oper=='//':
        try:
            result=num1**(1/num2)
        except:
            result='次数不为零'
    result=format(result,".8f")
    result=str(result)
    tk.messagebox.showinfo(title='结果',message=result)
def CE():
    var_num1.set('')
    var_num2.set('')
    var_oper.set('')
def _quit():
    win.quit()
#---窗口组件设计---
#设计菜单栏
aboutmenu=tk.Menu(menubar,tearoff=0)
aboutmenu.add_command(label='关于作者',command=aboutmyself)
aboutmenu.add_command(label='关于此计算器',command=aboutapp)
menubar.add_cascade(label='关于',menu=aboutmenu)
#设计提示标签
lab_num1=tk.Label(win,text='数字1',width=80)
lab_num2=tk.Label(win,text='数字2',width=80)
lab_oper=tk.Label(win,text='符号+-*/',width=80)
lab_help=tk.Label(win,text='“**”计算乘方,“//”计算方根',width=80)
#设计输入框（textvariable为文本框的值，并关联变量var_***）
ent_num1=tk.Entry(win,width=100,textvariable=var_num1)
ent_oper=tk.Entry(win,width=80,textvariable=var_oper)
ent_num2=tk.Entry(win,width=100,textvariable=var_num2)
#设计按钮
but_count=tk.Button(win,text='计算',command=count)
but_quit=tk.Button(win,text='退出',command=_quit)
but_CE=tk.Button(win,text='CE',command=CE)
#---组件布局---
#菜单布局
win.config(menu=menubar)
#总布局
lab_num1.place(x=30,y=10,width=80,height=20)
lab_oper.place(x=30,y=40,width=80,height=20)
lab_num2.place(x=30,y=70,width=80,height=20)
lab_help.place(x=150,y=40,width=200,height=20)
ent_num1.place(x=130,y=10,width=80,height=20)
ent_oper.place(x=130,y=40,width=30,height=20)
ent_num2.place(x=130,y=70,width=80,height=20)
but_count.place(x=30,y=100,width=50,height=20)
but_CE.place(x=100,y=100,width=50,height=20)
but_quit.place(x=170,y=100,width=50,height=20)
#------功能代码结束------
win.mainloop()
