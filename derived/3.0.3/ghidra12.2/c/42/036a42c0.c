
void FUN_036a42c0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x1e0);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  FUN_036a7078();
  pvVar3 = *(void **)(param_1 + 0xd0);
  DAT_05ab0f10 = 1;
  DAT_05ab0f14 = 0xffffffffffffffff;
  DAT_05ab0f1c = 0xffffffffffffffff;
  DAT_05ab0f24 = 0xffffffffffffffff;
  DAT_05ab0f2c = 0xffffffffffffffff;
  DAT_05ab0ff4 = 0xffffffffffffffff;
  DAT_05ab0ffc = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
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
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1b8);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

