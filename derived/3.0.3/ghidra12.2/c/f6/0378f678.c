
void FUN_0378f678(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined **local_50;
  long *plStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x28);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  plStack_48 = (long *)(param_1 + 0x18);
  local_40 = &LAB_0378f984;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b46f40;
  if (*plStack_48 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar3 = *(long *)puVar1;
  }
  else {
    FUN_0378f9a0(*plStack_48,&local_50);
    pvVar4 = *(void **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (pvVar4 == (void *)0x0) goto LAB_0378f764;
    lVar3 = *(long *)puVar1;
  }
  if (lVar3 == 0) {
    free(pvVar4);
  }
  else {
    plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
LAB_0378f764:
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

