#include <stdio.h>

int main() {
    int Que;
    printf(" Que 1: Prime numbers in a given range.\n");
    printf(" Que 2: Armstrong numbers between two intervals.\n");
    printf(" Que 3: Replace all 0's with 1 in a given integer.\n");
    printf(" Que 4: Number of days in a given month of a given yea.\n");
    printf("Enter Question Number.\n");
    scanf("%d",&Que);
    
    switch(Que){
    case 1 :{
    int num1, num2, flag_var, i, j;
     
       /* Ask user to input the from/to range
        * like 1 to 100, 10 to 1000 etc.
        */
       printf("Enter two range(input integer numbers only):");
       //Store the range in variables using scanf
       scanf("%d %d", &num1, &num2);
     
       //Display prime numbers for input range
       printf("Prime numbers from %d and %d are:\n", num1, num2);
       for(i=num1+1; i<num2; ++i)
       {
          flag_var=0;
          for(j=2; j<=i/2; ++j)
          {
             if(i%j==0)
             {
                flag_var=1;
                break;
             }
          }
          if(flag_var==0)
             printf("%d\n",i);
         }
            return 0;        
        }
        
        case 2 : {
         int low, high, number, originalNumber, rem, count = 0;
          double result = 0.0;
          printf("Enter two numbers(intervals): ");
          scanf("%d %d", &low, &high);
          printf("Armstrong numbers between %d and %d are: ", low, high);
        
          // swap numbers if high < low
          if (high < low) {
            high += low;
            low = high - low;
            high -= low;
          }
           
          // iterate number from (low + 1) to (high - 1)
          // In each iteration, check if number is Armstrong
          for (number = low + 1; number < high; ++number) {
            originalNumber = number;
        
            // number of digits calculation
            while (originalNumber != 0) {
              originalNumber /= 10;
              ++count;
            }
        
            originalNumber = number;
        
            // result contains sum of nth power of individual digits
            while (originalNumber != 0) {
              rem = originalNumber % 10;
              result += pow(rem, count);
              originalNumber /= 10;
            }
        
            // check if number is equal to the sum of nth power of individual digits
            if ((int)result == number) {
              printf("%d ", number);
            }
        
            // resetting the values
            count = 0;
            result = 0;
          }

  return 0;
        }
        
        case 3 : {
int num,num2=0;

        printf("Enter number: ");

        //user input

        scanf("%d", &num);

        //checking for 0 input

        if(num == 0)

            num2=1;

        //converting 0 to 1

        while(num>0)

        {

            int rem = num%10;

            if(rem == 0)

                rem = 1;

            num = num/10;

            num2=num2*10+rem;

        }

       num = 0 ; // Store the reverse of num2

       while(num2>0){

        int r = num2%10;

        num= num*10 + r;

        num2 /= 10;

      }

        //converted number

        printf("Converted number is: %d" ,num);

        return 0;            
        }
        
        case 4: {
        int month, year;
        printf("Ennter Month : ");
        scanf("%d",&month);
        printf("Enter Year : ");
        scanf("%d", &year);
    
        if((month==2) && ((year%400==0) || ((year%100!=0)&&(year%4==0)))){
            printf("Number of days is 29");
        }
        else if(month==2){
            printf("Number of days is 28");
        }
        else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            printf("Number of days is 31");
        }
        else if(month==4 || month==6 || month==9 || month==11){
            printf("Number of days is 30");
        }
        else printf("Invalid month");
        
        return 0;           
            }
        case 5 : {
            
        }
    }
    return 0;
}
