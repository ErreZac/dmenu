/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const unsigned int alpha = 0xff;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code Nerd Font:size=22:style=Retina"
};

/*  theme */
#include "colorthemes/rosepine_dawn.h"
// #include "colorthemes/catppuccin.h"


static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 12;
static unsigned int columns    = 2;

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
    [SchemeSelHighlight]  = { OPAQUE, alpha },
    [SchemeNormHighlight] = { OPAQUE, alpha },
    [SchemeOut]           = { OPAQUE, alpha },
    [SchemeOutHighlight]  = { OPAQUE, alpha },
    [SchemeMid]           = { OPAQUE, alpha },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
