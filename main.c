char* timeConversion(char* s) {
    //find AM or PM
    char *newtime="HH:MM:SS";
    newtime=malloc(sizeof(char*));
    
    for(int i=2;i<8;i++)
    {
        *(newtime+i)=*(s+i);
       
    }
    if(s[8]=='A')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            newtime[0]='0';
            newtime[1]='0';
        }
        else
        {
            newtime[0]=s[0];
            newtime[1]=s[1];
        }
    }
    if(s[8]=='P')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            newtime[0]=s[0];
            newtime[1]=s[1];
        }
        else
        {
            if(s[0]=='0'|| s[1]!=2)
            {
                newtime[0]=s[0]+1;
                newtime[1]=s[1]+2;
            }
           
        }
    }
    return newtime;
    }
