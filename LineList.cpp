#include <opencv/cv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdlib.h>
#include <stdio.h>
#include "LineList.hpp"


class line
{
	lps *next;
public:
	int lines ();
	void add (pnt *p);
	void show ();
};

int line::lines ()
{
	next = NULL;
}
void line::add (pnt *p)
{
	next = new lps;
	next->pnt1->next = NULL;
	next->pnt1->x = p->x;
	next->pnt1->y = p->y;
}
void line::show ()
{
	lps *root = next;
		while(root != NULL)
		{
			printf("x = %d, y = %d\n", root->pnt1->x, root->pnt1->y);
			root = root->next;
		}
}

class GObject		//при переносе в файл hpp "redefinition of ‘class GObject’"
{
	lnlst *next;
public:
	void GObjects ();
	void addl (line1 *p);
};

void GObject::GObjects ()
{
	next = NULL;
}

void GObject::addl (line1 *p)
{
	next->p = new line1;
	next->p->next = NULL;
	next->p->start = p->start;
	next->p->end = p->end;
}

int main ()
{
	printf ("sup /g/\n");
	return 0;
}
