
void FUN_0134ac40(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  size_t __size;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  uint local_58;
  
  puVar5 = PTR_DAT_04bb3350;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar13 = *(long **)(lVar8 + 0xa8);
  plVar9 = (long *)param_1[9];
  while (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x40))();
    plVar9 = (long *)param_1[9];
  }
  uVar12 = *(uint *)(param_1 + 0xf);
  if ((int)uVar12 < 2) {
    uVar12 = 1;
  }
  __size = (ulong)uVar12 * 0x38;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar11 = malloc(__size);
  }
  else {
    if (plVar13 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar3 = (undefined8 *)(lVar8 + 8);
      if (lVar10 != 0) {
        puVar3 = (undefined8 *)(lVar10 + 0xa8);
      }
      plVar13 = (long *)*puVar3;
      if (plVar13 == (long *)0x0) goto LAB_0134ad90;
    }
    pvVar11 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,__size,8);
  }
  if (pvVar11 != (void *)0x0) {
    uVar4 = uVar12 - 1;
    param_1[0xd] = (long)pvVar11;
    if (1 < uVar12) {
      if (uVar4 == 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        plVar9 = (long *)((long)pvVar11 + 0x30);
        do {
          uVar15 = uVar15 + 2;
          plVar9[-6] = (long)plVar9;
          *plVar9 = (long)(plVar9 + 6);
          plVar9 = plVar9 + 0xc;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar15);
      }
      if ((uVar4 & 1) != 0) {
        plVar9 = (long *)((long)pvVar11 + uVar15 * 0x30);
        *plVar9 = (long)(plVar9 + 6);
      }
    }
    *(undefined8 *)((long)pvVar11 + (long)(int)(uVar4 * 6) * 8) = 0;
    param_1[0xe] = (long)pvVar11;
    pvVar11 = (void *)((long)pvVar11 + (ulong)uVar12 * 0x30);
    if (pvVar11 != (void *)0x0) {
      param_1[0xc] = (long)pvVar11;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar12;
    }
  }
LAB_0134ad90:
  lVar8 = param_1[0xf];
  uVar7 = (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar6 = PTR_PTR_04bb2238;
  puVar5 = PTR_DAT_04bb2020;
  uVar12 = *(uint *)(param_1 + 0xb);
  iVar14 = (int)lVar8 - uVar12;
  if (iVar14 != 0 && (int)uVar12 <= (int)lVar8) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    do {
      local_80 = param_1[5];
      uStack_70 = *(undefined8 *)(puVar6 + 8);
      local_58 = *(uint *)(param_1 + 8);
      plVar9 = (long *)param_1[0xd];
      if (plVar9 != (long *)0x0) {
        param_1[0xd] = *plVar9;
      }
      *plVar9 = (long)puVar2;
      local_88 = puVar1;
      local_78 = puVar1;
      local_68 = puVar1;
      uStack_60 = uStack_70;
      (**(code **)(puVar5 + 0x28))(&local_88);
      plVar9[3] = 0;
      plVar9[1] = local_80;
      plVar9[2] = 0;
      plVar9[5] = 0;
      *(undefined2 *)((long)plVar9 + 0x24) = uVar7;
      if ((local_58 >> 7 & 1) == 0) {
        *(undefined2 *)(plVar9 + 5) = uVar7;
      }
      uVar12 = local_58 & 0xfeffffff;
      *plVar9 = (long)&PTR_LAB_04992058;
      *(uint *)(plVar9 + 4) = uVar12;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar9;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        uVar12 = *(uint *)(plVar9 + 4);
      }
      iVar14 = iVar14 + -1;
      *(uint *)(plVar9 + 4) = uVar12 & 0xfffffffc;
    } while (iVar14 != 0);
    uVar12 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar12) {
    uVar15 = 0;
    do {
      plVar9 = *(long **)(param_1[0xc] + uVar15 * 8);
      (**(code **)(*plVar9 + 0x38))(plVar9,param_1 + 4);
      uVar15 = uVar15 + 1;
    } while (uVar12 != uVar15);
  }
  return;
}

