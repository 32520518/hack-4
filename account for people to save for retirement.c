/**

 * Author: Wencheng Bao computer science

 * Date: 2019/02/08

 *

 * A simple program about interest, inflation rate, return rate and retirement in c

 *

 */

#include <stdio.h>

#include <stdlib.h>

int main(void ) {



    double startBalance;

    double Contribtion;

    double ReturnRate;

    double InflationRate;

    double Retirment;

    scanf("%lf %lf %lf %lf %lf",&startBalance, &Contribtion, &ReturnRate, &InflationRate, &Retirment);

    double totalInterest;

    if (Contribtion > 18500){
      printf ("Illegal: monthly contributions exceed $18,500 annual limit.");

      exit(1);

    }

    printf("Month \t Interest \t Balance\n");

    double inflationAdjustRate= ((1 + ReturnRate) / (1+InflationRate)) -1;

    double moninflationAdjustRate = inflationAdjustRate/12;

    double newBalance=startBalance;

    double interest;

    totalInterest = 0;

    for (int i=1; i<=Retirment*12; i++){ // 1 year = 12 months

      interest = newBalance * moninflationAdjustRate;//find the interest

      newBalance = newBalance + Contribtion +interest;//find the newbalance

      printf("%d", i);

      printf("\t $ %4.2f", interest);

      printf("\t $ %7.2f", newBalance);

      printf("\n");

      totalInterest += interest;//find the total interest

    }


    printf("Total Interest Earned: $ %.2lf\n",totalInterest);//output
    printf("Total Nest Egg: $ %.2f\n",newBalance);//output

    return 0;


}
