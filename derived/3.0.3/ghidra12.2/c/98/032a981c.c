
void FUN_032a981c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__ptr;
  
  param_1[10] = 0;
  puVar2 = PTR_DAT_04bb2698;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)0x0) {
LAB_032a98b4:
    puVar5 = (undefined8 *)param_1[1];
  }
  else {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
      goto LAB_032a98b4;
    }
    free(puVar5);
    puVar5 = (undefined8 *)param_1[1];
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_032c6840(puVar5);
    plVar4 = (long *)*puVar5;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = puVar5[1];
      lVar1 = puVar5[2];
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if ((undefined8 *)*plVar4 == puVar5) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar1;
      }
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(long *)puVar2 == 0) {
      free(puVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,puVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,puVar5);
      }
    }
  }
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    FUN_03286c9c(__ptr);
    if (*(long *)puVar2 == 0) {
      free(__ptr);
      lVar3 = *(long *)puVar2;
      goto joined_r0x032a99bc;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
    }
  }
  lVar3 = *(long *)puVar2;
joined_r0x032a99bc:
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032a99ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

