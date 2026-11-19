
void FUN_03a20840(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  void *pvVar16;
  long *__ptr;
  undefined *puVar17;
  
  *param_1 = (long)&PTR_FUN_04b6d280;
  if (param_1[0x200] != 0) {
    FUN_0039c3f8();
    FUN_038fe020();
  }
  param_1[0x200] = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  if (param_1[0x26c] != 0) {
    FUN_0039c3f8();
    FUN_038fe020();
  }
  iVar10 = *(int *)((long)param_1 + 0xddc);
  puVar2 = (uint *)(param_1 + 0x1bb);
  param_1[0x26c] = 0;
  *(undefined1 *)(param_1 + 0x294) = 0;
  if (0 < iVar10) {
    uVar15 = 0;
    do {
      if ((uVar15 < *puVar2) &&
         (plVar9 = *(long **)(param_1[0x1bc] + uVar15 * 8), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 8))();
        iVar10 = *(int *)((long)param_1 + 0xddc);
      }
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)iVar10);
  }
  puVar7 = PTR_DAT_04bb2698;
  pvVar16 = (void *)param_1[0x1bc];
  if (pvVar16 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar16);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar16);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar16);
      }
    }
    puVar2[0] = 0;
    puVar2[1] = 0;
    param_1[0x1bc] = 0;
  }
  pvVar16 = (void *)param_1[0x171];
  if (pvVar16 != (void *)0x0) {
    if (*(long *)puVar7 == 0) {
      free(pvVar16);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar7,pvVar16);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar16);
      }
    }
    param_1[0x171] = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  pvVar16 = (void *)param_1[0x174];
  if (pvVar16 != (void *)0x0) {
    if (*(long *)puVar7 == 0) {
      free(pvVar16);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar7,pvVar16);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar16);
      }
    }
    param_1[0x173] = 0;
    param_1[0x174] = 0;
  }
  puVar3 = PTR_DAT_04bd1070;
  plVar9 = (long *)param_1[0x16d];
  if (plVar9 != (long *)0x0) {
    __ptr = plVar9 + -1;
    lVar11 = *__ptr;
    if (lVar11 != 0) {
      plVar12 = plVar9 + lVar11 * 9;
      uVar13 = lVar11 * 0x48 - 0x48;
      uVar1 = ((uint)(uVar13 / 0x48) & 0x3ffffff) + 1;
      uVar15 = (ulong)uVar1 & 7;
      if ((uVar1 & 7) != 0) {
        uVar15 = uVar15 << 3 | uVar15 << 6;
        puVar17 = PTR_DAT_04bd1070 + 0x10;
        do {
          uVar15 = uVar15 - 0x48;
          plVar12 = plVar12 + -9;
          *plVar12 = (long)puVar17;
        } while (uVar15 != 0);
      }
      if (0x1f7 < uVar13) {
        puVar3 = puVar3 + 0x10;
        do {
          plVar12[-9] = (long)puVar3;
          plVar12[-0x12] = (long)puVar3;
          plVar12[-0x24] = (long)puVar3;
          plVar12[-0x1b] = (long)puVar3;
          plVar12[-0x2d] = (long)puVar3;
          plVar12[-0x36] = (long)puVar3;
          plVar14 = plVar12 + -0x3f;
          plVar12 = plVar12 + -0x48;
          *plVar14 = (long)puVar3;
          *plVar12 = (long)puVar3;
        } while (plVar12 != plVar9);
      }
    }
    if (*(long *)puVar7 == 0) {
      free(__ptr);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar7,__ptr);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,__ptr);
      }
    }
    param_1[0x16d] = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  FUN_038f4ad0();
  FUN_038f4ad0();
  FUN_038f4ad0();
  FUN_038f4ad0();
  FUN_038f4ad0(param_1 + 0x49d);
  FUN_038f4ad0(param_1 + 0x4c8);
  FUN_038f4ad0(param_1 + 0x4db);
  FUN_038f4ad0(param_1 + 0x506);
  puVar17 = PTR_DAT_04bd1170;
  puVar7 = PTR_DAT_04bc1010;
  param_1[0x50d] = (long)(PTR_DAT_04bd1170 + 0x10);
  puVar3 = PTR_DAT_04bc8e38;
  if (param_1[0x510] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x513);
    piVar4 = (int *)(lVar11 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x50f) = 0;
    param_1[0x512] = 0;
    param_1[0x510] = 0;
    param_1[0x511] = 0;
    puVar17 = PTR_DAT_04bd1170;
  }
  param_1[0x506] = (long)(PTR_DAT_04bbd550 + 0x10);
  FUN_038f4940(param_1 + 0x506);
  param_1[0x4e2] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x502] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x4e3);
    piVar4 = (int *)(lVar11 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0x4ea) = 0;
    *(undefined1 *)((long)param_1 + 0x275c) = 0;
    *(undefined1 *)(param_1 + 0x4ed) = 0;
    *(undefined1 *)((long)param_1 + 0x2774) = 0;
    *(undefined1 *)(param_1 + 0x4f0) = 0;
    *(undefined1 *)((long)param_1 + 0x278c) = 0;
    *(undefined1 *)(param_1 + 0x4f3) = 0;
    *(undefined1 *)((long)param_1 + 0x27a4) = 0;
    *(undefined1 *)(param_1 + 0x4f6) = 0;
    *(undefined1 *)((long)param_1 + 0x27bc) = 0;
    *(undefined1 *)(param_1 + 0x4f9) = 0;
    *(undefined1 *)((long)param_1 + 0x27d4) = 0;
    *(undefined1 *)(param_1 + 0x4fc) = 0;
    *(undefined1 *)((long)param_1 + 0x27ec) = 0;
    *(undefined1 *)(param_1 + 0x4ff) = 0;
    *(undefined1 *)((long)param_1 + 0x2804) = 0;
    *(undefined4 *)(param_1 + 0x501) = 0;
    param_1[0x504] = 0;
    *(undefined4 *)(param_1 + 0x505) = 0;
    param_1[0x502] = 0;
    param_1[0x503] = 0;
  }
  param_1[0x4db] = (long)&PTR_LAB_04b6d338;
  FUN_038f4940(param_1 + 0x4db);
  param_1[0x4cf] = (long)(puVar17 + 0x10);
  puVar8 = PTR_DAT_04bbd550;
  if (param_1[0x4d2] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x4d5);
    piVar4 = (int *)(lVar11 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x4d1) = 0;
    param_1[0x4d4] = 0;
    param_1[0x4d2] = 0;
    param_1[0x4d3] = 0;
    puVar17 = PTR_DAT_04bd1170;
  }
  param_1[0x4c8] = (long)(puVar8 + 0x10);
  FUN_038f4940(param_1 + 0x4c8);
  param_1[0x4a4] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x4c4] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x4a5);
    piVar4 = (int *)(lVar11 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0x4ac) = 0;
    *(undefined1 *)((long)param_1 + 0x256c) = 0;
    *(undefined1 *)(param_1 + 0x4af) = 0;
    *(undefined1 *)((long)param_1 + 0x2584) = 0;
    *(undefined1 *)(param_1 + 0x4b2) = 0;
    *(undefined1 *)((long)param_1 + 0x259c) = 0;
    *(undefined1 *)(param_1 + 0x4b5) = 0;
    *(undefined1 *)((long)param_1 + 0x25b4) = 0;
    *(undefined1 *)(param_1 + 0x4b8) = 0;
    *(undefined1 *)((long)param_1 + 0x25cc) = 0;
    *(undefined1 *)(param_1 + 0x4bb) = 0;
    *(undefined1 *)((long)param_1 + 0x25e4) = 0;
    *(undefined1 *)(param_1 + 0x4be) = 0;
    *(undefined1 *)((long)param_1 + 0x25fc) = 0;
    *(undefined1 *)(param_1 + 0x4c1) = 0;
    *(undefined1 *)((long)param_1 + 0x2614) = 0;
    *(undefined4 *)(param_1 + 0x4c3) = 0;
    param_1[0x4c6] = 0;
    *(undefined4 *)(param_1 + 0x4c7) = 0;
    param_1[0x4c4] = 0;
    param_1[0x4c5] = 0;
  }
  param_1[0x49d] = (long)&PTR_LAB_04b6d338;
  FUN_038f4940(param_1 + 0x49d);
  param_1[0x491] = (long)(puVar17 + 0x10);
  if (param_1[0x494] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x497);
    piVar4 = (int *)(lVar11 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x493) = 0;
    param_1[0x496] = 0;
    param_1[0x494] = 0;
    param_1[0x495] = 0;
    puVar17 = PTR_DAT_04bd1170;
  }
  param_1[0x48a] = (long)(puVar8 + 0x10);
  FUN_038f4940(param_1 + 0x48a);
  param_1[0x466] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x486] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x467);
    piVar4 = (int *)(lVar11 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0x46e) = 0;
    *(undefined1 *)((long)param_1 + 0x237c) = 0;
    *(undefined1 *)(param_1 + 0x471) = 0;
    *(undefined1 *)((long)param_1 + 0x2394) = 0;
    *(undefined1 *)(param_1 + 0x474) = 0;
    *(undefined1 *)((long)param_1 + 0x23ac) = 0;
    *(undefined1 *)(param_1 + 0x477) = 0;
    *(undefined1 *)((long)param_1 + 0x23c4) = 0;
    *(undefined1 *)(param_1 + 0x47a) = 0;
    *(undefined1 *)((long)param_1 + 0x23dc) = 0;
    *(undefined1 *)(param_1 + 0x47d) = 0;
    *(undefined1 *)((long)param_1 + 0x23f4) = 0;
    *(undefined1 *)(param_1 + 0x480) = 0;
    *(undefined1 *)((long)param_1 + 0x240c) = 0;
    *(undefined1 *)(param_1 + 0x483) = 0;
    *(undefined1 *)((long)param_1 + 0x2424) = 0;
    *(undefined4 *)(param_1 + 0x485) = 0;
    param_1[0x488] = 0;
    *(undefined4 *)(param_1 + 0x489) = 0;
    param_1[0x486] = 0;
    param_1[0x487] = 0;
  }
  param_1[0x45f] = (long)&PTR_LAB_04b6d338;
  FUN_038f4940(param_1 + 0x45f);
  param_1[0x453] = (long)(puVar17 + 0x10);
  puVar17 = PTR_DAT_04bd1070;
  if (param_1[0x456] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x459);
    piVar4 = (int *)(lVar11 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x455) = 0;
    param_1[0x458] = 0;
    param_1[0x456] = 0;
    param_1[0x457] = 0;
  }
  param_1[0x44c] = (long)(puVar8 + 0x10);
  FUN_038f4940(param_1 + 0x44c);
  param_1[0x428] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x448] != 0) {
    lVar11 = *(long *)puVar7;
    (**(code **)puVar3)(param_1 + 0x429);
    piVar4 = (int *)(lVar11 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = *piVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0x430) = 0;
    *(undefined1 *)((long)param_1 + 0x218c) = 0;
    *(undefined1 *)(param_1 + 0x433) = 0;
    *(undefined1 *)((long)param_1 + 0x21a4) = 0;
    *(undefined1 *)(param_1 + 0x436) = 0;
    *(undefined1 *)((long)param_1 + 0x21bc) = 0;
    *(undefined1 *)(param_1 + 0x439) = 0;
    *(undefined1 *)((long)param_1 + 0x21d4) = 0;
    *(undefined1 *)(param_1 + 0x43c) = 0;
    *(undefined1 *)((long)param_1 + 0x21ec) = 0;
    *(undefined1 *)(param_1 + 0x43f) = 0;
    *(undefined1 *)((long)param_1 + 0x2204) = 0;
    *(undefined1 *)(param_1 + 0x442) = 0;
    *(undefined1 *)((long)param_1 + 0x221c) = 0;
    *(undefined1 *)(param_1 + 0x445) = 0;
    *(undefined1 *)((long)param_1 + 0x2234) = 0;
    *(undefined4 *)(param_1 + 0x447) = 0;
    param_1[0x44a] = 0;
    *(undefined4 *)(param_1 + 1099) = 0;
    param_1[0x448] = 0;
    param_1[0x449] = 0;
  }
  param_1[0x421] = (long)&PTR_LAB_04b6d338;
  FUN_038f4940(param_1 + 0x421);
  FUN_03a259a0(param_1 + 0x229);
  FUN_03a259a0(param_1 + 0x1bd);
  param_1[0x163] = (long)(puVar17 + 0x10);
  *param_1 = (long)(puVar17 + 0x10);
  return;
}

