#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
	int x;
	int y;
	point* next;
}Tpoint;

typedef struct linepart
{
	point *pos;
	linepart* next;
}Tlinepart;

class Line
{
	linepart* next;
public:
	Line ()
	{
		next->next = NULL;
	}

	void add (point *p)
	{
		next->next = new linepart;
		next->pos->x = p->x;
		next->pos->y = p->y;
	}

	void show ()
	{
		linepart *lp;
		lp = next;
		while (lp->next != NULL)
		{
			printf ("\n%i ; %i", next->pos->x, next->pos->y);
			lp = lp->next;
			lp = next;
		}
		printf ("\n");
	}
};

typedef struct linelist
{
	Line *lin;
	linelist *next;
}Tlinelist;

class GObject
{
	linelist *next;
public:
	GObject()
	{
		next->next = NULL;
	}

	void add (Line *ln)
	{
		next->next = new linelist;
		next->lin = ln;
	}
};
