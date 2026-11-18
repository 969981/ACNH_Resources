
/* WARNING: Removing unreachable block (ram,0x032fad54) */
/* WARNING: Removing unreachable block (ram,0x032fab8c) */
/* WARNING: Removing unreachable block (ram,0x032fa938) */
/* WARNING: Removing unreachable block (ram,0x032fa850) */
/* WARNING: Removing unreachable block (ram,0x032fa7f0) */
/* WARNING: Removing unreachable block (ram,0x032fa81c) */
/* WARNING: Removing unreachable block (ram,0x032fa884) */
/* WARNING: Removing unreachable block (ram,0x032fa9d4) */
/* WARNING: Removing unreachable block (ram,0x032fad28) */
/* WARNING: Removing unreachable block (ram,0x032fad8c) */
/* WARNING: Removing unreachable block (ram,0x032fadbc) */
/* WARNING: Removing unreachable block (ram,0x032fa8d4) */
/* WARNING: Removing unreachable block (ram,0x032fa8f4) */
/* WARNING: Removing unreachable block (ram,0x032faddc) */

void FUN_032fa7a0(ulong *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong *local_88;
  ulong uStack_80;
  undefined4 local_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "KeyboardManager Fixed Heap";
  local_88 = (ulong *)0x0;
  uStack_80 = 0;
  if (*param_2 != 0) {
    local_88 = (ulong *)FUN_038c6d48(0,&local_70,*param_2,8,1,1);
  }
  *param_1 = (ulong)local_88;
  param_1[1] = uStack_80;
  puVar4 = PTR_DAT_04bc96f8;
  local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
  puVar6 = *(undefined8 **)PTR_DAT_04bc96f8;
  if (puVar6 == (undefined8 *)0x0) {
    plVar13 = (long *)*param_1;
    puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x20,8);
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined8 **)puVar4 = puVar6;
    DAT_057312d8 = plVar13;
  }
  FUN_03344aac(puVar6,param_1);
  uVar8 = (ulong)local_88 >> 0x20;
  local_88 = (ulong *)(uVar8 << 0x20);
  if (*param_1 == 0) {
    pvVar7 = (void *)0x0;
  }
  else {
    local_88 = (ulong *)(uVar8 << 0x20);
    pvVar7 = (void *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x3ea,0x1000);
  }
  param_1[0x8f] = (ulong)pvVar7;
  memset(pvVar7,0,0x3ea);
  local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
  uVar8 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x16970,8);
  FUN_032fccc0(uVar8,param_1);
  pvVar7 = (void *)param_1[4];
  param_1[4] = uVar8;
  if (pvVar7 != (void *)0x0) {
    FUN_032fd2c8(pvVar7);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar13 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13,pvVar7);
      }
    }
    uVar8 = param_1[4];
  }
  *(ulong *)(uVar8 + 0x17f0) = param_1[0x91];
  FUN_032fdaa0(param_1[4],param_1);
  puVar4 = PTR_DAT_04bc8ed0;
  local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
  puVar6 = *(undefined8 **)PTR_DAT_04bc8ed0;
  if (puVar6 == (undefined8 *)0x0) {
    plVar13 = (long *)*param_1;
    puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x1c0,8);
    memset(puVar6 + 1,0,0x1b8);
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar1 = puVar6 + 0x25;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x16] = PTR_DAT_04bc8ec8 + 0x10;
    *(undefined2 *)((long)puVar6 + 0x114) = 0x101;
    *(undefined1 *)((long)puVar6 + 0x117) = 1;
    *puVar6 = &PTR_FUN_04b1d7e0;
    *(undefined4 *)(puVar6 + 0x22) = 0;
    puVar6[0x2d] = puVar1;
    puVar6[0x2e] = puVar3 + 0x10;
    puVar6[0x2f] = &DAT_0407ebb1;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar2 = PTR_DAT_04bd0d40 + 0x10;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x25] = puVar2;
    puVar6[0x26] = 0;
    lVar9 = DAT_05ae7600;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    if (lVar9 != 0) {
      lVar9 = FUN_038cb610(lVar9,puVar1);
      puVar6[0x26] = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar12 = (long *)(lVar9 + 0x70);
        lVar10 = *plVar12;
        plVar14 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)puVar1);
        *plVar12 = (long)plVar14;
        *plVar14 = lVar10;
        plVar14[1] = (long)plVar12;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar14;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar15 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
        }
      }
    }
    puVar6[0x25] = &PTR_LAB_048f9e38;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x34] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    *(undefined4 *)((long)puVar6 + 0x1ac) = 0;
    *(undefined8 **)puVar4 = puVar6;
    puVar6[0x30] = &PTR_LAB_048f9e68;
    puVar6[0x31] = 0;
    DAT_057312e0 = plVar13;
  }
  local_78 = 900;
  uStack_80 = 0;
  local_88 = param_1;
  FUN_032a7750(puVar6,&local_88);
  puVar4 = PTR_DAT_04bc9190;
  local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
  puVar6 = *(undefined8 **)PTR_DAT_04bc9190;
  if (puVar6 == (undefined8 *)0x0) {
    plVar14 = (long *)*param_1;
    puVar6 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0xa0,8);
    *puVar6 = 0;
    plVar13 = puVar6 + 1;
    *plVar13 = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0x13] = 0;
    plVar12 = puVar6 + 2;
    *plVar12 = 0;
    puVar6[9] = plVar13;
    puVar6[10] = puVar3 + 0x10;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = &DAT_0407ebb1;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *plVar13 = (long)(PTR_DAT_04bd0d40 + 0x10);
    *plVar12 = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    puVar6[3] = 0;
    puVar6[4] = 0;
    if (lVar9 != 0) {
      lVar9 = FUN_038cb610(lVar9,plVar13);
      *plVar12 = lVar9;
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = lVar9 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
        }
        plVar12 = (long *)(lVar9 + 0x70);
        lVar10 = *plVar12;
        plVar13 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar13);
        *plVar12 = (long)plVar13;
        *plVar13 = lVar10;
        plVar13[1] = (long)plVar12;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar13;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        if (lVar15 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
        }
      }
    }
    puVar6[1] = &PTR_LAB_048f9e38;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)((long)puVar6 + 0x8c) = 0;
    *(undefined8 **)puVar4 = puVar6;
    puVar6[0xc] = &PTR_LAB_048f9e68;
    puVar6[0xd] = 0;
    DAT_057312e8 = plVar14;
  }
  FUN_0329c020(puVar6,param_1);
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x28))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x28))();
  }
  local_70 = puVar3 + 0x10;
  pcStack_68 = "KeyboardManager Heap";
  local_88 = (ulong *)0x0;
  uStack_80 = 0;
  if (*param_2 != 0) {
    local_88 = (ulong *)FUN_038c6d48(0xc8000,&local_70,*param_2,8,1,1);
  }
  puVar5 = local_88;
  uVar8 = (ulong)local_88 >> 0x20;
  local_88 = (ulong *)(uVar8 << 0x20);
  puVar11 = param_1 + 2;
  *puVar11 = (ulong)puVar5;
  param_1[3] = uStack_80;
  if (*puVar11 == 0) {
    pvVar7 = (void *)0x0;
  }
  else {
    local_88 = (ulong *)(uVar8 << 0x20);
    pvVar7 = (void *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x3ea,0x1000);
  }
  param_1[0x14d] = (ulong)pvVar7;
  memset(pvVar7,0,0x3ea);
  *(undefined4 *)((long)param_1 + 0xbdc) = 0;
  return;
}

