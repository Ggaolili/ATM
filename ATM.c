#include <stdio.h>///ͷ�ļ�stdio.h
#include<string.h>///ͷ�ļ�string.h
#include<windows.h>///ͷ�ļ�window.h

void shouye(void);///��ҳ
void zhuce(void);///ע��
void zhuce2(void);///ע��
void denglu(void);///��¼�˺�
void key(int z);///����
void gongneng(int z);///������
void cunkuan(int z);///���
void qukuan(int z);///ȡ��
void chaxun(int z);///��ѯ
void zhuanzhang(int z);///ת��
void mimay(int z);///��������
void guashione(void);///��ʧ1
void guashitwo(int z);///��ʧ2
void jiegua(void);///�����ʧ
void fanhui(int z);///����

int p=0;///����ȫ�ֱ���p������ʼ��Ϊ0

struct BANK///����һ���ṹ����ΪBANK�Ľṹ��
{
    char mima[7];///����
    char xingming[20];///����
	char dianhuahao[13];///�绰��
	long int yue;///���
	int zhuangtai;///״̬

}BANKS[101];///�����ṹ������

int main()///������
{
	printf("\t\t��ӭʹ�ñ�ATM����\n");///\ nΪ���з�,\ tΪTAB,��������ĸ��ո�
	shouye();///������ҳ�Ӻ���
	return 0;///�˳���������0ֵ���ظ���������
}

void shouye(void)///��ҳ
{
    int x=0;///�������x������ʼ��Ϊ0

    printf("\n\t\t  ��ѡ��ҵ��:\n");/// \ nΪ���з�,\ tΪTAB,��������ĸ��ո�
    printf("\t1.ע��  2.��¼  3.��ʧ  4.�����ʧ \n");
    printf("\t0.�˳�\n");
    scanf("%d",&x);///���뺯��,&Ϊȡ��ַ��
    switch(x)///ѡ���ж����,xΪ����
   {
      case 1:///xΪ1��ѡ��
	  {
	      system("cls");///��������,ͷ�ļ�--> windows.h
	      zhuce();///����ע���Ӻ���
	       break;///����switch����
	  }
      case 2:///xΪ2��ѡ��
	  {
	      system("cls");///��������,ͷ�ļ�--> windows.h
	      denglu();///���õ�¼�˺��Ӻ���
          break;///����switch����
	  }
      case 3:///xΪ3��ѡ��
	  {
	      system("cls");///��������,ͷ�ļ�--> windows.h
	      guashione(); ///���ù�ʧ1�Ӻ���
          break;///����switch����
	  }
	  case 4:///xΪ4��ѡ��
	  {
	      system("cls");///��������,ͷ�ļ�--> windows.h
	      jiegua(); ///���ý����ʧ�Ӻ���
	      break;///����switch����
	  }
	  case 0:///xΪ0��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
          printf("��ӭ�´�������\n");
	      break;///����switch����
	  }
      default:///��������1��2��3��4��5��0ʱ�����������
      {
    	  system("cls");///��������,ͷ�ļ�--> windows.h
	      printf("��Ǹ��û�д�ҵ��,������ѡ��\n");
	      Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	      system("cls");///�������������Ӻ���,ͷ�ļ�--> windows.h
	      shouye();///������ҳ�Ӻ���
          break;///����switch����
      }
   }

}

