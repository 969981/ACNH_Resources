
void FUN_0399cb50(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  long *local_d8;
  uint local_bc;
  undefined1 auStack_a0 [64];
  
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = param_1 + 0x50;
  plVar9 = param_3;
  if (param_3 == (long *)0x0) {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar9 = (long *)(lVar13 + 8);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
  }
  plVar11 = (long *)(param_1 + 0x58);
  *plVar11 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfe;
  if (param_2 != 0) {
    FUN_038f8590(DAT_05ae78d0,uVar2,plVar9,
                 -(ulong)(param_2 * 3 >> 0x1f) & 0xfffffff000000000 | (ulong)(param_2 * 3) << 4,0x10
                 ,0x10);
  }
  puVar5 = PTR_DAT_04bbd7c0;
  *(undefined2 *)(param_1 + 0x7a) = 0x10;
  (*DAT_04c62088)(auStack_a0,*(undefined8 *)(*(long *)puVar5 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_a0);
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar11 - *(long *)(*(long *)(param_1 + 0x70) + 0x10);
  }
  (**(code **)PTR_DAT_04bbd7c8)
            (auStack_a0,*(undefined8 *)(param_1 + 0x68),lVar6,*(undefined8 *)(param_1 + 0x60));
  lVar6 = param_1 + 0x88;
  (**(code **)PTR_DAT_04bbd7d0)(lVar6,auStack_a0);
  uVar16 = (ulong)param_2;
  uVar18 = uVar16 << 5 | 8;
  __n = (ulong)param_2 << 5;
  if ((int)param_2 < 1) {
LAB_0399cd58:
    local_bc = *(uint *)(param_1 + 8);
    if (local_bc != 0) {
      puVar15 = *(ulong **)(param_1 + 0x10);
      goto LAB_0399cd68;
    }
    uVar17 = 0;
  }
  else {
    lVar13 = *(long *)puVar4;
    if (lVar13 == 0) {
      puVar8 = malloc(uVar18);
    }
    else {
      plVar9 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar13 + 8);
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0399cd58;
      }
      puVar8 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar18,8);
    }
    if (puVar8 == (ulong *)0x0) goto LAB_0399cd58;
    puVar15 = puVar8 + 1;
    *puVar8 = uVar16;
    memset(puVar15,0,__n);
    *(ulong **)(param_1 + 0x10) = puVar15;
    *(uint *)(param_1 + 8) = param_2;
    local_bc = param_2;
LAB_0399cd68:
    uVar17 = 0;
    lVar13 = 0;
    uVar14 = 0;
    do {
      iVar10 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        iVar10 = *(int *)plVar11 - *(int *)(*(long *)(param_1 + 0x70) + 0x10);
      }
      uVar20 = *(ulong *)(param_1 + 0x68);
      if (uVar20 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined4 *)(uVar20 + 0x104);
      }
      iVar12 = (int)lVar13;
      lVar7 = (*DAT_04c620e0)(lVar6);
      uVar1 = uVar14 + 1;
      lVar7 = lVar7 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(int *)(puVar15 + (long)(int)uVar14 * 4 + 1) = iVar12 + iVar10;
      *(undefined4 *)((long)puVar15 + (long)(int)uVar14 * 0x20 + 0xc) = uVar19;
      uVar17 = (ulong)((int)uVar17 + 1);
      *(long *)((long)puVar15 + ((long)((ulong)uVar14 << 0x20) >> 0x1b)) = lVar7;
      puVar15[(long)(int)uVar14 * 4 + 2] = uVar20;
      puVar15[(long)(int)uVar14 * 4 + 3] = uVar2;
      uVar14 = uVar1;
    } while (local_bc != uVar1);
  }
  lVar13 = DAT_05ae7600;
  if ((int)param_2 < 1) {
LAB_0399ceb0:
    local_bc = *(uint *)(param_1 + 0x20);
    if (local_bc != 0) {
      puVar15 = *(ulong **)(param_1 + 0x28);
      goto LAB_0399cec0;
    }
  }
  else {
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(uVar18);
    }
    else {
      plVar9 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar13 + 8);
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0399ceb0;
      }
      puVar8 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar18,8);
    }
    if (puVar8 == (ulong *)0x0) goto LAB_0399ceb0;
    puVar15 = puVar8 + 1;
    *puVar8 = uVar16;
    memset(puVar15,0,__n);
    *(ulong **)(param_1 + 0x28) = puVar15;
    *(uint *)(param_1 + 0x20) = param_2;
    local_bc = param_2;
