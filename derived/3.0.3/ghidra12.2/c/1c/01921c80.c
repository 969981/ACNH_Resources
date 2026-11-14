
void FUN_01921c80(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  undefined *local_130;
  long lStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined4 *puStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined3 uStack_e0;
  undefined1 local_dd;
  undefined1 local_a5;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar11 = *(long **)(lVar5 + 0xa8);
  plVar6 = (long *)param_1[9];
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[9];
  }
  uVar10 = *(uint *)(param_1 + 0xf);
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar8 = malloc((ulong)uVar10 * 0x5b8);
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      puVar3 = (undefined8 *)(lVar5 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar11 = (long *)*puVar3;
      if (plVar11 == (long *)0x0) goto LAB_01921de8;
    }
    pvVar8 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(ulong)uVar10 * 0x5b8,8);
  }
  if (pvVar8 != (void *)0x0) {
    uVar4 = uVar10 - 1;
    param_1[0xd] = (long)pvVar8;
    if (1 < uVar10) {
      if (uVar4 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        plVar6 = (long *)((long)pvVar8 + 0x5b0);
        do {
          uVar12 = uVar12 + 2;
          plVar6[-0xb6] = (long)plVar6;
          *plVar6 = (long)(plVar6 + 0xb6);
          plVar6 = plVar6 + 0x16c;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar12);
      }
      if ((uVar4 & 1) != 0) {
        plVar6 = (long *)((long)pvVar8 + uVar12 * 0x5b0);
        *plVar6 = (long)(plVar6 + 0xb6);
      }
    }
    *(undefined8 *)((long)pvVar8 + (long)(int)(uVar4 * 0xb6) * 8) = 0;
    param_1[0xe] = (long)pvVar8;
    pvVar8 = (void *)((long)pvVar8 + (ulong)uVar10 * 0x5b0);
    if (pvVar8 != (void *)0x0) {
      param_1[0xc] = (long)pvVar8;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar10;
    }
  }
LAB_01921de8:
  lVar5 = param_1[0xf];
  uVar9 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  uVar10 = *(uint *)(param_1 + 0xb);
  iVar13 = (int)lVar5 - uVar10;
  if (iVar13 != 0 && (int)uVar10 <= (int)lVar5) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      lStack_128 = param_1[5];
      local_100 = (undefined4)param_1[8];
      plVar6 = (long *)param_1[0xd];
      uStack_118 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      if (plVar6 != (long *)0x0) {
        param_1[0xd] = *plVar6;
      }
      local_130 = puVar1;
      local_120 = puVar1;
      local_110 = puVar1;
      uStack_108 = uStack_118;
      FUN_01907f30(plVar6,&local_130,uVar9);
      *plVar6 = (long)&PTR_FUN_049db838;
      local_a5 = 0;
      local_dd = 0;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_98 = "mGroupName";
      puStack_88 = &DAT_0407ebb1;
      puStack_78 = &DAT_0407ebb1;
      local_70 = 8;
      local_e8 = 0x40;
      local_e4 = 0x616e6e55;
      uStack_e0 = 0x64656d;
      local_f8 = puVar2;
      puStack_f0 = &local_e4;
      local_90 = local_a0;
      local_80 = local_a0;
      FUN_00744dd0(plVar6 + 0xa5,&local_a0,&local_f8,plVar6);
      *plVar6 = (long)&PTR_FUN_049db6b0;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar6;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar13 = iVar13 + -1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (iVar13 != 0);
    uVar10 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar10) {
    uVar12 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc] + uVar12 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_1 + 4);
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  return;
}

