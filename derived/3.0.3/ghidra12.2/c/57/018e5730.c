
void FUN_018e5730(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  void *pvVar13;
  long *plVar14;
  long lVar15;
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
  
  plVar10 = (long *)param_1[9];
  plVar14 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar14, plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x40))();
    plVar14 = (long *)PTR_DAT_04bb2698;
    plVar10 = (long *)param_1[9];
  }
  if (param_1[0xc] != 0) {
    if (0 < (int)param_1[0xb]) {
      lVar15 = 0;
      do {
        plVar10 = *(long **)(param_1[0xc] + lVar15 * 8);
        (**(code **)*plVar10)(plVar10);
        lVar15 = lVar15 + 1;
        *plVar10 = param_1[0xd];
        param_1[0xd] = (long)plVar10;
      } while (lVar15 < (int)param_1[0xb]);
    }
    pvVar13 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar13 != (void *)0x0) {
      if (*plVar14 == 0) {
        free(pvVar13);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*plVar14,pvVar13);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar13);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar17 = *(uint *)(param_2 + 0x78);
  uVar6 = uVar17 - 1;
  if ((int)uVar17 < 1) goto LAB_018e5924;
  lVar15 = *plVar14;
  if (lVar15 == 0) {
    pvVar13 = malloc((ulong)uVar17 * 0x70);
joined_r0x018e58a0:
    if (pvVar13 != (void *)0x0) {
      param_1[0xd] = (long)pvVar13;
      if (1 < uVar17) {
        if (uVar6 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          plVar10 = (long *)((long)pvVar13 + 0x68);
          do {
            uVar16 = uVar16 + 2;
            plVar10[-0xd] = (long)plVar10;
            *plVar10 = (long)(plVar10 + 0xd);
            plVar10 = plVar10 + 0x1a;
          } while (((ulong)uVar6 & 0xfffffffe) != uVar16);
        }
        if ((uVar6 & 1) != 0) {
          plVar10 = (long *)((long)pvVar13 + uVar16 * 0x68);
          *plVar10 = (long)(plVar10 + 0xd);
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
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_018e5878:
      pvVar13 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar17 * 0x70,8);
      goto joined_r0x018e58a0;
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar5 = (undefined8 *)(lVar15 + 8);
    if (lVar11 != 0) {
      puVar5 = (undefined8 *)(lVar11 + 0xa8);
    }
    param_3 = (long *)*puVar5;
    if (param_3 != (long *)0x0) goto LAB_018e5878;
  }
  uVar17 = *(uint *)(param_2 + 0x78);
LAB_018e5924:
  plVar10 = (long *)(**(code **)(*param_1 + 0x60))(param_1,param_4);
  puVar8 = PTR_PTR_04bb2238;
  puVar7 = PTR_DAT_04bb2020;
  if (0 < (int)uVar17) {
    uVar16 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    puVar3 = PTR_DAT_04bb60a0 + 0x10;
    puVar4 = PTR_DAT_04bb31d0 + 0x10;
    do {
      local_a0 = param_1[5];
      uStack_90 = *(undefined8 *)(puVar8 + 8);
      local_78 = (undefined4)param_1[8];
      local_a8 = puVar1;
      local_98 = puVar1;
      local_88 = puVar1;
      uStack_80 = uStack_90;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        plVar14 = (long *)param_1[0xd];
        if (plVar14 != (long *)0x0) {
          param_1[0xd] = *plVar14;
        }
        *plVar14 = (long)puVar2;
        (**(code **)(puVar7 + 0x28))(&local_a8);
        plVar14[2] = 0;
        plVar14[3] = 0;
        plVar14[1] = local_a0;
        *plVar14 = (long)puVar3;
        *(undefined4 *)(plVar14 + 4) = local_78;
        plVar18 = plVar14 + 5;
        *plVar18 = 0;
        if (plVar10 == (long *)0x0) {
          lVar15 = 0;
        }
        else {
          (**(code **)(*plVar10 + 0x140))(plVar10,plVar14);
          lVar15 = plVar14[5];
        }
        plVar14[7] = (long)puVar4;
        puVar9 = PTR_DAT_04bbf2b0;
        plVar14[10] = 0;
        *(undefined4 *)(plVar14 + 0xb) = 0;
        plVar14[0xc] = 0;
        *plVar14 = (long)(puVar9 + 0x10);
        plVar14[6] = (long)(puVar9 + 0x188);
        plVar14[8] = (long)"mRadius";
        plVar14[9] = 0;
        if (lVar15 != 0) {
          do {
            lVar11 = lVar15;
            lVar15 = *(long *)(lVar11 + 0x10);
          } while (lVar15 != 0);
          plVar18 = (long *)(lVar11 + 0x10);
        }
        *plVar18 = (long)(plVar14 + 7);
        plVar14[10] = (long)plVar14;
        uVar19 = 0x41a00000;
        if ((*(uint *)(plVar14 + 0xb) & 0x800) != 0) {
          uVar19 = 0x3eb2b8c2;
        }
        puVar12 = (undefined4 *)(**(code **)(plVar14[7] + 0xf0))();
        *puVar12 = uVar19;
        uVar6 = *(uint *)(plVar14 + 0xb);
        if ((uVar6 >> 7 & 1) == 0) {
          plVar14[0xc] = 0;
          uVar19 = 0x41a00000;
          if ((uVar6 & 0x800) != 0) {
            uVar19 = 0x3eb2b8c2;
          }
          *(undefined4 *)(plVar14 + 0xc) = uVar19;
        }
        *(uint *)(plVar14 + 0xb) = uVar6 & 0xfeffffff;
        *plVar14 = (long)&PTR_LAB_049d1be0;
        plVar14[6] = (long)&PTR_FUN_049d1d58;
        if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
          *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar14;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        }
      }
      else {
        plVar14 = (long *)0x0;
      }
      if ((long)uVar16 < (long)*(int *)(param_2 + 0x58)) {
        (**(code **)(*plVar14 + 0x98))
                  (plVar14,*(undefined8 *)(*(long *)(param_2 + 0x60) + uVar16 * 8));
      }
      uVar16 = uVar16 + 1;
      *(uint *)(plVar14 + 4) = *(uint *)(plVar14 + 4) & 0xfffffffc;
    } while (uVar16 != uVar17);
  }
  uVar17 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar17) {
    uVar16 = 0;
    do {
      plVar10 = *(long **)(param_1[0xc] + uVar16 * 8);
      (**(code **)(*plVar10 + 0x38))(plVar10,param_1 + 4);
      uVar16 = uVar16 + 1;
    } while (uVar17 != uVar16);
  }
  return;
}

