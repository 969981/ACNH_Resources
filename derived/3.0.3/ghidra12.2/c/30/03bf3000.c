
void FUN_03bf3000(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
      pvVar3 = *(void **)(param_1 + 0x48);
      goto joined_r0x03bf304c;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x48);
joined_r0x03bf304c:
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
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x50);
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
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x44) = 0;
  if (plVar2 != (long *)0x0) {
    if (plVar2[3] != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
    if (plVar2[4] != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)(param_1 + 0x60) >> 1 & 1) != 0) &&
     (pvVar3 = *(void **)(param_1 + 0x10), pvVar3 != (void *)0x0)) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03bf3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

