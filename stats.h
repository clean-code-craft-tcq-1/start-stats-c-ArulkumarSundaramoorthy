/* Define */
#define NO_NUMBER 0

/* Prototypes */
struct Stats compute_statistics(const float* numberset, int setlength);

/* Variables */
struct Stats
{
	float average;
	float max;
	float min;
};
