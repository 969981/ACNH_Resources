
void FUN_036a1974(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__s;
  
  *param_1 = &PTR_FUN_04b438f8;
  FUN_036a42c0();
  *param_1 = &PTR_LAB_04b43950;
  FUN_036a7078();
  puVar2 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x1a];
  DAT_05ab0f10 = 1;
  DAT_05ab0f14 = 0xffffffffffffffff;
  DAT_05ab0f1c = 0xffffffffffffffff;
  DAT_05ab0f24 = 0xffffffffffffffff;
  DAT_05ab0f2c = 0xffffffffffffffff;
  DAT_05ab0ff4 = 0xffffffffffffffff;
  DAT_05ab0ffc = 0xffffffff;
  DAT_05ab0f34 = 0xffffffffffffffff;
  DAT_05ab0f3c = 0xffffffffffffffff;
  DAT_05ab0f44 = 0xffffffffffffffff;
  DAT_05ab0f4c = 0xffffffffffffffff;
  DAT_05ab0f54 = 0xffffffffffffffff;
  DAT_05ab0f5c = 0xffffffffffffffff;
  DAT_05ab0f64 = 0xffffffffffffffff;
  DAT_05ab0f6c = 0xffffffffffffffff;
  DAT_05ab0f74 = 0xffffffffffffffff;
  DAT_05ab0f7c = 0xffffffffffffffff;
  DAT_05ab0f84 = 0xffffffffffffffff;
  DAT_05ab0f8c = 0xffffffffffffffff;
  DAT_05ab0f94 = 0xffffffffffffffff;
  DAT_05ab0f9c = 0xffffffffffffffff;
  DAT_05ab0fa4 = 0xffffffffffffffff;
  DAT_05ab0fac = 0xffffffffffffffff;
  DAT_05ab0fb4 = 0xffffffffffffffff;
  DAT_05ab0fbc = 0xffffffffffffffff;
  DAT_05ab0fc4 = 0xffffffffffffffff;
  DAT_05ab0fcc = 0xffffffffffffffff;
  DAT_05ab0fd4 = 0xffffffffffffffff;
  DAT_05ab0fdc = 0xffffffffffffffff;
  DAT_05ab0fe4 = 0xffffffffffffffff;
  DAT_05ab0fec = 0xffffffffffffffff;
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

