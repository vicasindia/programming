/*****************************************************************
    Faster input in C/C++

    getchar_unlocked() ->>   getchar()  ->  scanf()  -> cin 
*****************************************************************/

//fastscan function for Integer
void fast_scan(long int &num)
    {
        bool negative = false;
        register int ch;
        num = 0;
        ch = getchar();
        //ch = getchar_unlocked();

        if(ch == '-')
        {
            negative = true;
            c = getchar();
            //ch = getchar_unlocked();
        }

        for(; (ch>=48 && ch<=57); ch=getchar())   //ch = getchar_unlocked()
            num = (num<<1) + (num<<3) + ch - 48;

        if(negative)
            num *= -1;
    }

//Function Calling
fast_scan(num);
