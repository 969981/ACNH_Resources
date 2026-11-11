
ulong FUN_00515110(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < *(int *)(param_1 + 0x68)) {
    uVar2 = 0;
    do {
      iVar1 = FUN_0043a240(*(ulong *)(*(long *)(*(long *)(param_1 + 0x60) + uVar2 * 8) + 0x18) &
                           0xfffffffffffffffe,param_2);
      if (iVar1 == 0) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x68));
  }
  return 0xffffffff;
}

