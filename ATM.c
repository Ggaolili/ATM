#include <stdio.h>///头文件stdio.h
#include<string.h>///头文件string.h
#include<windows.h>///头文件window.h

void shouye(void);///首页
void zhuce(void);///注册
void zhuce2(void);///注册
void denglu(void);///登录账号
void key(int z);///密码
void gongneng(int z);///主功能
void cunkuan(int z);///存款
void qukuan(int z);///取款
void chaxun(int z);///查询
void zhuanzhang(int z);///转账
void mimay(int z);///更改密码
void guashione(void);///挂失1
void guashitwo(int z);///挂失2
void jiegua(void);///解除挂失
void fanhui(int z);///返回

int p=0;///定义全局变量p，并初始化为0

struct BANK///声明一个结构名称为BANK的结构体
{
    char mima[7];///密码
    char xingming[20];///姓名
	char dianhuahao[13];///电话号
	long int yue;///余额
	int zhuangtai;///状态

}BANKS[101];///声明结构体数组

int main()///主函数
{
	printf("\t\t欢迎使用本ATM机！\n");///\ n为换行符,\ t为TAB,可以输出四个空格
	shouye();///调用首页子函数
	return 0;///退出函数并将0值返回给主调函数
}

void shouye(void)///首页
{
    int x=0;///定义变量x，并初始化为0

    printf("\n\t\t  请选择业务:\n");/// \ n为换行符,\ t为TAB,可以输出四个空格
    printf("\t1.注册  2.登录  3.挂失  4.解除挂失 \n");
    printf("\t0.退出\n");
    scanf("%d",&x);///输入函数,&为取地址符
    switch(x)///选择判断语句,x为变量
   {
      case 1:///x为1的选项
	  {
	      system("cls");///清屏函数,头文件--> windows.h
	      zhuce();///调用注册子函数
	       break;///跳出switch函数
	  }
      case 2:///x为2的选项
	  {
	      system("cls");///清屏函数,头文件--> windows.h
	      denglu();///调用登录账号子函数
          break;///跳出switch函数
	  }
      case 3:///x为3的选项
	  {
	      system("cls");///清屏函数,头文件--> windows.h
	      guashione(); ///调用挂失1子函数
          break;///跳出switch函数
	  }
	  case 4:///x为4的选项
	  {
	      system("cls");///清屏函数,头文件--> windows.h
	      jiegua(); ///调用解除挂失子函数
	      break;///跳出switch函数
	  }
	  case 0:///x为0的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
          printf("欢迎下次再来！\n");
	      break;///跳出switch函数
	  }
      default:///当不输入1，2，3，4，5，0时进行以下语句
      {
    	  system("cls");///清屏函数,头文件--> windows.h
	      printf("抱歉，没有此业务,请重新选择\n");
	      Sleep(500);///延时500ms,头文件--> windows.h
	      system("cls");///调用清屏函数子函数,头文件--> windows.h
	      shouye();///调用首页子函数
          break;///跳出switch函数
      }
   }

}

