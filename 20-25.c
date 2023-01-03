#include <stdio.h>

int main() {
    int Que;
    printf(" Que 21: Strong number or not.\n");
    printf(" Que 22: Automorphic number or not.\n");
    printf(" Que 23: Harshad number or not.\n");
    printf(" Que 24: Power of a number.\n");
    printf(" Que 25: Factors of a number.\n");
    printf("Enter Question Number.\n");
    scanf("%d",&Que);
    
    switch(Que){
    case 21 : {
         int num, count, fact, last_digit, sum = 0, temp;
        printf ("Enter the Number to be checked:\t");
        scanf ("%d", &num);

        for (temp = num; num > 0; num = num / 10)
        {
        fact = 1;
        last_digit = num % 10;
        for (count = 1; count <= last_digit; count++)
        {
        fact = fact * count;
        }
        sum = sum + fact;
        }

        if (sum == temp)
        {
        printf ("%d is a Strong number \n\n", temp);
        }
        else
        {
        printf ("%d is not a Strong number \n\n", temp);
        }
        return 0;       
    }
    
    case 22 : {
          int num, rem, sum = 0, i;  
        // take an input from the user.  
        printf("Enter a number\n");  
        scanf("%d", &num);      
        // find all divisors and add them  
        for(i = 1; i < num; i++)  
        {  
         rem = num % i;  
        if (rem == 0)  
            {  
                sum = sum + i;  
             }  
        }  
        if (sum == num)  
            printf(" This is a Perfect Number");  
        else  
            printf("This is not a Perfect Number");    
            return 0;
            }
            
            
        case 23 : {
        int num;    
        int rem = 0, sum = 0, n;    
        printf("Enter a Number : ");
        scanf("%d", &num);
    //Make a copy of num and store it in variable n    
    n = num;    
        
    //Calculates sum of digits    
    while(num > 0){    
        rem = num%10;    
        sum = sum + rem;    
        num = num/10;    
    }      
        
    //Checks whether number is divisible by sum of digits    
    if(n%sum == 0)    
        printf("%d is a harshad number", n);    
    else    
        printf("%d is not a harshad number", n);    
     
    return 0 ;           
        }
        case 24 : {
            int base, exp;
            long double result = 1.0;
            printf("Enter a base number: ");
            scanf("%d", &base);
            printf("Enter an exponent: ");
            scanf("%d", &exp);
        
            while (exp != 0) {
                result *= base;
                --exp;
            }
            printf("Answer = %.0Lf", result);
            return 0;            
                }
            
        case 25 : {
         int num, i;
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            printf("Factors of %d are: ", num);
            for (i = 1; i <= num; ++i) {
                if (num % i == 0) {
                    printf("%d ", i);
            }
        }
        return 0;           
        }
}
    return 0;
}
