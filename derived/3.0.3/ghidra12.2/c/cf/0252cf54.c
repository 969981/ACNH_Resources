
bool FUN_0252cf54(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_0252cfc4:
    if (7 < *pbVar5) {
LAB_0252cfd0:
      if (DAT_0537d558 != (long *)0x0) {
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
        local_14[0] = *pbVar5;
        if (local_14[0] < 8) goto LAB_0252d050;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0252cfc4;
      }
      goto LAB_0252cfd0;
    }
  }
  local_14[0] = *pbVar5;
  if (7 < local_14[0]) {
    return false;
  }
LAB_0252d050:
  lVar6 = *DAT_0537d558;
  if (*(byte *)(lVar6 + 0x476) < 2) {
    iVar3 = FUN_02582d8c(local_14,2);
    if (iVar3 < 0) {
      return false;
    }
  }
  else {
    bVar2 = *(byte *)(lVar6 + (ulong)local_14[0] * 4 + 0x44e);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
      return false;
    }
    pbVar5 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar5 = (byte *)(lVar6 + 0x48);
    }
    if ((*pbVar5 >> 3 & 1) == 0) {
      return false;
    }
  }
  if (((local_14[0] < 8) && (uVar4 = FUN_02582d8c(local_14,1), uVar4 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
    return *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0';
  }
  return false;
}

