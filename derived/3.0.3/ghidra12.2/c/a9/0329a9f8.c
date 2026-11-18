
void FUN_0329a9f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  if ((long *)param_1[0x163] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x163] + 8))();
  }
  puVar1 = param_1 + 0x15c;
  FUN_03292080(puVar1);
  puVar2 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0x160];
  if (pvVar6 != (void *)0x0) {
    FUN_032ae0c8(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
      pvVar6 = (void *)param_1[0x15f];
      goto joined_r0x0329aa6c;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
    }
  }
  pvVar6 = (void *)param_1[0x15f];
joined_r0x0329aa6c:
  if (pvVar6 != (void *)0x0) {
    FUN_032903a0(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  plVar3 = (long *)*puVar1;
  if (plVar3 != (long *)0x0) {
    lVar4 = param_1[0x15e];
    lVar5 = param_1[0x15d];
    param_1[0x15e] = 0;
    *puVar1 = 0;
    param_1[0x15d] = 0;
    if ((undefined8 *)*plVar3 == puVar1) {
      *plVar3 = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar4;
    }
  }
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *puVar1 = 0;
  FUN_032ae0c8(param_1 + 0x122);
  FUN_032c1b04(param_1 + 0xde);
  FUN_032c1b04(param_1 + 0x9a);
  FUN_032c1b04(param_1 + 0x56);
  FUN_032c1b04(param_1 + 0x12);
  puVar1 = param_1 + 7;
  FUN_032c6840(puVar1);
  plVar3 = (long *)param_1[7];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  if (plVar3 != (long *)0x0) {
    lVar4 = param_1[8];
    lVar5 = param_1[9];
    param_1[9] = 0;
    *puVar1 = 0;
    param_1[8] = 0;
    if ((undefined8 *)*plVar3 == puVar1) {
      *plVar3 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar5;
    }
  }
  pvVar6 = (void *)param_1[5];
  param_1[8] = 0;
  param_1[9] = 0;
  *puVar1 = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_032d0688(pvVar6);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