void zhuce(void)///ע��
{
    p++;///��p����1
    int x=0;///�������x������ʼ��Ϊ0������switch����

    if(p<=101)///���pС�ڵ���101���ж��Ƿ�����˺�
    {
        BANKS[p].zhuangtai=0;///��ʼ��״̬Ϊ0
        BANKS[p].yue=0;///��ʼ�����Ϊ0
	    zhuce2();///����ע��2�Ӻ���
	    printf("�����뿪����������");
	    scanf("%s",BANKS[p].xingming);///��������
        printf("������11λ�绰�ţ�");
	    scanf("%s",BANKS[p].dianhuahao);///����绰��
	    printf("����ʱ�����������Ľ�");
	    scanf("%ld",&BANKS[p].yue);///�������
	    system("cls");///��������,ͷ�ļ�--> windows.h
        printf("ע��ɹ����˻�������\n\n");
        printf("�����˻���Ϣ��\n");
        printf("\t  ======================================================== \n");
        printf("\t                ��  �ţ�%d                             \n",p);///����˺�
        printf("\t                ��  ��: %s                             \n",BANKS[p].xingming);///�������
        fflush(stdin);///������뻺������ͨ����Ϊ��ȷ����Ӱ���������ݶ�ȡ
        printf("\t                ��  ��: %s                             \n",BANKS[p].mima);///�������
        printf("\t                �ֻ���: %s                             \n",BANKS[p].dianhuahao);///����ֻ���
        printf("\t                ��  �%ld                             \n",BANKS[p].yue);///������
        printf("\t  ======================================================== \n\n");
        printf("��ѡ����:\n");
        printf("1.����ҳ��  2.�˳�\n");
        scanf("%d",&x);///���뺯��,&Ϊȡ��ַ��
      switch(x)///ѡ���ж����,xΪ����
      {
        case 1:///xΪ1��ѡ��
	    {
		    system("cls");///��������,ͷ�ļ�--> windows.h
	        shouye();///������ҳ�Ӻ���
            break;///����switch����
	    }
        case 2:///xΪ2��ѡ��
	    {
		    system("cls");///��������,ͷ�ļ�--> windows.h
	        printf("ллʹ�ã���ӭ�´�������\n");
	        Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
            system("cls");///��������,ͷ�ļ�--> windows.h
            break;///����switch����
	    }
        default:///��������1��2ʱ�����������
        {
        	system("cls");///��������,ͷ�ļ�--> windows.h
	        printf("��Ǹ��û�д�ҵ��\n");
	        Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
            system("cls");///��������,ͷ�ļ�--> windows.h
            break;///����switch����
	    }
      }
    }

    else if(p>101)///���p����101���ж��Ƿ�����˺�
    {
        printf("��Ǹ��ע���˺��Ѵﵽ����\n");
        Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
        system("cls");///��������,ͷ�ļ�--> windows.h
        shouye();///������ҳ�Ӻ���
    }

}

void zhuce2(void)///ע��2
{
	printf("���趨6λ���룺");
	scanf("%s",BANKS[p].mima);///��������
	if(strlen(BANKS[p].mima)==6);///�ж�������λ,ͷ�ļ�--> string.h
	else if(strlen(BANKS[p].mima)!=6)///�ж�������λ,ͷ�ļ�--> string.h
    {
        system("cls");///��������,ͷ�ļ�--> windows.h
        zhuce2();///����ע���Ӻ���
    }
}

void denglu(void)///��¼�˺�
{
    int x=0;///�������x������ʼ��Ϊ0
	int o=0;///�������o������ʼ��Ϊ0

    printf("�������˺ţ�\n");
    scanf("%d",&x);
    system("cls");///��������,ͷ�ļ�--> windows.h
    if(BANKS[x].zhuangtai==0)///�ж�������˺��Ƿ��ʧ
    {
        for(o=0;o<=p;o++)///forѭ������0++���Ա�����ж��Ƿ�����˻�
        {
          if(x==o)///�ж������x�Ƿ����
          {
                Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
                system("cls");///��������,ͷ�ļ�--> windows.h
                key(x);///���������Ӻ���������ֵx���Ӻ���
                break;
          }
          else///�ж������x�Ƿ����
          {
               if(o==p)///���x��p����ͬ���˺��������
               {
                printf("(�˺Ŵ��������������˺�)");
               Sleep(900);///��ʱ900ms,ͷ�ļ�--> windows.h
               system("cls");///����,ͷ�ļ�--> windows.h
               denglu();///���õ�¼�˺��Ӻ���

               }
          }
        }
    }
    else if(BANKS[x].zhuangtai==1)///�ж�������˺��Ƿ��ʧ
    {
            printf("�˻��ѹ�ʧ��������ʧ��");
            Sleep(900);///��ʱ900ms,ͷ�ļ�--> windows.h
            system("cls");///����,ͷ�ļ�--> windows.h
            shouye();///������ҳ�Ӻ���
    }
}

void key(int z)///����
{
    char x[7]={0};///�����ַ����������x������ʼ��Ϊ0
	int i=0;///�������i������ʼ��Ϊ0

    for (i=0; i<3; i++)///forѭ������������������֤
    {
        printf("���������룺");
	    scanf("%s", x);///��������
        if(strcmp(BANKS[z].mima,x)==0)///�����ȣ���ִ������ĺ����� ,ͷ�ļ�-->string.h
          {
             break;///����if���
          }
    	else///������ȣ���ִ������ĺ�����
          {
            printf("ʧ��!\n");
          }
    }

    if (i<3)///���i<3�������������
    {
        printf("��¼�ɹ�\n");
        Sleep(900);///��ʱ900ms,ͷ�ļ�--> windows.h
        system("cls");///����,ͷ�ļ�--> windows.h
        gongneng(z);///�����������Ӻ���������ֵz���Ӻ���
    }
    else///����i>=3�������������
    {
       printf("�������3�Σ��˻��ѹ�ʧ��\n");
       Sleep(900);///��ʱ900ms,ͷ�ļ�--> windows.h
       system("cls");///����,ͷ�ļ�--> windows.h
       guashitwo(z);///���ù�ʧ2�Ӻ���������ֵz���Ӻ���
    }
}

