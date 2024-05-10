typedef struct {
    char *icon;
    char *command;
    unsigned int interval;
    unsigned int signal;
} Block;

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,	0},
	{"󰥔 ", "date '+%b %d (%a) %I:%M%p'", 5,	0},
};

// `\0` means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
