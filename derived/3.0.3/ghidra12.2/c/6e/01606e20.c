
void FUN_01606e20(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined **local_98;
  long lStack_90;
  undefined **local_88;
  undefined *puStack_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined4 local_68;
  
  plVar4 = (long *)param_1[9];
  plVar3 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar3, plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar3 = (long *)PTR_DAT_04bb2698;
    plVar4 = (long *)param_1[9];
  }
  if (param_1[0xc] != 0) {
    if (0 < (int)param_1[0xb]) {
      lVar9 = 0;
      do {
        plVar4 = *(long **)(param_1[0xc] + lVar9 * 8);
        (**(code **)*plVar4)(plVar4);
        lVar9 = lVar9 + 1;
        *plVar4 = param_1[0xd];
        param_1[0xd] = (long)plVar4;
      } while (lVar9 < (int)param_1[0xb]);
    }
    pvVar7 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*plVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*plVar3,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar8 = *(uint *)(param_2 + 0x78);
  uVar2 = uVar8 - 1;
  if ((int)uVar8 < 1) goto LAB_0160701c;
  lVar9 = *plVar3;
  if (lVar9 == 0) {
    pvVar7 = malloc((ulong)uVar8 * 0x358);
joined_r0x01606f90:
    if (pvVar7 != (void *)0x0) {
      param_1[0xd] = (long)pvVar7;
      if (1 < uVar8) {
        if (uVar2 == 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          plVar4 = (long *)((long)pvVar7 + 0x350);
          do {
            uVar10 = uVar10 + 2;
            plVar4[-0x6a] = (long)plVar4;
            *plVar4 = (long)(plVar4 + 0x6a);
            plVar4 = plVar4 + 0xd4;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar10);
        }
        if ((uVar2 & 1) != 0) {
          plVar4 = (long *)((long)pvVar7 + uVar10 * 0x350);
          *plVar4 = (long)(plVar4 + 0x6a);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar2 * 0x6a) * 8) = 0;
      param_1[0xe] = (long)pvVar7;
      pvVar7 = (void *)((long)pvVar7 + (ulong)uVar8 * 0x350);
      if (pvVar7 != (void *)0x0) {
        param_1[0xc] = (long)pvVar7;
        *(undefined4 *)(param_1 + 0xb) = 0;
        *(uint *)((long)param_1 + 0x5c) = uVar8;
      }
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_01606f68:
      pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar8 * 0x358,8);
      goto joined_r0x01606f90;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar9 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    param_3 = (long *)*puVar1;
    if (param_3 != (long *)0x0) goto LAB_01606f68;
  }
  uVar8 = *(uint *)(param_2 + 0x78);
LAB_0160701c:
  uVar6 = (**(code **)(*param_1 + 0x60))(param_1,param_4);
  if (0 < (int)uVar8) {
    uVar10 = 0;
    do {
      lStack_90 = param_1[5];
      local_98 = &PTR_LAB_048f9770;
      local_88 = &PTR_LAB_048f9770;
      puStack_80 = PTR_DAT_04c4b988;
      local_78 = &PTR_LAB_048f9770;
      puStack_70 = PTR_DAT_04c4b988;
      local_68 = (undefined4)param_1[8];
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        plVar4 = (long *)param_1[0xd];
        if (plVar4 != (long *)0x0) {
          param_1[0xd] = *plVar4;
        }
        FUN_016076c8(plVar4,&local_98,&local_88,uVar6);
        *plVar4 = (long)&PTR_FUN_049b27c0;
        if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
          *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar4;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        }
      }
      else {
        plVar4 = (long *)0x0;
      }
      if ((long)uVar10 < (long)*(int *)(param_2 + 0x58)) {
        (**(code **)(*plVar4 + 0x98))
                  (plVar4,*(undefined8 *)(*(long *)(param_2 + 0x60) + uVar10 * 8));
      }
      uVar10 = uVar10 + 1;
      *(uint *)(plVar4 + 4) = *(uint *)(plVar4 + 4) & 0xfffffffc;
    } while (uVar8 != uVar10);
  }
  uVar8 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar8) {
    uVar10 = 0;
    do {
      plVar4 = *(long **)(param_1[0xc] + uVar10 * 8);
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 4);
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}

