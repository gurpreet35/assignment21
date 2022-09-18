// 7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
struct time
{
   int sec;
   int min;
   int hrs;
};
void diff_between_time(struct time t1, struct time t2, struct time *diff);
int main()
{
   struct time start_time, stop_time, diff;
   printf("Enter start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &start_time.hrs, &start_time.min, &start_time.sec);
   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stop_time.hrs, &stop_time.min, &stop_time.sec);
   diff_between_time(start_time, stop_time, &diff);
   printf("\ntime Diff: %d:%d:%d - ", start_time.hrs, start_time.min, start_time.sec);
   printf("%d:%d:%d ", stop_time.hrs, stop_time.min, stop_time.sec);
   printf("= %d:%d:%d\n", diff.hrs, diff.min, diff.sec);
}
void diff_between_time(struct time start, struct time stop, struct time *diff)
{
   int new_hrs,new_min,new_sec;
   while (stop.sec > start.sec)
   {
      --start.min;
      start.sec += 60;
   }
  diff->sec= start.sec - stop.sec;
   while (stop.min > start.min)
   {
      --start.hrs;
      start.min += 60;
   }
   diff->min= start.min - stop.min;
   new_hrs = start.hrs - stop.hrs;

if(start.hrs>=12){
 diff->hrs=24-new_hrs;
}
if(start.hrs<stop.hrs){
diff->hrs=stop.hrs-start.hrs;
}
}