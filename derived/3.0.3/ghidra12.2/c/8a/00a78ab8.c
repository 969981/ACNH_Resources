
undefined8 FUN_00a78ab8(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  
  lVar4 = DAT_04da4ab8;
  bVar8 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x00a78b34:
    if (bVar8 < 8) goto LAB_00a78ba4;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar8 = *pbVar6;
    if (*pbVar6 < 8) goto LAB_00a78ba4;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      bVar8 = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x00a78b34;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar7 = *DAT_0537d558;
    bVar8 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar8 = *pbVar6;
    if (*pbVar6 < 8) goto LAB_00a78ba4;
  }
  bVar8 = DAT_0548e168;
  if (7 < DAT_0548e168) {
    return 0;
  }
LAB_00a78ba4:
  uVar5 = FUN_00a76844(DAT_04da4ab8,0x12);
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  lVar7 = lVar4 + (ulong)uVar5 * 0x20;
  *(byte *)(lVar7 + 0x10) = bVar8;
  *(undefined8 *)(lVar7 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar7 + 0x20) = 0x12;
  iVar3 = *(int *)(lVar4 + 0x410);
  iVar2 = *(int *)(lVar4 + 0x414);
  *(undefined1 *)(lVar7 + 0x28) = 1;
  *(undefined4 *)(lVar7 + 0x2c) = 0;
  if (iVar3 < iVar2) {
    *(byte **)(*(long *)(lVar4 + 0x418) + (long)iVar3 * 8) = (byte *)(lVar7 + 0x10);
    *(int *)(lVar4 + 0x410) = *(int *)(lVar4 + 0x410) + 1;
    return 1;
  }
  return 1;
}

