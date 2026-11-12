
undefined8 FUN_00a78154(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  
  lVar3 = DAT_04da4ab8;
  if (DAT_0537d558 == (long *)0x0) {
    return 0;
  }
  lVar5 = *DAT_0537d558;
  if (1 < *(byte *)(lVar5 + 0x476)) {
    return 0;
  }
  bVar7 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x00a78208:
    if (7 < bVar7) {
LAB_00a7820c:
      bVar7 = *(byte *)(lVar5 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar7 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
        if (7 < bVar7) {
          puVar1 = (uint *)(lVar5 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar5 + 0x471);
        }
      }
      bVar7 = *pbVar6;
      if (bVar7 < 8) goto LAB_00a78268;
      bVar7 = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar7 = *pbVar6;
    if (7 < bVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar7 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x00a78208;
      }
      goto LAB_00a7820c;
    }
  }
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
LAB_00a78268:
  uVar4 = FUN_00a76844(DAT_04da4ab8,0x13);
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  iVar2 = *(int *)(lVar3 + 0x414);
  lVar5 = lVar3 + (ulong)uVar4 * 0x20;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(lVar5 + 0x10) = bVar7;
  *(undefined8 *)(lVar5 + 0x18) = param_1;
  *(undefined8 *)(lVar5 + 0x20) = 0xc;
  *(undefined4 *)(lVar5 + 0x2c) = 0;
  *(undefined1 *)(lVar5 + 0x28) = 5;
  if (*(int *)(lVar3 + 0x410) < iVar2) {
    *(byte **)(*(long *)(lVar3 + 0x418) + (long)*(int *)(lVar3 + 0x410) * 8) =
         (byte *)(lVar5 + 0x10);
    *(int *)(lVar3 + 0x410) = *(int *)(lVar3 + 0x410) + 1;
  }
  return 1;
}

