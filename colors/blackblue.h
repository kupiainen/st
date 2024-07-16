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
    "#d3d3d3",

	/* 8 bright colors */
	"#3d4653",
	"#ff9255",
	"#29ff7b",
	"#deff79",
	"#69baff",
	"#bc72ff",
	"#55f6ff",
	"#faffff",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc", /* 256 -> cursor color */
	"#555555", /* 257 -> reverse cursor color */
	"#e4f0ff", /* 258 -> foreground color */
	"#000000", /* 259 -> background color */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