void zhuce(void)///注册
{
    p++;///让p递增1
    int x=0;///定义变量x，并初始化为0，用于switch函数

    if(p<=101)///如果p小于等于101，判断是否存在账号
    {
        BANKS[p].zhuangtai=0;///初始化状态为0
        BANKS[p].yue=0;///初始化余额为0
	    zhuce2();///调用注册2子函数
	    printf("请输入开户者姓名：");
	    scanf("%s",BANKS[p].xingming);///输入姓名
        printf("请输入11位电话号：");
	    scanf("%s",BANKS[p].dianhuahao);///输入电话号
	    printf("开户时需存款，请输入你的金额：");
	    scanf("%ld",&BANKS[p].yue);///输入余额
	    system("cls");///清屏函数,头文件--> windows.h
        printf("注册成功，账户正常！\n\n");
        printf("您的账户信息：\n");
        printf("\t  ======================================================== \n");
        printf("\t                账  号：%d                             \n",p);///输出账号
        printf("\t                姓  名: %s                             \n",BANKS[p].xingming);///输出姓名
        fflush(stdin);///清空输入缓冲区，通常是为了确保不影响后面的数据读取
        printf("\t                密  码: %s                             \n",BANKS[p].mima);///输出密码
        printf("\t                手机号: %s                             \n",BANKS[p].dianhuahao);///输出手机号
        printf("\t                余  额：%ld                             \n",BANKS[p].yue);///输出余额
        printf("\t  ======================================================== \n\n");
        printf("请选择功能:\n");
        printf("1.返回页面  2.退出\n");
        scanf("%d",&x);///输入函数,&为取地址符
      switch(x)///选择判断语句,x为变量
      {
        case 1:///x为1的选项
	    {
		    system("cls");///清屏函数,头文件--> windows.h
	        shouye();///调用首页子函数
            break;///跳出switch函数
	    }
        case 2:///x为2的选项
	    {
		    system("cls");///清屏函数,头文件--> windows.h
	        printf("谢谢使用，欢迎下次再来！\n");
	        Sleep(700);///延时700ms,头文件--> windows.h
            system("cls");///清屏函数,头文件--> windows.h
            break;///跳出switch函数
	    }
        default:///当不输入1，2时进行以下语句
        {
        	system("cls");///清屏函数,头文件--> windows.h
	        printf("抱歉，没有此业务\n");
	        Sleep(700);///延时700ms,头文件--> windows.h
            system("cls");///清屏函数,头文件--> windows.h
            break;///跳出switch函数
	    }
      }
    }

    else if(p>101)///如果p大于101，判断是否存在账号
    {
        printf("抱歉，注册账号已达到上限\n");
        Sleep(700);///延时700ms,头文件--> windows.h
        system("cls");///清屏函数,头文件--> windows.h
        shouye();///调用首页子函数
    }

}

void zhuce2(void)///注册2
{
	printf("请设定6位密码：");
	scanf("%s",BANKS[p].mima);///输入密码
	if(strlen(BANKS[p].mima)==6);///判断密码六位,头文件--> string.h
	else if(strlen(BANKS[p].mima)!=6)///判断密码六位,头文件--> string.h
    {
        system("cls");///清屏函数,头文件--> windows.h
        zhuce2();///调用注册子函数
    }
}

void denglu(void)///登录账号
{
    int x=0;///定义变量x，并初始化为0
	int o=0;///定义变量o，并初始化为0

    printf("请输入账号：\n");
    scanf("%d",&x);
    system("cls");///清屏函数,头文件--> windows.h
    if(BANKS[x].zhuangtai==0)///判断输入的账号是否挂失
    {
        for(o=0;o<=p;o++)///for循环进行0++，以便进行判断是否存在账户
        {
          if(x==o)///判断输入的x是否存在
          {
                Sleep(700);///延时700ms,头文件--> windows.h
                system("cls");///清屏函数,头文件--> windows.h
                key(x);///调用密码子函数，并传值x给子函数
                break;
          }
          else///判断输入的x是否存在
          {
               if(o==p)///如果x与p不相同，账号输入错误
               {
                printf("(账号错误，请重新输入账号)");
               Sleep(900);///延时900ms,头文件--> windows.h
               system("cls");///清屏,头文件--> windows.h
               denglu();///调用登录账号子函数

               }
          }
        }
    }
    else if(BANKS[x].zhuangtai==1)///判断输入的账号是否挂失
    {
            printf("账户已挂失，请解除挂失！");
            Sleep(900);///延时900ms,头文件--> windows.h
            system("cls");///清屏,头文件--> windows.h
            shouye();///调用首页子函数
    }
}

void key(int z)///密码
{
    char x[7]={0};///定义字符型数组变量x，并初始化为0
	int i=0;///定义变量i，并初始化为0

    for (i=0; i<3; i++)///for循环，进行三次密码验证
    {
        printf("请输入密码：");
	    scanf("%s", x);///输入密码
        if(strcmp(BANKS[z].mima,x)==0)///如果相等，则执行下面的函数体 ,头文件-->string.h
          {
             break;///跳出if语句
          }
    	else///否则不相等，则执行下面的函数体
          {
            printf("失败!\n");
          }
    }

    if (i<3)///如果i<3，进行下面语句
    {
        printf("登录成功\n");
        Sleep(900);///延时900ms,头文件--> windows.h
        system("cls");///清屏,头文件--> windows.h
        gongneng(z);///调用主功能子函数，并传值z给子函数
    }
    else///否则i>=3，进行下面语句
    {
       printf("密码错误3次，账户已挂失！\n");
       Sleep(900);///延时900ms,头文件--> windows.h
       system("cls");///清屏,头文件--> windows.h
       guashitwo(z);///调用挂失2子函数，并传值z给子函数
    }
}

