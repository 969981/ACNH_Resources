
long * FUN_02bf1d10(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  void *__dest;
  void *__src;
  undefined *local_b0;
  long local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  uint local_84;
  long local_80;
  long lStack_78;
  long *local_70;
  long *plStack_68;
  long *local_60;
  long lStack_58;
  long *local_50;
  undefined8 *puStack_48;
  
  __dest = (void *)param_1[9];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_02bf1db0;
      lVar2 = param_2[1] + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02bf1db0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02bf1db0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02bf1db0:
    iVar3 = (int)lVar7;
    if ((int)param_1[10] <= (int)lVar7) {
      iVar3 = (int)param_1[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  local_84 = *(uint *)(param_1 + 0x2b);
  param_1[0x2c] = 0;
  if ((local_84 & 1) == 0) {
    local_80 = 0;
  }
  else {
    local_80 = (**(code **)(*param_1 + 0x78))(param_1);
    local_84 = *(uint *)(param_1 + 0x2b);
    param_1[0x2c] = local_80;
  }
  puVar4 = PTR_DAT_04bb2020;
  local_a8 = param_1[9];
  lStack_78 = param_1[0x2d];
  local_88 = 0;
  local_98 = &DAT_0407ebb1;
  uStack_90 = 0;
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  puStack_a0 = local_b0;
  plVar5 = (long *)FUN_02bf1fb8(param_1[1],param_1 + 8,&local_b0);
  if (param_1[0x2c] != 0) {
    FUN_03d72b50(param_1[0x2c],param_2);
  }
  if (param_1[7] != 0) {
    plVar5[6] = param_1[7];
  }
  plVar1 = (long *)(puVar4 + 0x10);
  plStack_68 = &DAT_0407ebb1;
  local_70 = plVar1;
  FUN_03c684c0(plVar5,param_1 + 8,&local_70,param_1 + 0x2e);
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 != (undefined8 *)0x0) {
    lStack_58 = param_1[9];
    plStack_68 = plVar5 + 8;
    puStack_48 = &DAT_0407ebb1;
    local_70 = plVar5;
    local_60 = plVar1;
    local_50 = plVar1;
    (**(code **)*puVar6)(puVar6,&local_70);
  }
  plVar8 = (long *)plVar5[3];
  lVar7 = param_1[1];
  FUN_030b9520(plVar8,plVar5,plVar5[7]);
  FUN_03c5d720(plVar5[3]);
  plVar5[3] = 0;
  plVar1 = (long *)((long)*(int *)(lVar7 + 0x20c) + (long)plVar5);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(lVar7 + 0x208) = *(int *)(lVar7 + 0x208) + -1;
  (**(code **)(*plVar5 + 8))(plVar5);
  FUN_03d677b0(param_1,plVar8);
  puVar6 = (undefined8 *)param_1[3];
  if (puVar6 != (undefined8 *)0x0) {
    local_60 = (long *)param_1[0x2c];
    local_70 = plVar8;
    plStack_68 = param_1;
    (**(code **)*puVar6)(puVar6,&local_70);
  }
  if (param_1[0x2c] != 0) {
    FUN_03d72e88(param_1[0x2c],plVar8);
    puVar6 = (undefined8 *)param_1[4];
    if (puVar6 != (undefined8 *)0x0) {
      local_60 = (long *)param_1[0x2c];
      local_70 = plVar8;
      plStack_68 = param_1;
      (**(code **)*puVar6)(puVar6,&local_70);
    }
    if ((long *)param_1[0x2c] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x2c] + 0x18))();
    }
    param_1[0x2c] = 0;
  }
  return plVar8;
}

