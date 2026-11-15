
void FUN_02335d54(long param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  
  pbVar4 = (byte *)(param_1 + 0xc340);
  if (*pbVar4 < 8) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x5f40);
  if (iVar3 - 2U < 2) {
    pbVar5 = (byte *)(param_1 + 0x5f44);
  }
  else if (iVar3 == 5) {
    if (*(byte *)(param_1 + 0x6050) < 8) {
      *pbVar4 = *(byte *)(param_1 + 0x6050);
      return;
    }
    pbVar5 = &DAT_0548e140;
  }
  else {
    pbVar5 = &DAT_0548e140;
    if (iVar3 == 1) {
      pbVar5 = (byte *)(param_1 + 0x5f44);
    }
  }
  bVar7 = *pbVar5;
  bVar2 = bVar7 < 8;
  if (!bVar2) {
    bVar7 = 0xff;
  }
  *pbVar4 = bVar7;
  if (bVar2) {
    return;
  }
  if (((DAT_05493930 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05493930), iVar3 != 0)) {
    DAT_05493928 = 0xff;
    __cxa_guard_release(&DAT_05493930);
  }
  pbVar4 = &DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
LAB_02335e44:
    if (7 < *pbVar4) {
LAB_02335e50:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar7 = *(byte *)(lVar6 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar6 + 0x471);
          }
        }
        DAT_05493928 = *pbVar4;
        if (DAT_05493928 < 8) goto LAB_02335ec0;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02335e44;
      }
      goto LAB_02335e50;
    }
  }
  DAT_05493928 = *pbVar4;
  if (7 < DAT_05493928) {
    DAT_05493928 = 0xff;
  }
LAB_02335ec0:
  if (7 < DAT_05493928) {
    DAT_05493928 = 0xff;
  }
  return;
}

