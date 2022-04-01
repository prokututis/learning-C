// Hello World

            // #include<stdio.h>
            // #include <stdlib.h>

            // int main(){
            //     printf("Hello World");
            //     return 0;
            // }

// Drawing a shape

            // #include <stdio.h>
            // #include <stdlib.h>


            // int main()
            // {
            //     printf("    /| \n");
            //     printf("   / | \n");
            //     printf("  /  | \n");
            //     printf(" /___| \n");
            // }

// Variables

            // #include <stdlib.h>
            // #include <stdio.h>

            // int main()
            // {
            //     char character_name[] = "proku"; 
            //     int character_age = 69;
            //     int garsantisado = 32;
            //     printf("There once was a man named %s.", character_name);
            //     printf("he was %i years old.", character_age);
            //     printf("He really liked the name %s ", character_name);
            //     printf("%i but did not like being %i and being named as '%s'.", character_age,  garantisado, character_name);
            //     return 0;
            // }


            // int main()
            // {
            //     char student_name[] = "hussein";
            //     printf("%s is a very stupid person.", student_name);
            //     return 1;
            // }

// Data Types 

            // #include <stdlib.h>
            // #include <stdio.h>

            // int main()
            // {
                
            //     int age = 40;
            //     float grade_of_student = 40.33131312313213081730217308173981273981237918;
            //     char name_of_student = 'a';
            //     char description[] = "pinaka-bobong student sa isang eskwelahan, tanginang yan.";


            //     printf("angelo's grade is: %d", age);
            //     return 0;
            // }

            // #include <stdio.h>
            // #include <stdlib.h>

// Printf 

            // #include <stdlib.h>
            // #include <stdio.h>

            // int main()
            // {
            //     char student_name[] = "_____";
            //     int fave_num = 32;
            //     printf("%s's favorite number is %lld",student_name, fave_num);
            //     return 0;
            // }

// Working With Numbers

        // #include<stdlib.h>
        // #include<stdio.h>

        // int main()
        // {
        //     printf("pow() multiplies to the given exponent number %f\n", pow(4, 3));
        //     printf("sqrt() finds the sqrt of the number given %f\n", sqrt(36));
        //     printf("ceil() find the ceiling part of a number %f\n", ceil(1231.67));
        //     printf("floor() just rounds the number down %f\n", floor(36.655));


        //     return 0;
        // }

