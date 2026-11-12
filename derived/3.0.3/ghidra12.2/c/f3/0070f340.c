
void FUN_0070f340(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  
  *param_1 = &PTR_LAB_048feeb8;
  uVar4 = *(uint *)(param_1 + 0x59);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(param_1[0x5a] + (ulong)uVar1 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = *(uint *)(param_1 + 0x59);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0x5a];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x5b);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(param_1[0x5c] + (ulong)uVar1 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = *(uint *)(param_1 + 0x5b);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  pvVar6 = (void *)param_1[0x5c];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0;
  }
  return;
}

