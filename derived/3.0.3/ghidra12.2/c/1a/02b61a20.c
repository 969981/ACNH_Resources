
undefined8 FUN_02b61a20(uint param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_68 = (undefined *)CONCAT44(local_68._4_4_,param_1);
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 == 0) {
    return 0;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar7 == 0) {
      return 0;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return 0;
    }
    lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar7 == 0) {
      return 0;
    }
  }
  puVar5 = PTR_DAT_04bc4628;
  puVar4 = PTR_DAT_04bc4620;
  puVar3 = PTR_DAT_04bb5008;
  if (9 < (uint)local_68) {
    return 0;
  }
  lVar2 = lVar7 + 0x1962d8 + ((ulong)local_68 & 0xffffffff) * 0x10d8;
  if (9 < (uint)local_68) {
    lVar2 = lVar7 + 0x1962d8;
  }
  lVar7 = *(long *)PTR_DAT_04bb5008;
  lVar10 = 6 - (ulong)*(ushort *)(lVar7 + 0x7f0);
  if (((*(uint *)(lVar7 + 2000) <= (uint)lVar10) ||
      (puVar9 = *(uint **)(*(long *)(lVar7 + 0x7d8) + lVar10 * 8), puVar9 == (uint *)0x0)) ||
     (uVar14 = *puVar9, uVar14 == 0)) {
    uVar18 = 0;
    uVar17 = 0;
    goto LAB_02b61bfc;
  }
  cVar12 = *PTR_DAT_04bc4620;
  do {
    if (cVar12 != '\0') {
      uVar13 = *(uint *)(puVar5 + 0x10);
      if ((int)uVar13 < 0) {
        if (uVar13 == 0xffffffff) goto LAB_02b61b74;
      }
      else if ((undefined2 *)((ulong)uVar13 + (long)puVar9) != (undefined2 *)0x0) {
        uVar17 = *(undefined2 *)((ulong)uVar13 + (long)puVar9);
        goto LAB_02b61d24;
      }
      goto LAB_02b61d20;
    }
    cVar12 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    uVar14 = *puVar9;
LAB_02b61b74:
    puVar15 = (uint *)(ulong)uVar14;
    uVar17 = 0;
    if ((puVar15 == (uint *)0x0) || (puVar9 == puVar15)) {
LAB_02b61d24:
      uVar14 = *puVar9;
      if (uVar14 == 0) goto LAB_02b61db4;
      uVar13 = *(uint *)(puVar5 + 0xc);
      goto LAB_02b61d44;
    }
    lVar7 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar9 + (lVar7 - (long)puVar15);
    if (lVar7 == 0) {
LAB_02b61d20:
      uVar17 = 0;
      goto LAB_02b61d24;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
    *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_02b61d20;
    piVar16 = (int *)(lVar7 + 4);
    while (piVar16[-1] != -0x278d8283) {
      piVar16 = piVar16 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02b61d20;
    }
    uVar18 = 0;
    uVar17 = 0;
    uVar19 = 0;
    iVar1 = 0;
    if (*piVar16 != -1) {
      iVar1 = *piVar16;
    }
    *(int *)(puVar5 + 0x10) = iVar1;
    uVar14 = *puVar9;
  } while (uVar14 != 0);
  goto LAB_02b61c00;
LAB_02b61df0:
  if (-1 < (int)uVar14) {
    if ((undefined2 *)((long)puVar9 + (ulong)uVar14) != (undefined2 *)0x0) {
      uVar19 = *(undefined2 *)((long)puVar9 + (ulong)uVar14);
      goto LAB_02b61c00;
    }
    goto LAB_02b61bfc;
  }
  if ((uVar14 != 0xffffffff) || (lVar7 = (long)puVar9 - uVar11, lVar7 == 0)) goto LAB_02b61bfc;
  lVar10 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar10 = 0x1c;
  }
  if (lVar10 + lVar7 == 0) goto LAB_02b61bfc;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_02b61bfc;
  puVar15 = (uint *)(lVar10 + lVar7 + 4);
  while (puVar15[-1] != 0xc86e60d5) {
    puVar15 = puVar15 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_02b61bfc;
  }
  uVar14 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar14 = *puVar15;
  }
  *(uint *)(puVar5 + 8) = uVar14;
  uVar11 = (ulong)*puVar9;
  if (*puVar9 == 0) goto LAB_02b61bfc;
  goto LAB_02b61df0;
LAB_02b61d44:
  do {
    uVar11 = (ulong)uVar14;
    if (-1 < (int)uVar13) {
      if ((undefined2 *)((long)puVar9 + (ulong)uVar13) == (undefined2 *)0x0) goto LAB_02b61dcc;
      uVar18 = *(undefined2 *)((long)puVar9 + (ulong)uVar13);
LAB_02b61dd8:
      uVar14 = *(uint *)(puVar5 + 8);
      goto LAB_02b61df0;
    }
    if ((uVar13 != 0xffffffff) || (lVar7 = (long)puVar9 - uVar11, lVar7 == 0)) {
LAB_02b61dcc:
      uVar11 = (ulong)*puVar9;
      uVar18 = 0;
      if (*puVar9 != 0) goto LAB_02b61dd8;
      uVar19 = 0;
      goto LAB_02b61c00;
    }
    lVar10 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    if (lVar10 + lVar7 == 0) goto LAB_02b61dcc;
    uVar11 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_02b61dcc;
    puVar15 = (uint *)(lVar10 + lVar7 + 4);
    while (puVar15[-1] != 0x966fbe3) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02b61dcc;
    }
    uVar13 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar13 = *puVar15;
    }
    *(uint *)(puVar5 + 0xc) = uVar13;
    uVar14 = *puVar9;
  } while (uVar14 != 0);
LAB_02b61db4:
  uVar18 = 0;
LAB_02b61bfc:
  uVar19 = 0;
LAB_02b61c00:
  lVar7 = *(long *)(lVar2 + 0x28);
  if (lVar7 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      lVar7 = *(long *)(lVar2 + 0x28);
      uVar11 = uVar11 & 0xffffffff;
      if (lVar7 == 0) goto LAB_02b61c60;
    }
    plVar6 = *(long **)(lVar7 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_68 = *(undefined **)(lVar2 + 8);
      local_60 = *(undefined8 *)(lVar2 + 0x10);
      local_58 = 0x12e8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
    }
  }
LAB_02b61c60:
  puVar8 = (undefined8 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
  *(undefined2 *)(puVar8 + 1) = uVar17;
  *(undefined2 *)((long)puVar8 + 10) = uVar18;
  *(undefined2 *)((long)puVar8 + 0xc) = uVar19;
  *puVar8 = 0x100000002;
  local_68 = PTR_DAT_04bc43f8 + 0x10;
  uVar14 = param_1;
  if (9 < param_1) {
    uVar14 = 0;
  }
  local_60 = CONCAT44(local_60._4_4_,(&DAT_05636e30)[(int)uVar14]);
  FUN_02b3cb40(*(long *)puVar3 + 0x26e8,&local_68,0x6622bd46);
  FUN_02b3acc0(*(long *)puVar3 + 0x26e8,param_1,0x6622bd46);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return 1;
}

