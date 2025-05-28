#include<stdio.h>
int main () {
  float feet, inch, weight ;
  printf ("Enter your height (feet and inch) : ");
  scanf ("%f %f",&feet, &inch);
  printf ("\nEnter your weight : ");
  scanf ("%f",&weight);
  float height = (feet*0.3048) + (inch*0.0254);
  float BMI = weight / (height*height);
  printf ("\nYour BMI is => %f\n", BMI);
  if ( 18.5 > BMI )
  {
    printf ("\nYou need to increase your weight.");
  }
  else if ( 18.5 <= BMI && 24.9 >= BMI )
  {
    printf ("\nYour health is well .");
  }
  else if ( 25.0 <= BMI && 29.9 >= BMI )
  {
    printf ("\nYour risk is increase. You need to lose your some weight .");
  }
  else if ( 30.0 <= BMI && 34.9 >= BMI )
  {
    printf ("\nNow your are enter the high risk zone .");
  }
  else if ( 35.0 <= BMI && 39.9 >= BMI )
  {
    printf ("\nNow you are very high risk zone .");
  }
  else if ( 40.0 < BMI )
  {
    printf ("\nNow you are extremely high risk zone .");
  }

  return 0;
}