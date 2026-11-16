
ulong FUN_02678100(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_1 == 0) {
    uVar12 = (ulong)DAT_0559bc2c;
    goto LAB_02678258;
  }
  param_2 = param_2 & 0xff;
  lVar13 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    plVar10 = *(long **)(lVar13 + 0x98);
    if (plVar10 != (long *)0x0) goto LAB_0267815c;
LAB_0267817c:
    uVar8 = 1;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x19548);
    if (plVar10 == (long *)0x0) goto LAB_0267817c;
LAB_0267815c:
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_0267817c;
    uVar8 = (*(code *)**(undefined8 **)*plVar10)();
    uVar8 = uVar8 ^ 1;
  }
  if (param_2 >> 7 == 0) {
    uVar12 = 0;
    lVar2 = *(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78);
    bVar3 = 0;
    if (*(byte *)(lVar2 + 0x178) < 3) {
      bVar3 = *(byte *)(lVar2 + 0x178);
    }
    uVar4 = 0x1e;
    if (bVar3 != 1) {
      uVar4 = 0x14;
    }
    uVar5 = 0x28;
    if (bVar3 != 2) {
      uVar5 = uVar4;
    }
    uVar11 = *(uint *)(lVar2 + 0x158);
    if (0x13 < uVar11) {
      uVar11 = 0x14;
    }
    do {
      if (uVar12 < 0x28) {
        uVar1 = (int)uVar12 - uVar11;
        pbVar6 = (byte *)(lVar2 + 0xa4) + uVar1;
        if (0x13 < uVar1) {
          pbVar6 = (byte *)(lVar2 + 0xa4);
        }
        pbVar7 = (byte *)(lVar2 + 0x15c + uVar12);
        if (uVar11 <= uVar12) {
          pbVar7 = pbVar6;
        }
        if (*pbVar7 == param_2) goto LAB_02678238;
      }
      else if (param_2 == 0xff) goto LAB_02678238;
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
  uVar12 = (ulong)DAT_0559bc2c;
LAB_02678238:
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_02678258:
  return uVar12 & 0xffffffff;
}

