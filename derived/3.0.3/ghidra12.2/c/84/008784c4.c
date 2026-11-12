
void FUN_008784c4(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__s;
  
  *param_1 = (long)&PTR_FUN_0491e640;
  FUN_0089d4a0();
  puVar2 = PTR_DAT_04bb57e0;
  *param_1 = (long)&PTR_LAB_0491e698;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bb57e8;
  pvVar5 = (void *)param_1[0x1a];
  *(undefined8 *)PTR_DAT_04bb57e8 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x20) = 0xffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x16] = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar5 = (void *)param_1[0x37];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar5 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
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
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}

