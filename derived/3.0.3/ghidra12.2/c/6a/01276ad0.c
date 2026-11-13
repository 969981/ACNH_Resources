
void FUN_01276ad0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x1e0);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  FUN_01278b88();
  *PTR_DAT_04bbbdd8 = 1;
  puVar2 = PTR_DAT_04bbbde0;
  pvVar4 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
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
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1b8);
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
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
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
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}

