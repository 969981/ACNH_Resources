
undefined4 FUN_0252cb54(void)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  bVar2 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x0252cbc0:
    uVar3 = (ulong)bVar2;
    if (bVar2 < 8) goto LAB_0252cc30;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    uVar3 = (ulong)*pbVar4;
    if (*pbVar4 < 8) goto LAB_0252cc30;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      bVar2 = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x0252cbc0;
    }
  }
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
    uVar3 = (ulong)*pbVar4;
    if (*pbVar4 < 8) goto LAB_0252cc30;
  }
  uVar3 = (ulong)DAT_0548e168;
  if (7 < DAT_0548e168) {
    return DAT_04c9a0c8;
  }
LAB_0252cc30:
  if (DAT_054f5738 == 0) {
    return DAT_04c9a0c8;
  }
  return *(undefined4 *)(DAT_054f5738 + uVar3 * 4 + 0xde8);
}

