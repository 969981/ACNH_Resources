
undefined * FUN_033d0598(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    if (DAT_04cd19d8 == 0) {
      pbVar5 = &DAT_0548e140;
LAB_033d061c:
      if (7 < *pbVar5) {
LAB_033d0628:
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
          local_24[0] = *pbVar5;
          if (local_24[0] < 8) goto LAB_033d06b0;
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
          goto LAB_033d061c;
        }
        goto LAB_033d0628;
      }
    }
    local_24[0] = *pbVar5;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
      goto LAB_033d0738;
    }
  }
LAB_033d06b0:
  uVar4 = FUN_02582d8c(local_24,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if ((((uVar4 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
     ((uVar4 = FUN_02582d8c(local_24,1), uVar4 < 8 &&
      (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
    return (undefined *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x6b0);
  }
LAB_033d0738:
  FUN_033d2620(&DAT_05745710);
  return &DAT_05745710;
}

