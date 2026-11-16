
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029973b0(long param_1,int *param_2,undefined4 param_3,ulong param_4,int param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 *puVar15;
  char cVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  
  uVar9 = _UNK_04102888;
  uVar8 = _DAT_04102880;
  uVar7 = _UNK_041023d8;
  uVar6 = _DAT_041023d0;
  uVar5 = _UNK_04102208;
  uVar4 = _DAT_04102200;
  plVar1 = (long *)(param_1 + 0x158);
  cVar16 = '\x01';
  if (param_5 == 4) {
    cVar16 = '\x02';
  }
  plVar17 = *(long **)(param_1 + 0x160);
  if (plVar17 != plVar1) {
    plVar20 = plVar17;
    do {
      if ((*(char *)(plVar20[-1] + 8) == cVar16) && (*(int *)(plVar20[-1] + 0xc) == *param_2)) {
        return;
      }
      plVar20 = (long *)plVar20[1];
    } while (plVar20 + -1 != (long *)(param_1 + 0x150));
  }
  lVar19 = *(long *)(param_1 + 0x130);
  if (*(int *)(param_1 + 0x138) < 1) {
    lVar19 = 0;
  }
  puVar18 = (undefined8 *)(lVar19 + -8);
  if (lVar19 == 0 || puVar18 == (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x168) < 1) {
      plVar17 = (long *)0x0;
    }
    plVar20 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar20 = plVar17 + -1;
    }
    lVar19 = *plVar20;
    plVar17 = *(long **)(lVar19 + 0x28);
    if (plVar17 != (long *)(lVar19 + 0x20)) {
      do {
        puVar12 = (undefined1 *)plVar17[-1];
        plVar20 = (long *)(param_1 + 0xf8);
        do {
          plVar20 = (long *)plVar20[1];
          if (plVar20 == (long *)(param_1 + 0xf8)) {
            plVar20 = (long *)0x0;
            break;
          }
        } while ((undefined1 *)plVar20[-1] != puVar12);
        *(undefined2 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 0xc) = 0xffffffffffffffff;
        puVar12[10] = 0xff;
        *(undefined8 *)(puVar12 + 0x14) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x1c) = 0x42f00000ffffffff;
        *(undefined8 *)(puVar12 + 0x24) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x2c) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x34) = 0xffffffffffffffff;
        *(undefined8 *)(puVar12 + 0x3c) = 0xffffffffffffffff;
        *(undefined4 *)(puVar12 + 0x44) = 0xffffffff;
        *puVar12 = 1;
        *(undefined8 *)(puVar12 + 0x60) = uVar5;
        *(undefined8 *)(puVar12 + 0x58) = uVar4;
        *(undefined8 *)(puVar12 + 0x48) = 0;
        *(undefined8 *)(puVar12 + 0x50) = 0;
        *(undefined8 *)(puVar12 + 0x70) = uVar9;
        *(undefined8 *)(puVar12 + 0x68) = uVar8;
        *(undefined8 *)(puVar12 + 0x80) = uVar7;
        *(undefined8 *)(puVar12 + 0x78) = uVar6;
        if ((plVar20 != (long *)0x0) && (plVar20 + -1 != (long *)0x0)) {
          if (*plVar20 != 0) {
            *(long *)(*plVar20 + 8) = plVar20[1];
          }
          if ((long *)plVar20[1] != (long *)0x0) {
            *(long *)plVar20[1] = *plVar20;
          }
          *plVar20 = 0;
          plVar20[1] = 0;
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
          plVar20[-1] = *(long *)(param_1 + 0x110);
          *(long **)(param_1 + 0x110) = plVar20 + -1;
          *(undefined1 *)(param_1 + 0xf0) = 1;
        }
        if (*(int *)(puVar12 + 4) < *(int *)(param_1 + 0x70)) {
          if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0xa8)) {
            puVar15 = *(undefined8 **)(param_1 + 0x98);
            piVar14 = (int *)(param_1 + 0x90);
            plVar20 = (long *)(param_1 + 0x80);
            puVar18 = (undefined8 *)(param_1 + 0x98);
            if (puVar15 != (undefined8 *)0x0) goto LAB_02997614;
            goto LAB_02997630;
          }
        }
        else if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xe8)) {
          puVar15 = *(undefined8 **)(param_1 + 0xd8);
          piVar14 = (int *)(param_1 + 0xd0);
          plVar20 = (long *)(param_1 + 0xc0);
          puVar18 = (undefined8 *)(param_1 + 0xd8);
          if (puVar15 != (undefined8 *)0x0) {
LAB_02997614:
            *puVar18 = *puVar15;
          }
LAB_02997630:
          *puVar15 = puVar12;
          puVar15[2] = 0;
          plVar21 = puVar15 + 1;
          *plVar21 = 0;
          lVar13 = *plVar20;
          *plVar20 = (long)plVar21;
          puVar15[2] = plVar20;
          *plVar21 = lVar13;
          if (lVar13 != 0) {
            *(long **)(lVar13 + 8) = plVar21;
          }
          *piVar14 = *piVar14 + 1;
        }
        plVar17 = (long *)plVar17[1];
      } while (plVar17 + -1 != (long *)(lVar19 + 0x18));
      plVar17 = *(long **)(lVar19 + 0x28);
    }
    while (plVar17 != (long *)(lVar19 + 0x20)) {
      plVar20 = (long *)plVar17[1];
      plVar21 = plVar20;
      if (*plVar17 != 0) {
        *(long **)(*plVar17 + 8) = plVar20;
        plVar21 = (long *)plVar17[1];
      }
      if (plVar21 != (long *)0x0) {
        *plVar21 = *plVar17;
      }
      *plVar17 = 0;
      plVar17[1] = 0;
      *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + -1;
      plVar17[-1] = *(long *)(lVar19 + 0x38);
      *(long **)(lVar19 + 0x38) = plVar17 + -1;
      plVar17 = plVar20;
    }
    FUN_02997890(param_1);
    lVar19 = *(long *)(param_1 + 0x130);
    if (*(int *)(param_1 + 0x138) < 1) {
      lVar19 = 0;
    }
    puVar18 = (undefined8 *)0x0;
    if (lVar19 != 0) {
      puVar18 = (undefined8 *)(lVar19 + -8);
    }
  }
  puVar11 = (undefined2 *)*puVar18;
  plVar17 = puVar18 + 1;
  if (*plVar17 != 0) {
    *(undefined8 *)(*plVar17 + 8) = puVar18[2];
  }
  if ((long *)puVar18[2] != (long *)0x0) {
    *(long *)puVar18[2] = *plVar17;
  }
  *plVar17 = 0;
  puVar18[2] = 0;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
  *puVar18 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 **)(param_1 + 0x140) = puVar18;
  *puVar11 = 0;
  *(undefined4 *)(puVar11 + 2) = 0;
  *(char *)(puVar11 + 4) = cVar16;
  iVar3 = *param_2;
  *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
  *(int *)(puVar11 + 6) = iVar3;
  puVar12 = *(undefined1 **)(puVar11 + 0xc);
  *(undefined2 *)(puVar12 + 0x122) = 0xfffe;
  *(undefined8 *)(puVar12 + 0x14) = 0xffffffff00000000;
  puVar12[8] = 0;
  *(undefined8 *)(puVar12 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(puVar12 + 0x20) = 0;
  *(undefined8 *)(puVar12 + 0x30) = 0;
  puVar12[0x120] = 0;
  *(undefined8 *)(puVar12 + 0x124) = 0xffffffffffffffff;
  *(undefined4 *)(puVar12 + 0x28) = 0xffffffff;
  *(undefined4 *)(puVar12 + 300) = 0xffffffff;
  plVar17 = *(long **)(puVar12 + 0x50);
  while (plVar17 != (long *)(puVar12 + 0x48)) {
    plVar20 = (long *)plVar17[1];
    plVar21 = plVar20;
    if (*plVar17 != 0) {
      *(long **)(*plVar17 + 8) = plVar20;
      plVar21 = (long *)plVar17[1];
    }
    if (plVar21 != (long *)0x0) {
      *plVar21 = *plVar17;
    }
    *plVar17 = 0;
    plVar17[1] = 0;
    *(int *)(puVar12 + 0x58) = *(int *)(puVar12 + 0x58) + -1;
    plVar17[-1] = *(long *)(puVar12 + 0x60);
    *(long **)(puVar12 + 0x60) = plVar17 + -1;
    plVar17 = plVar20;
  }
  *(undefined4 *)(puVar12 + 0x40) = 0xffffffff;
  *puVar12 = 1;
  bVar10 = (param_4 & 1) == 0;
  puVar2 = puVar12 + 0x160;
  if (bVar10) {
    puVar2 = puVar12 + 0x130;
  }
  iVar3 = *param_2;
  lVar19 = 0x160;
  if (bVar10) {
    lVar19 = 0x130;
  }
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(int *)(puVar2 + 8) = iVar3;
  *(undefined2 *)(puVar2 + 1) = 0x101;
  puVar12[lVar19] = puVar12[lVar19] | 1;
  *(undefined4 *)(puVar2 + 4) = param_3;
  if (*(int *)(param_1 + 0x168) < *(int *)(param_1 + 0x180)) {
    puVar18 = *(undefined8 **)(param_1 + 0x170);
    if (puVar18 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = *puVar18;
    }
    *puVar18 = puVar11;
    puVar18[2] = 0;
    plVar17 = puVar18 + 1;
    *plVar17 = 0;
    lVar19 = *plVar1;
    *plVar1 = (long)plVar17;
    puVar18[2] = plVar1;
    *plVar17 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar17;
    }
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  }
  return;
}

