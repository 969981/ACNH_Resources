
bool FUN_01df8220(byte *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    return false;
  }
  bVar4 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x01df82a8:
    if (7 < bVar4) {
LAB_01df82ac:
      lVar5 = *DAT_0537d558;
      bVar4 = *(byte *)(lVar5 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar1 = (uint *)(lVar5 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar5 + 0x471);
        }
      }
      bVar4 = *pbVar6;
      if (bVar4 < 8) goto LAB_01df830c;
      bVar4 = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar4 = *pbVar6;
    if (7 < bVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar4 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x01df82a8;
      }
      goto LAB_01df82ac;
    }
  }
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
LAB_01df830c:
  bVar3 = *param_1;
  bVar7 = bVar3;
  if (7 < bVar3) {
    bVar7 = 0xff;
  }
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  if (bVar7 == bVar4) {
    return false;
  }
  if (((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) &&
     (bVar3 < 8)) {
    bVar4 = *(byte *)(*DAT_0537d558 + (ulong)bVar3 * 4 + 0x44e);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      pbVar6 = (byte *)(*DAT_0537d558 + 0x48);
      pbVar2 = pbVar6 + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
      if (7 < bVar4) {
        pbVar2 = pbVar6;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        return *(char *)(DAT_0537d558[2] + (ulong)bVar3 * 2 + 0x8e9) == '\0';
      }
    }
  }
  return true;
}