// Comments

        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {
        //     printf("Comments are fun");
        //     return 0;
            
        // }

// Constants 
    
        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {
        //     char student_name[] = "angelo de tanga tanga";
        //     const int student_age = 18;
        //     printf("%s's age is %i", student_name, student_age);
        
        //     return 0;
        // }

// Getting User Input

        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {
        //         char name_of_user[20] = "";
        //         printf("Enter your name: ");
        //         fgets(name_of_user, 20, stdin);
                

        //         int age_of_user;
        //         printf("Enter your age: ");
        //         scanf("%i", &age_of_user);
        

        //         double grade_of_user;
        //         printf("Enter your grade for last year: ");
        //         scanf("%lf", &grade_of_user);


        //         printf("The user's name is: %s", name_of_user);
        //         printf("The user's age is: %i\n", age_of_user);
        //         printf("The user's grade is: %f", grade_of_user);
                
        //         return 0;
        // }

// Basic Calculator

        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {
        //         double num1;
        //         double num2;
        //         printf ("Enter first number: ");
        //         scanf("%lf", &num1);
        //         printf ("Enter second number: ");
        //         scanf("%lf", &num2);
                
        //         float answer = num1 + num2;
        //         char answer_in_string[20];
        //         snprintf(answer_in_string, 20, "%f", answer);
        //         printf("%s", answer_in_string);
        //         printf("The answer is: %f", answer);

        //         return 0;
        // }

// Mad Libs game

        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {

        //         char color[20];
        //         char plural_noun[20];
        //         char celebrity_first_name[20];
        //         char celebrity_second_name[20];

        //         printf("Enter a color: ");
        //         scanf("%s", color);

        //         printf("Enter a plural noun: ");
        //         scanf("%s", plural_noun);
                
        //         printf("Enter a celebrity: ");
        //         scanf("%s%s", celebrity_first_name, celebrity_second_name);

        //         printf("Roses are %s\n", color);
        //         printf("%s are blue\n", plural_noun);
        //         printf("I love %s %s\n", celebrity_first_name, celebrity_second_name);
                

        //         return 0;
        // }

// Arrays 

        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {
        //         int favorite_numbers[3];
        //         printf("Enter your first favorite number: ");
        //         scanf("%d", &favorite_numbers[0]);

        //         printf("Enter your second favorite number: ");
        //         scanf("%d", &favorite_numbers[1]);

        //         printf("%d", favorite_numbers[0]);
        //         printf("%d", favorite_numbers[1]);
        


        //         return 0;
        // }

// Functions

        // #include <stdio.h>
        // #include <stdlib.h>

        // int main()
        // {
        //         say_hi("Neo");
        //         greeting(2002, "Toni" );
        //         sqr(9000);
        //         swap(2, 4);
                
        //         return 0;
        // }

        // void say_hi(char name[]) 
        // {
        //         printf("Wake Up, %s...\n", name);
        // }

        // void greeting(int year[], char name[])
        // {
        //         printf("Hello %s, You are in year %d\n", name, year);
        // }

        // void sqr(float number[])
        // {       
        //         int num = number;
        //         int answer = num*num;
        //         printf("The square of %d is %d\n", number, answer); 
        // }

        // void swap(int num1[], int num2[])
        // {
        //         int n1 = num1;
        //         int n2 = num2;
        //         printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
        //         printf("After swapping: n1 = %d, n2 = %d", n2, n1);
        // }

// Return Statement

        // #include <stdio.h>
        // #include <stdlib.h>

        // double cube(double num)
        // {
        //         double answer = num * num * num;
        //         return answer;
                
        // }

        // double square(double num)
        // {
        //         double answer = num*num;
        //         return answer;
        // }

        // double add(double num1, double num2)
        // {
        //         double answer = num1 + num2;

        // }

        // int main()
        // {
        //         return 0;
        // }


// BMI Calculator


        // #include <stdio.h>
        // #include <stdlib.h>

        // float bmi(double weight, double height)
        // {
        //         float wt = weight;
        //         float ht = height * height;
        //         float bmi = wt/ht;
                

        //         printf("Your Weight is: %f\n", wt);
        //         printf("Your Height is: %f\n", ht);

        //         if(bmi < 18.5)
        //         {
        //                 printf("Your BMI is %f. You are Underweight.", bmi);
        //         }
        //         else if(bmi < 25)
        //         {
        //                 printf("Your BMI is %f. You have a Normal weight.", bmi);
        //         }
        //         else if(bmi < 30)
        //         {
        //                 printf("Your BMI is %f. You are Overweight.", bmi);
        //         }
        //         else if(bmi < 34)
        //         {
        //                 printf("Your BMI is %f. You are Obese.", bmi);
        //         }
        //         else
        //         {
        //                 printf("Your BMI is %f. You are clinically Obese", bmi);
        //         }



        // }

        // int main()
        // {
                
        //         bmi(60.0, 1.72);
        //         return 0;
        // }


// If Statements


        // #include <stdio.h>
        // #include <stdlib.h>

        // int max(int num1, int num2, int num3)
        // {
        //         int result;

        //         if(num1 >= num2 && num1 >= num3)
        //         {
        //                 result = num1;
        //         }
        //         else if(num2 >= num1 && num2 >= num3)
        //         {
        //                 result = num2;
        //         }
        //         else if(num3 > num1 && num3 > num2)
        //         {
        //                 result = num3;
        //         }
        //         printf("%i", result);

        // }


        // int main()
        // {       
        //         int num1 = 31;
        //         int num2 = 20; 
        //         int num3 = 68;
        //         if(num1 < 90 || num1 < 11)
        //         {
        //                 printf("nyeta");
        //         }

        //         if(3 >! 6)
        //         {
        //                 printf("True");
        //         }

        //         if(!(3 > 6))
        //         {
        //                 printf("True");
        //         }

        //         if(3 != 6)
        //         {
        //                 printf("True");
        //         }

        //         if(3 == 6)
        //         {
        //                 printf("True");        
        //         }

        //         return 0;
        // }


// Building a Better Calculator

// %lf = scan for double
// & = ampersand use for numbers except characters or strings

#include <stdio.h>
#include <stdlib.h>



int main()
{

        double num1;
        double num2;
        char op;

        printf("Enter a number: ");
        scanf("%lf", &num1);
        printf("Enter operator: ");
        scanf(" %c", &op);
        printf("Enter a number: ");
        scanf("%lf", &num2);

        if(op == '+')
        {
                printf("%f", num1 + num2);
        }
        else if(op == '-')
        {
                printf("%f", num1 - num2);
        }
        else if(op == '*')
        {
                printf("%f", num1 * num2);
        }
        else if(op == '/')
        {
                printf("%f", num1 / num2);
        }
        else if(op != '+' || op != '-' || op != '*' || op != '/')
        {
                printf("not available operator.");
        }

        return 0;
        
}

void calculator()
{
        double num1; 
        double num2;
        char operator;

        printf("Enter a number: ");
        scanf("%lf", num1);
        printf("Enter operator: ");
        scanf(" %c", operator);
        printf("Enter a number: ");
        scanf("%lf", num2);
        
        if(operator == '+')
        {
                printf("%f", num1 + num2);
        }
        else if(operator == '-')
        {
                printf("%f", num1 - num2);
        }
        else if(operator == '*')
        {
                printf("%f", num1 * num2);
        }
        else if(operator == '/')
        {
                printf("%f", num1 / num2);
        }
}
