
void FUN_01dda3a0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    uVar6 = 0;
    do {
      plVar7 = (long *)(lVar5 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8);
      plVar3 = *(long **)(*plVar7 + 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
        *(undefined8 *)(*plVar7 + 8) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 8);
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
    *(undefined8 *)(param_1 + 8) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

