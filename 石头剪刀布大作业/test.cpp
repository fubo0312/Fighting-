#include "stdafx.h"
#include<iostream>

using namespace std;
int sum = 0;
class chengji
{
public:
	chengji(int a = 0, int b = 0, int c = 0)//=======Ĭ�Ϲ��캯��
	{
		win = a;
		los = b;
		tie = c;
	}
	void gshow();
	friend void bijiao(int a, int b);//=======Ҫ��˽�г�Ա���д�������Ϊ��Ԫ����
private:
	int win;
	int los;
	int tie;
}ni;
void chengji::gshow()
{
	cout << "��Ϸ���ܴ���Ϊ: " << sum << endl;
	cout << "��ʱ��Ϸ���Ϊ��:" << endl;
	cout << "=========|��|����|===" << endl;
	cout << "��ʤ�Ĵ���|" << this->win << "|"<<sum-win-tie<<" | "<<endl;
		cout << "ս��Ĵ���|" << this->los << "|"<<sum-los-tie<<" | "<<endl;
		cout << "====" << endl;
	cout << "ƽ�ֵĴ���Ϊ: " << tie << endl;
}
void tishi()
{
	cout << "ʯͷ��������Ϸ" << endl;
	cout << "�������Ϸ��" << endl;
	cout << "c��ʾ��" << endl;
	cout << "h��ʾʯͷ" << endl;
	cout << "s��ʾ����" << endl;
	cout << "��Ϸ�ߺͻ�����ֻѡ��c,h,s�е�һ��.������ߵ�ѡ����ͬ" << endl;
	cout << "��ô��һ�־���ƽ��ͬʱʤ������Ϊ:" << endl;
	cout << "����ʯͷ,�򲼻�ʤ" << endl;
	cout << "ʯͷ�ͼ���, ��ʯͷ��ʤ" << endl;
	cout << "�����Ͳ��� �������ʤ " << endl;
	cout << "����Ϸ�У��������ʾ������ؼ��ִ�Ȼ���Իس���ȷ��" << endl;
	cout << "�ؼ��ִ�����:" << endl;
	cout << "- g��ʾ��ʾ��ʱ����Ϸ���" << endl;
	cout << "- p��ʾ��ȡ��Ϸ����" << endl;
	cout << "- i��ʾ��ȡ��Ϸ֪����Ϣ" << endl;
	cout << "- q��ʾ�˳���Ϸ����" << endl;
}
void help()//��������  p  �ַ��Ĵ���
{
	cout << "��������������ַ�" << endl;
	cout << "- c��ʾ��" << endl;
	cout << "- h��ʾ����" << endl;
	cout << "- s��ʾ����" << endl;
	cout << "- g�鿴��Ϸ���" << endl;
	cout << "- p�ַ��������" << endl;
	cout << "- i���´�ӡ����Ϸָ����Ϣ" << endl;
	cout << "- q�˳���Ϸ����" << endl;
}
int mach()// ������Գ�ֵ�ĺ���
{
	static int i;
	i = ++i % 3;
	return((i == 0) ? 3 : ((i == 1) ? 1 : 2));
}
int select()//ѡ�����뺯��
{
	int sele;
	char x;
	cout << "������'c'��-'h'ʯ��-'s'����-'g'�Y��-'p'����-'i'����-'q'�˳�" << endl;
	while (1)
	{
		cin >> x;
		if (x == 'c'|| x == 'h' || x == 's' || x == 'g' || x == 'p' || x == 'i' || x == 'q') {
			break;
		}
	};
	switch (x) {
	case'h':sele = 1; break;//1��ʾ ʯͷ
	case's':sele = 2; break;//2 ��ʾ ����
	case'c':sele = 3; break;//3��ʾ ��
	case'g':sele = 0; ni.gshow(); break;
	case'p':sele = 0; help(); break;
	case'i':sele = 0; tishi(); break;
	case'q':sele = 4; break;
	}
	return sele;
}
void bijiao(int a, int b)//�β�a��ʾ�����Լ���ѡ��b��ʾ���ǵ�����ҵ�ѡ��
{
	if (a == 1)
	{
		if (b == 1) {
			ni.tie++;
			cout << "��� ʯͷ" << endl;
			cout << "���� ʯͷ" << endl;
			cout << " �˾�Ϊƽ��" << endl;
		}
		else if (b == 2) {
			ni.win++;
			cout << "��� ʯͷ" << endl;
			cout << "���� ����" << endl;
			cout << "��Ӯ��!!!!!!" << endl;
		}
		else {
			ni.los++;
			cout << "��� ʯͷ" << endl;
			cout << "���� ��" << endl;
			cout << "���ź�!!!!!" << endl;
		}
	}
	else if (a == 2)
	{
		if (b == 1) {
			ni.los++;
			cout << "�������" << endl;
			cout << "���� ʯͷ" << endl;
			cout << "������!!!!!" << endl;
		}
		else if (b == 2) {
			ni.tie++;
			cout << "�������" << endl;
			cout << "���Լ���" << endl;
			cout << "�˾�Ϊƽ��" << endl;
		}
		else {
			ni.win++;
			cout << "��� ����" << endl;
			cout << "���� ��" << endl;
			cout << "��Ӯ��!!!!!" << endl;
		}
			}
		else
		{
			if (b == 1) {
				ni.win++;
				cout << "��� ��" << endl;
				cout << "���� ʯͷ" << endl;
				cout << "���A��!!!!!" << endl;
			}
			else if (b == 2) {
				ni.los++;
				cout << "��� ��" << endl;
				cout << "���� ����" << endl;
				cout << "���ź�!!!!!" << endl;
			}
			else {
				ni.tie++;
				cout << "�����" << endl;
				cout << "���Բ�" << endl;
				cout << "�˾�Ϊƽ��" << endl;
			}
		}
		}
		int main()
		{
			tishi();
			int nval = 0, dval = 0;
			while (1)
			{
				nval = select();
				if (nval == 4) break;
				if (nval != 0)
				{
					sum++;
					dval = mach();
					bijiao(nval, dval);
				}
			};
			return 0;
		}
