/* user and group to drop privileges to */
static const char *user  = "yaesol";
static const char *group = "yaesol";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#002b36",     /* after initialization */
	[INPUT] =  "#073642",   /* during input */
	[FAILED] = "#dc322f",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "9x15";
