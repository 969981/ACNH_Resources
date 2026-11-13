
void FUN_0118ee4c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__s;
  
  *param_1 = (long)&PTR_FUN_04984488;
  FUN_01198770();
  *param_1 = (long)&PTR_LAB_049844e0;
  FUN_0119a7e8();
  puVar2 = PTR_DAT_04bbb930;
  pvVar5 = (void *)param_1[0x1a];
  *PTR_DAT_04bbb928 = 1;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x58) = 0xffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
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

