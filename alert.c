/* Header Files */
#include "alert.h"
#include "stats.h"

/* Variables */
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters, struct Stats computedStats)
{
  /* Local Variables */
  int temp = 0;

  if(computedStats.max > maxThreshold)
  {
    for(temp = 0; temp < 2; temp++)
    {
      if(alerters[temp] != (void*)NULL)
      {
        (*alerters[temp])();
      }      
    }
  }
}

/* Email Alert */
void alertEmail(void)
{
  emailAlertCallCount++;
}

/* LED Alert */
void alertLed(void)
{
  ledAlertCallCount++;
}
