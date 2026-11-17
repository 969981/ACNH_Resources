
void FUN_02ba215c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__s;
  
  *param_1 = (long)&PTR_FUN_04aa6778;
  pvVar5 = DAT_05642b20;
  puVar2 = PTR_DAT_04bb2698;
  if (DAT_05642b20 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_05642b20);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_05642b20);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    DAT_05642b20 = (void *)0x0;
    DAT_05642b18 = 0;
  }
  pvVar5 = (void *)param_1[0x1a];
  DAT_05642a20 = 1;
  DAT_05642a24 = 0xffffffffffffffff;
  DAT_05642a2c = 0xffffffffffffffff;
  DAT_05642a34 = 0xffffffffffffffff;
  DAT_05642a3c = 0xffffffffffffffff;
  DAT_05642b04 = 0xffffffff;
  param_1[0x16] = 0;
  DAT_05642a44 = 0xffffffffffffffff;
  DAT_05642a4c = 0xffffffffffffffff;
  DAT_05642a54 = 0xffffffffffffffff;
  DAT_05642a5c = 0xffffffffffffffff;
  DAT_05642a64 = 0xffffffffffffffff;
  DAT_05642a6c = 0xffffffffffffffff;
  DAT_05642a74 = 0xffffffffffffffff;
  DAT_05642a7c = 0xffffffffffffffff;
  DAT_05642a84 = 0xffffffffffffffff;
  DAT_05642a8c = 0xffffffffffffffff;
  DAT_05642a94 = 0xffffffffffffffff;
  DAT_05642a9c = 0xffffffffffffffff;
  DAT_05642aa4 = 0xffffffffffffffff;
  DAT_05642aac = 0xffffffffffffffff;
  DAT_05642ab4 = 0xffffffffffffffff;
  DAT_05642abc = 0xffffffffffffffff;
  DAT_05642ac4 = 0xffffffffffffffff;
  DAT_05642acc = 0xffffffffffffffff;
  DAT_05642ad4 = 0xffffffffffffffff;
  DAT_05642adc = 0xffffffffffffffff;
  DAT_05642ae4 = 0xffffffffffffffff;
  DAT_05642aec = 0xffffffffffffffff;
  DAT_05642af4 = 0xffffffffffffffff;
  DAT_05642afc = 0xffffffffffffffff;
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
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}

