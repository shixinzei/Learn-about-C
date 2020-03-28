extern int a[10];
extern int max,min;
void find()
{
    int director,i;
    max=min=a[0];
    for(i=1;i<10;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
}

