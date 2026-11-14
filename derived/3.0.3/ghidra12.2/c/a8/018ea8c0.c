
void FUN_018ea8c0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  size_t __size;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  undefined4 *puVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar8 = PTR_DAT_04bb3350;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar15 = *(long **)(lVar10 + 0xa8);
  plVar11 = (long *)param_1[9];
  while (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x40))();
    plVar11 = (long *)param_1[9];
  }
  uVar17 = *(uint *)(param_1 + 0xf);
  if ((int)uVar17 < 2) {
    uVar17 = 1;
  }
  __size = (ulong)uVar17 * 0x70;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar13 = malloc(__size);
  }
  else {
    if (plVar15 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      puVar5 = (undefined8 *)(lVar10 + 8);
      if (lVar12 != 0) {
        puVar5 = (undefined8 *)(lVar12 + 0xa8);
      }
      plVar15 = (long *)*puVar5;
      if (plVar15 == (long *)0x0) goto LAB_018eaa20;
    }
    pvVar13 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,__size,8);
  }
  if (pvVar13 != (void *)0x0) {
    uVar6 = uVar17 - 1;
    param_1[0xd] = (long)pvVar13;
    if (1 < uVar17) {
      if (uVar6 == 1) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        plVar11 = (long *)((long)pvVar13 + 0x68);
        do {
          uVar16 = uVar16 + 2;
          plVar11[-0xd] = (long)plVar11;
          *plVar11 = (long)(plVar11 + 0xd);
          plVar11 = plVar11 + 0x1a;
        } while (((ulong)uVar6 & 0xfffffffe) != uVar16);
      }
      if ((uVar6 & 1) != 0) {
        plVar11 = (long *)((long)pvVar13 + uVar16 * 0x68);
        *plVar11 = (long)(plVar11 + 0xd);
      }
    }
    *(undefined8 *)((long)pvVar13 + (long)(int)(uVar6 * 0xd) * 8) = 0;
    param_1[0xe] = (long)pvVar13;
    pvVar13 = (void *)((long)pvVar13 + (ulong)uVar17 * 0x68);
    if (pvVar13 != (void *)0x0) {
      param_1[0xc] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar17;
    }
  }
LAB_018eaa20:
  uVar6 = *(uint *)(param_1 + 0xf);
  plVar11 = (long *)(**(code **)(*param_1 + 0x60))(param_1,param_2);
  puVar8 = PTR_DAT_04bb2020;
  uVar17 = *(uint *)(param_1 + 0xb);
  if ((int)uVar17 < (int)uVar6) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    puVar3 = PTR_DAT_04bb60a0 + 0x10;
    puVar4 = PTR_DAT_04bb31d0 + 0x10;
    do {
      local_a0 = param_1[5];
      local_78 = (undefined4)param_1[8];
      plVar15 = (long *)param_1[0xd];
      uStack_90 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      if (plVar15 != (long *)0x0) {
        param_1[0xd] = *plVar15;
      }
      *plVar15 = (long)puVar2;
      local_a8 = puVar1;
      local_98 = puVar1;
      local_88 = puVar1;
      uStack_80 = uStack_90;
      (**(code **)(puVar8 + 0x28))(&local_a8);
      plVar15[2] = 0;
      plVar15[3] = 0;
      plVar15[1] = local_a0;
      plVar18 = plVar15 + 5;
      *plVar18 = 0;
      *plVar15 = (long)puVar3;
      *(undefined4 *)(plVar15 + 4) = local_78;
      if (plVar11 == (long *)0x0) {
        lVar10 = 0;
      }
      else {
        (**(code **)(*plVar11 + 0x140))(plVar11,plVar15);
        lVar10 = plVar15[5];
      }
      plVar15[7] = (long)puVar4;
      puVar9 = PTR_DAT_04bbf2b0;
      plVar15[10] = 0;
      *(undefined4 *)(plVar15 + 0xb) = 0;
      plVar15[0xc] = 0;
      *plVar15 = (long)(puVar9 + 0x10);
      plVar15[6] = (long)(puVar9 + 0x188);
      plVar15[8] = (long)"mRadius";
      plVar15[9] = 0;
      if (lVar10 != 0) {
        do {
          lVar12 = lVar10;
          lVar10 = *(long *)(lVar12 + 0x10);
        } while (lVar10 != 0);
        plVar18 = (long *)(lVar12 + 0x10);
      }
      *plVar18 = (long)(plVar15 + 7);
      plVar15[10] = (long)plVar15;
      uVar19 = 0x41a00000;
      if ((*(uint *)(plVar15 + 0xb) & 0x800) != 0) {
        uVar19 = 0x3eb2b8c2;
      }
      puVar14 = (undefined4 *)(**(code **)(plVar15[7] + 0xf0))();
      *puVar14 = uVar19;
      uVar7 = *(uint *)(plVar15 + 0xb);
      if ((uVar7 >> 7 & 1) == 0) {
        plVar15[0xc] = 0;
        uVar19 = 0x41a00000;
        if ((uVar7 & 0x800) != 0) {
          uVar19 = 0x3eb2b8c2;
        }
        *(undefined4 *)(plVar15 + 0xc) = uVar19;
      }
      *plVar15 = (long)&PTR_LAB_049d1be0;
      *(uint *)(plVar15 + 0xb) = uVar7 & 0xfeffffff;
      plVar15[6] = (long)&PTR_FUN_049d1d58;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar15;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      uVar17 = uVar17 + 1;
      *(uint *)(plVar15 + 4) = *(uint *)(plVar15 + 4) & 0xfffffffc;
    } while (uVar17 != uVar6);
    uVar17 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar17) {
    uVar16 = 0;
    do {
      plVar11 = *(long **)(param_1[0xc] + uVar16 * 8);
      (**(code **)(*plVar11 + 0x38))(plVar11,param_1 + 4);
      uVar16 = uVar16 + 1;
    } while (uVar17 != uVar16);
  }
  return;
}

