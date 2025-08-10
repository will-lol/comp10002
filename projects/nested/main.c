/* Nested structures.
 */
#include <stdio.h>

#define NAMESTRLEN 40
#define MAXSUBJECTS 8

typedef char namestr[NAMESTRLEN + 1];

typedef struct {
  namestr given, others, family;
} fullname_t;

typedef struct {
  int yy, mm, dd;
} date_t;

typedef struct {
  int subjectcode;
  date_t enrolled;
  int status;
  int finalmark;
} subject_t;

typedef struct {
  fullname_t name;
  int employeenumber;
  date_t dob;
  date_t datecommenced;
  int status;
  int annualsalary;
} staff_t;

typedef struct {
  fullname_t name;
  int studentnumber;
  date_t dob;
  int nsubjects;
  subject_t subjects[MAXSUBJECTS];
} student_t;

staff_t jane;
student_t bill;

int main(int argc, char *argv[]) { return (0); }

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
