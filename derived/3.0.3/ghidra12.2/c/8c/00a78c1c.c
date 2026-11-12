
bool FUN_00a78c1c(void)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_00a78c88:
    if (7 < *pbVar6) {
LAB_00a78c94:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar6;
        if (local_14[0] < 8) goto LAB_00a78d14;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00a78c88;
      }
      goto LAB_00a78c94;
    }
  }
  local_14[0] = *pbVar6;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_00a78d14:
  uVar5 = FUN_00a738a0(local_14,0);
  bVar3 = false;
  if ((uVar5 & 1) != 0) {
    iVar4 = FUN_00a74b78(local_14);
    bVar3 = iVar4 == 0x12;
  }
  return bVar3;
}

