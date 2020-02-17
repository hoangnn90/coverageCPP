int foo(char c)
{
    switch (c)
    {
    case 's':
        return 0;
        break;

    case 'r':
        return 1;
        break;
    
    default:
        return -1;
        break;
    }
}