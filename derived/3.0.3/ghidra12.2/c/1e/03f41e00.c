
void FUN_03f41e00(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  long lVar5;
  
  *param_1 = &PTR_LAB_04ba9120;
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar5 = *plVar4 << 6;
      do {
        FUN_038e1c80(lVar3 + -0x30 + lVar5);
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  __ptr = (void *)param_1[0xe];
  if (__ptr != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_038e1c80(param_1 + 7);
  return;
}