void gongneng(int z)///主功能
{
    int b=0;///定义变量b，并初始化为0

    system("cls");///清屏函数
    printf("\t \n");///\ t为TAB,可以输出四个空格
    printf("\t  欢迎，%s\n",BANKS[z].xingming);///输出欢迎，姓名
    Sleep(700);///延时700ms,头文件--> windows.h
    system("cls");///清屏函数,头文件--> windows.h
    printf("\t    请选择业务:\n");
    printf("\t1.存款  2.取款  3.查询 \n");
    printf("\t4.转账  5.改密\n");
    printf("\t0.退出\n");
    scanf("%d",&b);///输入函数,&为取地址符
    switch(b)///选择判断语句,b为变量
    {
      case 1:///b为1的选项
	  {
	  	  system("cls");///清屏函数,头文件--> windows.h
          cunkuan(z);///调用存款子函数，并传值z给子函数
	      break;///跳出switch函数
	  }
      case 2:///b为2的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      qukuan(z);///调用取款子函数，并传值z给子函数
	      break;///跳出switch函数
	  }
      case 3:///b为3的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      chaxun(z);///调用查询子函数，并传值z给子函数
          break;///跳出switch函数
	  }
      case 4:///b为4的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      zhuanzhang(z);///调用转账子函数，并传值z给子函数
	      break;///跳出switch函数
	  }
      case 5:///b为5的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      mimay(z);///调用更改密码子函数，并传值z给子函数
	      break;///跳出switch函数
	  }
      case 0:///b为0的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      shouye();///调用首页子函数
	      break;///跳出switch函数
	  }
      default:///当不输入1，2，3，4，5，0时进行以下语句
      {
    	  system("cls");///清屏函数,头文件--> windows.h
	      printf("抱歉，没有此业务\n");
	      break;///跳出switch函数
	  }
    }

}

void cunkuan(int z)///存款
{
    long int i=0;///定义长整型变量i，并初始化为0

	system("cls");///清屏,头文件--> windows.h
	printf("请输入需要存款数：\n");
	scanf("%ld",&i);///输入存款数
	system("cls");///清屏,头文件--> windows.h
	printf("请稍等...");
	Sleep(500);///延时500ms,头文件--> windows.h
	BANKS[z].yue+=i;///相当于BANKS[z].yue=BANKS[z].yue+i
	system("cls");///清屏,头文件--> windows.h
	printf("存款成功\n");
	Sleep(500);///延时500ms,头文件--> windows.h
	system("cls");///清屏函数,头文件--> windows.h
	fanhui(z);///调用返回子函数
}

void qukuan(int z)///取款
{
    long int h=0;///定义长整型变量h，并初始化为0

	system("cls");///清屏,头文件--> windows.h
	printf("请输入需要取款数：\n");
	scanf("%ld",&h);
	system("cls");///清屏,头文件--> windows.h
	printf("请稍等...");
	Sleep(500);///延时500ms,头文件--> windows.h
	if(BANKS[z].yue>=h)///判断取款是否大于余额
       {
          BANKS[z].yue-=h;///相当于BANKS[z].yue=BANKS[z].yue-i
	      system("cls");///清屏,头文件--> windows.h
	      printf("取款成功\n");
	      printf("取款金额%ld",h);///输出取款金额
	      Sleep(500);///延时500ms,头文件--> windows.h
	      system("cls");///清屏函数,头文件--> windows.h
       }
	else if(BANKS[z].yue<h)///判断取款是否大于余额
       {
	      system("cls");///清屏,头文件--> windows.h
	      printf("余额不足，取款失败\n");
	      Sleep(500);///延时500ms,头文件--> windows.h
	      system("cls");///清屏函数,头文件--> windows.h
       }
    fanhui(z);///调用返回子函数，并传值z给子函数
}

