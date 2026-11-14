
undefined8 FUN_016e7650(void)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  byte local_28 [4];
  undefined4 local_24;
  
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_016e76c0:
    if (*pbVar4 < 8) goto LAB_016e7738;
LAB_016e76cc:
    if (DAT_0537d558 == (long *)0x0) {
LAB_016e7730:
      pbVar4 = &DAT_0548e168;
      goto LAB_016e7738;
    }
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
    local_28[0] = *pbVar4;
    if (7 < local_28[0]) goto LAB_016e7730;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_016e76c0;
      }
      goto LAB_016e76cc;
    }
LAB_016e7738:
    local_28[0] = *pbVar4;
    if (7 < local_28[0]) {
      if (DAT_04c487d4 == 0xffff) {
        return 0;
      }
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) == 0) {
        return 0;
      }
      goto LAB_016e7818;
    }
  }
  if (DAT_04c487d4 == 0xffff) {
    return 0;
  }
  local_24 = 6;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)(short)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 6 & 1) == 0) {
    return 0;
  }
  uVar3 = FUN_02915598(local_28);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (DAT_04c487d4 == 0xffff) {
    return 0;
  }
LAB_016e7818:
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
  if (0xff < DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((*puVar1 >> 6 & 1) == 0) || (DAT_05453f6c == -1)) {
    return 0;
  }
  return 1;
}

