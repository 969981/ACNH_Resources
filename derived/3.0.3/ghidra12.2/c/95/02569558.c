
undefined4 FUN_02569558(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x6f0);
  uVar2 = (ulong)uVar1;
  if (-1 < (int)uVar1) {
    if (3 < uVar1) {
      uVar2 = 0;
    }
    uVar1 = *(uint *)(*(long *)PTR_DAT_04bb3960 + uVar2 * 4 + 0xf5b40);
    if (uVar1 < 5) {
      return *(undefined4 *)(&DAT_0417abfc + (long)(int)uVar1 * 4);
    }
  }
  return 0;
}