void gongneng(int z)///������
{
    int b=0;///�������b������ʼ��Ϊ0

    system("cls");///��������
    printf("\t \n");///\ tΪTAB,��������ĸ��ո�
    printf("\t  ��ӭ��%s\n",BANKS[z].xingming);///�����ӭ������
    Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
    system("cls");///��������,ͷ�ļ�--> windows.h
    printf("\t    ��ѡ��ҵ��:\n");
    printf("\t1.���  2.ȡ��  3.��ѯ \n");
    printf("\t4.ת��  5.����\n");
    printf("\t0.�˳�\n");
    scanf("%d",&b);///���뺯��,&Ϊȡ��ַ��
    switch(b)///ѡ���ж����,bΪ����
    {
      case 1:///bΪ1��ѡ��
	  {
	  	  system("cls");///��������,ͷ�ļ�--> windows.h
          cunkuan(z);///���ô���Ӻ���������ֵz���Ӻ���
	      break;///����switch����
	  }
      case 2:///bΪ2��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      qukuan(z);///����ȡ���Ӻ���������ֵz���Ӻ���
	      break;///����switch����
	  }
      case 3:///bΪ3��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      chaxun(z);///���ò�ѯ�Ӻ���������ֵz���Ӻ���
          break;///����switch����
	  }
      case 4:///bΪ4��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      zhuanzhang(z);///����ת���Ӻ���������ֵz���Ӻ���
	      break;///����switch����
	  }
      case 5:///bΪ5��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      mimay(z);///���ø��������Ӻ���������ֵz���Ӻ���
	      break;///����switch����
	  }
      case 0:///bΪ0��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      shouye();///������ҳ�Ӻ���
	      break;///����switch����
	  }
      default:///��������1��2��3��4��5��0ʱ�����������
      {
    	  system("cls");///��������,ͷ�ļ�--> windows.h
	      printf("��Ǹ��û�д�ҵ��\n");
	      break;///����switch����
	  }
    }

}

void cunkuan(int z)///���
{
    long int i=0;///���峤���ͱ���i������ʼ��Ϊ0

	system("cls");///����,ͷ�ļ�--> windows.h
	printf("��������Ҫ�������\n");
	scanf("%ld",&i);///��������
	system("cls");///����,ͷ�ļ�--> windows.h
	printf("���Ե�...");
	Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	BANKS[z].yue+=i;///�൱��BANKS[z].yue=BANKS[z].yue+i
	system("cls");///����,ͷ�ļ�--> windows.h
	printf("���ɹ�\n");
	Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	system("cls");///��������,ͷ�ļ�--> windows.h
	fanhui(z);///���÷����Ӻ���
}

void qukuan(int z)///ȡ��
{
    long int h=0;///���峤���ͱ���h������ʼ��Ϊ0

	system("cls");///����,ͷ�ļ�--> windows.h
	printf("��������Ҫȡ������\n");
	scanf("%ld",&h);
	system("cls");///����,ͷ�ļ�--> windows.h
	printf("���Ե�...");
	Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	if(BANKS[z].yue>=h)///�ж�ȡ���Ƿ�������
       {
          BANKS[z].yue-=h;///�൱��BANKS[z].yue=BANKS[z].yue-i
	      system("cls");///����,ͷ�ļ�--> windows.h
	      printf("ȡ��ɹ�\n");
	      printf("ȡ����%ld",h);///���ȡ����
	      Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	      system("cls");///��������,ͷ�ļ�--> windows.h
       }
	else if(BANKS[z].yue<h)///�ж�ȡ���Ƿ�������
       {
	      system("cls");///����,ͷ�ļ�--> windows.h
	      printf("���㣬ȡ��ʧ��\n");
	      Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	      system("cls");///��������,ͷ�ļ�--> windows.h
       }
    fanhui(z);///���÷����Ӻ���������ֵz���Ӻ���
}

