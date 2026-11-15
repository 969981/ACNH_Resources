
void FUN_02100edc(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__s;
  
  *param_1 = &PTR_FUN_04a745e8;
  FUN_02101870();
  pvVar5 = (void *)param_1[0x1a];
  DAT_053e7a78 = 1;
  *param_1 = &PTR_LAB_04a74640;
  puVar2 = PTR_DAT_04bb2698;
  DAT_053e7a7c = 0xffffffffffffffff;
  DAT_053e7a84 = 0xffffffffffffffff;
  DAT_053e7a8c = 0xffffffffffffffff;
  DAT_053e7a94 = 0xffffffffffffffff;
  DAT_053e7afc = 0xffffffffffffffff;
  DAT_053e7b04 = 0xffffffff;
  DAT_053e7a9c = 0xffffffffffffffff;
  DAT_053e7aa4 = 0xffffffffffffffff;
  DAT_053e7aac = 0xffffffffffffffff;
  DAT_053e7ab4 = 0xffffffffffffffff;
  DAT_053e7abc = 0xffffffffffffffff;
  DAT_053e7ac4 = 0xffffffffffffffff;
  DAT_053e7acc = 0xffffffffffffffff;
  DAT_053e7ad4 = 0xffffffffffffffff;
  DAT_053e7adc = 0xffffffffffffffff;
  DAT_053e7ae4 = 0xffffffffffffffff;
  DAT_053e7aec = 0xffffffffffffffff;
  DAT_053e7af4 = 0xffffffffffffffff;
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
  *param_1 = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 3) < 1) {
      iVar1 = *(int *)(param_1 + 3) + -1;
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

