#define TRUE 1
#define FALSE !TRUE
//Global variables
//signal handling
struct sigaction act_child;
struct sigaction act_int;
//cmd
static char* cd;
extern char** environ;
// Shell pid, pgid, terminal modes
static pid_t gpid;
static pid_t gpgid;
static int gint;
static struct termios tmode;


int noprint;

pid_t pid;

void child(int p);
void sint(int p);


int chdirectory(char * args[]);