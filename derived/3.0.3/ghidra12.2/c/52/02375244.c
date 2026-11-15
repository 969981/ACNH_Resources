
long FUN_02375244(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    return 0;
  }
  uVar2 = FUN_00a738a0(param_1 + 0x1ee8,0);
  lVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_00a74b78(param_1 + 0x1ee8);
    lVar3 = 1;
    if (uVar1 < 0xf) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x600dU) == 0) {
        if ((uVar1 == 7) || (uVar1 == 9)) {
          lVar3 = (ulong)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
        }
      }
      else {
        lVar3 = 2;
      }
    }
  }
  return lVar3;
}

