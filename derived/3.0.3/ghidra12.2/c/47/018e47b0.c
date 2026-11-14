
void FUN_018e47b0(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_98;
  long lStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar6 = (long *)param_1[9];
  plVar4 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar4, plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar4 = (long *)PTR_DAT_04bb2698;
    plVar6 = (long *)param_1[9];
  }
  if (param_1[0xc] != 0) {
    if (0 < (int)param_1[0xb]) {
      lVar11 = 0;
      do {
        plVar6 = *(long **)(param_1[0xc] + lVar11 * 8);
        (**(code **)*plVar6)(plVar6);
        lVar11 = lVar11 + 1;
        *plVar6 = param_1[0xd];
        param_1[0xd] = (long)plVar6;
      } while (lVar11 < (int)param_1[0xb]);
    }
    pvVar9 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar9 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar9);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*plVar4,pvVar9);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar10 = *(uint *)(param_2 + 0x78);
  uVar3 = uVar10 - 1;
  if ((int)uVar10 < 1) goto LAB_018e49a8;
  lVar11 = *plVar4;
  if (lVar11 == 0) {
    pvVar9 = malloc((ulong)uVar10 * 0xd0);
joined_r0x018e4920:
    if (pvVar9 != (void *)0x0) {
      param_1[0xd] = (long)pvVar9;
      if (1 < uVar10) {
        if (uVar3 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar6 = (long *)((long)pvVar9 + 200);
          do {
            uVar12 = uVar12 + 2;
            plVar6[-0x19] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 0x19);
            plVar6 = plVar6 + 0x32;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar12);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar9 + uVar12 * 200);
          *plVar6 = (long)(plVar6 + 0x19);
        }
      }
      *(undefined8 *)((long)pvVar9 + (long)(int)(uVar3 * 0x19) * 8) = 0;
      param_1[0xe] = (long)pvVar9;
      pvVar9 = (void *)((long)pvVar9 + (ulong)uVar10 * 200);
      if (pvVar9 != (void *)0x0) {
        param_1[0xc] = (long)pvVar9;
        *(undefined4 *)(param_1 + 0xb) = 0;
        *(uint *)((long)param_1 + 0x5c) = uVar10;
      }
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_018e48f8:
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar10 * 0xd0,8);
      goto joined_r0x018e4920;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar11 + 8);
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)(lVar7 + 0xa8);
    }
    param_3 = (long *)*puVar2;
    if (param_3 != (long *)0x0) goto LAB_018e48f8;
  }
  uVar10 = *(uint *)(param_2 + 0x78);
LAB_018e49a8:
  uVar8 = (**(code **)(*param_1 + 0x60))(param_1,param_4);
  puVar5 = PTR_PTR_04bb2238;
  if (0 < (int)uVar10) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_90 = param_1[5];
      uStack_80 = *(undefined8 *)(puVar5 + 8);
      local_68 = (undefined4)param_1[8];
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        plVar6 = (long *)param_1[0xd];
        if (plVar6 != (long *)0x0) {
          param_1[0xd] = *plVar6;
        }
        FUN_019117c0(plVar6,&local_98,uVar8);
        *plVar6 = (long)&PTR_LAB_049d26f0;
        plVar6[6] = (long)&PTR_FUN_049d2868;
        if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
          *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar6;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        }
      }
      else {
        plVar6 = (long *)0x0;
      }
      if ((long)uVar12 < (long)*(int *)(param_2 + 0x58)) {
        (**(code **)(*plVar6 + 0x98))
                  (plVar6,*(undefined8 *)(*(long *)(param_2 + 0x60) + uVar12 * 8));
      }
      uVar12 = uVar12 + 1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (uVar10 != uVar12);
  }
  uVar10 = *(uint *)(param_1 + 0xb);
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

