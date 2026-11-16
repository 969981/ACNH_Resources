
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0299ae60(long param_1,undefined1 *param_2)

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
  long *plVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x188);
    uVar3 = iVar1 - iVar2;
    if (iVar1 < iVar2) {
      lVar12 = *(long *)(param_1 + 0x160);
      cVar9 = '\x01';
      if (*(int *)(param_2 + 0x18) == 4) {
        cVar9 = '\x02';
      }
      if (lVar12 != param_1 + 0x158) {
        do {
          lVar8 = *(long *)(lVar12 + -8);
          if ((*(char *)(lVar8 + 8) == cVar9) && (*(int *)(lVar8 + 0xc) == *(int *)(param_2 + 0xc)))
          goto LAB_0299af24;
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 + -8 != param_1 + 0x150);
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
        if ((int)(iVar2 + *(uint *)(param_1 + 0x1a8)) <= iVar1) goto LAB_0299af4c;
        if (*(uint *)(param_1 + 0x1a8) <= uVar4) {
          uVar4 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x1b0);
        uVar3 = uVar4;
      }
      if (lVar8 != 0) {
        lVar8 = lVar8 + (long)(int)uVar3 * 0x50;
LAB_0299af24:
        lVar12 = lVar8 + 0x20;
        do {
          lVar12 = *(long *)(lVar12 + 8);
          if (lVar12 == lVar8 + 0x20) break;
        } while (*(undefined1 **)(lVar12 + -8) != param_2);
        lVar8 = param_1 + 0xf8;
        do {
          lVar8 = *(long *)(lVar8 + 8);
          if (lVar8 == param_1 + 0xf8) break;
        } while (*(undefined1 **)(lVar8 + -8) != param_2);
        FUN_0299b110();
        return;
      }
    }
  }
LAB_0299af4c:
  plVar10 = (long *)(param_1 + 0xf8);
  do {
    plVar10 = (long *)plVar10[1];
    if (plVar10 == (long *)(param_1 + 0xf8)) {
      plVar10 = (long *)0x0;
      break;
    }
  } while ((undefined1 *)plVar10[-1] != param_2);
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
  if ((plVar10 != (long *)0x0) && (plVar10 + -1 != (long *)0x0)) {
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
    plVar10[-1] = *(long *)(param_1 + 0x110);
    *(long **)(param_1 + 0x110) = plVar10 + -1;
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  if (*(int *)(param_2 + 4) < *(int *)(param_1 + 0x70)) {
    piVar11 = (int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0xa8) <= *piVar11) {
      return;
    }
    puVar7 = (undefined8 *)(param_1 + 0x98);
    puVar13 = (undefined8 *)*puVar7;
    plVar10 = (long *)(param_1 + 0x80);
  }
  else {
    piVar11 = (int *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xe8) <= *piVar11) {
      return;
    }
    puVar7 = (undefined8 *)(param_1 + 0xd8);
    puVar13 = (undefined8 *)*puVar7;
    plVar10 = (long *)(param_1 + 0xc0);
  }
  if (puVar13 != (undefined8 *)0x0) {
    *puVar7 = *puVar13;
  }
  *puVar13 = param_2;
  puVar13[2] = 0;
  plVar14 = puVar13 + 1;
  *plVar14 = 0;
  lVar8 = *plVar10;
  *plVar10 = (long)plVar14;
  puVar13[2] = plVar10;
  *plVar14 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar14;
  }
  *piVar11 = *piVar11 + 1;
  return;
}

