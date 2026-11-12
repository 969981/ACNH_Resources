
void FUN_0072a5a0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_130 [152];
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
      lVar10 = 0;
      do {
        plVar6 = *(long **)(param_1[0xc] + lVar10 * 8);
        (**(code **)*plVar6)(plVar6);
        lVar10 = lVar10 + 1;
        *plVar6 = param_1[0xd];
        param_1[0xd] = (long)plVar6;
      } while (lVar10 < (int)param_1[0xb]);
    }
    pvVar8 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar8 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar8);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*plVar4,pvVar8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(uint *)(param_2 + 0x78);
  uVar3 = uVar9 - 1;
  if ((int)uVar9 < 1) goto LAB_0072a798;
  lVar10 = *plVar4;
  if (lVar10 == 0) {
    pvVar8 = malloc((ulong)uVar9 * 0xd0);
joined_r0x0072a70c:
    if (pvVar8 != (void *)0x0) {
      param_1[0xd] = (long)pvVar8;
      if (1 < uVar9) {
        if (uVar3 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          plVar6 = (long *)((long)pvVar8 + 200);
          do {
            uVar11 = uVar11 + 2;
            plVar6[-0x19] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 0x19);
            plVar6 = plVar6 + 0x32;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar11);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar8 + uVar11 * 200);
          *plVar6 = (long)(plVar6 + 0x19);
        }
      }
      *(undefined8 *)((long)pvVar8 + (long)(int)(uVar3 * 0x19) * 8) = 0;
      param_1[0xe] = (long)pvVar8;
      pvVar8 = (void *)((long)pvVar8 + (ulong)uVar9 * 200);
      if (pvVar8 != (void *)0x0) {
        param_1[0xc] = (long)pvVar8;
        *(undefined4 *)(param_1 + 0xb) = 0;
        *(uint *)((long)param_1 + 0x5c) = uVar9;
      }
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_0072a6e4:
      pvVar8 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar9 * 0xd0,8);
      goto joined_r0x0072a70c;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar10 + 8);
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)(lVar7 + 0xa8);
    }
    param_3 = (long *)*puVar2;
    if (param_3 != (long *)0x0) goto LAB_0072a6e4;
  }
  uVar9 = *(uint *)(param_2 + 0x78);
LAB_0072a798:
  (**(code **)(*param_1 + 0x60))(auStack_130,param_1,0);
  puVar5 = PTR_PTR_04bb2238;
  if (0 < (int)uVar9) {
    uVar11 = 0;
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
        FUN_0072a900(plVar6,&local_98,auStack_130,0);
        *plVar6 = (long)&PTR_FUN_04901088;
        if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
          *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar6;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        }
      }
      else {
        plVar6 = (long *)0x0;
      }
      if ((long)uVar11 < (long)*(int *)(param_2 + 0x58)) {
        (**(code **)(*plVar6 + 0x98))
                  (plVar6,*(undefined8 *)(*(long *)(param_2 + 0x60) + uVar11 * 8));
      }
      uVar11 = uVar11 + 1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (uVar9 != uVar11);
  }
  uVar9 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar9) {
    uVar11 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc] + uVar11 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_1 + 4);
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}

