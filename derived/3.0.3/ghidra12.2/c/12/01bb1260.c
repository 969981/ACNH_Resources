
void FUN_01bb1260(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_14;
  
  if ((DAT_0533a3c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0533a3c0);
    if (iVar1 != 0) {
      FUN_01bb25c8(&DAT_0533a3b0,param_2);
      __cxa_guard_release(&DAT_0533a3c0);
    }
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar2 * 4) == 0x6e) goto LAB_01bb12bc;
      uVar2 = uVar2 + 1;
    } while (DAT_0533a3b0 != uVar2);
  }
  uVar2 = 0;
LAB_01bb12bc:
  local_14 = (undefined4)uVar2;
  FUN_01bae480(param_1,param_2,0,&local_14,0xe);
  return;
}

