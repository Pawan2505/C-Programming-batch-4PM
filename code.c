// #include<stdio.h>

// int main(){
//     printf("Hello World\n");
//     printf("Hey, How are you!\n");
//     printf("Hi\n");
// }


// #include<stdio.h>

// int main(){
//     printf("Hello World\t");
//     printf("Hey, How are you!\n");
//     printf("Hi\n");
// }


// #include<stdio.h>

// int main(){
//     // int 12num;  // Not ok

//     // int num12;  // ok

//     // int variable name;   // Not Ok

//     // int variable_name;  // ok

//     // int _num2;  // ok

//     // int $num2;  // ok

//     // int @num;  // Not ok

//     // int if;   // Not ok

//     // int c;   // ok


// }



// #include<stdio.h>

// int main(){

    // int a = 10;

    // printf("%d",a);
    // printf("The value of a :  %d",a);


    // float num = 23.67f;

    // // printf("%f",num);
    // printf("%0.1f",num);

    // double num = 23.67f;

    // printf("%f",num);
    // printf("%0.3lf",num);

    // char ch;   // Declaration

    // ch = '1';  // intialization

    // printf("%d",ch);

    // char ch = '#';
    // printf("%d",ch);


    // char ch[20] = "Pawan Maurya";

    // printf("%s",ch);


// int x;
// printf("Enter Value : ");
// scanf("%d",&x);   // User Input
// printf("The value of x : %d",x);  // output

// }


// #include<stdio.h>
// int main(){

//     // printf("Hello \\ World");

//     // char* str = "Pawan Maurya";

//     // printf("%s",str);

//     // unsigned int a = -10;

//     // printf("%u", a);
//     signed int a = -10;

//     printf("%d", a);

// }


// #include<stdio.h>
// int main(){

// int num = 10;


// printf("%d\n",num);

// num = 20;

// printf("%d\n",num);

// }

// constant

// #include<stdio.h>
// int main(){

// const int num = 10;


// printf("%d\n",num);

// num = 20;  // Not ok

// printf("%d\n",num);

// }

// #include<stdio.h>
// int main(){

// const int num;

// // num = 10; // Not ok


// printf("%d\n",num);


// }

// #include<stdio.h>
// int main(){

// const int num = 10;  // ok

// // num = 10; // Not ok


// printf("%d\n",num);


// }

// #include<stdio.h>

// int main(){

// const int num;

// printf("Enter constant number : ");
// scanf("%d",&num);  // user se input lenge from terminal  -> ok

// printf("Number : %d\n",num);


// }

// micro 

// #include<stdio.h>
// #define NUM 10.42

// int main(){


// printf("Number : %0.3f\n",NUM);


// }

// #include<stdio.h>
// #define NUM 10.42

// int main(){


// printf("Number : %0.3f\n",NUM);


// }


// #include<stdio.h>
// #define NUM1 10.42
// #define NUM2 58.42

// int main(){


// printf("Number : %0.3f\n",NUM1+NUM2);


// }

// #include<stdio.h>
// #define NUM1 10.42
// #define NUM2 58.42

// int main(){


// printf("Number : %0.3f\n",NUM1+NUM2);


// }


// #include<stdio.h>

// int main(){

// // unsigned int num = -10;

// // printf("%u",num);

// // unsigned long int num = -10;  // Not ok

// // unsigned long int num = 10;  // ok

// // printf("%lu",num);

// // signed long int num = -10;  // ok

// // printf("%ld",num);
// // long int num = -10;  // ok

// // printf("%ld",num);

// // short int num = -10;  // ok

// // printf("%ld",num);


// }

// #include<stdio.h>

// int main(){

// float p = 2000f;
// float n = 3;
// float r = 10;

// float result = (p*n*r)/100;

// printf("%f",result);


// }


// #include<stdio.h>

// int main(){

// float p ,n,r;
// printf("Enter details : ");

// scanf("%f %f %f",&p,&n,&r);

// float result = (p*n*r)/100;

// printf("%f",result);


// }



// #include<stdio.h>

// int main(){

// int a = 10;

// printf("%d",a++);  // 10


// }

