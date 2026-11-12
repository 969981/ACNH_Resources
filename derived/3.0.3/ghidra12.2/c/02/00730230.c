
void FUN_00730230(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  size_t __size;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bb3350;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar13 = *(long **)(lVar7 + 0xa8);
  plVar8 = (long *)param_1[9];
  while (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x40))();
    plVar8 = (long *)param_1[9];
  }
  uVar11 = *(uint *)(param_1 + 0xf);
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  __size = (ulong)uVar11 * 0x38;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar10 = malloc(__size);
  }
  else {
    if (plVar13 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar3 = (undefined8 *)(lVar7 + 8);
      if (lVar9 != 0) {
        puVar3 = (undefined8 *)(lVar9 + 0xa8);
      }
      plVar13 = (long *)*puVar3;
      if (plVar13 == (long *)0x0) goto LAB_00730380;
    }
    pvVar10 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,__size,8);
  }
  if (pvVar10 != (void *)0x0) {
    uVar4 = uVar11 - 1;
    param_1[0xd] = (long)pvVar10;
    if (1 < uVar11) {
      if (uVar4 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        plVar8 = (long *)((long)pvVar10 + 0x30);
        do {
          uVar14 = uVar14 + 2;
          plVar8[-6] = (long)plVar8;
          *plVar8 = (long)(plVar8 + 6);
          plVar8 = plVar8 + 0xc;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar14);
      }
      if ((uVar4 & 1) != 0) {
        plVar8 = (long *)((long)pvVar10 + uVar14 * 0x30);
        *plVar8 = (long)(plVar8 + 6);
      }
    }
    *(undefined8 *)((long)pvVar10 + (long)(int)(uVar4 * 6) * 8) = 0;
    param_1[0xe] = (long)pvVar10;
    pvVar10 = (void *)((long)pvVar10 + (ulong)uVar11 * 0x30);
    if (pvVar10 != (void *)0x0) {
      param_1[0xc] = (long)pvVar10;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar11;
    }
  }
LAB_00730380:
  lVar7 = param_1[0xf];
  (**(code **)(*param_1 + 0x60))(&local_34,param_1,0);
  puVar6 = PTR_PTR_04bb2238;
  puVar5 = PTR_DAT_04bb2020;
  uVar11 = *(uint *)(param_1 + 0xb);
  iVar12 = (int)lVar7 - uVar11;
  if (iVar12 != 0 && (int)uVar11 <= (int)lVar7) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    do {
      local_80 = param_1[5];
      uStack_70 = *(undefined8 *)(puVar6 + 8);
      local_58 = *(uint *)(param_1 + 8);
      plVar8 = (long *)param_1[0xd];
      if (plVar8 != (long *)0x0) {
        param_1[0xd] = *plVar8;
      }
      *plVar8 = (long)puVar2;
      local_88 = puVar1;
      local_78 = puVar1;
      local_68 = puVar1;
      uStack_60 = uStack_70;
      (**(code **)(puVar5 + 0x28))(&local_88);
      plVar8[3] = 0;
      plVar8[1] = local_80;
      plVar8[2] = 0;
      plVar8[5] = 0;
      *(undefined4 *)((long)plVar8 + 0x24) = local_34;
      if ((local_58 >> 7 & 1) == 0) {
        *(undefined4 *)(plVar8 + 5) = local_34;
      }
      uVar11 = local_58 & 0xfeffffff;
      *plVar8 = (long)&PTR_LAB_04901740;
      *(uint *)(plVar8 + 4) = uVar11;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar8;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        uVar11 = *(uint *)(plVar8 + 4);
      }
      iVar12 = iVar12 + -1;
      *(uint *)(plVar8 + 4) = uVar11 & 0xfffffffc;
    } while (iVar12 != 0);
    uVar11 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar11) {
    uVar14 = 0;
    do {
      plVar8 = *(long **)(param_1[0xc] + uVar14 * 8);
      (**(code **)(*plVar8 + 0x38))(plVar8,param_1 + 4);
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar14);
  }
  return;
}

