
uint FUN_033fac10(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte local_14 [4];
  
  uVar4 = FUN_033faa90();
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    goto LAB_033fad24;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_033fac8c:
    if (*pbVar5 < 8) goto LAB_033fad04;
LAB_033fac98:
    if (DAT_0537d558 == (long *)0x0) {
LAB_033facfc:
      pbVar5 = &DAT_0548e168;
      goto LAB_033fad04;
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
    local_14[0] = *pbVar5;
    if (7 < local_14[0]) goto LAB_033facfc;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_033fac8c;
      }
      goto LAB_033fac98;
    }
LAB_033fad04:
    local_14[0] = *pbVar5;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  uVar3 = FUN_02538bb0(local_14);
  uVar3 = uVar3 ^ 1;
LAB_033fad24:
  return uVar3 & 1;
}

