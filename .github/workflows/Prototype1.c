#include <stdio.h>
#include <time.h>
#include <stdlib.h>


float BMI_calculator(void);
void Doc_list(void);
float Dose_calculator(void);
float Drip_speed_calculator (void);
float Bill_calculator (void);
void Lab();

int main()
{
    float BMI,DOSE,DRIP,BILL;
    int input;
    time_t t;
    time(&t);
    printf("Welcome To SRM Hospital\t\t\t%s\nEnter '1' for Body Mass Index\n      '2' for Dosage Calculation\n      '3' for Doctor's List\n      '4' for Drip Speed Calculation\n      '5' for Bill Calculation\n      '6' for Laboratory Tools\n",ctime(&t));
    scanf("%d",&input);
    
    
    if (input== 1)
    {
    BMI= BMI_calculator();
    }
    else if (input == 3 )
    {
      Doc_list();
    }
    else if (input ==2 )
    {
      DOSE= Dose_calculator() ;
    }
    else if (input == 4)
    {
        DRIP = Drip_speed_calculator();
    }
    else if (input == 5)
    {
      BILL = Bill_calculator();  
    }
    else if (input == 6)
    {
        Lab();
    }
    else{
        printf("Invalid Input");
    }
    
    return 0;
}

float BMI_calculator(void)
{
    float H,W,BMI;
    printf("\nKindly enter your height in meters:");scanf("%f",&H);
    printf("\n Kindly enter your weight in kilograms:");
    scanf("%f",&W);
    BMI=W/(H*H);
    printf("\nPatient BMI is: %.2f",BMI);
    if (BMI<18.5)
       {
           printf("\nPatient is underweight");
       }
       if (BMI>=18.5 && BMI<25)
       {
           printf("\nPatient has normal weight");
       }
       if (BMI>=25 && BMI<30)
       {
           printf("\nPatient is overweight");
       }
       if (BMI>=30 && BMI<35)
       {
           printf("\nPatient comes under obesity class - 1");
       }
       if (BMI>=35 && BMI<40)
       {
           printf("\nPatient comes under obesity class - 2");
       }
       if (BMI>=40)
       {
          printf("\nPatient comes under obesity class - 3"); 
       }
    return BMI;
}

void Doc_list(void)
{
    
    printf("Orthopedics:\n\tDr. Shudhanshu Jaitley\n\tDr. Ramesh Kumar\n\tDr. Deepika\n\tDr. Surendhar");
    printf("\nDermatology:\n\tDr. Manohar Lal\n\tDr. Sangeetha\n\tDr. Manoj\n\tDr. Kaushik");
    printf("\nCardiology:\n\tDr. Anand Kumar\n\tDr. Stephen\n\tDr. Sweetha\n\tDr. Sandip Singh");
}

float Dose_calculator(void)
{
    float DOSE,mg,ml,req;
    printf("Kindly enter the prescribed dose in milligrams(mg):");
    scanf("%f",&DOSE);
    printf("\nKindly enter the available dose in milligrams(mg):");
    scanf("%f",&mg);
    printf("\nKindly enter the available volume in milliliter(ml):");
    scanf("%f",&ml);
    req = (DOSE*ml)/mg;
    printf("\nThe required volume is %0.2f ml of %0.2f mg medicine",req,mg);
}
        

float Drip_speed_calculator (void)
{
    float speed,pt_weight,bag_weight,bag_volume,req;
    printf("\nKindly enter the prescribed speed in milligrams per kilograms per hour(mg/kg/hr):");
    scanf("%f",&speed);
    printf("\nKindly enter the available bag weight in milligrams(mg):");
    scanf("%f",&bag_weight);
    printf("\nKindly enter the available bag volume in milliliters(ml):");
    scanf("%f",&bag_volume);
    printf("\nKindly enter patient weight in kilograms(kg):");
    scanf("%f",&pt_weight);
    req = (speed*pt_weight*bag_volume)/bag_weight;
    printf("\nThe required drip speed is %0.2f ml/hr ",req);
    
}

float Bill_calculator (void)
{
    float Med,Doc,Tax,Total;
    printf("Kindly enter the doctor fees:₹");
    scanf("%f",&Doc);
    printf("Kindly Enter the medicine cost:₹");
    scanf("%f",&Med);
    Tax = 0.12*Med;
    Total = Med+Doc+Tax;
    printf("Tax amount is : ₹%0.2f",Tax);
    printf("\nTotal payable amount is : ₹%0.2f",Total);
}

void Lab(void)
{
    int input;
    float Glu,LDL;
    printf("Welcome To SRM Hospital Laboratory\t\t\t\nEnter '1' for Blood Glucose\n      '2' for Blood Cholesterol\n");
    scanf("%d",&input);
    
    switch(input)
    {
        case 1:
        {
            printf("Enter the fasting blood glucose in mg/dl:");
            scanf("%f",&Glu);
            if (Glu<80)
            {
                printf("Patient has hypoglycemia");
            }
            else if (Glu>=80 && Glu <100)
            {
                printf("Patient has normal blood glucose levels");
            }
            else if (Glu>=100 && Glu <120)
            {
                printf("Patient is borderline diabetic");
            }
            else if (Glu>=120)
            {
                printf("Patient is diabetic");
            }
            break;
        }
        case 2:
        {
          printf("Enter the Low Density Lipoprotein level in mg/dl:");
            scanf("%f",&LDL);
            if (LDL<100)
            {
                printf("Patient has normal LDL values");
            }
            else 
            {
                printf("Patient has abnormal LDL Values");
            }
            break;  
        }
    }
    
    
    
    
}




