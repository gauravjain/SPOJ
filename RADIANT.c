#include <stdio.h>
 
int main()
{
    int l,d,w,x,y;
        float t1,t2,t3,t4,t,s1,s2,s3,s4;
    scanf("%d%d",&x,&y);
        scanf("%d%d%d",&l,&d,&w);
        if(w>y)
        {
        // PHASE 1
        t1=y/(float)x;
        s1=(t1*t1*x*0.5);
        s2=d-s1;
        //PHASE 2
        t2=(d-s1)/(float)y;
        //PHASE 3
        s3=l-d;
        t3=(l-d)/(float)y;
        t=t1+t2+t3;
        printf("%.09f",t);
        }
        else
        {
                // PHASE 1
        t1=w/(float)x;
        s1=(t1*t1*x*0.5);
        s2=d-s1;
        //PHASE 2
        t2=(d-s1)/(float)w;
        //PHASE 3
        t3=(y-w)/x;
        s3=(y*y-w*w)/(float)(2*x);
        //PHASE 4
        t4=(l-d-s3)/(float)y;
        t=t1+t2+t3+t4;
        printf("%.09f",t);
        }
        return 0;
}