void chaxun(int z)///��ѯ
{
  	system("cls");///����,ͷ�ļ�--> windows.h
	printf("�������Ϊ\n");
	printf("%ld\n",BANKS[z].yue);///������
    fanhui(z);///���÷����Ӻ���������ֵz���Ӻ���
}

void zhuanzhang(int z)///ת��
{
     int r=0;///�������r������ʼ��Ϊ0
     int f=0;///�������f������ʼ��Ϊ0
     system("cls");///����,ͷ�ļ�--> windows.h
     printf("������ת���˻���(����ϸȷ���˻���\n");
     scanf("%d",&r);///����ת���˻�r
     if(r!=z)///�ж��˻�r�Ƿ���ڵ�ǰ��½�˻������ܸ��Լ�ת��
     {
           if(r<=p)///�ж��Ƿ����r�˻�
           {
     	        printf("������ת�˽�\n");
     	        scanf("%d",&f);
     	        if(BANKS[z].yue>=f)///�жϵ�ǰ�˻�����ܷ�ʵ��ת��
       	        {
     	        printf("ת�˳ɹ���\n");
     	        Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
                system("cls");///��������,ͷ�ļ�--> windows.h
     	        BANKS[z].yue-=f;///�൱��BANKS[z].yue=BANKS[z].yue-f
     	        BANKS[r].yue+=f;///�൱��BANKS[r].yue=BANKS[r].yue+f
     	        fanhui(z);///���÷����Ӻ���������ֵz���Ӻ���
      	         }
       	        else if(BANKS[z].yue<f)///�жϵ�ǰ�˻�����ܷ�ʵ��ת��
      	         {
	     	         system("cls");///����,ͷ�ļ�--> windows.h
	      	         printf("���㣬ת��ʧ��\n");
	      	         Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	       	         system("cls");///��������,ͷ�ļ�--> windows.h
	       	         fanhui(z);///���÷����Ӻ���������ֵz���Ӻ���
        	         }

	       }
	       else if(r>p)///�ж��Ƿ����r�˻�
	       {
	 	      printf("�˻������ڣ����������� \n");
	 	      Sleep(500);///��ʱ500ms,ͷ�ļ�--> windows.h
	          system("cls");///��������,ͷ�ļ�--> windows.h
	 	      zhuanzhang(z);///����ת���Ӻ���������ֵz���Ӻ���
	       }
     }
     else///�ж��˻�r�Ƿ���ڵ�ǰ��½�˻������ܸ��Լ�ת��
     {
         printf("������˺����¼�˺���ͬ������������");///
          Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
          system("cls");///����,ͷ�ļ�--> windows.h
         zhuanzhang(z);///����ת���Ӻ���������ֵz���Ӻ���
     }


}

void mimay(int z)///��������
{
    char i[13]={0};///�����ַ����������i������ʼ��Ϊ0

    system("cls");///����,ͷ�ļ�--> windows.h
    printf("�������ֻ��ţ�");
    scanf("%s", i);///�����ֻ���
    system("cls");///����,ͷ�ļ�--> windows.h
    if(strcmp(BANKS[z].dianhuahao,i)==0)///�ж�������ֻ����Ƿ��뵱ǰ�˻����
    {
    	printf("���趨�µ�6λ���룺\n");
	    scanf("%s",BANKS[z].mima);///����������
    	if(strlen(BANKS[z].mima)==6)///�ж�������λ,ͷ�ļ�--> string.h
    	{
           printf("������ĳɹ���\n");
	       Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
	       fanhui(z);///���÷����Ӻ���������ֵz���Ӻ���
    	}
	    else if(strlen(BANKS[z].mima)!=6)///�ж�������λ,ͷ�ļ�--> string.h
	    {
	        printf("����������λ���룬���������룩");
            Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
            system("cls");///����,ͷ�ļ�--> windows.h
	        mimay(z);///��������
	    }


    }
    else if(strcmp(BANKS[z].dianhuahao,i)!=0)///�ж�������ֻ����Ƿ��뵱ǰ�˻����
    {
        printf("���绰������������������룩");
        Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
        system("cls");///����,ͷ�ļ�--> windows.h
        mimay(z);///���ø��������Ӻ���������ֵz���Ӻ���
    }
}

