
undefined8 FUN_00a79208(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  
  lVar3 = DAT_04da4ab8;
  if (DAT_04da4ab8 == 0) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_00a79288:
    if (7 < *pbVar5) {
LAB_00a79294:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar7 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar7 = *pbVar5;
        if (bVar7 < 8) goto LAB_00a79304;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00a79288;
      }
      goto LAB_00a79294;
    }
  }
  bVar7 = *pbVar5;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
LAB_00a79304:
  uVar4 = FUN_00a76844(DAT_04da4ab8,0x13);
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  iVar2 = *(int *)(lVar3 + 0x414);
  lVar6 = lVar3 + (ulong)uVar4 * 0x20;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(lVar6 + 0x10) = bVar7;
  *(undefined8 *)(lVar6 + 0x18) = param_1;
  *(undefined8 *)(lVar6 + 0x20) = 0xd;
  *(undefined4 *)(lVar6 + 0x2c) = 0;
  *(undefined1 *)(lVar6 + 0x28) = 4;
  if (*(int *)(lVar3 + 0x410) < iVar2) {
    *(byte **)(*(long *)(lVar3 + 0x418) + (long)*(int *)(lVar3 + 0x410) * 8) =
         (byte *)(lVar6 + 0x10);
    *(int *)(lVar3 + 0x410) = *(int *)(lVar3 + 0x410) + 1;
  }
  return 1;
}

