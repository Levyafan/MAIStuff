typedef struct point
{
	int x;
	int y;
	point *next;
}pnt;

typedef struct line1
{
	CvPoint start;	//начало линии
	CvPoint end;	
	line1 *next;
}line1;

typedef struct linelist
{
	line1 *p;
	linelist *next;
}lnlst;

typedef struct line_parts
{
	pnt *pnt1;
	line_parts *next;
}lps;
