#include <stdio.h>
#include <stdlib.h>

#define FINGERS_CROSSED_FOR_SOME_MARKS = 0

void sit_MST(int stud_num, char room[], char time[]);

int main(int argc, char *argv[]) {}

void mst_information(int stud_num) {
  char *MST_room[];

  if (0 <= stud_num && stud_num <= 1580686) {
    MST_room[] = "PAR-263-G-G41 (Kwong Lee Dow Building)";
  } else if (1580799 <= stud_num && stud_num <= 1615922) {
    char MST_room[] =
        "PAR-263-L1-101A-101 & 102 Combined (Kwong Lee Dow Building)";
  } else if (1616444 <= stud_num && stud_num <= 1743772) {
    MST_room =
        "PAR-263-L1-122A-Rooms 122-125 Combined (Kwong Lee Dow Building)";
  } else if (1743779 <= stud_num && stud_num <= 9999999) {
    MST_room[] = "PAR-151-G-G01 Wilson Hall";
  } else {
    fprintf(stderr, "Could not determine MST information.\nContact the "
                    "coordinator: ammoffat@unimelb.edu.au\n");
    exit(EXIT_FAILURE);
  }

  sit_MST(stud_num, MST_room, "2pm Friday 29 August");
}

void sit_MST(int stud_num, char room[], char time[]) {
  fprintf(stdout, "Student number:\t%d\nRoom:\t%s\nTime:\t%s\n", stud_num, room,
          time);
}
