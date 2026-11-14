
void FUN_01c8984c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04a442e0;
  FUN_038e1a84(param_1 + 0x28);
  puVar1 = PTR_DAT_04bb24a8;
  plVar2 = param_1 + 0x15;
  *plVar2 = (long)(PTR_DAT_04bb24a8 + 0x10);
  FUN_038bbe20(plVar2);
  lVar3 = param_1[0x16];
  *plVar2 = (long)&PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_01c89914:
    param_1[0x16] = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar2);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_01c89914;
  }
  plVar2 = param_1 + 2;
  *plVar2 = (long)(puVar1 + 0x10);
  FUN_038bbe20(plVar2);
  lVar3 = param_1[3];
  *plVar2 = (long)&PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_01c899b0;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar2);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[3] = 1;
LAB_01c899b0:
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01c899e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

