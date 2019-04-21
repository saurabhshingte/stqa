#include <stdio.h>

struct date{
	short dd,mm,yy;
};

void getYesterdayDate(struct date *d)
{
	if(d->dd==1)
    {
		if(d->mm==4||d->mm==6||d->mm==9||d->mm==11)
        {
			d->dd=31;
			d->mm--;
		}
		
        else if(d->mm==3)
        {
			if((d->yy%4)==0) d->dd=29;
			else d->dd=28;
			d->mm--;
		}
		
        else if(d->mm==1)
        {
			d->dd=31;
			d->yy--;
		}
		
        else if(d->mm==2)
        {
			d->dd=31;
			d->mm--;
		}
		else{
			d->dd=30;
			d->mm--;
		}
	}
	
	else{
		d->dd--;
	}
}

int main()
{

	struct date dt;
	
	printf("Enter date in dd/mm/yyyy format: ");
	scanf("%d/%d/%d",&dt.dd,&dt.mm,&dt.yy);
	
	if(dt.dd>31 || dt.mm>12 || dt.yy < 1990 || dt.yy > 2025)
	{
	    printf("\nInvalid Date\n");
    }
    
    else
    {
        getYesterdayDate(&dt);

	    printf("\nPrevious date is: ");
	    printf("%02d/%02d/%02d\n",dt.dd,dt.mm,dt.yy);	
    }
	
	return 0;	
}
