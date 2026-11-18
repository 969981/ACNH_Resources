
void FUN_032ce8d4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  FUN_038e1a84(param_1 + 0x598);
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x580);
  if (pvVar3 == (void *)0x0) {
LAB_032ce928:
    plVar2 = *(long **)(param_1 + 0x578);
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_032ce928;
    }
    free(pvVar3);
    plVar2 = *(long **)(param_1 + 0x578);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long **)(param_1 + 0x570) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x570) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  FUN_038e1a84(param_1 + 0x520);
  pvVar3 = *(void **)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x518) = 0;
  if (pvVar3 == (void *)0x0) {
LAB_032ce9bc:
    pvVar3 = *(void **)(param_1 + 0x508);
  }
  else {
    lVar4 = *(long *)((long)pvVar3 + 0x130);
    if (lVar4 != 0) {
      plVar2 = (long *)FUN_038cb610(*(undefined8 *)puVar1,lVar4);
      (**(code **)(*plVar2 + 0x38))(plVar2,lVar4);
    }
    FUN_003490c0(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_032ce9bc;
    }
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x508);
  }
  if (pvVar3 != (void *)0x0) {
    lVar4 = *(long *)((long)pvVar3 + 0x130);
    if (lVar4 != 0) {
      plVar2 = (long *)FUN_038cb610(*(undefined8 *)puVar1,lVar4);
      (**(code **)(*plVar2 + 0x38))(plVar2,lVar4);
    }
    FUN_003490c0(pvVar3);
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
  FUN_0034f98c(param_1 + 0x4c0);
  FUN_0034f6d0(param_1 + 0x3e0);
  lVar4 = *(long *)(param_1 + 0x3d8);
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_038cb610(*(undefined8 *)puVar1,lVar4);
    (**(code **)(*plVar2 + 0x38))(plVar2,lVar4);
  }
  FUN_003490c0(param_1 + 0x2b8);
  FUN_03968cfc(param_1 + 0x198);
  FUN_03968cfc(param_1 + 0x138);
  plVar2 = (long *)(param_1 + 0xa0);
  *plVar2 = (long)(PTR_DAT_04bb24a8 + 0x10);
  FUN_038bbe20(plVar2);
  lVar4 = *(long *)(param_1 + 0xa8);
  *plVar2 = (long)&PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_032ceb3c;
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
  *(undefined8 *)(param_1 + 0xa8) = 1;
LAB_032ceb3c:
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

