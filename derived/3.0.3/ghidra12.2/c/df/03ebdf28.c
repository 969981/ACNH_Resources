
void FUN_03ebdf28(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined4 *__ptr;
  
  pvVar4 = (void *)param_1[0x19];
  *param_1 = &PTR_FUN_04ba5188;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  pvVar4 = (void *)param_1[0x1b];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  pvVar4 = (void *)param_1[0x1d];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  pvVar4 = (void *)param_1[10];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (param_1[0xc] != 0) {
    pvVar4 = (void *)(param_1[0xc] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  pvVar4 = (void *)param_1[0x13];
  if (pvVar4 == (void *)0x0) {
LAB_03ebe0c8:
    pvVar4 = (void *)param_1[0xe];
  }
  else {
    FUN_03ec451c(pvVar4);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
      goto LAB_03ebe0c8;
    }
    free(pvVar4);
    pvVar4 = (void *)param_1[0xe];
  }
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  __ptr = (undefined4 *)param_1[8];
  if (__ptr == (undefined4 *)0x0) {
LAB_03ebe1ec:
    plVar2 = (long *)param_1[5];
  }
  else {
    pvVar4 = *(void **)(__ptr + 2);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
      *(undefined8 *)(__ptr + 2) = 0;
      *__ptr = 0;
    }
    pvVar4 = *(void **)(__ptr + 8);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
      *(undefined8 *)(__ptr + 8) = 0;
      __ptr[6] = 0;
    }
    pvVar4 = *(void **)(__ptr + 0xe);
    if (pvVar4 == (void *)0x0) {
LAB_03ebe1c8:
      lVar3 = *(long *)puVar1;
    }
    else {
      if (*(long *)puVar1 != 0) {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
        goto LAB_03ebe1c8;
      }
      free(pvVar4);
      lVar3 = *(long *)puVar1;
    }
    if (lVar3 != 0) {
      plVar2 = (long *)FUN_038cb610(lVar3,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
      goto LAB_03ebe1ec;
    }
    free(__ptr);
    plVar2 = (long *)param_1[5];
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar4 = (void *)param_1[0x17];
  if (pvVar4 != (void *)0x0) {
    FUN_03ec4fcc(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      pvVar4 = (void *)param_1[0x22];
      goto joined_r0x03ebe278;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
  pvVar4 = (void *)param_1[0x22];
joined_r0x03ebe278:
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03ebe268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      return;
    }
  }
  return;
}

