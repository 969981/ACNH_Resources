
void FUN_032dcdb0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  pvVar3 = (void *)param_1[0x3c];
  *param_1 = &PTR_FUN_04b1be30;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar3 == (void *)0x0) {
LAB_032dce20:
    pvVar3 = (void *)param_1[0x3b];
  }
  else {
    *(undefined8 *)((long)pvVar3 + 0x20) = 0;
    if (*(long **)((long)pvVar3 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x18) + 8))();
    }
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_032dce20;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[0x3b];
  }
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)((long)pvVar3 + 0x20) = 0;
    if (*(long **)((long)pvVar3 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x18) + 8))();
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
  FUN_038e1a84(param_1 + 0x33);
  FUN_03968cfc(param_1 + 0x22);
  plVar2 = param_1 + 0xd;
  *plVar2 = (long)(PTR_DAT_04bb24a8 + 0x10);
  FUN_038bbe20(plVar2);
  lVar4 = param_1[0xe];
  *plVar2 = (long)&PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_032dcf38;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar2);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[0xe] = 1;
LAB_032dcf38:
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  pvVar3 = (void *)param_1[10];
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
  param_1[9] = 0;
  return;
}

