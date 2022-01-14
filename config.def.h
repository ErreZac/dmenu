/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira JetBrainsiMono Nerd Font:size=18:style=Regular"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#3B4252", "#88C0D0" },
	[SchemeSel] = { "#2E3440", "#ECEFF4" },
	[SchemeSelHighlight] = { "#2E3440", "#EBCB8B" },
	[SchemeNormHighlight] = { "#2E3440", "#81A1C1" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
	[SchemeMid] = { "#3B4252", "#88C0D0" },
//	[SchemeNorm] = { "#f8f8f2", "#282a36" },
//	[SchemeSel] = { "#f8f8f2", "#6272a4" },
//	[SchemeSelHighlight] = { "#ff79c6", "#6272a4" },
//	[SchemeNormHighlight] = { "#ff79c6", "#444756" },
//	[SchemeOut] = { "#000000", "#00ffff" },
//	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
//	[SchemeMid] = { "#bd93f9", "#444756" },
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
static const unsigned int border_width = 2;
