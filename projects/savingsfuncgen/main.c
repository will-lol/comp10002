/* Calculate the result of a regular savings plan.
 */
#include <stdio.h>

double savings_plan(double balance, double amount, double ann_rate, int years);

double savings_plan(double initial, double amount, double ann_rate, int years) {
  int month;
  double monthly_mult, balance = initial;
  monthly_mult = 1.00 + (ann_rate / 100.00) / 12;
  for (month = 1; month <= 12 * years; month++) {
    balance *= monthly_mult;
    balance += amount;
  }
  return balance;
}

int main(int argc, char *argv[]) {
  int years;
  double rate, per_month, init_bal, answer;

  /* read in values to be processed */
  printf("Enter number of years   : ");
  scanf("%d", &years);
  printf("Enter annual rate %%     : ");
  scanf("%lf", &rate);
  printf("Enter monthly amount    : $");
  scanf("%lf", &per_month);
  printf("Enter initial balance   : $");
  scanf("%lf", &init_bal);

  /* and print out the desired answers */
  printf("Saving $%.0f plus $%.0f per month for %d years\n", init_bal,
         per_month, years);
  answer = savings_plan(init_bal, per_month, rate - 1, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate - 1, answer);
  answer = savings_plan(init_bal, per_month, rate, years);
  printf("\tat %.1f%% per year: $%.0f\n", rate, answer);
  answer = savings_plan(init_bal, per_month, rate + 1, years);
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