void chaxun(int z)///查询
{
  	system("cls");///清屏,头文件--> windows.h
	printf("您的余额为\n");
	printf("%ld\n",BANKS[z].yue);///输出余额
    fanhui(z);///调用返回子函数，并传值z给子函数
}

void zhuanzhang(int z)///转账
{
     int r=0;///定义变量r，并初始化为0
     int f=0;///定义变量f，并初始化为0
     system("cls");///清屏,头文件--> windows.h
     printf("请输入转账账户：(请仔细确认账户）\n");
     scanf("%d",&r);///输入转账账户r
     if(r!=z)///判断账户r是否等于当前登陆账户，不能给自己转账
     {
           if(r<=p)///判断是否存在r账户
           {
     	        printf("请输入转账金额：\n");
     	        scanf("%d",&f);
     	        if(BANKS[z].yue>=f)///判断当前账户余额能否实现转账
       	        {
     	        printf("转账成功！\n");
     	        Sleep(500);///延时500ms,头文件--> windows.h
                system("cls");///清屏函数,头文件--> windows.h
     	        BANKS[z].yue-=f;///相当于BANKS[z].yue=BANKS[z].yue-f
     	        BANKS[r].yue+=f;///相当于BANKS[r].yue=BANKS[r].yue+f
     	        fanhui(z);///调用返回子函数，并传值z给子函数
      	         }
       	        else if(BANKS[z].yue<f)///判断当前账户余额能否实现转账
      	         {
	     	         system("cls");///清屏,头文件--> windows.h
	      	         printf("余额不足，转账失败\n");
	      	         Sleep(500);///延时500ms,头文件--> windows.h
	       	         system("cls");///清屏函数,头文件--> windows.h
	       	         fanhui(z);///调用返回子函数，并传值z给子函数
        	         }

	       }
	       else if(r>p)///判断是否存在r账户
	       {
	 	      printf("账户不存在，请重新输入 \n");
	 	      Sleep(500);///延时500ms,头文件--> windows.h
	          system("cls");///清屏函数,头文件--> windows.h
	 	      zhuanzhang(z);///调用转账子函数，并传值z给子函数
	       }
     }
     else///判断账户r是否等于当前登陆账户，不能给自己转账
     {
         printf("输入的账号与登录账号相同，请重新输入");///
          Sleep(700);///延时700ms,头文件--> windows.h
          system("cls");///清屏,头文件--> windows.h
         zhuanzhang(z);///调用转账子函数，并传值z给子函数
     }


}

void mimay(int z)///更改密码
{
    char i[13]={0};///定义字符型数组变量i，并初始化为0

    system("cls");///清屏,头文件--> windows.h
    printf("请输入手机号：");
    scanf("%s", i);///输入手机号
    system("cls");///清屏,头文件--> windows.h
    if(strcmp(BANKS[z].dianhuahao,i)==0)///判断输入的手机号是否与当前账户相等
    {
    	printf("请设定新的6位密码：\n");
	    scanf("%s",BANKS[z].mima);///输入新密码
    	if(strlen(BANKS[z].mima)==6)///判断密码六位,头文件--> string.h
    	{
           printf("密码更改成功！\n");
	       Sleep(700);///延时700ms,头文件--> windows.h
	       fanhui(z);///调用返回子函数，并传值z给子函数
    	}
	    else if(strlen(BANKS[z].mima)!=6)///判断密码六位,头文件--> string.h
	    {
	        printf("（请输入六位密码，请重新输入）");
            Sleep(700);///延时700ms,头文件--> windows.h
            system("cls");///清屏,头文件--> windows.h
	        mimay(z);///更改密码
	    }


    }
    else if(strcmp(BANKS[z].dianhuahao,i)!=0)///判断输入的手机号是否与当前账户相等
    {
        printf("（电话号输入错误请重新输入）");
        Sleep(700);///延时700ms,头文件--> windows.h
        system("cls");///清屏,头文件--> windows.h
        mimay(z);///调用更改密码子函数，并传值z给子函数
    }
}

