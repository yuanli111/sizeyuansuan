#define _CRT_SECURE_NO_WARNINGS��
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>
#include <fstream>  
#include <iomanip>  
#include<ctime>
using namespace std;
FILE* f3;
void SiZeYS(int NumS, int SuanF, int MaxS, int KuoH, int XiaoS, int WJ);
int main()
{
    int NumS;//��Ŀ����
    int SuanF;//�㷨
    int MaxS;//�����
    int KuoH;//�Ƿ�������
    int XiaoS;//�Ƿ���С��
    int WJ;//������ļ�
    f3 = fopen("stud.txt", "w");
    cout << "������������Ŀ������\n";
    cin >> NumS;
    while (1)
    {
        if (NumS > 100 || NumS <= 0)
        {
            cout << "�������\n";
            system("pause");
            cin >> NumS;
        }
        else
            break;
    }
    cout << "������������Ŀ���ͣ�\n";
    cout << "1.�ӷ� 2.���� 3.�Ӽ���Ϸ� 4.�˷� 5.���� 6�˳���Ϸ� 7�Ӽ��˳���\n";
    cin >> SuanF;
    while (1)
    {
        if ((SuanF != 1) && (SuanF != 2) && (SuanF != 3) && (SuanF != 4) && (SuanF != 5) && (SuanF != 6) && (SuanF != 7))
        {
            cout << "�������\n";
            system("pause");
            cin >> SuanF;
        }
        else
            break;
    }
    cout << "�����������������\n";
    cin >> MaxS;
    while (1)
    {
        if (MaxS < 0 || MaxS>10000)
        {
            cout << "�������\n";
            system("pause");
            cin >> MaxS;
        }
        else
            break;
    }
    if (SuanF == 7)
    {
        cout << "�������Ƿ������ţ�\n";
        cout << "1.û�� 2.��\n";
        cin >> KuoH;
        while (1)
        {
            if (KuoH != 1 && KuoH != 2)
            {
                cout << "�������\n";
                system("pause");
                cin >> KuoH;
            }
            else
                break;
        }
    }
    cout << "�������Ƿ���С����\n";
    cout << "1.û�� 2.��\n";
    cin >> XiaoS;
    while (1)
    {
        if (XiaoS != 1 && XiaoS != 2)
        {
            cout << "�������\n";
            system("pause");
            cin >> XiaoS;
        }
        else
            break;
    }
    //SiZeYS(NumS,SuanF,MaxS,KuoH,XiaoS);//����������ú���
    cout << "�Ƿ�Ҫ����ļ���\n";
    cout << "1.����Ҫ 2.��Ҫ\n";
    cin >> WJ;
    while (1)
    {
        if (WJ > 2 || WJ < 1)
        {
            cout << "�������\n";
            system("pause");
            cin >> NumS;
        }
        else
            break;
    }
    SiZeYS(NumS, SuanF, MaxS, KuoH, XiaoS, WJ);//����������ú���
    system("pause");
    return 0;
}
void  SiZeYS(int NumS, int SuanF, int MaxS, int KuoH, int XiaoS, int WJ)
{
    //f3 = fopen("stud.txt", "w");
    int i;
    srand((unsigned int)time(0));
    double A[1000];
    double B[1000];
    double C[1000];
    double D[1000];
    for (i = 0; i < NumS; i++)
    {
        A[i] = rand() % MaxS + 1;
        B[i] = rand() % MaxS + 1;
        C[i] = rand() % MaxS + 1;
        D[i] = rand() % MaxS + 1;
        //fout<<A[i]<<"+"<<B[i]<<"="<<endl;
        //cout<<A[i]<<C[i]<<B[i]<< D[i]<<endl;
    }
    if (XiaoS == 2)
    {
        for (i = 0; i < NumS; i++)
        {
            A[i] = A[i] * 0.01;
            B[i] = B[i] * 0.01;
            C[i] = C[i] * 0.01;
            D[i] = D[i] * 0.01;
        }
    }
    if (SuanF == 1)//�ӷ�����
    {
        for (i = 0; i < NumS; i++)
        {
            if (WJ == 1)
                cout << A[i] << "+" << B[i] << "+" << C[i] << "+" << D[i] << "=" << endl;
            if (WJ == 2)
                fprintf(f3, "%.4lf+%.4lf+%.4lf+%.4lf=\n", A[i], B[i], C[i], D[i]);

        }
    }
    if (SuanF == 2)//��������
    {
        for (i = 0; i < NumS; i++)
        {
            if (WJ == 1)
                cout << A[i] << "-" << B[i] << "-" << C[i] << "-" << D[i] << "=" << endl;
            if (WJ == 2)
                fprintf(f3, "%.4lf-%.4lf-%.4lf-%.4lf=\n", A[i], B[i], C[i], D[i]);
        }
    }
    if (SuanF == 3)//�Ӽ�����
    {
        for (i = 0; i < NumS; i++)
        {
            if (i % 2 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "+" << B[i] << "+" << C[i] << "-" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf+%.4lf+%.4lf-%.4lf=\n", A[i], B[i], C[i], D[i]);

            }
            else if (i % 3 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "+" << B[i] << "-" << C[i] << "+" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf+%.4lf-%.4lf+%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
            else if (i % 5 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "+" << B[i] << "-" << C[i] << "-" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf+%.4lf-%.4lf-%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
            else if (i % 7 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "-" << B[i] << "+" << C[i] << "+" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf-%.4lf+%.4lf+%.4lf=\n", A[i], B[i], C[i], D[i]);

            }
            else
            {
                if (WJ == 1)
                    cout << A[i] << "-" << B[i] << "+" << C[i] << "-" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf-%.4lf+%.4lf-%.4lf=\n", A[i], B[i], C[i], D[i]);

            }
        }
    }
    if (SuanF == 4)//�˷�����
    {
        for (i = 0; i < NumS; i++)
        {
            if (WJ == 1)
                cout << A[i] << "*" << B[i] << "*" << C[i] << "*" << D[i] << "=" << endl;
            if (WJ == 2)
                fprintf(f3, "%.4lf*%.4lf*%.4lf*%.4lf=\n", A[i], B[i], C[i], D[i]);

        }
    }
    if (SuanF == 5)//��������
    {
        for (i = 0; i < NumS; i++)
        {
            if (WJ == 1)
                cout << A[i] << "/" << B[i] << "/" << C[i] << "/" << D[i] << "=" << endl;
            if (WJ == 2)
                fprintf(f3, "%.4lf/%.4lf/%.4lf/%.4lf=\n", A[i], B[i], C[i], D[i]);
        }
    }
    if (SuanF == 6)//�˳�����
    {
        for (i = 0; i < NumS; i++)
        {
            if (i % 2 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "*" << B[i] << "*" << C[i] << "/" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf*%.4lf*%.4lf/%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
            else if (i % 3 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "*" << B[i] << "/" << C[i] << "*" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf*%.4lf/%.4lf*%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
            else if (i % 5 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "/" << B[i] << "*" << C[i] << "*" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf/%.4lf*%.4lf*%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
            else if (i % 7 == 0)
            {
                if (WJ == 1)
                    cout << A[i] << "/" << B[i] << "*" << C[i] << "*" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf/%.4lf*%.4lf*%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
            else
            {
                if (WJ == 1)
                    cout << A[i] << "/" << B[i] << "*" << C[i] << "/" << D[i] << "=" << endl;
                if (WJ == 2)
                    fprintf(f3, "%.4lf/%.4lf*%.4lf/%.4lf=\n", A[i], B[i], C[i], D[i]);
            }
        }
    }
    if (SuanF == 7)//����������
    {
        if (KuoH == 2)//����������������
        {
            for (i = 0; i < NumS; i++)
            {
                if (i % 2 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "*" << B[i] << "-" << C[i] << "+" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf*%.4lf-%.4lf+%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else if (i % 3 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "+" << B[i] << "*" << "(" << C[i] << "-" << D[i] << ")" << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf+%.4lf*(%.4lf-%.4lf)=\n", A[i], B[i], C[i], D[i]);
                }
                else if (i % 5 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "+" << B[i] << "*" << C[i] << "-" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf+%.4lf*%.4lf-%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else if (i % 7 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "+" << "(" << B[i] << "-" << C[i] << ")" << "*" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf+(%.4lf-%.4lf)*%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else
                {
                    if (WJ == 1)
                        cout << A[i] << "/" << "(" << B[i] << "+" << C[i] << ")" << "-" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf/(%.4lf+%.4lf)-%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
            }
        }
        if (KuoH == 1)//����������û������
        {
            for (i = 0; i < NumS; i++)
            {
                if (i % 2 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "*" << B[i] << "-" << C[i] << "+" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf*%.4lf-%.4lf+%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else if (i % 3 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "+" << B[i] << "*" << C[i] << "-" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf+%.4lf*%.4lf-%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else if (i % 5 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "+" << B[i] << "*" << C[i] << "+" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf+%.4lf*%.4lf+%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else if (i % 7 == 0)
                {
                    if (WJ == 1)
                        cout << A[i] << "+" << B[i] << "-" << C[i] << "/" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf+%.4lf-%.4lf/%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
                else
                {
                    if (WJ == 1)
                        cout << A[i] << "/" << B[i] << "-" << C[i] << "*" << D[i] << "=" << endl;
                    if (WJ == 2)
                        fprintf(f3, "%.4lf/%.4lf-%.4lf*%.4lf=\n", A[i], B[i], C[i], D[i]);
                }
            }
        }
    }
}