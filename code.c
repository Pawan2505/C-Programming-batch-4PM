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



// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 20;

//     // (a>b) ? cout<<"Greater A!" : cout<<"Greater B!";

//     (a>b) ? printf("Greater A!") : printf("Greater B!");

    
// }


// https://docs.google.com/document/d/10lzUOH7ogN4SgZKL69vSDMAp98UWhg-oWln7Vq1cdhc/edit?tab=t.0


// #include<stdio.h>
// int main(){

//     int a = 1000;
//     int b = 500; 
//     int c = 150;

//     (a>b && a>c)? printf("Greater A!") : (b > a && b > c)? printf("Greater B") : printf("Greater C");
// }

// #include<stdio.h>
// int main(){
//     int a = 10;
//     int b = 5;

//     int result = a&b;

//     printf("%d",result);
// }

// #include<stdio.h>
// int main(){
//     int a = 10;
//     int b = 5;

//     int result = a|b;

//     printf("%d",result);
// }



// #include<stdio.h>

// int main(){
//     int a = 10;
//     int b = 5;

//     int result = a^b;

//     printf("%d",result);
// }

// #include<stdio.h>

// int main(){
//     int a = 10;
//     int b = 5;

//     int result = a^b;

//     printf("%d",result);
// }


// #include<stdio.h>

// int main(){
//     int a = 24;
    

//     int result = ~a;

//     printf("%d",result);
// }

// #include<stdio.h>

// int main(){
//     int a = 10;
    

//     int result = a<<2;

//     printf("%d",result);
// }

// #include<stdio.h>

// int main(){
//     int a = 10;
    

//     int result = a>>2;

//     printf("%d",result);
// }


// #include<stdio.h>

// int main(){
//     int marks = 95;

//     if(marks >= 90){
//         printf("Grade A\n");
//     }
//     if(marks >= 80){
//         printf("Grade B\n");
//     }
//     if(marks >= 70){
//         printf("Grade c\n");
//     }
// }

// #include<stdio.h>

// int main(){
//     int marks = 98;

//     if(marks >= 90){
//         printf("Grade A\n");
//     }else{
//         printf("Sorry");
//     }
  
// }




// #include<stdio.h>

// int main(){
//     int marks = 40;

//     if(marks >= 90){
//         printf("Grade A\n");
//     }
//     else if(marks >= 80){
//         printf("Grade B\n");
//     }
//   else if(marks >= 70){
//         printf("Grade c\n");
//     }else{
//         printf("Failed");
//     }
// }



// #include<stdio.h>

// int main(){
//     int marks = 90;

//     else{
//         printf("Grade A\n");
//     }
   
// }


// even / odd

// #include<stdio.h>
// int main(){
//     int num;

//     printf("Enter Number : ");
//     scanf("%d",&num);

//     if(num%2 == 0){
//         printf("Even Number!\n");
//     }else{
//         printf("Odd Number!\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int num;

//     printf("Enter Number : ");
//     scanf("%d",&num);

//     if(num>0){
//         printf("Positive Number!\n");
//     }else{
//         printf("Negative Number!\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     float num;

//     printf("Enter Number : ");
//     scanf("%f",&num);

//     if(num>0){
//         printf("Positive Number!\n");
//     }
//     else if(num < 0){
//         printf("Negative Number!\n");
//     }else{
//         printf("Neutral Number!");
//     }
// }


// prime Number4



// #include<stdio.h>
// int main(){
//     int a = 20;
//     int b = 5;

//     char ch = '#';

//     switch(ch){

//         case '+':
//             printf("Addition : %d",a+b);
//             break;
//         case '-':
//             printf("Sub : %d",a-b);
//             break;
//         case '*':
//             printf("Mul : %d",a*b);
//             break;
//         case '/':
//             printf("Div : %d",a/b);
//             break;
//         case '%':
//             printf("Rem : %d",a%b);
//             break;

//         default:
//             printf("Invalid Operator!");

//     }
// }



// #include<stdio.h>
// int main(){

//     for(int i = 1; i <=100; i++){
//         printf("%d\n",i);
//     }
// }

// infinite for loop

// #include<stdio.h>
// int main(){

