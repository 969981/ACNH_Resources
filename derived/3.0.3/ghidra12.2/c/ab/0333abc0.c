
void FUN_0333abc0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  *(undefined8 *)(param_1 + 0x1b80) = 0;
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x1b78);
  if (pvVar4 == (void *)0x0) {
LAB_0333ac14:
    pvVar4 = *(void **)(param_1 + 0x1b70);
  }
  else {
    FUN_03286c9c(pvVar4);
    if (*(long *)puVar1 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
      goto LAB_0333ac14;
    }
    free(pvVar4);
    pvVar4 = *(void **)(param_1 + 0x1b70);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_03286c9c(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  pvVar4 = *(void **)(param_1 + 0x1b68);
  if (pvVar4 != (void *)0x0) {
    FUN_03286c9c(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      pvVar4 = *(void **)(param_1 + 0x1b60);
      goto joined_r0x0333aca0;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  pvVar4 = *(void **)(param_1 + 0x1b60);
joined_r0x0333aca0:
  if (pvVar4 != (void *)0x0) {
    FUN_03286c9c(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  lVar5 = 0;
  do {
    pvVar4 = *(void **)(param_1 + lVar5 + 7000);
    if (pvVar4 != (void *)0x0) {
      if (*(long **)((long)pvVar4 + 0x5a0) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 0x5a0) + 8))();
      }
      FUN_03286c9c(pvVar4);
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    bVar2 = lVar5 != -0x1b0;
    lVar5 = lVar5 + -8;
  } while (bVar2);
  memset((void *)(param_1 + 0x17f0),0,0x1b8);
  FUN_0331a35c(param_1);
  return;
}

