
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02999d00(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  char cVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x188);
    uVar3 = iVar1 - iVar2;
    if (iVar1 < iVar2) {
      lVar11 = *(long *)(param_1 + 0x160);
      cVar9 = '\x01';
      if (*(int *)(param_2 + 0x18) == 4) {
        cVar9 = '\x02';
      }
      if (lVar11 != param_1 + 0x158) {
        do {
          lVar8 = *(long *)(lVar11 + -8);
          if ((*(char *)(lVar8 + 8) == cVar9) && (*(int *)(lVar8 + 0xc) == *(int *)(param_2 + 0xc)))
          goto LAB_02999dc8;
          lVar11 = *(long *)(lVar11 + 8);
        } while (lVar11 + -8 != param_1 + 0x150);
      }
    }
    else {
      iVar2 = *(uint *)(param_1 + 0x198) + iVar2;
      uVar4 = iVar1 - iVar2;
      if (iVar1 < iVar2) {
        if (*(uint *)(param_1 + 0x198) <= uVar3) {
          uVar3 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x1a0);
      }
      else {
        if ((int)(iVar2 + *(uint *)(param_1 + 0x1a8)) <= iVar1) goto LAB_02999dec;
        if (*(uint *)(param_1 + 0x1a8) <= uVar4) {
          uVar4 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x1b0);
        uVar3 = uVar4;
      }
      if (lVar8 != 0) {
        lVar8 = lVar8 + (long)(int)uVar3 * 0x50;
LAB_02999dc8:
        lVar11 = lVar8 + 0x20;
        do {
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == lVar8 + 0x20) break;
        } while (*(undefined1 **)(lVar11 + -8) != param_2);
        FUN_0299b110();
        return;
      }
    }
  }
LAB_02999dec:
  *(undefined2 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x3c) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  uVar6 = _UNK_04102208;
  uVar5 = _DAT_04102200;
  param_2[10] = 0xff;
  *(undefined8 *)(param_2 + 0x1c) = 0x42f00000ffffffff;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = uVar6;
  *(undefined8 *)(param_2 + 0x58) = uVar5;
  uVar5 = _DAT_04102880;
  *(undefined8 *)(param_2 + 0x70) = _UNK_04102888;
  *(undefined8 *)(param_2 + 0x68) = uVar5;
  uVar6 = _UNK_041023d8;
  uVar5 = _DAT_041023d0;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 0x80) = uVar6;
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  if (param_3 != (undefined8 *)0x0) {
    plVar12 = param_3 + 1;
    if (*plVar12 != 0) {
      *(undefined8 *)(*plVar12 + 8) = param_3[2];
    }
    if ((long *)param_3[2] != (long *)0x0) {
      *(long *)param_3[2] = *plVar12;
    }
    *plVar12 = 0;
    param_3[2] = 0;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
    *param_3 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 **)(param_1 + 0x110) = param_3;
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  if (*(int *)(param_2 + 4) < *(int *)(param_1 + 0x70)) {
    piVar10 = (int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0xa8) <= *piVar10) {
      return;
    }
    puVar7 = (undefined8 *)(param_1 + 0x98);
    puVar13 = (undefined8 *)*puVar7;
    plVar12 = (long *)(param_1 + 0x80);
  }
  else {
    piVar10 = (int *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xe8) <= *piVar10) {
      return;
    }
    puVar7 = (undefined8 *)(param_1 + 0xd8);
    puVar13 = (undefined8 *)*puVar7;
    plVar12 = (long *)(param_1 + 0xc0);
  }
  if (puVar13 != (undefined8 *)0x0) {
    *puVar7 = *puVar13;
  }
  *puVar13 = param_2;
  puVar13[2] = 0;
  plVar14 = puVar13 + 1;
  *plVar14 = 0;
  lVar8 = *plVar12;
  *plVar12 = (long)plVar14;
  puVar13[2] = plVar12;
  *plVar14 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar14;
  }
  *piVar10 = *piVar10 + 1;
  return;
}

