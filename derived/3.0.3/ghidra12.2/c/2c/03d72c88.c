
void FUN_03d72c88(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_58;
  undefined8 uStack_50;
  long local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(char *)param_2[1] == '\0') {
    if ((DAT_05af81c8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_05af81c8);
      param_2 = &DAT_05af81b8;
      if (iVar4 != 0) {
        DAT_05af81b8 = puVar1 + 0x10;
        DAT_05af81c0 = "XLinkPartsCtrl";
        __cxa_guard_release(&DAT_05af81c8);
      }
    }
    else {
      param_2 = &DAT_05af81b8;
    }
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  uStack_50 = param_2[1];
  local_58 = puVar1 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  local_48 = param_1;
  if (lVar9 == 0) {
    puVar7 = malloc(0x1b8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1b8,8);
    }
  }
  FUN_03c5cce8(puVar7,&local_58,0);
  puVar7[0x36] = 0;
  *puVar7 = &PTR_LAB_04b91138;
  lVar9 = *(long *)(param_1 + 0x1c8);
  plVar6 = (long *)((long)*(int *)(param_1 + 0x1dc) + (long)puVar7);
  *(long **)(param_1 + 0x1c8) = plVar6;
  *plVar6 = lVar9;
  plVar6[1] = param_1 + 0x1c8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar6;
  }
  lVar9 = *(long *)puVar2;
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  if (lVar9 == 0) {
    puVar8 = malloc(0x48);
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
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x48,0xfffffff8);
    }
  }
  *puVar8 = &PTR_LAB_04b91990;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = puVar7;
  puVar8[8] = &PTR_LAB_04b919b0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = param_3;
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

