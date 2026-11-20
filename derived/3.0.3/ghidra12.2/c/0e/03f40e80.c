
void FUN_03f40e80(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  
  *param_1 = &PTR_FUN_04ba9038;
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[3];
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 << 10;
      do {
        FUN_03f3dadc(lVar4 + -0x400 + lVar5);
        lVar5 = lVar5 + -0x400;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  FUN_038e1a84(param_1 + 6);
  return;
}

