
void FUN_00441780(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN_00428370();
    if ((uVar1 & 1) != 0) {
      FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar1;
    if ((uVar2 & 1) != 0) {
      FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}

