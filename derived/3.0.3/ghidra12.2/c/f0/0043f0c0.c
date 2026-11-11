
int FUN_0043f0c0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)*param_1;
  if (__s1 == param_2) {
    return 0;
  }
  if (__s1 == (char *)0x0) {
    return -1;
  }
  if (param_2 == (char *)0x0) {
    return 1;
  }
  iVar1 = strcmp(__s1,param_2);
  return iVar1;
}

