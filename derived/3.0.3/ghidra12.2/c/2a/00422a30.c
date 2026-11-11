
int FUN_00422a30(long *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  if ((int)param_1[1] <= param_3) {
    return -1;
  }
  pcVar1 = strstr((char *)(*param_1 + (long)param_3),param_2);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - (int)*param_1;
}

