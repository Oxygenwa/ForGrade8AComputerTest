/*��cpp�������visual sdudio 2019 �ڱ�����ɣ����д�������Ҫ��������Ŀ�����ԣ�2020.9.11�������Dev�ı��룬�ǳɹ��ġ�*/
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
	//�������� 
	for (int i = 0; i < 1000; i++)
	{
		cout << "������Ҫ��ƽ���������֣�ֱ��ͼ��λ����(����0.12345678�˳�,�������999���Զ��˳�)" << endl;
		cin >> inum;
		if (inum == 0.12345678)
		{
			break;
		}
		nums[i] = inum;
		cout << "������Ȩ��Ƶ������Ĭ��Ϊ1���������룩" << endl;
		cin >> iweight;
		if (iweight <= 0)
		{
			cout << "����������" << endl;
			cin >> iweight;
		}
		weights[i] = iweight;
	}
	//�����������ƽ���� 
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
	string help = "0�˳��������������㣬����ƽ���ͷ������㣬�������Ǻ������㣬����һԪһ�η�����⣬�ݹ��򼸺�ͼ�������������㣬��δ����";
	string danwei;//����һ�ѱ���
	cout << fixed;//������־�ΪС������������ʮ�����Ƶ���
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "��ӭ����cmd��ʽ�ļ�����" << endl; 
	Sleep(1780);
	cout << "�汾��14.0" << endl;
	Sleep(1780);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "����QQ��1070778944/3366979044" << endl;
	cout << "E-mail:Hhhhhaaabbbc@163.com/a1070778944@163.com" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	Sleep(300);//��������ҵľ�����Ϣ�������
	cout << "����0��ʼ���У������ַ��˳�"<<endl;
	cin >> start;
	if (!cin)
	{
		cout << "�����������ر�" << endl;
		return 0;
	}
	::MessageBox(NULL, TEXT("�����ɹ��ۣ�"), TEXT("��Ϣ"), MB_APPLMODAL);
	::MessageBox(NULL,TEXT("ѡ���ʾ��0�˳��������������㣬����ƽ���ͷ������㣬�������Ǻ������㣬����һԪһ�η�����⣬�ݹ��򼸺�ͼ�������������㣬��δ����"),TEXT("��ʾ��"),MB_OK);
	/*�����ڣ�cin�Ĵ�����Ϊ�˷�ֹˢ������ȡ��ʩΪ���ر�*/
	system("cls");
	while (start == 0)
	{
		if (!cin)
		{
			cout << "�������" << endl;
			return 0;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "1.��ʼ��������"<< setw(30) <<"2.��ʼƽ������������" << endl;
		cout << "3.��ʼ���Ǻ�������" << "      " << "4.��ʼһԪһ�η�����⣨δ���ţ��޷�ʹ��С���ţ�" << endl;
		cout << "5.��ʼ����ͼ�ε����������ļ���" << endl;
		cout << "6.ƽ����" << endl;
		cin >> opt;
		system("cls");
		while (opt == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "�Ƿ�ʹ����һ����ֵ����������1��������Ҫʹ�ã���0��" << endl;
			cin >> opt1;
			if (opt1 == 0)
			{
				numa = m;

				cout << "�����ʽΪ��a+b|a-b|a*b|a/b" << endl;
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
				cout << "�����ʽΪ��a+b|a-b|a*b|a/b" << endl;
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
			cout << "����0�Ա��汾��������ֵ(��Ҫ�رգ���ֵ�����㣩����ʱֻ֧����������,�˷��뷽�������Ǻ������棩" << endl;
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
			cout << "�Ƿ�ʹ���ϴμ������ֵ��1������0ʹ��" << endl;
			cin >> opt1;
			if (opt1 == 0)
			{
				numa = m;
			}
			else
			{
				cout << "����Ҫ�����Ż�˷�������" << endl;
				cin >> numa;
				if (!cin)
				{
					return 0;
				}
			}
			cout << "�ֺ��Գ˷���ð���Կ���" << endl;
			cin >> oper;
			if (oper == ';')
			{
				cout << "���������ָ����" << endl;
				cin >> index;
				result = pow(numa, index);
				cout << "answer=" << result << endl;
			}
			if (oper == ':')
			{
				cout << "���������ָ����" << endl;
				cin >> index;
				result = pow(numa, (1 / index));
				cout << "answer=" << result << endl;
			}
			cout << "�Ƿ񱣴汾����ֵ��0�ǣ�1����ʱֻ֧����������,�˷��뷽�������Ǻ������棩" << endl;
			cin >> save;
			if (save == 0)
			{
				m = result;
			}
			cout << "ѡ�ѡ������" << endl;
			cin >> opt;
			if (opt == 0)
			{
				start = opt+1;
			}
		}
		while (opt == 3)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "�Ƿ�ʹ���ϴμ������ֵ��1������0ʹ��" << endl;
			cin >> opt1;
			if (opt1 == 0)
			{
				numa = m;
			}
			else
			{
				cout << "����һ������ֵ�������sin��cos��tan" << endl;
				cin >> numa;
				if (!cin)
				{
					return 0;
				}
			}
			numb = numa * pi / 180;
			cout << "����1����sin��2����cos��3����tan" << endl;
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
			cout << "�Ƿ񱣴汾����ֵ��0�ǣ�1����ʱֻ֧����������,�˷��뷽�������Ǻ������棩" << endl;
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
			cout << "һԪһ�η��̣������Ű棬�ڲ��С�������������������������������������������ڲ����롣" << endl;
			cin >> key;
			if (!cin)
			{
				cout << "�����ַ�����,����Ϊ������" << endl;
				return 0;
			}
			if (key == 233)
			{
				Sleep(1000);
				cout << "��ܰ��ʾ����Ҫ�����硰5x����ʡ�Գ˺ŵģ�����ϳ˺š������ʽΪ��numa+numb+oper+x=e+f+result+h����һ���ԣ���һ��һ����������" << endl;
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
					cout << "�������,����������1���ڹر�" << endl;
					Sleep(1000);
					start = start + 1;
				}
			}
		}
		while (opt == 5)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "����1ѡ����������2ѡ��������" << endl;
			cin >> opt_;
			if (opt_ == 1)
			{
				cout << "1�����Σ�2�����Σ�3Բ�Σ�4������" << endl;
				cin >> opt_1;
				if (opt_1 == 1)
				{
					cout << "����߳�" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cout << "���뵥λ��mm��cm��dm��m��km��" << endl;
					cin >> danwei;
					numa = pow('numa', 2);
					cout << "����ǣ�" << numa << danwei << "^2" << endl;
				}
				if (opt_1 == 2)
				{
					cout << "���볤" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cout << "�����" << endl;
					cin >> numb;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cout << "���뵥λ" << endl;
					cin >> danwei;
					result = numa * numb;
					cout << "�����" << result << danwei << "^2" << endl;
				}
				if (opt_1 == 3)
				{
					cout << "����뾶" << endl;
					cin >> r;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cout << "���뵥λ��mm��cm��dm��m��km��" << endl;
					cin >> danwei;
					r = pow('r', 2);
					result = r * pi;
					cout << "����ǣ�" << result << danwei << "^2" << endl;
				}
				if (opt_1 == 4)
				{
					cout << "" << endl;
					cin >> opt_2;
					if (opt_2 == 1)
					{
                    cout << "��������" << endl;
					cin >> numa;
					cout << ",";
					cin >> numb;
					cout << ",";
					cin >> numc;
					p = (numa + numb + numc) / 2;
					result = p * (p - numa) * (p - numb) * (p - numc);
					result = sqrt(result);
					cout << "���뵥λ����д��" << endl;
					cin >> danwei;
					cout << "����ǣ�" << result << danwei<<"^2"<<endl;
					}
					if (opt_2 == 2)
					{
						cout << "�����" << endl;
						cin >> numa;
						cout << "�����" << endl;
						cin >> numb;
						result = numa * numb / 2;
						cout << "���뵥λ����д��" << endl;
						cin >> danwei;
						cout << "����ǣ�" << result << danwei << "^2";
					}
				}
				cout << "ѡ�ѡ������" << endl;
				cin >> opt;
				if (opt == 0)
				{
					start = opt + 1;
				}
			}
			if (opt_ == 2)
			{
				cout << "1�����壬2�����壬3Բ���壬4Բ׶" << endl;
				cin >> opt_2;
				if (opt_2 == 1)
				{
					cout << "����߳�" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					result = pow('numa', 3);
					cout << "���뵥λ" << endl;
					cin >> danwei;
					cout << "����ǣ�" << result << danwei << "^3" << endl;
				}
				if (opt_2 == 2)
				{
					cout << "���볤,���ߣ�ÿ�����ֵļ���ûس����棩" << endl;
					cin >> numa;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cin >> numb;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cin >> numc;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					result = numa * numb * numc;
					cout << "���뵥λ" << endl;
					cin >> danwei;
					cout << "�����" << result << danwei << "^3" << endl;
				}
				if (opt_2 == 3)
				{
					cout << "�������뾶���ߣ���ֵ֮��ֱ�ӻس���" << endl;
					cin >> r;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cin >> numa;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					r = pow('r', 2);
					result = r * pi * numa;
					cout << "���뵥λ" << endl;
					cin >> danwei;
					cout << "�����" << result << danwei << "^3" << endl;
				}
				if (opt_2 == 4)
				{
					cout << "�������뾶���ߣ���ֵ֮��ֱ�ӻس���" << endl;
					cin >> r;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					cin >> numa;
					if (!cin)
					{
						cout << "�������" << endl;
						return 0;
					}
					r = pow('r', 2);
					result = r * pi * numa / 3;
					cout << "���뵥λ" << endl;
					cin >> danwei;
					cout << "�����" << result << danwei << "^3" << endl;
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