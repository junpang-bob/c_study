// #include<stdio.h>
// #include<limits.h>
// #include<float.h>
// // 函数外定义变量 x 和 y
// // int x;
// // int y;
// // int addtwonum()
// // {
// //     // 函数内声明变量 x 和 y 为外部变量
// //     extern int x;
// //     extern int y;
// //     // 给外部变量（全局变量）x 和 y 赋值
// //     x = 1;
// //     y = 2;
// //     return x+y;
// // }
 
// // int main()
// // {
// //     int result;
// //     // 调用函数 addtwonum
// //     result = addtwonum();
    
// //     printf("result 为: %d",result);
// //     return 0;
// // }

// int x ,y;


// int add(){
//     extern int x;
//     extern int y;
//     x = 1;
//     y = 4;
//     return x + y;
// }
// const int t = 4;
// // t = 5;
// #define WIDTH 3;
// int main(){
//     int result;
//     result = add();
//     printf("result:%d\n",result);
//     return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//    int c;
//    int a = 10;
//    c = a++; 
//    printf("先赋值后运算：\n");
//    printf("Line 1 - c 的值是 %d\n", c );
//    printf("Line 2 - a 的值是 %d\n", a );
//    a = 10;
//    c = a--; 
//    printf("Line 3 - c 的值是 %d\n", c );
//    printf("Line 4 - a 的值是 %d\n", a );
 
//    printf("先运算后赋值：\n");
//    a = 10;
//    c = ++a; 
//    printf("Line 5 - c 的值是 %d\n", c );
//    printf("Line 6 - a 的值是 %d\n", a );
//    a = 10;
//    c = --a; 
//    printf("Line 7 - c 的值是 %d\n", c );
//    printf("Line 8 - a 的值是 %d\n", a );
 
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 21;
//    int b = 10;
//    int c ;
 
//    if( a == b )
//    {
//       printf("Line 1 - a 等于 b\n" );
//    }
//    else
//    {
//       printf("Line 1 - a 不等于 b\n" );
//    }
//    if ( a < b )
//    {
//       printf("Line 2 - a 小于 b\n" );
//    }
//    else
//    {
//       printf("Line 2 - a 不小于 b\n" );
//    }
//    if ( a > b )
//    {
//       printf("Line 3 - a 大于 b\n" );
//    }
//    else
//    {
//       printf("Line 3 - a 不大于 b\n" );
//    }
//    /* 改变 a 和 b 的值 */
//    a = 5;
//    b = 20;
//    if ( a <= b )
//    {
//       printf("Line 4 - a 小于或等于 b\n" );
//    }
//    if ( b >= a )
//    {
//       printf("Line 5 - b 大于或等于 a\n" );
//    }
// }


// #include <stdio.h>
 
// int main()
// {
//    int a = 5;
//    int b = 20;
//    int c ;
 
//    if ( a && b )
//    {
//       printf("Line 1 - 条件为真\n" );
//    }
//    if ( a || b )
//    {
//       printf("Line 2 - 条件为真\n" );
//    }
//    /* 改变 a 和 b 的值 */
//    a = 0;
//    b = 10;
//    if ( a && b )
//    {
//       printf("Line 3 - 条件为真\n" );
//    }
//    else
//    {
//       printf("Line 3 - 条件为假\n" );
//    }
//    if ( !(a && b) )
//    {
//       printf("Line 4 - 条件为真\n" );
//    }
// }

// #include <stdio.h>
 
// int main()
// {
 
//    unsigned int a = 60;    /* 60 = 0011 1100 */  
//    unsigned int b = 13;    /* 13 = 0000 1101 */
//    int c = 0;           
 
//    c = a & b;       /* 12 = 0000 1100 */ 
//    printf("Line 1 - c 的值是 %d\n", c );
 
//    c = a | b;       /* 61 = 0011 1101 */
//    printf("Line 2 - c 的值是 %d\n", c );
 
//    c = a ^ b;       /* 49 = 0011 0001 */
//    printf("Line 3 - c 的值是 %d\n", c );
 
//    c = ~a;          /*-61 = 1100 0011 */
//    printf("Line 4 - c 的值是 %d\n", c );
 
//    c = a << 2;     /* 240 = 1111 0000 */
//    printf("Line 5 - c 的值是 %d\n", c );
 
//    c = a >> 2;     /* 15 = 0000 1111 */
//    printf("Line 6 - c 的值是 %d\n", c );
// }


// #include <stdio.h>
 
// int main()
// {
//    int a = 21;
//    int c ;
 
//    c =  a;
//    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );
 
//    c +=  a;
//    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );
 
//    c -=  a;
//    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );
 
//    c *=  a;
//    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );
 
//    c /=  a;
//    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );
 
//    c  = 200;
//    c %=  a;
//    printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );
 
//    c <<=  2;
//    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );
 
//    c >>=  2;
//    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );
 
//    c &=  2;
//    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );
 
//    c ^=  2;
//    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );
 
//    c |=  2;
//    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
 
// }


// #include <stdio.h>

// int A=10;
// int B=20;
// char buy;
// int sum,number;

// int main(){
//     printf("以下是本店的商品及价格：\n A 商品每个十元；\n B 商品每个二十元；\n\n");
//     printf("请输入你所需的产品(A 或 B):");
//     scanf("%c",&buy);
//     printf("请输入所需的数量：");
//     scanf("%d",&number);
//     sum=buy=='A'?A*number:B*number;
//     printf("\n你所需要的%d个%c商品总共%d元。\n",number,buy,sum);
//     return 0;
// }


#include <stdio.h>

int main()
{
    // int a;
    // printf("input integer number: ");
    // scanf("%d",&a);
    // switch(a)
    // {
    //     case 1:printf("Monday\n");
    //     break;
    //     case 2:printf("Tuesday\n");
    //     break;
    //     case 3:printf("Wednesday\n");
    //     break;
    //     case 4:printf("Thursday\n");
    //     break;
    //     case 5:printf("Friday\n");
    //     break;
    //     case 6:printf("Saturday\n");
    //     break;
    //     case 7:printf("Sunday\n");
    //     break;
    //     default:printf("error\n");
    // }
    for (int i = 0; i < 10; i++)
    {
        /* code */
    }
    
}
