
void FUN_02ff2d40(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0xa80);
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
    *(undefined8 *)(param_1 + 0xa80) = 0;
    *(undefined4 *)(param_1 + 0xa78) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xa68);
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
    *(undefined8 *)(param_1 + 0xa68) = 0;
    *(undefined4 *)(param_1 + 0xa60) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xa50);
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
    *(undefined8 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa48) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xa38);
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
    *(undefined8 *)(param_1 + 0xa38) = 0;
    *(undefined4 *)(param_1 + 0xa30) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x268);
  *(undefined ***)(param_1 + 0x8c8) = &PTR_LAB_04af0a80;
  *(undefined ***)(param_1 + 0x870) = &PTR_LAB_04af0340;
  *(undefined ***)(param_1 + 0x840) = &PTR_LAB_04af05c0;
  *(undefined ***)(param_1 + 0x810) = &PTR_LAB_04af0500;
  *(undefined ***)(param_1 + 0x770) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x6d0) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x630) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x590) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x4f0) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x450) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x3b0) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x310) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x270) = &PTR_LAB_04af0280;
  *(undefined ***)(param_1 + 0x230) = &PTR_LAB_04af0400;
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
  }
  pvVar3 = *(void **)(param_1 + 0x228);
  *(undefined ***)(param_1 + 0x1f0) = &PTR_LAB_04af0400;
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
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_LAB_04af0400;
  pvVar3 = *(void **)(param_1 + 0x1e8);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02ff2f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