LAB_0399cec0:
    uVar20 = -(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4;
    uVar14 = 0;
    do {
      iVar10 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        iVar10 = *(int *)plVar11 - *(int *)(*(long *)(param_1 + 0x70) + 0x10);
      }
      uVar21 = *(ulong *)(param_1 + 0x68);
      if (uVar21 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined4 *)(uVar21 + 0x104);
      }
      iVar12 = (int)uVar20;
      lVar13 = (*DAT_04c620e0)(lVar6);
      uVar1 = uVar14 + 1;
      lVar13 = lVar13 + uVar20;
      uVar20 = uVar20 + 0x10;
      *(int *)(puVar15 + (long)(int)uVar14 * 4 + 1) = iVar10 + iVar12;
      *(undefined4 *)((long)puVar15 + (long)(int)uVar14 * 0x20 + 0xc) = uVar19;
      uVar17 = (ulong)((int)uVar17 + 1);
      *(long *)((long)puVar15 + ((long)((ulong)uVar14 << 0x20) >> 0x1b)) = lVar13;
      puVar15[(long)(int)uVar14 * 4 + 2] = uVar21;
      puVar15[(long)(int)uVar14 * 4 + 3] = uVar2;
      uVar14 = uVar1;
    } while (local_bc != uVar1);
  }
  lVar13 = DAT_05ae7600;
  if (0 < (int)param_2) {
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(uVar18);
    }
    else {
      local_d8 = param_3;
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar3 = (undefined8 *)(lVar13 + 8);
        if (lVar7 != 0) {
          puVar3 = (undefined8 *)(lVar7 + 0xa8);
        }
        local_d8 = (long *)*puVar3;
        if (local_d8 == (long *)0x0) goto LAB_0399cff4;
      }
      puVar8 = (ulong *)(**(code **)(*local_d8 + 0x30))(local_d8,uVar18,8);
    }
    if (puVar8 != (ulong *)0x0) {
      puVar15 = puVar8 + 1;
      *puVar8 = uVar16;
      memset(puVar15,0,__n);
      *(uint *)(param_1 + 0x38) = param_2;
      *(ulong **)(param_1 + 0x40) = puVar15;
      goto LAB_0399d000;
    }
  }
LAB_0399cff4:
  param_2 = *(uint *)(param_1 + 0x38);
  if (param_2 == 0) {
    return;
  }
  puVar15 = *(ulong **)(param_1 + 0x40);
LAB_0399d000:
  uVar18 = -(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4;
  uVar14 = 0;
  do {
    iVar10 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      iVar10 = *(int *)plVar11 - *(int *)(*(long *)(param_1 + 0x70) + 0x10);
    }
    uVar16 = *(ulong *)(param_1 + 0x68);
    if (uVar16 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)(uVar16 + 0x104);
    }
    iVar12 = (int)uVar18;
    lVar13 = (*DAT_04c620e0)(lVar6);
    uVar1 = uVar14 + 1;
    lVar13 = lVar13 + uVar18;
    uVar18 = uVar18 + 0x10;
    *(int *)(puVar15 + (long)(int)uVar14 * 4 + 1) = iVar10 + iVar12;
    *(undefined4 *)((long)puVar15 + (long)(int)uVar14 * 0x20 + 0xc) = uVar19;
    *(long *)((long)puVar15 + ((long)((ulong)uVar14 << 0x20) >> 0x1b)) = lVar13;
    puVar15[(long)(int)uVar14 * 4 + 2] = uVar16;
    puVar15[(long)(int)uVar14 * 4 + 3] = uVar2;
    uVar14 = uVar1;
  } while (param_2 != uVar1);
  return;
}

