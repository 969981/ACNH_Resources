
void FUN_009aa7d0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  size_t __size;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_98;
  long lStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar7 = (long *)param_1[9];
  plVar5 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar5, plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x40))();
    plVar5 = (long *)PTR_DAT_04bb2698;
    plVar7 = (long *)param_1[9];
  }
  if (param_1[0xc] != 0) {
    if (0 < (int)param_1[0xb]) {
      lVar12 = 0;
      do {
        plVar7 = *(long **)(param_1[0xc] + lVar12 * 8);
        (**(code **)*plVar7)(plVar7);
        lVar12 = lVar12 + 1;
        *plVar7 = param_1[0xd];
        param_1[0xd] = (long)plVar7;
      } while (lVar12 < (int)param_1[0xb]);
    }
    pvVar10 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar10 != (void *)0x0) {
      if (*plVar5 == 0) {
        free(pvVar10);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*plVar5,pvVar10);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar10);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  uVar11 = *(uint *)(param_2 + 0x78);
  uVar4 = uVar11 - 1;
  if ((int)uVar11 < 1) goto LAB_009aa9bc;
  lVar12 = *plVar5;
  __size = (ulong)uVar11 * 0x108;
  if (lVar12 == 0) {
    pvVar10 = malloc(__size);
joined_r0x009aa93c:
    if (pvVar10 != (void *)0x0) {
      param_1[0xd] = (long)pvVar10;
      if (1 < uVar11) {
        if (uVar4 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          plVar7 = (long *)((long)pvVar10 + 0x100);
          do {
            uVar13 = uVar13 + 2;
            plVar7[-0x20] = (long)plVar7;
            *plVar7 = (long)(plVar7 + 0x20);
            plVar7 = plVar7 + 0x40;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar13);
        }
        if ((uVar4 & 1) != 0) {
          plVar7 = (long *)((long)pvVar10 + uVar13 * 0x100);
          *plVar7 = (long)(plVar7 + 0x20);
        }
      }
      *(undefined8 *)((long)pvVar10 + (long)(int)(uVar4 * 0x20) * 8) = 0;
      pvVar2 = (void *)((long)pvVar10 + (ulong)uVar11 * 0x100);
      param_1[0xe] = (long)pvVar10;
      if (pvVar2 != (void *)0x0) {
        param_1[0xc] = (long)pvVar2;
        *(undefined4 *)(param_1 + 0xb) = 0;
        *(uint *)((long)param_1 + 0x5c) = uVar11;
      }
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_009aa914:
      pvVar10 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      goto joined_r0x009aa93c;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar12 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    param_3 = (long *)*puVar3;
    if (param_3 != (long *)0x0) goto LAB_009aa914;
  }
  uVar11 = *(uint *)(param_2 + 0x78);
LAB_009aa9bc:
  uVar9 = (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar6 = PTR_PTR_04bb2238;
  if (0 < (int)uVar11) {
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_90 = param_1[5];
      uStack_80 = *(undefined8 *)(puVar6 + 8);
      local_68 = (undefined4)param_1[8];
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        plVar7 = (long *)param_1[0xd];
        if (plVar7 != (long *)0x0) {
          param_1[0xd] = *plVar7;
        }
        FUN_0099c14c(plVar7,&local_98,uVar9);
        *plVar7 = (long)&PTR_FUN_0492c4e8;
        if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
          *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar7;
          *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
        }
      }
      else {
        plVar7 = (long *)0x0;
      }
      if ((long)uVar13 < (long)*(int *)(param_2 + 0x58)) {
        (**(code **)(*plVar7 + 0x98))
                  (plVar7,*(undefined8 *)(*(long *)(param_2 + 0x60) + uVar13 * 8));
      }
      uVar13 = uVar13 + 1;
      *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
    } while (uVar11 != uVar13);
  }
  uVar11 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar11) {
    uVar13 = 0;
    do {
      plVar7 = *(long **)(param_1[0xc] + uVar13 * 8);
      (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 4);
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
  return;
}

