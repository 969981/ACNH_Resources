
void FUN_03313980(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  *(undefined8 *)(param_1 + 0x1ae0) = 0;
  if (*(long **)(param_1 + 0x1ad0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1ad0) + 0x18))();
  }
  if (*(long **)(param_1 + 0x1ac8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1ac8) + 0x18))();
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x1ac0);
  if (pvVar4 != (void *)0x0) {
    FUN_03286c9c(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      pvVar4 = *(void **)(param_1 + 0x1ab8);
      goto joined_r0x03313a00;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  pvVar4 = *(void **)(param_1 + 0x1ab8);
joined_r0x03313a00:
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
  pvVar4 = *(void **)(param_1 + 0x1ab0);
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
    pvVar4 = *(void **)(param_1 + lVar5 + 0x1aa8);
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
    bVar2 = lVar5 != -0x158;
    lVar5 = lVar5 + -8;
  } while (bVar2);
  memset((void *)(param_1 + 0x17f0),0,0x160);
  FUN_0331a35c(param_1);
  return;
}

