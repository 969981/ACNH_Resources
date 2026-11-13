
void FUN_0127dc14(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__s;
  
  *param_1 = (long)&PTR_FUN_04989ca0;
  FUN_0127fb1c();
  puVar2 = PTR_DAT_04bbbe68;
  pvVar6 = (void *)param_1[0x1a];
  *PTR_DAT_04bbbe60 = 1;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x16] = 0;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar6 = (void *)param_1[0x37];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar6 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  __s = (undefined8 *)param_1[2];
  *param_1 = (long)(PTR_DAT_04bcb440 + 0x10);
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if ((int)param_1[3] < 1) {
      iVar1 = (int)param_1[3] + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  uVar3 = FUN_006bd550(param_1[2],0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  lVar5 = *(long *)puVar2;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (lVar5 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar5,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0127ddd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

