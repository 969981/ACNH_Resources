
void FUN_01bb1bc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = param_3;
  if ((*PTR_DAT_04bc0a88 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0533a3c0);
    if (iVar1 != 0) {
      FUN_01bb25c8(param_4,&DAT_0533a3b0,param_2);
      __cxa_guard_release(&DAT_0533a3c0);
    }
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar2 * 4) == 0x96) goto LAB_01bb1c1c;
      uVar2 = uVar2 + 1;
    } while (DAT_0533a3b0 != uVar2);
  }
  uVar2 = 0;
LAB_01bb1c1c:
  local_18 = (undefined4)uVar2;
  FUN_01bae480(param_1,param_2,param_4,&local_18,local_14);
  return;
}

