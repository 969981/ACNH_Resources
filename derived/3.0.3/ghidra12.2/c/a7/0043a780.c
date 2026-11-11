
bool FUN_0043a780(void *param_1,ulong param_2,char *param_3)

{
  int iVar1;
  size_t __n;
  
  if (param_3 == (char *)0x0) {
    return true;
  }
  __n = strlen(param_3);
  if (param_2 < __n) {
    return false;
  }
  iVar1 = memcmp(param_1,param_3,__n);
  return iVar1 == 0;
}

