/* Prototypte */
typedef void (*alerter_funcptr[2])(void);
void check_and_alert(float maxThreshold, alerter_funcptr alerters, struct Stats computedStats);
void alertEmail(void);
void alertLed(void);

/* Variables */
extern int emailAlertCallCount;
extern int ledAlertCallCount;
