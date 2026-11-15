
void FUN_024bb660(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1ee8);
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar3 * 0x740;
    if (7 < uVar3) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    local_3c = FUN_01392d64(lVar1 + 0xb0);
    if (local_3c == 2) {
      uVar2 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
      if ((uVar2 & 1) == 0) {
        local_34 = 0;
        local_3c = 6;
        local_38 = 1;
        FUN_02374e74(param_1,&local_3c);
      }
    }
    else if (local_3c == 1) {
      FUN_01393458(lVar1 + 0xb0);
      FUN_02373ee0(param_1,6,1,1);
      return;
    }
  }
  return;
}

