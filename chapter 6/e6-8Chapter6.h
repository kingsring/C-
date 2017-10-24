int funcvar(void)
{
    static int calltime = 0;

    return ( (calltime==0)?(++calltime,0):(++calltime,1) );
}
