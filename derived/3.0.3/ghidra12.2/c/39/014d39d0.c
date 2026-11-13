
void FUN_014d39d0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[0x1f2];
  lVar6 = param_1[0x1f1];
  *param_1 = (long)&PTR_FUN_049a6a48;
  param_1[0x1ed] = (long)&PTR_LAB_049a6c28;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar4 = param_1[500], lVar4 != 0)) {
    param_1[500] = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = (long *)param_1[0x1f2];
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = param_1[0x1f1];
    }
    param_1[0x1f1] = 0;
    param_1[0x1f2] = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  lVar6 = param_1[0x1ee];
  param_1[0x1ed] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_014d3ad0;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0xf68);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[0x1ee] = 1;
LAB_014d3ad0:
  FUN_03838610(param_1 + 0x1e6);
  if (*(char *)((long)param_1 + 0xea4) != '\0') {
    *(undefined1 *)((long)param_1 + 0xea4) = 0;
  }
  param_1[0x199] = (long)&PTR_LAB_049a6ce8;
  param_1[0x168] = (long)&PTR_LAB_049a6ce8;
  param_1[0xe0] = (long)&PTR_LAB_049a6bb8;
  FUN_038e1a84(param_1 + 0x13b);
  FUN_038e1a84(param_1 + 0x130);
  FUN_038e1a84(param_1 + 0x125);
  FUN_038e1a84(param_1 + 0x118);
  param_1[0xe4] = (long)&PTR_LAB_049a6ce8;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0xb4] = (long)puVar1;
  puVar3 = PTR_DAT_04bbb868;
  param_1[0xac] = (long)puVar1;
  param_1[0xa4] = (long)puVar1;
  param_1[0x9c] = (long)puVar1;
  param_1[0x94] = (long)puVar1;
  param_1[0x8c] = (long)puVar1;
  param_1[0x84] = (long)puVar1;
  puVar1 = PTR_DAT_04bb2e88;
  param_1[0x51] = (long)(puVar3 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar4 = (long)*(int *)((long)param_1 + 0xbc);
    plVar5 = (long *)(param_1[0x16] - lVar4);
    lVar6 = (long)plVar5 + lVar4;
    do {
      plVar2 = (long *)((long)plVar5 + (long)*(int *)((long)param_1 + 0xbc));
      lVar6 = *(long *)(lVar6 + 8);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar5 + 0x28))();
      plVar5 = (long *)(lVar6 - lVar4);
    } while (plVar5 != (long *)((long)(param_1 + 0x15) - lVar4));
  }
  return;
}

