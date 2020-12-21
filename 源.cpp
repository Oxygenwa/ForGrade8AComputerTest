/*本cpp代码可在visual sdudio 2019 内编译完成，若有错误，则需要更改其项目的属性，2020.9.11晚上完成Dev的编译，是成功的。*/
#include<iostream>
#include<iomanip>
#include<windows.h>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include"Calculator.h"
using namespace std;
double arguments()
{
	double inum = 0;
	double iweight = 0;
	double nums[1000]{};
	double weights[1000]{};
	double result = 0.0;
	//输入数字 
	for (int i = 0; i < 1000; i++)
	{
		cout << "请输入要算平均数的数字（直方图中位数）(输入0.12345678退出,输入大于999次自动退出)" << endl;
		cin >> inum;
		if (inum == 0.12345678)
		{
			break;
		}
		nums[i] = inum;
		cout << "请输入权（频数），默认为1（必须输入）" << endl;
		cin >> iweight;
		if (iweight <= 0)
		{
			cout << "请输入正数" << endl;
			cin >> iweight;
		}
		weights[i] = iweight;
	}
	//根据数组计算平均数 
	for (int i = 0; ; i++)
	{
		inum = 0;
		iweight = 0;
		inum = nums[i] * weights[i] + inum;
		iweight = weights[i] + iweight;
		if (nums[i] == 0)
		{
			break;
		}
		else
			result = inum / iweight;
	}
	return result;
}
int main()
{
	const double pi=3.1415926535;
	double m=0,result=0;
	int save,opt1;
	char oper;
	int start ;
	int opt ;
	double r;
	int opt_;
	int opt_1,opt_2;
	int mr;
	double numa=0,numb,numc,numd=0,nume,numf,numg,numh;
	double numzuo=0,numyou=0;
	double index;
	char numdx;
	char numaa, numbb, numcc, numdd = '+', numee = '+', numff='+' ,numgg = '+';
	int key;
	double p;
	string help = "0退出，①是四则运算，②是平方和方根运算，③是三角函数运算，④是一元一次方程求解，⑤规则几何图形面积和体积运算，⑥未开放";
	string danwei;//声明一堆变量
	cout << fixed;//输出数字均为小数而不是其他十六进制的数
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "欢迎来到cmd形式的计算器" << endl; 
	Sleep(1780);
	cout << "版本：14.0" << endl;
	Sleep(1780);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "作者QQ：1070778944/3366979044" << endl;
	cout << "E-mail:Hhhhhaaabbbc@163.com/a1070778944@163.com" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	Sleep(300);//这上面对我的具体信息进行输出
	cout << "输入0开始运行，其他字符退出"<<endl;
	cin >> start;
	if (!cin)
	{
		cout << "计算器即将关闭" << endl;
		return 0;
	}
	::MessageBox(NULL, TEXT("启动成功哇！"), TEXT("信息"), MB_APPLMODAL);
	::MessageBox(NULL,TEXT("选项卡提示：0退出，①是四则运算，②是平方和方根运算，③是三角函数运算，④是一元一次方程求解，⑤规则几何图形面积和体积运算，⑥未开放"),TEXT("提示啦"),MB_OK);
	/*类似于！cin的代码是为了防止刷屏，采取措施为：关闭*/
	system("cls");
	while (start == 0)
	{
		if (!cin)
		{
			cout << "输入错误" << endl;
			return 0;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "1.开始四则运算"<< setw(30) <<"2.开始平方，方根运算" << endl;
		cout << "3.开始三角函数运算" << "      " << "4.开始一元一次方程求解（未开放，无法使用小括号）" << endl;
		cout << "5.开始规则图形的面积与体积的计算" << endl;
		cout << "6.平均数" << endl;
		cin >> opt;
		system("cls");
		while (opt == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "是否使用上一次数值（新启动按1跳过，若要使用，按0）" << endl;
			cin >> opt1;
			if (opt1 == 0)
			{
				numa = m;

				cout << "输入格式为：a+b|a-b|a*b|a/b" << endl;
				Calculator wa;
				while (true)
				{
					cin >> numa >> oper >> numb;
					result = wa.Calculate(numa, oper, numb);
					cout << "Result is:" << result << endl;
					break;
				}
			}
			else
			{
				cout << "输入格式为：a+b|a-b|a*b|a/b" << endl;
				Calculator wa;
				while (true)
				{
					cin >> numa >> oper >> numb;
					result = wa.Calculate(numa, oper, numb);
					cout << "Result is:" << result << endl;
					break;
				}
			}
			
			if (oper == '+')
			{
				cout << setw(40) << numa << endl;
				cout << setw(20) << "+" << setw(20) << numb << endl;
				cout << setw(20) << "--------------------------------------------------" << endl;
				cout << setw(40) << numa + numb << endl;
			}
			if (oper == '-')
			{
				cout << setw(40) << numa << endl;
				cout << setw(20) << "-" << setw(20) << numb << endl;
				cout << setw(20) << "-------------------------------------------------" << endl;
				cout << setw(40) << numa - numb << endl;
			}
			cout << "输入0以保存本次运算数值(若要关闭，数值将归零）（暂时只支持四则运算,乘方与方根，三角函数保存）" << endl;
			cin >> save;
			if (save == 0)
			{
				m = result;
			}
			cout << help << endl;
			cin >> opt;
			if (opt == 0)
			{
				start = opt + 1;
			}
		}
		while (opt == 2)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "是否使用上次计算的数值，1跳过，0使用" << endl;
			cin >> opt1;
			if (opt1 == 0)
			{
				numa = m;
			}
			else
			{
				cout << "输入要开根号或乘方的数字" << endl;
				cin >> numa;
				if (!cin)
				{
					return 0;
				}
			}
			cout << "分号以乘方，冒号以开方" << endl;
			cin >> oper;
			if (oper == ';')
			{
				cout << "输入次数（指数）" << endl;
				cin >> index;
				result = pow(numa, index);
				cout << "answer=" << result << endl;
			}
			if (oper == ':')
			{
				cout << "输入次数（指数）" << endl;
				cin >> index;
				result = pow(numa, (1 / index));
				cout << "answer=" << result << endl;
			}
			cout << "是否保存本次数值，0是，1否（暂时只支持四则运算,乘方与方根，三角函数保存）" << endl;
			cin >> save;
			if (save == 0)
			{
				m = result;
			}
			cout << "选项卡选择数字" << endl;
			cin >> opt;
			if (opt == 0)
			{
				start = opt+1;
			}
		}
		while (opt == 3)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "是否使用上次计算的数值，1跳过，0使用" << endl;
			cin >> opt1;
			if (opt1 == 0)
			{
				numa = m;
			}
			else
			{
				cout << "输入一个度数值，以求出sin，cos，tan" << endl;
				cin >> numa;
				if (!cin)
				{
					return 0;
				}
			}
			numb = numa * pi / 180;
			cout << "输入1计算sin，2计算cos，3计算tan" << endl;
			cin >> mr;
			if (mr == 1)
			{
				cout << "sin=" << sin(numb) << endl;
				result = sin(numb);
			}
			if (mr == 2)
			{
				cout << "cos=" << cos(numb) << endl;
				result = cos(numb);
			}
			if (mr == 3)
			{
				cout << "tan=" << tan(numb) << endl;
				result = tan(numb);
			}
			cout << "是否保存本次数值，0是，1否（暂时只支持四则运算,乘方与方根，三角函数保存）" << endl;
			cin >> save;
			if (save == 0)
			{
				m = result;
			}
			cout << help << endl;
			cin >> opt;
			if (opt == 0)
			{
				start = opt+1;
			}
		}
		while (opt == 4)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "一元一次方程，无括号版，内测中。。。若无意进来，请重新来过。若受邀，请输入内测密码。" << endl;
			cin >> key;
			if (!cin)
			{
				cout << "输入字符错误,密码为纯数字" << endl;
				return 0;
			}
			if (key == 233)
			{
				Sleep(1000);
				cout << "温馨提示，若要输入如“5x”等省略乘号的，请加上乘号。输入格式为：numa+numb+oper+x=e+f+result+h，可一次性，可一步一步慢慢来。" << endl;
				Sleep(500);
				cout << "please press number1" << endl;
				cin >> numa;
				cout << "please press +-*/" << endl;
				cin >> numaa;
				cout << "please press number2" << endl;
				cin >> numb;
				cout << "please press +-*/" << endl;
				cin >> numbb;
				cout << "please press number3" << endl;
				cin >> numc;
				cout << "please press +-*/" << endl;
				cin >> numcc;
				cout << "please press x" << endl;
				cin >> numdx;
				while (numdx != 'x')
				{
					cout << "you must press x" << endl;
					cin >> numdx;
				}
				cout << "and you must press =" << endl;
				cin >> numdx;
				while (numdd != '=')
				{
					cout << "press =" << endl;
					cin >> numdd;
				}
				cout << "please press number5" << endl;
				cin >> nume;
				cout << "please press number6" << endl;
				cin >> numf;
				cout << "please press number7" << endl;
				cin >> numg;
				cout << "please press number8" << endl;
				cin >> numh;
				if (numaa == '*')
				{
					numzuo = numa * numb;
					if (numbb == '*')
					{
						numzuo = numzuo * numc;
					}
					if (numbb == '/')
					{
						numzuo = numzuo / numc;
					}
					if (numbb == '+')
					{
						if (numcc == '*')
						{
							numzuo = numzuo;
						}
						if (numcc == '/')
						{
							numzuo = numzuo;
						}
						if (numcc == '+')
						{
							numzuo = numzuo + numc;
						}
						if (numcc == '-')
						{
							numzuo = numzuo + numc;
						}
					}
					if (numbb == '-')
					{
						if (numcc == '*')
						{
							numzuo = numzuo;
						}
						if (numcc == '/')
						{
							numzuo = numzuo;
						}
						if (numcc == '+')
						{
							numzuo = numzuo - numc;
						}
						if (numcc == '-')
						{
							numzuo = numzuo - numc;
						}
					}
				}
				if (numaa == '/')
				{
					numzuo = numa / numb;
					if (numbb == '*')
					{
						numzuo = numzuo * numc;
					}
					if (numbb == '/')
					{
						numzuo = numzuo / numc;
					}
					if (numbb == '+')
					{
						if (numcc == '*')
						{
							numzuo = numzuo;
						}
						if (numcc == '/')
						{
							numzuo = numzuo;
						}
						if (numcc == '+')
						{
							numzuo = numzuo + numc;
						}
						if (numcc == '-')
						{
							numzuo = numzuo + numc;
						}
					}
					if (numbb == '-')
					{
						if (numcc == '*')
						{
							numzuo = numzuo;
						}
						if (numcc == '/')
						{
							numzuo = numzuo;
						}
						if (numcc == '+')
						{
							numzuo = numzuo - numc;
						}
						if (numcc == '-')
						{
							numzuo = numzuo - numc;
						}
					}
				}
				if (numaa == '+')
				{
					if (numbb == '*')
					{
						numzuo = numb * numc;
						if (numcc == '*')
						{
							numd = nume - numa;
							numd = numd / numzuo;
							cout << "x=" << numd << endl;
						}
						if (numcc == '/')
						{
							numd = nume - numa;
							numd = numd * numzuo;
							cout << "x=" << numd << endl;
						}
					}
					if (numbb == '/')
					{
						numzuo = numb / numc;
						if (numcc == '*')
						{
							numd = nume - numa;
							numd = numd / numzuo;
							cout << "x=" << numd << endl;
						}
						if (numcc == '/')
						{
							numd = nume - numa;
							numd = numd * numzuo;
							cout << "x=" << numd << endl;
						}
					}
					if (numbb == '+')
					{
						numzuo = numa + numb;
						if (numcc == '*')
						{
							numzuo = nume - numzuo;
							numd = numzuo / numc;
							cout << "x=" << numd << endl;
						}
						if (numcc == '/')
						{
							numzuo = nume - numzuo;
							numd = numzuo * numc;
							cout << "x=" << numd << endl;
						}
						if (numcc == '+')
						{
							numd = nume - numzuo - numc;
							cout << "x=" << numd << endl;
						}
						if (numcc == '-')
						{
							numd = nume - numzuo + numc;
							cout << "x=" << numd << endl;
						}
					}
				}
				if (numaa == '-')
				{
					numzuo = numa - numb;
					if (numcc == '*')
					{
						numzuo = nume + numzuo;
						numd = numzuo / numc;
						cout << "x=" << numd << endl;
					}
					if (numcc == '/')
					{
						numzuo = nume + numzuo;
						numd = numzuo * numc;
						cout << "x=" << numd << endl;
					}
					if (numcc == '+')
					{
						numd = nume + numzuo - numc;
						cout << "x=" << numd << endl;
					}
					if (numcc == '-')
					{
						numd = nume + numzuo + numc;
						cout << "x=" << numd << endl;
					}
				}
				if (numee == '*')
				{
					numyou = nume * numf;
					if (numff == '*')
					{
						numyou = numyou * numg;
						if (numgg == '*')
						{
							numyou = numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numh;
						}
					}
					if (numff == '/')
					{
						numyou = numyou / numg;
						if (numgg == '*')
						{
							numyou = numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numh;
						}
					}
					if (numff == '+')
					{
						if (numgg == '*')
						{
							numyou = numyou + numg * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou + numg / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou + numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou + numg - numh;
						}
					}
					if (numff == '-')
					{
						if (numgg == '*')
						{
							numyou = numyou - numg * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou - numg / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou - numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numg - numh;
						}
					}
				}
				if (numee == '/')
				{
					numyou = nume / numf;
					if (numff == '*')
					{
						numyou = numyou * numg;
						if (numgg == '*')
						{
							numyou = numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numh;
						}
					}
					if (numff == '/')
					{
						numyou = numyou / numg;
						if (numgg == '*')
						{
							numyou = numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numh;
						}
					}
					if (numff == '+')
					{
						if (numgg == '*')
						{
							numyou = numyou + numg * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou + numg / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou + numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou + numg - numh;
						}
					}
					if (numff == '-')
					{
						if (numgg == '*')
						{
							numyou = numyou - numg * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou - numg / numh;
						}
						if (numgg == '+')
						{
							numyou = numyou - numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numg - numh;
						}
					}
				}
				if (numee == '+')
				{
					if (numff == '*')
					{
						numyou = numf * numg;
						if (numgg == '*')
						{
							numyou = nume + numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = nume + numyou / numh;
						}
					}
					if (numff == '/')
					{
						numyou = numf / numg;
						if (numgg == '*')
						{
							numyou = nume + numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = nume + numyou / numh;
						}
					}
					if (numff == '+')
					{
						numyou = nume + numf;
						if (numgg == '*')
						{
							numyou = numg * numh + numyou;
						}
						if (numgg == '/')
						{
							numyou = numg / numh + numyou;
						}
						if (numgg == '+')
						{
							numyou = numyou + numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou + numg - numh;
						}
					}
					if (numff == '-')
					{
						numyou = nume + numf;
						if (numgg == '*')
						{
							numyou = numyou - numg * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou - numg * numh;
						}
						if (numgg == '+')
						{
							numyou = numyou - numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numg - numh;
						}
					}
				}
				if (numee == '-')
				{
					if (numff == '*')
					{
						numyou = numf * numg;
						if (numgg == '*')
						{
							numyou = nume - numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = nume - numyou / numh;
						}
					}
					if (numff == '/')
					{
						numyou = numf / numg;
						if (numgg == '*')
						{
							numyou = nume - numyou * numh;
						}
						if (numgg == '/')
						{
							numyou = nume - numyou / numh;
						}
					}
					if (numff == '+')
					{
						numyou = nume - numf;
						if (numgg == '*')
						{
							numyou = numg * numh + numyou;
						}
						if (numgg == '/')
						{
							numyou = numg / numh + numyou;
						}
						if (numgg == '+')
						{
							numyou = numyou + numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou + numg - numh;
						}
					}
					if (numff == '-')
					{
						numyou = nume - numf;
						if (numgg == '*')
						{
							numyou = numyou - numg * numh;
						}
						if (numgg == '/')
						{
							numyou = numyou - numg * numh;
						}
						if (numgg == '+')
						{
							numyou = numyou - numg + numh;
						}
						if (numgg == '-')
						{
							numyou = numyou - numg - numh;
						}
					}
				}
				if (numcc == '*')
				{
					if (numzuo == '+')
					{
						numd = numyou - numzuo;
						numd = numd / numc;
					}
					if (numzuo == '-')
					{
						numd = numyou + numzuo;
						numd = numd / numc;
					}
				}
				if (numcc == '/')
				{
					if (numzuo == '+')
					{
						numd = numyou - numzuo;
						numd = numd * numc;
					}
					if (numzuo == '-')
					{
						numd = numyou + numzuo;
						numd = numd * numc;
					}
				}
				if (numcc == '+')
				{
					numd = numyou - numzuo;
				}
				if (numcc == '-')
				{
					numd = numyou + numzuo;
				}
				cout << "x=" << numd << endl;
				cout << help << endl;
				cin >> opt;
				if (opt == 0)
				{
					start = opt + 1;
				}
				else
				{
					cout << "密码错误,计算器将在1秒内关闭" << endl;
					Sleep(1000);
					start = start + 1;
				}
			}
		}
		while (opt == 5)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "请用1选择计算面积，2选择计算体积" << endl;
			cin >> opt_;
			if (opt_ == 1)
			{
				cout << "1正方形，2长方形，3圆形，4三角形" << endl;
				cin >> opt_1;
				if (opt_1 == 1)
				{
					cout << "输入边长" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cout << "输入单位（mm，cm，dm，m，km）" << endl;
					cin >> danwei;
					numa = pow('numa', 2);
					cout << "面积是：" << numa << danwei << "^2" << endl;
				}
				if (opt_1 == 2)
				{
					cout << "输入长" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cout << "输入宽" << endl;
					cin >> numb;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cout << "输入单位" << endl;
					cin >> danwei;
					result = numa * numb;
					cout << "面积是" << result << danwei << "^2" << endl;
				}
				if (opt_1 == 3)
				{
					cout << "输入半径" << endl;
					cin >> r;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cout << "输入单位（mm，cm，dm，m，km）" << endl;
					cin >> danwei;
					r = pow('r', 2);
					result = r * pi;
					cout << "面积是：" << result << danwei << "^2" << endl;
				}
				if (opt_1 == 4)
				{
					cout << "" << endl;
					cin >> opt_2;
					if (opt_2 == 1)
					{
                    cout << "输入三边" << endl;
					cin >> numa;
					cout << ",";
					cin >> numb;
					cout << ",";
					cin >> numc;
					p = (numa + numb + numc) / 2;
					result = p * (p - numa) * (p - numb) * (p - numc);
					result = sqrt(result);
					cout << "输入单位（简写）" << endl;
					cin >> danwei;
					cout << "面积是：" << result << danwei<<"^2"<<endl;
					}
					if (opt_2 == 2)
					{
						cout << "输入底" << endl;
						cin >> numa;
						cout << "输入高" << endl;
						cin >> numb;
						result = numa * numb / 2;
						cout << "输入单位（简写）" << endl;
						cin >> danwei;
						cout << "面积是：" << result << danwei << "^2";
					}
				}
				cout << "选项卡选择数字" << endl;
				cin >> opt;
				if (opt == 0)
				{
					start = opt + 1;
				}
			}
			if (opt_ == 2)
			{
				cout << "1正方体，2长方体，3圆柱体，4圆锥" << endl;
				cin >> opt_2;
				if (opt_2 == 1)
				{
					cout << "输入边长" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					result = pow('numa', 3);
					cout << "输入单位" << endl;
					cin >> danwei;
					cout << "体积是：" << result << danwei << "^3" << endl;
				}
				if (opt_2 == 2)
				{
					cout << "输入长,宽，高（每个数字的间隔用回车代替）" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cin >> numb;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cin >> numc;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					result = numa * numb * numc;
					cout << "输入单位" << endl;
					cin >> danwei;
					cout << "体积是" << result << danwei << "^3" << endl;
				}
				if (opt_2 == 3)
				{
					cout << "输入底面半径，高（数值之间直接回车）" << endl;
					cin >> r;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cin >> numa;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					r = pow('r', 2);
					result = r * pi * numa;
					cout << "输入单位" << endl;
					cin >> danwei;
					cout << "体积是" << result << danwei << "^3" << endl;
				}
				if (opt_2 == 4)
				{
					cout << "输入底面半径，高（数值之间直接回车）" << endl;
					cin >> r;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					cin >> numa;
					if (!cin)
					{
						cout << "输入错误" << endl;
						return 0;
					}
					r = pow('r', 2);
					result = r * pi * numa / 3;
					cout << "输入单位" << endl;
					cin >> danwei;
					cout << "体积是" << result << danwei << "^3" << endl;
				}
				cout << help << endl;
				cin >> opt;
				if (opt == 0)
				{
					start = opt + 1;
				}
			}
		}
		while (opt == 6)
		{
			cout << "result is:" << arguments() << endl;
			cout << help << endl;
			cin >> opt;
			if (opt == 0)
			{
				start = opt + 1;
			}
		}
	}
	return 0;
}