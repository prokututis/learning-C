// BMI Calculator
#include <stdio.h>
#include <stdlib.h>

float bmi(double weight, double height)
{
        float wt = weight;
        float ht = height * height;
        float bmi = wt/ht;
        

        printf("Your Weight is: %f\n", wt);
        printf("Your Height is: %f\n", ht);

        if(bmi < 18.5)
        {
                printf("Your BMI is %f. You are Underweight.", bmi);
        }
        else if(bmi < 25)
        {
                printf("Your BMI is %f. You have a Normal weight.", bmi);
        }
        else if(bmi < 30)
        {
                printf("Your BMI is %f. You are Overweight.", bmi);
        }
        else if(bmi < 34)
        {
                printf("Your BMI is %f. You are Obese.", bmi);
        }
        else
        {
                printf("Your BMI is %f. You are clinically Obese", bmi);
        }



}

int main()
{
        
        bmi(60.0, 1.72);
        return 0;
}