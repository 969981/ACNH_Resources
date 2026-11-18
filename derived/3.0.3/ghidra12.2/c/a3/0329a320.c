
void FUN_0329a320(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  void *__ptr;
  
  FUN_0328607c(param_1[0x163]);
  plVar4 = (long *)param_1[0x163];
  param_1[0x163] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if ((long *)*DAT_0572c600 == param_1) {
    *DAT_0572c600 = 0;
    plVar4 = (long *)param_1[2];
  }
  else {
    plVar4 = (long *)param_1[2];
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)*param_1;
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x20))();
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0xf8) != 0)) {
      FUN_032d15b0(*(long *)(lVar5 + 0xf8),lVar5);
    }
    *(undefined8 *)(param_1[2] + 8) = 0;
    param_1[2] = 0;
    plVar4 = (long *)*param_1;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)param_1[1];
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x20))();
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0xf8) != 0)) {
      FUN_032d15b0(*(long *)(lVar5 + 0xf8),lVar5);
    }
    *(undefined8 *)(*param_1 + 8) = 0;
    *param_1 = 0;
    plVar4 = (long *)param_1[1];
  }
  if (plVar4 == (long *)0x0) {
    lVar5 = param_1[0x122];
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x20))();
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0xf8) != 0)) {
      FUN_032d15b0(*(long *)(lVar5 + 0xf8),lVar5);
    }
    *(undefined8 *)(param_1[1] + 8) = 0;
    param_1[1] = 0;
    lVar5 = param_1[0x122];
  }
  if (lVar5 != 0) {
    FUN_032ae1e0(param_1 + 0x122);
  }
  if (param_1[0xde] != 0) {
    FUN_032c1bf0(param_1 + 0xde);
  }
  lVar5 = param_1[0x15f];
  plVar4 = param_1 + 0x15c;
  puVar3 = *(undefined8 **)(lVar5 + 0x58);
  while (puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)puVar3[2];
    puVar3[2] = 0;
    lVar7 = puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    if (*(undefined8 **)(lVar5 + 0x58) == puVar3) {
      *(undefined8 **)(lVar5 + 0x58) = puVar6;
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = lVar7;
    }
    puVar3 = puVar6;
    if (lVar7 != 0) {
      *(undefined8 **)(lVar7 + 0x10) = puVar6;
    }
  }
  if (*plVar4 != 0) {
    FUN_03292228(plVar4);
  }
  FUN_03292080(plVar4);
  plVar8 = param_1 + 7;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar4 = DAT_0572e5c8;
  if (*plVar8 != 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar5 = param_1[8];
    lVar7 = param_1[9];
    param_1[9] = 0;
    *plVar8 = 0;
    param_1[8] = 0;
    if ((long *)*plVar4 == plVar8) {
      *plVar4 = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 8) = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar7;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  FUN_032c6840(plVar8);
  plVar4 = (long *)param_1[5];
  if (plVar4[0x1f] != 0) {
    FUN_032d15b0();
    plVar4 = (long *)param_1[5];
  }
  lVar5 = DAT_05688e68;
  if (*plVar4 != 0) {
    lVar7 = plVar4[1];
    lVar2 = plVar4[2];
    plVar4[2] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    if (*(long **)(lVar5 + 0x560) == plVar4) {
      *(long *)(lVar5 + 0x560) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar2;
    }
    plVar4 = (long *)param_1[5];
  }
  FUN_032d1384(plVar4);
  __ptr = (void *)param_1[5];
  param_1[5] = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      return;
    }
  }
  return;
}

