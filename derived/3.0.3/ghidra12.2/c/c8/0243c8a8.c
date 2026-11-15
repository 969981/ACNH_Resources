
uint FUN_0243c8a8(void)

{
  byte *pbVar1;
  uint uVar2;
  byte local_14 [4];
  
  uVar2 = 0;
  if ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) == 0) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      pbVar1 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a4);
    }
    local_14[0] = *pbVar1;
    if (local_14[0] < 8) {
      if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        uVar2 = FUN_02582d8c(pbVar1,2);
        uVar2 = ~uVar2 >> 0x1f;
      }
      else {
        uVar2 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,local_14);
      }
    }
    else {
      uVar2 = 0;
    }
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}

