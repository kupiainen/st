/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#121214",
	"#c41313",
	"#1ae456",
	"#769054",
	"#008ebf",
	"#725592",
	"#6abfd0",
    "#749fca",

	/* 8 bright colors */
	"#3d4653",
	"#ff9255",
	"#29ff7b",
	"#deff79",
	"#69baff",
	"#bc72ff",
	"#55f6ff",
	"#acefff",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
	"#e4f0ff", /* default foreground colour */
	"#000000", /* black background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
