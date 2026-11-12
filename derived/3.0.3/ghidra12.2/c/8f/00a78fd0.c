
void FUN_00a78fd0(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte local_8 [4];
  byte local_4 [4];
  
  lVar7 = DAT_04cd19d8;
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_00a7903c:
    if (*pbVar5 < 8) goto LAB_00a790b4;
LAB_00a79048:
    if (DAT_0537d558 == (long *)0x0) {
LAB_00a790ac:
      pbVar5 = &DAT_0548e168;
      goto LAB_00a790b4;
    }
    lVar6 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) goto LAB_00a790ac;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00a7903c;
      }
      goto LAB_00a79048;
    }
LAB_00a790b4:
    local_4[0] = *pbVar5;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  uVar4 = FUN_00a738a0(local_4,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  iVar3 = FUN_00a74b78(local_4);
  if (iVar3 != 0x11) {
    return;
  }
  if (lVar7 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_00a7913c:
    if (7 < *pbVar5) {
LAB_00a79148:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar7 + 0x471);
          }
        }
        local_8[0] = *pbVar5;
        if (local_8[0] < 8) goto LAB_00a791c8;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00a7913c;
      }
      goto LAB_00a79148;
    }
  }
  local_8[0] = *pbVar5;
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
LAB_00a791c8:
  if (*DAT_055c10d8 == '\0') {
    FUN_00a76460(DAT_04da4ab8,local_8,0xffffffffffffffff,0x11,0x13,5);
  }
  return;
}

