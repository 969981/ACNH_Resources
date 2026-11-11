
bool FUN_0043f080(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *__s1;
  
  __s1 = (char *)*param_1;
  if (__s1 == param_2) {
    return true;
  }
  bVar1 = false;
  if ((param_2 != (char *)0x0) && (__s1 != (char *)0x0)) {
    iVar2 = strcmp(__s1,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

