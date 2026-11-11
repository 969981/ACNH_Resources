
bool FUN_00429cb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t __n;
  
  __n = param_1[1] - (long)*param_1;
  if (__n == param_2[1] - (long)*param_2) {
    iVar1 = memcmp((void *)*param_1,(void *)*param_2,__n);
    return iVar1 == 0;
  }
  return false;
}

