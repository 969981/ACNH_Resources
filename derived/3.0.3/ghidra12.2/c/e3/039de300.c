
void FUN_039de300(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  
  *param_1 = (long)&PTR_FUN_04b6b3f8;
  if ((long *)param_1[0x54d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54d] + 8))();
  }
  *(undefined4 *)(param_1 + 0x54b) = 0;
  lVar4 = param_1[0x3b];
  param_1[0x54c] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x54d] = 0;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + -8);
    if (*plVar5 != 0) {
      lVar6 = *plVar5 * 0x910;
      do {
        FUN_039e1ac0(lVar4 + -0x910 + lVar6);
        lVar6 = lVar6 + -0x910;
      } while (lVar6 != 0);
    }
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      free(plVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,plVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar5);
      }
    }
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  __ptr = (void *)param_1[0x3d];
  if (__ptr != (void *)0x0) {
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar4,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  lVar4 = param_1[0x550];
  param_1[0x54f] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_039de488;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x2a78);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0x550] = 1;
LAB_039de488:
  puVar1 = PTR_DAT_04bd1068 + 0x10;
  puVar2 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x544] = (long)puVar1;
  param_1[0x53a] = (long)puVar2;
  param_1[0x534] = (long)puVar1;
  param_1[0x4c7] = (long)puVar2;
  param_1[0x4bd] = (long)puVar2;
  param_1[0x4a7] = (long)puVar2;
  param_1[0x49d] = (long)puVar2;
  param_1[0x487] = (long)puVar2;
  param_1[0x47d] = (long)puVar2;
  param_1[0x467] = (long)puVar2;
  param_1[0x45d] = (long)puVar2;
  param_1[0x447] = (long)puVar2;
  param_1[0x43d] = (long)puVar2;
  param_1[0x427] = (long)puVar2;
  param_1[0x41d] = (long)puVar2;
  param_1[0x407] = (long)puVar2;
  param_1[0x3fd] = (long)puVar2;
  param_1[999] = (long)puVar2;
  param_1[0x3dd] = (long)puVar2;
  param_1[0x3c7] = (long)puVar2;
  param_1[0x3bd] = (long)puVar2;
  param_1[0x3a7] = (long)puVar2;
  param_1[0x39d] = (long)puVar2;
  param_1[0x387] = (long)puVar2;
  param_1[0x37d] = (long)puVar2;
  param_1[0x367] = (long)puVar2;
  param_1[0x35d] = (long)puVar2;
  param_1[0x347] = (long)puVar2;
  param_1[0x33d] = (long)puVar2;
  param_1[0x327] = (long)puVar2;
  param_1[0x31d] = (long)puVar2;
  param_1[0x307] = (long)puVar2;
  param_1[0x2fd] = (long)puVar2;
  param_1[0x2e7] = (long)puVar2;
  param_1[0x2dd] = (long)puVar2;
  param_1[0x2c7] = (long)puVar2;
  param_1[0x2bd] = (long)puVar2;
  param_1[0x2a7] = (long)puVar2;
  param_1[0x29d] = (long)puVar2;
  param_1[0x287] = (long)puVar2;
  param_1[0x27d] = (long)puVar2;
  param_1[0x267] = (long)puVar2;
  param_1[0x25d] = (long)puVar2;
  param_1[0x247] = (long)puVar2;
  param_1[0x23d] = (long)puVar2;
  param_1[0x227] = (long)puVar2;
  param_1[0x21d] = (long)puVar2;
  param_1[0x207] = (long)puVar2;
  param_1[0x1fd] = (long)puVar2;
  param_1[0x1e7] = (long)puVar2;
  param_1[0x1dd] = (long)puVar2;
  param_1[0x1c7] = (long)puVar2;
  param_1[0x1bd] = (long)puVar2;
  param_1[0x1a7] = (long)puVar2;
  param_1[0x19d] = (long)puVar2;
  param_1[0x187] = (long)puVar2;
  param_1[0x17d] = (long)puVar2;
  param_1[0x167] = (long)puVar2;
  param_1[0x15d] = (long)puVar2;
  param_1[0x147] = (long)puVar2;
  param_1[0x13d] = (long)puVar2;
  param_1[0x127] = (long)puVar2;
  param_1[0x11d] = (long)puVar2;
  param_1[0x107] = (long)puVar2;
  param_1[0xfd] = (long)puVar2;
  param_1[0xe7] = (long)puVar2;
  param_1[0xdd] = (long)puVar2;
  FUN_039e13e8(param_1 + 0xa9);
  FUN_039e13e8(param_1 + 0x75);
  FUN_039e13e8(param_1 + 0x41);
  *param_1 = (long)(PTR_DAT_04bd1070 + 0x10);
  return;
}

