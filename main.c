#include <stdio.h>
#include <stdlib.h>
int min (int t[]){
    int min ,i;
    min=t[0];
    for(i=1;i<10;i++){
        if(t[i]<min)
            min=t[i];}
        return min;


}
int max (int t[]){int max ,i;
    max=t[0];
    for(i=1;i<10;i++){
        if(t[i]<max)
            max=t[i];}
        return max;



}
void oposite  (int te[]){
    int ts[10],i;
    for(i=0;i<10;i++){
    ts[9-i]=te[i];
    printf("the number of table t[s]\n");
     for(i=0;i<10;i++)
        printf("ts[%d]=%d\n",ts[i]);

    }

}

 int main()
{int t[10];
int i;
for(i=0;i<10;i++){

    printf("enter the number of table t[%d]",i+1);
    scanf("%d",&t[i]);
}
printf("the max of t[i]=%d",max (t));
printf("the max of t[i]=%d",min (t));


oposite(t);
    return 0;
}
