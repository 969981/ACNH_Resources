
void FUN_02bf1fb8(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_58;
  undefined8 uStack_50;
  long local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  if (**(char **)(param_2 + 8) == '\0') {
    if ((*PTR_DAT_04bc5190 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bc5190);
      param_2 = PTR_DAT_04bc5188;
      if (iVar4 != 0) {
        *(undefined **)PTR_DAT_04bc5188 = puVar1 + 0x10;
        *(char **)(param_2 + 8) = "AppBodyCtrl";
        __cxa_guard_release(PTR_DAT_04bc5190);
      }
    }
    else {
      param_2 = PTR_DAT_04bc5188;
    }
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  uStack_50 = *(undefined8 *)(param_2 + 8);
  local_58 = puVar1 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  local_48 = param_1;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x250);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x250,8);
    }
  }
  FUN_030b9308(pvVar7,&local_58,param_3);
  plVar6 = (long *)((long)*(int *)(param_1 + 0x1dc) + (long)pvVar7);
  lVar9 = *(long *)(param_1 + 0x1c8);
  *(long **)(param_1 + 0x1c8) = plVar6;
  *plVar6 = lVar9;
  plVar6[1] = param_1 + 0x1c8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar6;
  }
  lVar9 = *(long *)puVar2;
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  if (lVar9 == 0) {
    puVar8 = malloc(0x58);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    puVar8 = (undefined8 *)0x0;
    if (plVar6 != (long *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x58,0xfffffff8);
    }
  }
  puVar8[10] = pvVar7;
  *puVar8 = &PTR_LAB_04aab4f8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = pvVar7;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = param_3;
  puVar8[8] = &PTR_LAB_04aab518;
  puVar8[9] = pvVar7;
  lVar9 = *(long *)(param_1 + 0x1f8);
  plVar6 = (long *)((long)*(int *)(param_1 + 0x20c) + (long)puVar8);
  *(long **)(param_1 + 0x1f8) = plVar6;
  *plVar6 = lVar9;
  plVar6[1] = param_1 + 0x1f8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar6;
  }
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
  return;
}

