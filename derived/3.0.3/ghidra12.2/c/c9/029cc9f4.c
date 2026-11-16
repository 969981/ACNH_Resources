
void FUN_029cc9f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined **local_60;
  long *plStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb2698;
  plVar3 = (long *)(param_1 + 0xcc40);
  pvVar4 = *(void **)(param_1 + 0xcc50);
  if (pvVar4 == (void *)0x0) goto LAB_029ccab8;
  local_50 = &LAB_029cd96c;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04a98478;
  plStack_58 = plVar3;
  if (*plVar3 == 0) {
    *(undefined4 *)(param_1 + 0xcc58) = 0;
    *plVar3 = 0;
    lVar2 = *(long *)puVar1;
    if (lVar2 != 0) goto LAB_029cca70;
LAB_029ccaa8:
    free(pvVar4);
  }
  else {
    FUN_029cd980(*plVar3,&local_60);
    pvVar4 = *(void **)(param_1 + 0xcc50);
    *(undefined4 *)(param_1 + 0xcc58) = 0;
    *plVar3 = 0;
    if (pvVar4 != (void *)0x0) {
      lVar2 = *(long *)puVar1;
      if (lVar2 == 0) goto LAB_029ccaa8;
LAB_029cca70:
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xcc5c) = 0;
  *(undefined8 *)(param_1 + 0xcc48) = 0;
  *(undefined8 *)(param_1 + 0xcc50) = 0;
LAB_029ccab8:
  *(undefined8 *)(param_1 + 0x3ec) = 0;
  if (*(long *)(param_1 + 0x3d8) != 0) {
    pvVar4 = (void *)(*(long *)(param_1 + 0x3d8) + -0x10);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

