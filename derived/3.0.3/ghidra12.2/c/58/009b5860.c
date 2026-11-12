
void FUN_009b5860(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte local_1c [4];
  uint local_18;
  uint local_14;
  
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_009b58cc:
    if (7 < *pbVar4) {
LAB_009b58d8:
      if (DAT_0537d558 != (long *)0x0) {
        lVar5 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        local_1c[0] = *pbVar4;
        if (local_1c[0] < 8) goto LAB_009b5958;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_009b58cc;
      }
      goto LAB_009b58d8;
    }
  }
  local_1c[0] = *pbVar4;
  if (7 < local_1c[0]) {
    local_1c[0] = 0xff;
  }
LAB_009b5958:
  uVar3 = FUN_02582d8c(local_1c,1);
  if (((uVar3 < 8) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
     (local_14 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d8),
     9 < local_14 + 1 || (1 << (ulong)(local_14 + 1 & 0x1f) & 0x203U) == 0)) {
    if (*(long *)(DAT_05ae7798 + 0x178) != DAT_05ae7798 + 0x170) {
      lVar6 = (long)*(int *)(DAT_05ae7798 + 0x184);
      lVar5 = *(long *)(DAT_05ae7798 + 0x178) - lVar6;
      do {
        if (*(int *)(lVar5 + 0x18) == 0xd) break;
        lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
      } while (lVar5 != (DAT_05ae7798 + 0x170) - lVar6);
    }
    if (local_14 < 8) {
      local_18 = 0;
      nn::hid::SwapNpadAssignment(&local_14,&local_18);
    }
  }
  return;
}

