
void FUN_029d5d34(undefined4 *param_1)

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
  pvVar4 = *(void **)(param_1 + 0x18);
  if (pvVar4 != (void *)0x0) {
    plStack_58 = (long *)(param_1 + 0x14);
    local_50 = &LAB_029d6288;
    uStack_48 = 0;
    local_60 = &PTR_LAB_04a986c8;
    if (*plStack_58 == 0) {
      param_1[0x1a] = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      lVar2 = *(long *)puVar1;
      if (lVar2 != 0) goto LAB_029d5da8;
LAB_029d5ddc:
      free(pvVar4);
    }
    else {
      FUN_029d62a0(*plStack_58,&local_60);
      pvVar4 = *(void **)(param_1 + 0x18);
      param_1[0x1a] = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      if (pvVar4 != (void *)0x0) {
        lVar2 = *(long *)puVar1;
        if (lVar2 == 0) goto LAB_029d5ddc;
LAB_029d5da8:
        plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    param_1[0x1b] = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1e);
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
    *(undefined8 *)(param_1 + 0x1e) = 0;
    param_1[0x1c] = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xc);
  if (pvVar4 == (void *)0x0) goto LAB_029d5eb0;
  plStack_58 = (long *)(param_1 + 8);
  local_50 = &LAB_029d6288;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04a986c8;
  if (*plStack_58 == 0) {
    param_1[0xe] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    lVar2 = *(long *)puVar1;
    if (lVar2 != 0) goto LAB_029d5e6c;
LAB_029d5ea0:
    free(pvVar4);
  }
  else {
    FUN_029d62a0(*plStack_58,&local_60);
    pvVar4 = *(void **)(param_1 + 0xc);
    param_1[0xe] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    if (pvVar4 != (void *)0x0) {
      lVar2 = *(long *)puVar1;
      if (lVar2 == 0) goto LAB_029d5ea0;
LAB_029d5e6c:
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
LAB_029d5eb0:
  pvVar4 = *(void **)(param_1 + 0x12);
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
    *(undefined8 *)(param_1 + 0x12) = 0;
    param_1[0x10] = 0;
  }
  pvVar4 = *(void **)(param_1 + 6);
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
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[4] = 0;
  }
  pvVar4 = *(void **)(param_1 + 2);
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
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  return;
}

