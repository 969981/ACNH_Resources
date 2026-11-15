
long FUN_0214fac0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if (param_3 == 0) {
    return 0;
  }
  bVar8 = *(byte *)(param_3 + 2);
  uVar12 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  *(byte *)(param_1 + 0x1f8) = bVar8;
  bVar5 = *(byte *)(param_3 + 3);
  uVar9 = (uint)((ulong)uVar12 >> 0x20);
  uVar11 = uVar9 >> 8 & 0xff;
  *(byte *)(param_1 + 0x1f9) = bVar5;
  cVar3 = (char)((ulong)uVar12 >> 0x20);
  if (((param_1 + 0x1e0 != param_3) && (lVar7 = *(long *)(param_1 + 0x78), lVar7 != param_1 + 0x70))
     && (lVar10 = lVar7 + -0x10, lVar10 != param_3)) {
    uVar1 = uVar9 + 0x18;
    if ('\x04' < cVar3) {
      uVar1 = uVar9;
    }
    do {
      bVar6 = *(byte *)(lVar7 + -0x10);
      if ((((uVar1 & 0xff) < (uint)bVar6) ||
          (((uint)bVar6 == (uVar1 & 0xff) && (uVar11 < *(byte *)(lVar10 + 1))))) &&
         ((bVar6 < bVar8 || ((bVar6 == bVar8 && (*(byte *)(lVar10 + 1) < bVar5)))))) {
        *(byte *)(param_1 + 0x1f8) = bVar6;
        bVar5 = *(byte *)(lVar10 + 1);
        *(byte *)(param_1 + 0x1f9) = bVar5;
        bVar8 = bVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      lVar10 = lVar7 + -0x10;
    } while ((lVar10 != param_1 + 0x60) && (lVar10 != param_3));
  }
  if ((*(char *)(param_3 + 8) == '\0') &&
     ((uVar4 = FUN_0219dee4(&DAT_053fe348), (uVar4 & 1) == 0 &&
      (lVar7 = *(long *)(param_1 + 8), lVar7 != param_1)))) {
    bVar8 = *(byte *)(param_1 + 0x1f8);
    bVar5 = *(byte *)(param_1 + 0x1f9);
    lVar10 = lVar7 + -0x10;
    uVar1 = uVar9 + 0x18;
    if ('\x04' < cVar3) {
      uVar1 = uVar9;
    }
    bVar6 = (byte)uVar1;
    do {
      bVar2 = *(byte *)(lVar7 + -0x10);
      uVar9 = (uint)bVar2;
      if (((uVar1 & 0xff) < uVar9) ||
         ((uVar9 == (uVar1 & 0xff) && (uVar11 < *(byte *)(lVar10 + 1))))) {
        if ((uVar9 < bVar8) || ((uVar9 == bVar8 && (*(byte *)(lVar10 + 1) < bVar5)))) {
          *(byte *)(param_1 + 0x1f8) = bVar2;
          bVar5 = *(byte *)(lVar10 + 1);
          *(byte *)(param_1 + 0x1f9) = bVar5;
          bVar8 = bVar2;
        }
      }
      else {
        bVar2 = *(byte *)(lVar10 + 2);
        if ((uVar1 & 0xff) < (uint)bVar2) {
          bVar6 = bVar2;
LAB_0214fca0:
          *(byte *)(param_1 + 0x1f8) = bVar6;
          *(undefined1 *)(param_1 + 0x1f9) = *(undefined1 *)(lVar10 + 3);
          return lVar10;
        }
        if (((uint)bVar2 == (uVar1 & 0xff)) && (uVar11 < *(byte *)(lVar10 + 3))) goto LAB_0214fca0;
      }
      lVar7 = *(long *)(lVar7 + 8);
      lVar10 = lVar7 + -0x10;
    } while (lVar10 != param_1 + -0x10);
  }
  return 0;
}

