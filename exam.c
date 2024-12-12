#include <stdio.h>
#include <string.h>

int main(){
    

    int num_cats;
    int cats[20];
    int num_units;
    char unit_name[130][125];
    char unit_code[110][125];
    char total_units[num_units];
    float mean[num_units];
    int count = 0;
    float sum = 0;
    double average;
    char grade[130];
    char remark[130][15];

    printf("\nEnter number of units: ");
    scanf("%d", &num_units);
    getchar();
    for(int i = 0; i < num_units; i++){
        printf("Enter the Unit code: ", i + 1);
        fgets(unit_code[i], 25, stdin);
        unit_code[i][strlen(unit_code[i]) - 1]= '\0';
        printf("\nEnter Unit title: "), i + 1;
        fgets(unit_name[i], 25, stdin);
        unit_name[i][strlen(unit_name[i]) - 1]= '\0';
        
        printf("\nEnter number of CATs:  ", i + 1);
        scanf("%d", &num_cats);
        float sum = 0;
        for(int i = 0; i < num_cats; i++){
            printf("\nEnter CAT mark(one at a time):  \n", i + 1);
            scanf("%d", &cats[i], i + 1);
            sum += cats[i]; 
        
        
            }
    
    getchar();
    average = sum / num_cats;
    if (count < num_units){
        mean[count++] = average;
        } 
     
    
        if (average >= 70 && average <=100){
            grade[i] = 'A';
            strcpy(remark[i], "Excellent");
        } else if(average >= 60 && average < 70){
            grade[i] = 'B';
            strcpy(remark[i], "Good");
        } else if(average >= 50 && average < 60){
            grade[i] = 'C';
            strcpy(remark[i], "Average");
        } else if(average >= 40 && average < 50){
            grade[i] = 'D';
            strcpy(remark[i], "Pass");
        } else if(average < 40 ){
            grade[i] = 'F';
            strcpy(remark[i], "Fail");
        } else{
            printf("Invalid score entered!");
            return 1;
        }

    }
    


    
    




    printf("+----------------------+-------------------------------+-------------+-----------+-------------------|\n");
    printf("|      UNIT CODE       |           UNIT TITLE          |   AVERAGE   |   GRADE   |      REMARKS      |\n");                                                                    
    printf("+----------------------+-------------------------------+-------------+-----------+-------------------|\n");
    
    

      for(int i = 0; i < num_units; i++){
        printf("|%-22s|%-23s        |   %-8.2lf  |    %-7c|     %-14s|\n", unit_code[i], unit_name[i], mean[i], grade[i], remark[i]);
        printf("+----------------------+-------------------------------+-------------+-----------+-------------------|\n");
        

      }
    
    
    
    return 0;
}
   
   
   
    // char grade_syst[30];
    // char grade;
    // char remark[15];
    // if (average >= 70 && average <=100){
    //     grade = 'A';
    //     strcpy(remark, "Excellent");
    // } else if(average >= 60 && average < 70){
    //     grade = 'B';
    //     strcpy(remark, "Good");
    // } else if(average >= 50 && average < 60){
    //     grade = 'C';
    //     strcpy(remark, "Average");
    // } else if(average >= 40 && average < 50){
    //     grade = 'D';
    //     strcpy(remark, "Pass");
    // } else if(average < 40 ){
    //     grade = 'F';
    //     strcpy(remark, "Fail");
    // } else{
    //     printf("Invalid score entered!");
    //     return 1;
    // }
   
   
   
    // for(int i = 0; i < num_units; i++){
    //     printf("\nUnit Code: %s Unit Title: %s", unit_code[i], unit_name[i]);
    //     printf("\nAverage: %.2lf", mean[i]);
    //     printf("\nGrade: %c", grade[i]);
    //     printf("\nRemarks: %s\n", remark[i]);
    //     printf("\n\n");
    // }
   
   
    // printf("\nEnter CAT 1 marks: ");
    // scanf("%d", &cat_1);
    // printf("\nEnter CAT 2 marks: ");
    // scanf("%d", &cat_2);
    // printf("\nEnter CAT 3 marks: ");
    // scanf("%d", &cat_3);