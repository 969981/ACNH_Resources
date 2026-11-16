
undefined8 FUN_02535188(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_025351f0:
    if (7 < *pbVar4) {
LAB_025351fc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar6 + 0x471);
          }
        }
        local_14[0] = *pbVar4;
        if (local_14[0] < 8) goto LAB_0253527c;
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
        goto LAB_025351f0;
      }
      goto LAB_025351fc;
    }
  }
  local_14[0] = *pbVar4;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_0253527c:
  uVar3 = FUN_02582d8c(local_14,1);
  if ((uVar3 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')
     ) {
    uVar3 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d8);
    uVar5 = (ulong)uVar3;
    if ((-1 < (int)uVar3) && (DAT_04d02f58 != 0)) {
      if (3 < uVar3) {
        uVar5 = 0;
      }
      return *(undefined8 *)(DAT_04d02f58 + uVar5 * 8 + 0xf5b20);
    }
  }
  return 0;
}

