extern int notPrivateData;
// static variables can't be extern
// extern int privateData;

void file1_func(void)
{
    notPrivateData = notPrivateData + 100;
    // privateData = privateData + 100;
}