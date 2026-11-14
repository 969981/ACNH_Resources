
void FUN_01930840(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined *local_98;
  long lStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_48;
  
  plVar7 = (long *)param_1[9];
  plVar5 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar5, plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x40))();
    plVar5 = (long *)PTR_DAT_04bb2698;
    plVar7 = (long *)param_1[9];
  }
  puVar1 = (uint *)(param_1 + 0xb);
  if (param_1[0xc] != 0) {
    if (0 < (int)*puVar1) {
      lVar12 = 0;
      do {
        plVar7 = *(long **)(param_1[0xc] + lVar12 * 8);
        (**(code **)*plVar7)(plVar7);
        lVar12 = lVar12 + 1;
        *plVar7 = param_1[0xd];
        param_1[0xd] = (long)plVar7;
      } while (lVar12 < (int)param_1[0xb]);
    }
    pvVar9 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar9 != (void *)0x0) {
      if (*plVar5 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*plVar5,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
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
  if ((int)uVar11 < 1) goto LAB_01930a48;
  lVar12 = *plVar5;
  if (lVar12 == 0) {
    pvVar9 = malloc((ulong)uVar11 * 0x98);
joined_r0x019309bc:
    if (pvVar9 != (void *)0x0) {
      param_1[0xd] = (long)pvVar9;
      if (1 < uVar11) {
        if (uVar4 == 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          plVar7 = (long *)((long)pvVar9 + 0x90);
          do {
            uVar10 = uVar10 + 2;
            plVar7[-0x12] = (long)plVar7;
            *plVar7 = (long)(plVar7 + 0x12);
            plVar7 = plVar7 + 0x24;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar10);
        }
        if ((uVar4 & 1) != 0) {
          plVar7 = (long *)((long)pvVar9 + uVar10 * 0x90);
          *plVar7 = (long)(plVar7 + 0x12);
        }
      }
      *(undefined8 *)((long)pvVar9 + (long)(int)(uVar4 * 0x12) * 8) = 0;
      param_1[0xe] = (long)pvVar9;
      pvVar9 = (void *)((long)pvVar9 + (ulong)uVar11 * 0x90);
      if (pvVar9 != (void *)0x0) {
        param_1[0xc] = (long)pvVar9;
        *(undefined4 *)(param_1 + 0xb) = 0;
        *(uint *)((long)param_1 + 0x5c) = uVar11;
      }
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_01930994:
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar11 * 0x98,8);
      goto joined_r0x019309bc;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar12 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    param_3 = (long *)*puVar3;
    if (param_3 != (long *)0x0) goto LAB_01930994;
  }
  uVar11 = *(uint *)(param_2 + 0x78);
LAB_01930a48:
  local_48 = (**(code **)(*param_1 + 0x60))(param_1,param_4);
  puVar6 = PTR_PTR_04bb2238;
  if (0 < (int)uVar11) {
    uVar10 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_90 = param_1[5];
      local_68 = (undefined4)param_1[8];
      uStack_80 = *(undefined8 *)(puVar6 + 8);
      local_98 = puVar2;
      local_88 = puVar2;
      local_78 = puVar2;
      uStack_70 = uStack_80;
      plVar7 = (long *)FUN_01930b60(puVar1,&local_98,&local_48);
      if ((long)uVar10 < (long)*(int *)(param_2 + 0x58)) {
        (**(code **)(*plVar7 + 0x98))
                  (plVar7,*(undefined8 *)(*(long *)(param_2 + 0x60) + uVar10 * 8));
      }
      uVar10 = uVar10 + 1;
      *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
    } while (uVar11 != uVar10);
  }
  uVar11 = *puVar1;
  if (0 < (int)uVar11) {
    uVar10 = 0;
    do {
      plVar7 = *(long **)(param_1[0xc] + uVar10 * 8);
      (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 4);
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  return;
}

