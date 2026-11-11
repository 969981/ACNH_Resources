
bool FUN_00429c10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong __n;
  
  __n = param_2[1] - (long)*param_2;
  if ((ulong)(param_1[1] - (long)*param_1) < __n) {
    return false;
  }
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,__n);
  return iVar1 == 0;
}

