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

#include <stdio.h>
#include <stdlib.h>

int main()
{
        double num1;
        double num2;
        printf ("Enter first number: ");
        scanf("%lf", &num1);
        printf ("Enter second number: ");
        scanf("%lf", &num2);
        
        float answer = num1 + num2;
        char answer_in_string[20];
        snprintf(answer_in_string, 20, "%f", answer);
        printf("%s", answer_in_string);
        printf("The answer is: %f", answer);
        


        return 0;
}
