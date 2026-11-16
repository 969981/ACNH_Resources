
void FUN_025196e4(byte *param_1)

{
  uint *puVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_02519740:
    if (*pbVar3 < 8) goto LAB_025197b8;
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar3 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (*pbVar3 < 8) goto LAB_025197b8;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
      goto LAB_02519740;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar5 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar5 + 0x473);
    pbVar3 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar3 = (byte *)(lVar5 + 0x471);
      }
    }
    bVar4 = *pbVar3;
    bVar2 = bVar4 < 8;
    if (!bVar2) {
      bVar4 = 0xff;
    }
    *param_1 = bVar4;
    if (bVar2) {
      return;
    }
  }
  pbVar3 = &DAT_0548e168;
LAB_025197b8:
  bVar4 = *pbVar3;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *param_1 = bVar4;
  return;
}

