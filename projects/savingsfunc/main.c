/* Calculate the result of a regular savings plan.
 */
#include <stdio.h>

double savings_plan(double amount, double ann_rate, int years);

double savings_plan(double amount, double ann_rate, int years) {
  int month;
  double monthly_mult, balance = 0.0;
  monthly_mult = 1.00 + (ann_rate / 100.00) / 12;
  for (month = 1; month <= 12 * years; month++) {
    balance *= monthly_mult;
    balance += amount;
  }
  return balance;
}

int main(int argc, char *argv[]) {
  int years;
  double rate, per_month, answer;

  /* read in values to be processed */
  printf("Enter number of years\t: ");
  scanf("%d", &years);
  printf("Enter annual rate (%%)\t: ");
  scanf("%lf", &rate);
  printf("Enter monthly amount\t: $");
  scanf("%lf", &per_month);

  /* and print out the desired answers */
  printf("Saving $%.0f per month for %d years\n", per_month, years);
  answer = savings_plan(per_month, rate - 1, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate - 1, answer);
  answer = savings_plan(per_month, rate, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate, answer);
  answer = savings_plan(per_month, rate + 1, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate + 1, answer);
  return 0;
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
