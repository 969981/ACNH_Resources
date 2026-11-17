
void FUN_0319e53c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  
  if ((long *)param_1[0x6a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6a] + 8))();
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[0x6b];
  if (pvVar3 == (void *)0x0) {
LAB_0319e5f8:
    plVar4 = (long *)param_1[0x6c];
  }
  else {
    FUN_03f45838((long)pvVar3 + 0x48);
    FUN_03f45838((long)pvVar3 + 0x48);
    plVar4 = *(long **)((long)pvVar3 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
      iVar1 = *(int *)((long)pvVar3 + 0x54) + -1;
      if (((*(int *)((long)pvVar3 + 0x54) < 1) ||
          (*(int *)((long)pvVar3 + 0x54) = iVar1, iVar1 == 0)) &&
         (*(long *)((long)pvVar3 + 0x58) != 0)) {
        FUN_03f44508();
        *(undefined8 *)((long)pvVar3 + 0x58) = 0;
      }
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    if (*(long *)puVar2 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
      }
      goto LAB_0319e5f8;
    }
    free(pvVar3);
    plVar4 = (long *)param_1[0x6c];
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  pvVar3 = (void *)param_1[0x6d];
  if (pvVar3 != (void *)0x0) {
    FUN_03f45838((long)pvVar3 + 0x48);
    FUN_03f45838((long)pvVar3 + 0x48);
    plVar4 = *(long **)((long)pvVar3 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
      iVar1 = *(int *)((long)pvVar3 + 0x54) + -1;
      if (((*(int *)((long)pvVar3 + 0x54) < 1) ||
          (*(int *)((long)pvVar3 + 0x54) = iVar1, iVar1 == 0)) &&
         (*(long *)((long)pvVar3 + 0x58) != 0)) {
        FUN_03f44508();
        *(undefined8 *)((long)pvVar3 + 0x58) = 0;
      }
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    if (*(long *)puVar2 == 0) {
      free(pvVar3);
      plVar4 = (long *)param_1[0x6e];
      goto joined_r0x0319e69c;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
    }
  }
  plVar4 = (long *)param_1[0x6e];
joined_r0x0319e69c:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  pvVar3 = (void *)param_1[0x6f];
  if (pvVar3 != (void *)0x0) {
    FUN_03f45838((long)pvVar3 + 0x48);
    FUN_03f45838((long)pvVar3 + 0x48);
    plVar4 = *(long **)((long)pvVar3 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
      iVar1 = *(int *)((long)pvVar3 + 0x54) + -1;
      if (((*(int *)((long)pvVar3 + 0x54) < 1) ||
          (*(int *)((long)pvVar3 + 0x54) = iVar1, iVar1 == 0)) &&
         (*(long *)((long)pvVar3 + 0x58) != 0)) {
        FUN_03f44508();
        *(undefined8 *)((long)pvVar3 + 0x58) = 0;
      }
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    if (*(long *)puVar2 == 0) {
      free(pvVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
      }
    }
  }
  pvVar3 = (void *)param_1[0x5f];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
      }
    }
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
  }
  if ((param_1[0x4b] != 0) && ((long *)param_1[0x4c] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x4c] + 8))();
  }
  FUN_038fd0e0(param_1 + 0x54);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

