#include<stdio.h>


int main (){
         

         
         int number1, number2;
         int add,sub;
         float num1,num2;
         float add1,sub1;


           scanf("%d %d",&number1,&number2);
           scanf("%f %f",&num1,&num2);
           
            


            add = number1+number2;
            sub =number1 - number2;
            add1 = num1+num2;
            sub1 = num1-num2;
           
           
           

            printf("%d %d\n",add,sub);
            printf("%.1f %.1f ",add1,sub1);

            return 0;



}