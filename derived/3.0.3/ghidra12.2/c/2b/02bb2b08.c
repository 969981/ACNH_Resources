
undefined8 * FUN_02bb2b08(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  if (**(char **)(param_2 + 8) == '\0') {
    if ((*PTR_DAT_04bc4e00 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e00);
      param_2 = PTR_DAT_04bc4df8;
      if (iVar4 != 0) {
        *(undefined **)PTR_DAT_04bc4df8 = puVar1 + 0x10;
        *(char **)(param_2 + 8) = "AppUniteBtnCtrl";
        __cxa_guard_release(PTR_DAT_04bc4e00);
      }
    }
    else {
      param_2 = PTR_DAT_04bc4df8;
    }
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  local_48 = *(undefined8 *)(param_1 + 0x50);
  local_58 = puVar1 + 0x10;
  uStack_50 = *(undefined8 *)(param_2 + 8);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x408);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x408,8);
    }
  }
  FUN_030bed84(pvVar7,&local_58,param_3);
  plVar9 = (long *)(param_1 + 0x38);
  lVar10 = *plVar9;
  plVar6 = (long *)((long)*(int *)(param_1 + 0x4c) + (long)pvVar7);
  *plVar9 = (long)plVar6;
  *plVar6 = lVar10;
  plVar6[1] = (long)plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar6;
  }
  lVar10 = *(long *)puVar2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  *(long *)((long)pvVar7 + 0x30) = param_1;
  if (lVar10 == 0) {
    puVar8 = malloc(0x58);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x58,0xfffffff8);
    }
  }
  puVar8[10] = pvVar7;
  *puVar8 = &PTR_LAB_04aa71f8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = pvVar7;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = param_3;
  puVar8[8] = &PTR_LAB_04aa7218;
  puVar8[9] = pvVar7;
  plVar9 = (long *)(param_1 + 0x78);
  lVar10 = *plVar9;
  plVar6 = (long *)((long)*(int *)(param_1 + 0x8c) + (long)puVar8);
  *plVar9 = (long)plVar6;
  *plVar6 = lVar10;
  plVar6[1] = (long)plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar6;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if ((*(byte *)(param_3 + 0x2c) & 1) == 0) {
    FUN_03c68fb0(puVar8);
  }
  return puVar8;
}