// #include<stdio.h>

// int main(){

// int a = 10;
// a++;  // 10
// printf("%d\n",a++);  // 11

// printf("%d\n",a); //12
// printf("%d",a); //12

// }


// #include<stdio.h>
// int main(){
//     int a = 10;

//     printf("%d\n",a++); // 10
//     printf("%d\n",a); //11
//     printf("%d\n",a); //11
// }

// #include<stdio.h>
// int main(){
//     int a = 10;

//     printf("%d\n",++a);
//     printf("%d\n",a++);
//     printf("%d\n",++a);


// }

// #include<stdio.h>
// int main(){
//     int a = 10;

//     printf("%d\n",a--);
//     printf("%d\n",a);
//     printf("%d\n",--a);

// }

// #include<stdio.h>
// int main(){
//     int a = 10;

//    a++;
//     printf("%d\n",a);
// }

// #include<stdio.h>
// int main(){
//     int a = 10;

//    ++a;
//     printf("%d\n",a);
// }

// #include<stdio.h>
// int main(){
//     int a = 10;
//     int b = 5;

//     printf("%d\n",a+b); // 15
//     printf("%d\n",a-b); //5
//     printf("%d\n",a*b); //50
//     printf("%d\n",a/b); //2
//     printf("%d\n",a%b); // 0
// }

// #include<stdio.h>
// int main(){
//     int a = 10;
//     int b = 15;

//     printf("%d\n",a%b); //
// }

// Relational Operator


// #include<stdio.h>

// int main(){
//     int a = 10;
//     int b = 20;

//     printf("%d\n",a>b);
//     printf("%d\n",a<b);
//     printf("%d\n",a==b);
//     printf("%d\n",a<=b);
//     printf("%d\n",a>=b);
//     printf("%d\n",a!=b);
// }


// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 20; 
//     int c = 15;

//     printf("%d\n",(a>b) && (a>c));   // 0
//     printf("%d\n",(a>=b) && (a>=c)); // 0
//     printf("%d\n",(a<=b) && (a>c));  // 0
//     printf("%d\n",(a>=b) && (a<=c)); //0
//     printf("%d\n",(a==b) && (a>c)); // 0
//     printf("%d\n",(a!=b) && (a<c)); // 1
// }

// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 20; 
//     int c = 15;

//     printf("%d\n",(a>b) || (a>c));   // 0
//     printf("%d\n",(a>=b) || (a>=c)); // 0
//     printf("%d\n",(a<=b) || (a>c));  // 1
//     printf("%d\n",(a>=b) || (a<=c)); //1
//     printf("%d\n",(a==b) || (a>c)); // 0
//     printf("%d\n",(a!=b) || (a<c)); // 1
// }


// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 20; 
//     int c = 15;

//     printf("%d\n",(a>b) || (a>c));   // 0
//     printf("%d\n",(a>=b) || (a>=c)); // 0
//     printf("%d\n",(a<=b) || (a>c));  // 1
//     printf("%d\n",(a>=b) || (a<=c)); //1
//     printf("%d\n",(a==b) || (a>c)); // 0
//     printf("%d\n",(a!=b) || (a<c)); // 1
// }


// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 20; 
//     int c = 15;

//     printf("%d\n",!((a>b) || (a>c)));   // 1
//     printf("%d\n",!((a>=b) || (a>=c))); // 1
//     printf("%d\n",!((a<=b) || (a>c)));  // 0
//     printf("%d\n",!((a>=b) || (a<=c))); //0
//     printf("%d\n",!((a==b) || (a>c))); // 1
//     printf("%d\n",!((a!=b) || (a<c))); // 0
// }



// #include<stdio.h>
// int main(){
//     int a = 10;

//     // a = a + 20;

//     // or

//     a += 20;

//     printf("%d",a);
// }



#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;

    // (a>b) ? cout<<"Greater A!" : cout<<"Greater B!";

    (a>b) ? printf("Greater A!") : printf("Greater B!");

    
}


// https://docs.google.com/document/d/10lzUOH7ogN4SgZKL69vSDMAp98UWhg-oWln7Vq1cdhc/edit?tab=t.0