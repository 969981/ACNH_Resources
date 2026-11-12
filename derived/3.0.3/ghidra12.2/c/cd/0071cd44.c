
void FUN_0071cd44(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_048ffc30;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar3 == (void *)0x0) {
LAB_0071cdac:
    pvVar3 = (void *)param_1[2];
  }
  else {
    if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x20))();
    }
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0071cdac;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[2];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x20))();
    }
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
  pvVar3 = (void *)param_1[3];
  if (pvVar3 == (void *)0x0) {
LAB_0071ce4c:
    pvVar3 = (void *)param_1[4];
  }
  else {
    if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x20))();
    }
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0071ce4c;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[4];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x20))();
    }
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
  pvVar3 = (void *)param_1[5];
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x20))();
    }
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      pvVar3 = (void *)param_1[6];
      goto joined_r0x0071cf44;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  pvVar3 = (void *)param_1[6];
joined_r0x0071cf44:
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x20))();
    }
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071cf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

