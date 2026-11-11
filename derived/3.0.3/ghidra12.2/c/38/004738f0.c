
undefined8 FUN_004738f0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  
  puVar4 = PTR_DAT_04bd4d10;
  iVar2 = *(int *)(param_2 + 0x18);
  lVar5 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar11 = DAT_04c6f058;
  if (lVar5 != 0) {
    lVar11 = lVar5;
  }
  uVar15 = (ulong)(int)(iVar2 * 8 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar11 + 0x10) < uVar15) {
LAB_00473964:
    plVar6 = (long *)FUN_00439510(lVar11,uVar15);
  }
  else {
    plVar6 = *(long **)(lVar11 + 0x18);
    if (*(ulong *)(lVar11 + 0x20) < (long)plVar6 + uVar15) goto LAB_00473964;
    *(ulong *)(lVar11 + 0x18) = (long)plVar6 + uVar15;
  }
  plVar7 = *(long **)(param_2 + 0x10);
  uVar16 = 0;
  plVar9 = (long *)((long)plVar7 + param_1[1] * *(long *)(param_2 + 0x18));
  if ((long *)*param_1 != (long *)0x0) {
    plVar13 = (long *)*param_1;
    plVar12 = param_1;
    do {
      while ((plVar10 = plVar13, plVar10 < plVar7 || (plVar9 <= plVar10))) {
        plVar13 = (long *)*plVar10;
        plVar12 = plVar10;
        if ((long *)*plVar10 == (long *)0x0) goto LAB_004739c8;
      }
      plVar6[(int)uVar16] = (long)plVar10;
      uVar16 = uVar16 + 1;
      *plVar12 = *plVar10;
      plVar13 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
LAB_004739c8:
  plVar13 = (long *)param_1[8];
  if ((plVar13 < plVar7) || (plVar9 <= plVar13)) {
    if (uVar16 == *(uint *)(param_2 + 0x18)) {
      uVar17 = 1;
      goto LAB_00473ae4;
    }
  }
  else {
    iVar2 = 0;
    if (param_1[1] != 0) {
      iVar2 = (int)((ulong)(param_1[9] - (long)plVar13) / (ulong)param_1[1]);
    }
    if (uVar16 + iVar2 == *(int *)(param_2 + 0x18)) {
      uVar17 = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      goto LAB_00473ae4;
    }
  }
  uVar3 = uVar16 - 1;
  if ((int)uVar16 < 1) {
    uVar17 = 0;
  }
  else {
    if (uVar3 != 0) {
      FUN_00474a90(plVar6,0,uVar3,&LAB_00473b50);
      plVar7 = (long *)*plVar6;
      uVar1 = uVar3 & 3;
      if ((ulong)uVar16 - 2 < 3) {
        lVar11 = 1;
      }
      else {
        plVar9 = plVar6 + 2;
        lVar11 = 1;
        do {
          puVar14 = (undefined8 *)plVar9[-1];
          *plVar7 = (long)puVar14;
          puVar8 = (undefined8 *)*plVar9;
          *puVar14 = puVar8;
          plVar13 = (long *)plVar9[1];
          *puVar8 = plVar13;
          plVar7 = (long *)plVar9[2];
          lVar11 = lVar11 + 4;
          plVar9 = plVar9 + 4;
          *plVar13 = (long)plVar7;
        } while ((ulong)uVar16 - (ulong)uVar1 != lVar11);
      }
      if (uVar1 != 0) {
        lVar5 = -(ulong)uVar1;
        plVar9 = plVar6 + lVar11;
        do {
          plVar13 = (long *)*plVar9;
          *plVar7 = (long)plVar13;
          lVar5 = lVar5 + 1;
          plVar7 = plVar13;
          plVar9 = plVar9 + 1;
        } while (lVar5 != 0);
      }
    }
    *(long *)plVar6[(int)uVar3] = *param_1;
    uVar17 = 0;
    *param_1 = *plVar6;
  }
LAB_00473ae4:
  lVar5 = FUN_0043c4e0(*(undefined2 *)puVar4);
  lVar11 = DAT_04c6f058;
  if (lVar5 != 0) {
    lVar11 = lVar5;
  }
  if (((*(ulong *)(lVar11 + 0x10) < uVar15) || (*(long *)(lVar11 + 0x18) != (long)plVar6 + uVar15))
     || (*(long **)(lVar11 + 0x28) == plVar6)) {
    FUN_00439980(lVar11,plVar6,uVar15);
  }
  else {
    *(long **)(lVar11 + 0x18) = plVar6;
  }
  return uVar17;
}

