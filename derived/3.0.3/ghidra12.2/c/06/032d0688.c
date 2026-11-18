
void FUN_032d0688(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined **local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0x1ee];
  if (pvVar4 != (void *)0x0) {
    lVar5 = *(long *)((long)pvVar4 + 0x130);
    if (lVar5 != 0) {
      plVar3 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar5);
      (**(code **)(*plVar3 + 0x38))(plVar3,lVar5);
    }
    FUN_003490c0(pvVar4);
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar4);
      pvVar4 = (void *)param_1[0x1ed];
      goto joined_r0x032d0704;
    }
    plVar3 = (long *)FUN_038cb610(lVar5,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  pvVar4 = (void *)param_1[0x1ed];
joined_r0x032d0704:
  if (pvVar4 != (void *)0x0) {
    FUN_0034f98c((long)pvVar4 + 0xe0);
    FUN_0034f6d0(pvVar4);
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar5,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  param_1[0x1ec] = 0;
  if ((undefined8 *)param_1[0x1e6] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x1e6])();
  }
  param_1[0x21] = &PTR_LAB_04b1b5b8;
  puStack_48 = param_1 + 0x22;
  local_40 = &LAB_032d22f8;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b1b608;
  if (param_1[0x22] != 0) {
    FUN_032d2300(param_1[0x22],&local_50);
  }
  param_1[0x1f] = 0;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x10))();
  }
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 0x10))();
  }
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    lVar5 = param_1[1];
    lVar1 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if ((undefined8 *)*plVar3 == param_1) {
      *plVar3 = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar1;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