void guashione(void)///��ʧ1
{
    int v=0;///�������v������ʼ��Ϊ0

    printf("������Ҫ��ʧ���˺ţ�\n");
    scanf("%d",&v);///������Ҫ��ʧ���˻�
    if(v<=p)///�ж��Ƿ����v�˻�
    {
        BANKS[v].zhuangtai=1;///��1��ֵ��״̬
        printf("��ʧ�ɹ���\n");
        Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
        system("cls");///����,ͷ�ļ�--> windows.h
        shouye();///������ҳ�Ӻ���
    }
    else if(v>p)///�ж��Ƿ����v�˻�
    {
        printf("���˺�����������������룩");
         Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
         system("cls");///����,ͷ�ļ�--> windows.h
         guashione();///���ù�ʧ1�Ӻ���
    }
}

void guashitwo(int z)///��ʧ2
{
        BANKS[z].zhuangtai=1;///��1��ֵ��״̬
        system("cls");///����,ͷ�ļ�--> windows.h
        shouye();///������ҳ�Ӻ���
}

void jiegua(void)///�����ʧ
{
    int v=0;///�������v������ʼ��Ϊ0
    char i[13];///�����ַ����������i������ʼ��Ϊ0

    printf("������Ҫ�����ʧ���˺ţ�\n");
    scanf("%d",&v);///������Ҫ�����ʧ���˻�
    system("cls");///����,ͷ�ļ�--> windows.h
    if(BANKS[v].zhuangtai==0)///�ж��˺��Ƿ���Ҫ�����ʧ
    {
        printf("�����˺���������������ʧ");
        Sleep(900);///��ʱ900ms,ͷ�ļ�--> windows.h
        system("cls");///����,ͷ�ļ�--> windows.h
        shouye();///������ҳ�Ӻ���
    }
    else if(BANKS[v].zhuangtai==1)///�ж��˺��Ƿ���Ҫ�����ʧ
    {
        printf("�������ֻ��ţ����ʱ��Ҫ�����ֻ�����֤����");
        scanf("%s", i);///�����ֻ���
        system("cls");///����,ͷ�ļ�--> windows.h
        if(strcmp(BANKS[v].dianhuahao,i)==0)///�ж�����ĵ绰���Ƿ���v�˻��绰����ͬ
        {
            printf("���趨�µ�6λ���룺\n");
	        scanf("%s",BANKS[v].mima);///����������
	        if(strlen(BANKS[v].mima)==6)///�ж�������λ,ͷ�ļ�--> string.h
	        {
	            BANKS[v].zhuangtai=0;///��0��ֵ��״̬
                printf("��ҳɹ���\n");
                Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
                system("cls");///����,ͷ�ļ�--> windows.h
                shouye();///������ҳ�Ӻ���
	        }
	        else if(strlen(BANKS[v].mima)!=6)///�ж�������λ,ͷ�ļ�--> string.h
	        {
	            printf("����������λ���룬���������룩");
               Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
               system("cls");///����,ͷ�ļ�--> windows.h
               jiegua();///�����ʧ
	        }


        }
        else if(strcmp(BANKS[v].dianhuahao,i)!=0)///�ж�����ĵ绰���Ƿ���v�˻��绰����ͬ
        {
            printf("�绰�������������������");
            Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
            system("cls");///����,ͷ�ļ�--> windows.h
            jiegua();///���ý����ʧ�Ӻ���
        }
    }

}

void fanhui(int z)///����
{
    int x=0;///�������x������ʼ��Ϊ0

    printf("��ѡ����:\n");
    printf("1.����������ҳ  2.�˳�\n");
    scanf("%d",&x);///���뺯��,&Ϊȡ��ַ
    switch(x)///ѡ���ж����,bΪ����
    {
      case 1:///xΪ1��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      gongneng(z);///���ù����Ӻ���������ֵz���Ӻ���
	      break;///����switch����
	  }
      case 2:///xΪ2��ѡ��
	  {
		  system("cls");///��������,ͷ�ļ�--> windows.h
	      printf("ллʹ�ã���ӭ�´�������\n");
	      Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
	      system("cls");///��������,ͷ�ļ�--> windows.h
	      shouye();///������ҳ�Ӻ���
	      break;///����switch����
	  }
      default:///��������1��2ʱ�����������
      {
          system("cls");///��������,ͷ�ļ�--> windows.h
	      printf("��Ǹ��û�д�ҵ��,������ѡ��\n");
	      Sleep(700);///��ʱ700ms,ͷ�ļ�--> windows.h
	      system("cls");///��������,ͷ�ļ�--> windows.h
          fanhui(z);///���÷����Ӻ���������ֵz���Ӻ���
	      break;///����switch����
	 }
    }
}