//     for(int i = 100; i >=1; i++){
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){

//     int num =1;

//     while(num<=10){
//         printf("%d \n",num);
//         num++;
//     }
// }


// #include<stdio.h>
// int main(){

//     int num =10;

//     while(num>=1){
//         printf("%d \n",num);
//         num--;
//     }
// }


// #include<stdio.h>
// int main(){
//     int num = 8;

//     do{
//         printf("%d\n",num);
//         num++;
//     }while(num>=10);
    
// }

// infinite do while loop


// #include<stdio.h>
// int main(){
//     int num = 11;

//     do{
//         printf("%d\n",num);
//         num++;
//     }while(num>=10);
    
// }


// #include<stdio.h>
// int main(){
//     int num = 11;

//     do{
//         printf("%d\n",num);
//         --num;
//     }while(num>=10);
    
// }
// #include<stdio.h>
// int main(){
//     int num = 10;

//     do{
//         printf("%d\n",num);
//         --num;
//     }while(num >=1);
    
// }


// #include<stdio.h>
// int main(){
//     int num = 1;

//     do{
//         printf("%d\n",num);
//         ++num;
//     }while(num <=10);
    
// }


// #include<stdio.h>
// int main(){

//     int x;
//     printf("Enter starting number : ");
//     scanf("%d",&x);
//     printf("%d\n",x);

//     for(int num = x; num >=1; num--){
       
//        if(num%2 != 0){
//          printf("%d\n",num);
//        }
//     }
// }


// #include<stdio.h>
// int main(){

//     int num;

//     printf("Enter start number : ");
//     scanf("%d",&num);

//     while(num >=1){
//         if(num%2 != 0){
//             printf("%d\n",num);
//         }
//         num--;
//     }
// }


// #include<stdio.h>

// int main(){

//     int num;

//     printf("Enter Number : ");
//     scanf("%d",&num);

//     int count = 0;

//     while(num > 0){
//         num = num/10;
//         count++;
//     }

//     printf("%d",count);
// }



// #include<stdio.h>

// int main(){

//    long long int num;

//     printf("Enter Number : ");
//     scanf("%lld",&num);

//    int sum = 0;

//     while(num > 0){
//        int digit = num%10;   // last digit find
        
//         sum += digit;

//         num /= 10;  // remove last digit

//     }

//     printf("%d",sum);
// }


// https://drive.google.com/file/d/1s2neWWyKLPrByZIk5O0zAyuN_-Ush91C/view

// https://drive.google.com/file/d/1U1c91hpKvJI-0HRUO1wFnpAqDnPVktFe/view

// https://medium.com/@milankathiriya/control-structure-in-c-language-c0679d6822da#:~:text=Repetition%20Structure%20(Loops)%3A

// https://drive.google.com/file/d/1NtaNEjshMwMXD8Yj-NGyqNpF-r_Ainh4/view

// https://drive.google.com/file/d/1hlB4QMtvOi9V-7mHrz0PKjmmuSb9hFs6/view

// #include<stdio.h>
// int main(){
//     //row

//     for(int row = 1; row <= 4; row++){
//         //col

//         for(int col = 1; col<= 4; col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     //row

//     for(int row = 1; row <= 4; row++){
//         //col

//         for(int col = 1; col<= row; col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int row = 1; row<=4; row++){
//         if(row == 1 || row == 4){
//             printf("****");
//         }else{
//             printf("*  *");
//         }

//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int row = 1; row<=4; row++){

//         for(int col = 1; col <= 4; col++){
//             if((row == 2 || row == 3) && (col == 2 || col == 3)){

//                 printf(" ");
                
//             }
//             else{

//                  printf("*");
            
//             }
//         }

   

//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int row = 1; row<=4; row++){

//         //space

//         for(int space = 1; space <=row-1 ; space++){
//            printf(" ");
//         }

//         // star

//         for(int star = 1; star<=4; star++){
//             printf("*");
//         }   

//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){

//     //row

//     for(int i = 1; i<=5; i++){

//         //space

//         for(int space = 1; space <= 5-i; space++){
//             printf(" ");
//         }

//         //number

//         for(int num = 1; num<=i; num++){
//             printf("%d",num);
//         }

//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){

//     //row

//     for(int i = 1; i<=5; i++){

//         //space

//         // for(int space = 1; space <= 5-i; space++){
//         //     printf(" ");
//         // }

//         //number

//         for(int num = 1; num<=i; num++){
//             printf("%d",num);
//         }

//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){

//     //row

//     for(int i = 5; i>=1; i--){

//         //space

//         for(int space = i; space >1; space--){
//             printf(" ");
//         }

//         //number

//         for(int num = i; num<=5; num++){
//             printf("%d",num);
//         }

//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){

//     for(int rows = 1; rows<=5; rows++){

//         for(int space = rows; space>1; space--){
//             printf(" ");
//         }

//         for(int num = 5; num<=ro; num--){
//             printf("%d",rows);
//         }

//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int arr[5];  // declared

//     // inisatation
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     arr[3] = 40;
//     arr[4] = 50;

// // print

// printf("%d\n",arr[0]);
// printf("%d\n",arr[1]);
// printf("%d\n",arr[2]);
// printf("%d\n",arr[3]);
// printf("%d\n",arr[4]);

// }


//user


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Size of Array :");
//     scanf("%d",&n);

//     int arr[n];
// //user input
//     for(int i = 0; i<n; i++){
//         printf("Enter element at %d index :",i);
//         scanf("%d",&arr[i]);
//     }
// //print
//     for(int i = 0; i<n; i++){
//         printf("Element at %d index :",i);
//       printf("%d\n",arr[i]);
//     }


// }

// #include<stdio.h>
// int main(){
//    const int n = 5;
  
//     int arr[n] ={10,20,30,40};

//     for(int i = 0; i<n; i++){
        
//         printf("Element at %d index: %d\n", i, arr[i]);
    
//     }


// }


// #include<stdio.h>

// void main() {
//     int arr[5] = {10, 20, 30, 40, 50}; // Directly specify array size

//     for(int i = 0; i < 5; i++) {
//         printf("Element at %d index: %d\n", i, arr[i]);
//     }
// // return 0;  // not ok
// }
// #include<stdio.h>

// void main() {
//     int arr[5] = {10, 20, 30, 40, 50}; // Directly specify array size

//     arr[1] = 200;  // update 

//     for(int i = 0; i < 5; i++) {
//         printf("Element at %d index: %d\n", i, arr[i]);
//     }

// }




// #include<stdio.h>

// void main() {
//     int arr[5] = {10, 20, 30, 40, 50}; // Directly specify array size

//     int key = 40;


//     for(int i = 0; i < 5; i++) {
//        if(arr[i] == key){
//         printf("Key present at %d index ",i);
//        }
//     }

// }




// #include<stdio.h>
// int main(){

// int arr[4][4];

// arr[0][0] = 10;
// arr[0][1] = 20;
// arr[0][2] = 30;
// arr[0][3] = 40;

// arr[1][0] = 50;
// arr[1][1] = 60;
// arr[1][2] = 70;
// arr[1][3] = 80;


// arr[2][0] = 90;
// arr[2][1] = 100;
// arr[2][2] = 110;
// arr[2][3] = 120;

// arr[3][0] = 130;
// arr[3][1] = 140;
// arr[3][2] = 150;
// arr[3][3] = 160;


// // output

// for(int row = 0; row < 4; row++){
//     for(int col = 0; col < 4; col++){
//         printf("%d ",arr[row][col]);
//     }
//     printf("\n");
// }

// }




// #include<stdio.h>
// int main(){

// int arr[4][4] = {
//                 {10,20,30,40},
//                 {50,60,70,80},
//                 {90,11,12,13},
//                 {14,15,16,17}
//             };

// // output

// for(int row = 0; row < 4; row++){
//     for(int col = 0; col < 4; col++){
//         printf("%d ",arr[row][col]);
//     }
//     printf("\n");
// }

// }


// #include<stdio.h>
// int main(){

// int arr[4][4];

// // user input

// for(int row = 0; row < 4; row++){
//     for(int col = 0; col < 4; col++){
//         printf("Enter value at %d row and %d col : ",row,col);
//         scanf("%d",&arr[row][col]);
//     }
  
// }

// // output

// for(int row = 0; row < 4; row++){
//     for(int col = 0; col < 4; col++){
//         printf("%d ",arr[row][col]);
//     }
//     printf("\n");
// }

// }

// function 

// 1. without definition of function we can not call that function

// // Type 1: Take something and return something


// #include<stdio.h>

// // function definition -> a,b -> Parameter
// int shlok(int a, int b){ 
//     int result = a+b;
//     return result;
// }

// int main(){
//         // argument inside function call
//     // int sum = shlok(10,20); // function call 

//     // printf("%d",sum);


//     printf("%d\n", shlok(10,20));

// }


// // Type 2: Take something and return Nothing


// #include<stdio.h>

// int shlok(int a, int b){ 
//     int result = a+b;
//    printf("Sum : %d",result);
// }

// int main(){
     
//    shlok(10,20); 
// }


// // Type 3: Take Nothing and return Nothing


// #include<stdio.h>

// int shlok(){ 
//     int a = 10;
//     int b = 20;
//     int result = a*b;
//    printf("Sum : %d",result);
// }

// int main(){
     
//     shlok(); // call
// }

// Type 4: Take Nothing and return something


// #include<stdio.h>

// int shlok(){ 
//     int a = 10;
//     int b = 20;
//     int result = a*b;
//    return result;
// }

// int main(){

//     int value = shlok();
     
//     printf("%d",value); // call
// }



// Nested function

// #include<stdio.h>

// int outerfn(){
//     printf("Outer function called..\n");

//     int innerfn(){
//         printf("Inner function called..\n");
//     }

//     innerfn();
// }
// int main(){

// // innerfn();  // not ok

// outerfn();

// }


// #include<stdio.h>

// int outerfn(); // function declaration

// int main(){

// outerfn();  // function call

// }

// // function definition
// int outerfn(){
//     printf("Outer function called..\n");

//     int innerfn(){
//         printf("Inner function called..\n");
//     }

//     innerfn();
// }



//  recurssion function


