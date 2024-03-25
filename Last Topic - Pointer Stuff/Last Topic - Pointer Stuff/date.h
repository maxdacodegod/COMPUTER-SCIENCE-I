typedef void* DATE;

enum status{FAILURE, SUCCESS};

typedef enum status Status;

DATE date_init_default(void);

int date_get_month(DATE hDate);
int date_get_day(DATE hDate);
int date_get_year(DATE hDate);
char* date_get_month_name(DATE hDate);

Status date_set_month(DATE hDate, int month);
Status date_set_day(DATE hDate, int day);
Status date_set_year(DATE hDate, int year);

void date_output(DATE hDate);

void date_destroy(DATE* phDate);