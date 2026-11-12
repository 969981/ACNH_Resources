
void FUN_008f58c0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined **local_110;
  long lStack_108;
  undefined **local_100;
  undefined *puStack_f8;
  undefined **local_f0;
  undefined *puStack_e8;
  undefined4 local_e0;
  undefined **local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined **local_a0;
  undefined *puStack_98;
  undefined **local_90;
  undefined *puStack_88;
  undefined **local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  
  if (param_1[0xc] != 0) {
    uVar8 = *(uint *)(param_1 + 0xf);
    if (*(int *)((long)param_1 + 0x5c) < (int)uVar8) {
      return;
    }
    plVar2 = (long *)param_1[9];
    if (plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x40))();
        plVar2 = (long *)param_1[9];
      } while (plVar2 != (long *)0x0);
      uVar8 = *(uint *)(param_1 + 0xf);
    }
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1,0);
    uVar6 = *(uint *)(param_1 + 0xb);
    iVar10 = uVar8 - uVar6;
    if ((int)uVar8 < (int)uVar6) {
      if (uVar8 < uVar6 || iVar10 == 0) {
        lVar11 = (long)(int)uVar8;
        do {
          plVar2 = *(long **)(param_1[0xc] + lVar11 * 8);
          (**(code **)*plVar2)(plVar2);
          lVar11 = lVar11 + 1;
          *plVar2 = param_1[0xd];
          param_1[0xd] = (long)plVar2;
        } while (lVar11 < (int)param_1[0xb]);
        *(uint *)(param_1 + 0xb) = uVar8;
        uVar6 = uVar8;
      }
    }
    else if (iVar10 != 0 && (int)uVar6 <= (int)uVar8) {
      do {
        lStack_108 = param_1[5];
        local_110 = &PTR_LAB_048f9770;
        local_e0 = (undefined4)param_1[8];
        plVar2 = (long *)param_1[0xd];
        local_100 = &PTR_LAB_048f9770;
        puStack_f8 = PTR_DAT_04c4b988;
        local_f0 = &PTR_LAB_048f9770;
        puStack_e8 = PTR_DAT_04c4b988;
        if (plVar2 != (long *)0x0) {
          param_1[0xd] = *plVar2;
        }
        FUN_008e9100(plVar2,&local_110,uVar3);
        *plVar2 = (long)&PTR_LAB_04925878;
        local_a0 = &PTR_LAB_048f9770;
        puStack_98 = &DAT_040c9993;
        local_90 = &PTR_LAB_048f9770;
        puStack_88 = &DAT_0405c03c;
        local_70 = 0;
        local_80 = &PTR_LAB_048f9770;
        puStack_78 = &DAT_0407ebb1;
        local_c8 = 0x20;
        local_a5 = 0;
        local_c4[0] = 0;
        local_d8 = &PTR_LAB_048f9700;
        puStack_d0 = local_c4;
        FUN_008f0e20(plVar2 + 0x25,&local_a0,&local_d8,plVar2);
        *plVar2 = (long)&PTR_LAB_04925718;
        if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
          *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar2;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        }
        iVar10 = iVar10 + -1;
        *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
      } while (iVar10 != 0);
      uVar6 = *(uint *)(param_1 + 0xb);
    }
    if ((int)uVar6 < 1) {
      return;
    }
    uVar9 = 0;
    do {
      plVar2 = *(long **)(param_1[0xc] + uVar9 * 8);
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 4);
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
    return;
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  plVar7 = *(long **)(lVar11 + 0xa8);
  plVar2 = (long *)param_1[9];
  lVar11 = DAT_05ae7600;
  while (DAT_05ae7600 = lVar11, plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    lVar11 = DAT_05ae7600;
    plVar2 = (long *)param_1[9];
  }
  uVar8 = *(uint *)(param_1 + 0xf);
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  if (lVar11 == 0) {
    pvVar5 = malloc((ulong)uVar8 * 0x198);
  }
  else {
    if (plVar7 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar11 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      plVar7 = (long *)*puVar1;
      if (plVar7 == (long *)0x0) goto LAB_008f5c18;
    }
    pvVar5 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar8 * 0x198,8);
  }
  if (pvVar5 != (void *)0x0) {
    uVar6 = uVar8 - 1;
    param_1[0xd] = (long)pvVar5;
    if (1 < uVar8) {
      if (uVar6 == 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        plVar2 = (long *)((long)pvVar5 + 400);
        do {
          uVar9 = uVar9 + 2;
          plVar2[-0x32] = (long)plVar2;
          *plVar2 = (long)(plVar2 + 0x32);
          plVar2 = plVar2 + 100;
        } while (((ulong)uVar6 & 0xfffffffe) != uVar9);
      }
      if ((uVar6 & 1) != 0) {
        plVar2 = (long *)((long)pvVar5 + uVar9 * 400);
        *plVar2 = (long)(plVar2 + 0x32);
      }
    }
    *(undefined8 *)((long)pvVar5 + (long)(int)(uVar6 * 0x32) * 8) = 0;
    param_1[0xe] = (long)pvVar5;
    pvVar5 = (void *)((long)pvVar5 + (ulong)uVar8 * 400);
    if (pvVar5 != (void *)0x0) {
      param_1[0xc] = (long)pvVar5;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar8;
    }
  }
LAB_008f5c18:
  lVar11 = param_1[0xf];
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1,0);
  uVar8 = *(uint *)(param_1 + 0xb);
  iVar10 = (int)lVar11 - uVar8;
  if (iVar10 != 0 && (int)uVar8 <= (int)lVar11) {
    do {
      lStack_108 = param_1[5];
      local_110 = &PTR_LAB_048f9770;
      local_e0 = (undefined4)param_1[8];
      plVar2 = (long *)param_1[0xd];
      local_100 = &PTR_LAB_048f9770;
      puStack_f8 = PTR_DAT_04c4b988;
      local_f0 = &PTR_LAB_048f9770;
      puStack_e8 = PTR_DAT_04c4b988;
      if (plVar2 != (long *)0x0) {
        param_1[0xd] = *plVar2;
      }
      FUN_008e9100(plVar2,&local_110,uVar3);
      *plVar2 = (long)&PTR_LAB_04925878;
      local_a0 = &PTR_LAB_048f9770;
      puStack_98 = &DAT_040c9993;
      local_90 = &PTR_LAB_048f9770;
      puStack_88 = &DAT_0405c03c;
      local_70 = 0;
      local_80 = &PTR_LAB_048f9770;
      puStack_78 = &DAT_0407ebb1;
      local_c8 = 0x20;
      local_a5 = 0;
      local_c4[0] = 0;
      local_d8 = &PTR_LAB_048f9700;
      puStack_d0 = local_c4;
      FUN_008f0e20(plVar2 + 0x25,&local_a0,&local_d8,plVar2);
      *plVar2 = (long)&PTR_LAB_04925718;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar2;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar10 = iVar10 + -1;
      *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffc;
    } while (iVar10 != 0);
    uVar8 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar8) {
    uVar9 = 0;
    do {
      plVar2 = *(long **)(param_1[0xc] + uVar9 * 8);
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 4);
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  return;
}

