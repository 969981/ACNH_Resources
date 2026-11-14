
void FUN_01baf9b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_14;
  
  uVar2 = param_3;
  if ((DAT_0533a3c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0533a3c0);
    uVar2 = param_3 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_01bb25c8(&DAT_0533a3b0,param_2,uVar2);
      __cxa_guard_release(&DAT_0533a3c0);
      uVar2 = param_3 & 0xffffffff;
    }
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar3 * 4) == 0x7d) goto LAB_01bafa0c;
      uVar3 = uVar3 + 1;
    } while (DAT_0533a3b0 != uVar3);
  }
  uVar3 = 0;
LAB_01bafa0c:
  local_14 = (undefined4)uVar3;
  FUN_01baf140(param_1,param_2,uVar2,&local_14,8);
  return;
}

