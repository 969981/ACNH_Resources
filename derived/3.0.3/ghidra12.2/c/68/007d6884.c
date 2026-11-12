
void FUN_007d6884(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  byte local_4 [4];
  
  *param_1 = DAT_04cb0c60;
  uVar5 = FUN_016cf9f0();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_007d6908:
    if (7 < *pbVar6) {
LAB_007d6914:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_4[0] = *pbVar6;
        if (local_4[0] < 8) goto LAB_007d6994;
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
        goto LAB_007d6908;
      }
      goto LAB_007d6914;
    }
  }
  local_4[0] = *pbVar6;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_007d6994:
  uVar4 = FUN_02582fe0(local_4);
  uVar2 = *param_1;
  *param_1 = uVar2 & 0xffff0038 | uVar4 & 7;
  uVar7 = (uint)(*(ulong *)(DAT_0523adf0 + 8) >> 0x20);
  if (uVar7 != 0xffffffff) {
    uVar7 = (uVar7 & 0x3ff) << 6;
    if ((*(ulong *)(DAT_0523adf0 + 8) & 0xff) != 0) {
      uVar7 = 8;
    }
    *param_1 = uVar7 | uVar2 & 0xffff0000 | uVar4 & 7;
  }
  return;
}

