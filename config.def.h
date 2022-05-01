/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Victor Mono Nerd Font:size=22:style=Regular"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	                     /*     fg         bg       */
	[SchemeNorm]          = { "#a89984", "#282828" }, // { "#ebdbb2", "#282828" }, // { "#D8DEE9", "#1e222a" }, // 2E3440
	[SchemeSel]           = { "#fbf1c7", "#458588" }, //C9CBFF { "#1d2021", "#fabd2f" }, // { "#2E3440", "#88C0D0" },
	[SchemeSelHighlight]  = { "#1d2021", "#fabd2f" }, // { "#1d2021", "#458588" }, // { "#ECEFF4", "#434C5E" },
	[SchemeNormHighlight] = { "#1d2021", "#d79921" }, // { "#1d2021", "#83a598" }, // { "#2E3440", "#5E81AC" },
	[SchemeOut]           = { "#000000", "#00ffff" }, // { "#000000", "#00ffff" },
	[SchemeOutHighlight]  = { "#000000", "#00ffff" }, // { "#88C0D0", "#00ffff" },
	[SchemeMid]           = { "#fbf1c7", "#83a598" }, // { "#ebdbb2", "#32302f" }, // { "#E5E9F0", "#3B4252" },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 12;
static unsigned int columns    = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
