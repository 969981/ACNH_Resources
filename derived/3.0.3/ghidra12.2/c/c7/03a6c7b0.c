
void FUN_03a6c7b0(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_04b704e8;
  uVar4 = (ulong)*(uint *)(param_1 + 0x42);
  puVar1 = (uint *)(param_1 + 0x42);
  if (0 < (int)*(uint *)(param_1 + 0x42)) {
    uVar5 = 0;
    do {
      if ((uVar5 < uVar4) && (plVar3 = *(long **)(param_1[0x43] + uVar5 * 8), plVar3 != (long *)0x0)
         ) {
        (**(code **)(*plVar3 + 0x10))();
        uVar4 = (ulong)*puVar1;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)uVar4);
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  puVar2 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0x43];
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
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x43] = 0;
  }
  pvVar6 = (void *)param_1[0x45];
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
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  *param_1 = &PTR_LAB_04b66628;
  return;
}