void guashione(void)///挂失1
{
    int v=0;///定义变量v，并初始化为0

    printf("请输入要挂失的账号；\n");
    scanf("%d",&v);///输入需要挂失的账户
    if(v<=p)///判断是否存在v账户
    {
        BANKS[v].zhuangtai=1;///把1赋值给状态
        printf("挂失成功！\n");
        Sleep(700);///延时700ms,头文件--> windows.h
        system("cls");///清屏,头文件--> windows.h
        shouye();///调用首页子函数
    }
    else if(v>p)///判断是否存在v账户
    {
        printf("（账号输入错误，请重新输入）");
         Sleep(700);///延时700ms,头文件--> windows.h
         system("cls");///清屏,头文件--> windows.h
         guashione();///调用挂失1子函数
    }
}

void guashitwo(int z)///挂失2
{
        BANKS[z].zhuangtai=1;///把1赋值给状态
        system("cls");///清屏,头文件--> windows.h
        shouye();///调用首页子函数
}

void jiegua(void)///解除挂失
{
    int v=0;///定义变量v，并初始化为0
    char i[13];///定义字符型数组变量i，并初始化为0

    printf("请输入要解除挂失的账号；\n");
    scanf("%d",&v);///输入需要解除挂失的账户
    system("cls");///清屏,头文件--> windows.h
    if(BANKS[v].zhuangtai==0)///判断账号是否需要解除挂失
    {
        printf("您的账号正常，无需解除挂失");
        Sleep(900);///延时900ms,头文件--> windows.h
        system("cls");///清屏,头文件--> windows.h
        shouye();///调用首页子函数
    }
    else if(BANKS[v].zhuangtai==1)///判断账号是否需要解除挂失
    {
        printf("请输入手机号（解挂时需要输入手机号验证）：");
        scanf("%s", i);///输入手机号
        system("cls");///清屏,头文件--> windows.h
        if(strcmp(BANKS[v].dianhuahao,i)==0)///判断输入的电话号是否与v账户电话号相同
        {
            printf("请设定新的6位密码：\n");
	        scanf("%s",BANKS[v].mima);///输入新密码
	        if(strlen(BANKS[v].mima)==6)///判断密码六位,头文件--> string.h
	        {
	            BANKS[v].zhuangtai=0;///把0赋值给状态
                printf("解挂成功！\n");
                Sleep(700);///延时700ms,头文件--> windows.h
                system("cls");///清屏,头文件--> windows.h
                shouye();///调用首页子函数
	        }
	        else if(strlen(BANKS[v].mima)!=6)///判断密码六位,头文件--> string.h
	        {
	            printf("（请输入六位密码，请重新输入）");
               Sleep(700);///延时700ms,头文件--> windows.h
               system("cls");///清屏,头文件--> windows.h
               jiegua();///解除挂失
	        }


        }
        else if(strcmp(BANKS[v].dianhuahao,i)!=0)///判断输入的电话号是否与v账户电话号相同
        {
            printf("电话号输入错误请重新输入");
            Sleep(700);///延时700ms,头文件--> windows.h
            system("cls");///清屏,头文件--> windows.h
            jiegua();///调用解除挂失子函数
        }
    }

}

void fanhui(int z)///返回
{
    int x=0;///定义变量x，并初始化为0

    printf("请选择功能:\n");
    printf("1.返回主功能页  2.退出\n");
    scanf("%d",&x);///输入函数,&为取地址
    switch(x)///选择判断语句,b为变量
    {
      case 1:///x为1的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      gongneng(z);///调用功能子函数，并传值z给子函数
	      break;///跳出switch函数
	  }
      case 2:///x为2的选项
	  {
		  system("cls");///清屏函数,头文件--> windows.h
	      printf("谢谢使用，欢迎下次再来！\n");
	      Sleep(700);///延时700ms,头文件--> windows.h
	      system("cls");///清屏函数,头文件--> windows.h
	      shouye();///调用首页子函数
	      break;///跳出switch函数
	  }
      default:///当不输入1，2时进行以下语句
      {
          system("cls");///清屏函数,头文件--> windows.h
	      printf("抱歉，没有此业务,请重新选择\n");
	      Sleep(700);///延时700ms,头文件--> windows.h
	      system("cls");///清屏函数,头文件--> windows.h
          fanhui(z);///调用返回子函数，并传值z给子函数
	      break;///跳出switch函数
	 }
    }
}
