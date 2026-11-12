
undefined8 FUN_006d43c4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  
  puVar4 = PTR_DAT_04bb2698;
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x208);
  }
  else {
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_006d4458;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x208,8);
  }
LAB_006d4458:
  puVar3 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "EnsParallel_Main";
  FUN_006d4cf4(pvVar7,&local_60,uVar8,uVar1,uVar2,0);
  *(void **)(param_1 + 200) = pvVar7;
  FUN_0069162c((long)pvVar7 + 0x178,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8))
  ;
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x208);
  }
  else {
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_006d4508;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x208,8);
  }
LAB_006d4508:
  local_60 = puVar3 + 0x10;
  pcStack_58 = "EnsParallel_Sub1";
  FUN_006d4cf4(pvVar7,&local_60,uVar8,uVar1,uVar2,1);
  *(void **)(param_1 + 0xd0) = pvVar7;
  FUN_0069162c((long)pvVar7 + 0x178,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xa8))
  ;
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x208);
  }
  else {
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_006d45b4;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x208,8);
  }
LAB_006d45b4:
  local_60 = puVar3 + 0x10;
  pcStack_58 = "EnsParallel_Sub2";
  FUN_006d4cf4(pvVar7,&local_60,uVar8,uVar1,uVar2,2);
  *(void **)(param_1 + 0xd8) = pvVar7;
  FUN_0069162c((long)pvVar7 + 0x178,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xa8))
  ;
  return 1;
}

