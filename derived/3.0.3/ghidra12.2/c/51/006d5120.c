
void FUN_006d5120(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  undefined *local_70;
  char *pcStack_68;
  
  *(undefined4 *)(param_1 + 2) = 0x20;
  puVar6 = PTR_DAT_04bb2a08;
  pvVar9 = (void *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = (long)pvVar9;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar13 = (void *)param_2[1];
  if (pvVar9 != pvVar13) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[1] + lVar12) == '\0') goto LAB_006d51e0;
      lVar14 = param_2[1] + lVar12;
      if (*(char *)(lVar14 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_006d51e0;
      }
      if (*(char *)(lVar14 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_006d51e0;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_006d51e0:
    iVar2 = (int)lVar12;
    if ((int)param_1[2] <= (int)lVar12) {
      iVar2 = (int)param_1[2] + -1;
    }
    memcpy(pvVar9,pvVar13,(long)iVar2);
    *(undefined1 *)((long)pvVar9 + (long)iVar2) = 0;
  }
  pvVar9 = (void *)((long)param_1 + 0x7c);
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *param_1 = (long)puVar1;
  lVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar12;
  lVar12 = param_2[9];
  lVar15 = param_2[10];
  lVar14 = param_2[0xb];
  lVar8 = param_2[0xc];
  *(undefined4 *)(param_1 + 0xf) = 0x20;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  param_1[0xd] = (long)(puVar6 + 0x10);
  param_1[0xe] = (long)pvVar9;
  param_1[0xb] = lVar14;
  param_1[0xc] = lVar8;
  param_1[9] = lVar12;
  param_1[10] = lVar15;
  plVar7 = param_2 + 0xd;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar13 = (void *)param_2[0xe];
  if (pvVar9 != pvVar13) {
    (**(code **)(param_2[0xd] + 0x18))(plVar7);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[0xe] + lVar12) == '\0') goto LAB_006d52bc;
      lVar14 = param_2[0xe] + lVar12;
      if (*(char *)(lVar14 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_006d52bc;
      }
      if (*(char *)(lVar14 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_006d52bc;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_006d52bc:
    iVar2 = (int)lVar12;
    if ((int)param_1[0xf] <= (int)lVar12) {
      iVar2 = (int)param_1[0xf] + -1;
    }
    memcpy(pvVar9,pvVar13,(long)iVar2);
    *(undefined1 *)((long)pvVar9 + (long)iVar2) = 0;
  }
  param_1[0xd] = (long)puVar1;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar6 = PTR_DAT_04bb2698;
  lVar12 = param_1[0xb];
  param_1[0x14] = lVar12;
  param_1[0x15] = 0;
  if (lVar12 == 0) {
    lVar14 = *(long *)puVar6;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar3 = (long *)(lVar14 + 8);
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + 0xa8);
    }
    lVar12 = *plVar3;
    param_1[0x14] = lVar12;
  }
  puVar1 = PTR_DAT_04bb2020;
  if (DAT_04c87ea8 == 0) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "ServiceAllocator";
    DAT_04c87ea8 = FUN_038c6d48(FUN_00100410,&local_70,lVar12,0x20,1,1);
    thunk_FUN_006916a0(&LAB_006d5880,&LAB_006d58a4);
    lVar12 = param_1[0x14];
  }
  param_1[0x16] = param_1[0xc];
  local_70 = puVar1 + 0x10;
  pcStack_68 = "ServiceStaticWork";
  lVar12 = FUN_038c6d48(param_1[0xc] + 0x400,&local_70,lVar12,0x20,1,0);
  param_1[0x15] = lVar12;
  (**(code **)(param_2[0xd] + 0x18))(plVar7);
  thunk_FUN_00693250(param_2[0xe]);
  lVar14 = param_1[10];
  uVar5 = *(undefined4 *)((long)param_1 + 0x44);
  lVar15 = *(long *)puVar6;
  lVar12 = param_1[7];
  uVar4 = *(undefined4 *)((long)param_1 + 0x3c);
  if (lVar15 == 0) {
    pvVar9 = malloc(0x208);
  }
  else {
    plVar7 = (long *)param_1[0x14];
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x208,8);
  }
  local_70 = puVar1 + 0x10;
  pcStack_68 = "EnsStaticService";
  FUN_006d4cf4(pvVar9,&local_70,lVar14,(int)lVar12,uVar5,uVar4);
  param_1[0x17] = (long)pvVar9;
  uVar10 = (**(code **)(*(long *)param_1[0x15] + 0x80))((long *)param_1[0x15],8);
  uVar11 = (**(code **)(*(long *)param_1[0x15] + 0x30))((long *)param_1[0x15],uVar10,8);
  FUN_0069162c(param_1[0x17] + 0x178,uVar11,uVar10);
  lVar12 = *(long *)puVar6;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x90);
  }
  else {
    plVar7 = (long *)param_1[0x14];
    if (plVar7 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar12 + 8);
      if (lVar14 != 0) {
        plVar7 = (long *)(lVar14 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_006d5518;
      }
    }
    pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x90,8);
  }
LAB_006d5518:
  *(long *)((long)pvVar9 + 0x20) = (long)pvVar9 + 0x18;
  *(undefined8 *)((long)pvVar9 + 0x28) = 0xffffffff00000000;
  *(undefined8 *)((long)pvVar9 + 0x10) = 0xffffffff00000000;
  *(long *)((long)pvVar9 + 0x18) = (long)pvVar9 + 0x18;
  *(long *)((long)pvVar9 + 0x30) = (long)pvVar9 + 0x30;
  *(void **)pvVar9 = pvVar9;
  *(void **)((long)pvVar9 + 8) = pvVar9;
  *(long *)((long)pvVar9 + 0x38) = (long)pvVar9 + 0x30;
  *(undefined8 *)((long)pvVar9 + 0x40) = 0xffffffff00000000;
  FUN_038e18e4((long)pvVar9 + 0x48);
  *(undefined1 *)((long)pvVar9 + 0x88) = 0;
  *(undefined4 *)((long)pvVar9 + 0x14) = 0;
  *(undefined4 *)((long)pvVar9 + 0x2c) = 0;
  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
  param_1[0x1a] = (long)pvVar9;
  FUN_006d3cb4(pvVar9);
  return;
}

