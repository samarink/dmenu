/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"firacode:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_gray1[]       = "#2e3440";
static const char col_gray2[]       = "#4c566a";
static const char col_gray3[]       = "#d8dee9";
static const char col_gray4[]       = "#eeeeee";
static const char col_gray5[]       = "#3b4252";
static const char col_cyan[]        = "#88c0d0";
static const char col_green[]       = "#a3be8c";

static const char *colors[SchemeLast][2] = {
	                    /*        fg         bg       */
	[SchemeNorm] =          { col_gray3, col_gray1 },
	[SchemeSel] =           { col_gray4, col_gray5 },
	[SchemeNormHighlight] = { col_green, col_gray1 },
	[SchemeSelHighlight] =  { col_gray4, col_gray5 },
	[SchemeOut] =           { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 24;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
