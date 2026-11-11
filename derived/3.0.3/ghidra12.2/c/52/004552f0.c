
void FUN_004552f0(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  void *__s;
  ulong uVar2;
  
  iVar1 = FUN_00426fc0();
  __s = (void *)(**(code **)(*param_3 + 0x10))(param_3,(long)iVar1,0);
  memset(__s,0,(long)iVar1);
  *param_1 = __s;
  param_1[1] = param_2;
  if (param_2 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_00428370(param_2);
    param_1[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}

