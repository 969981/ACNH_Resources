
void FUN_0367d150(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  long lVar4;
  
  if (DAT_05b059c0 == '\x01') {
    if (DAT_05b059dc == '\0') {
      nn::time::Finalize();
    }
    if (((byte)DAT_05b059d8 >> 1 & 1) != 0) {
      FUN_04002fa0(DAT_05b05a08);
      nn::os::FreeTlsSlot(*DAT_05b05a08);
      (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))(*(long **)PTR_DAT_04bdf328,DAT_05b05a08);
      DAT_05b05a08 = (undefined4 *)0x0;
    }
    PTR_LAB_04c57920 = DAT_05b059c8;
    DAT_05b059d8 = 0;
    DAT_05b059c8 = (undefined *)0x0;
    DAT_05b059c0 = '\0';
    *(undefined8 *)PTR_DAT_04bdf348 = 0;
    PTR_FUN_04c57928 = DAT_05b059d0;
    DAT_05b059d0 = (undefined *)0x0;
  }
  if ((char)param_1[0x55] != '\0') {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  __ptr = (void *)param_1[0x52];
  param_1[0x52] = 0;
  if (__ptr != (void *)0x0) {
    FUN_0346ab60(__ptr);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  plVar2 = (long *)param_1[0x51];
  param_1[0x51] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x50];
  param_1[0x50] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = (long)(PTR_DAT_04bb2e88 + 0x10);
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar3 = (long)*(int *)((long)param_1 + 0xbc);
    plVar2 = (long *)(param_1[0x16] - lVar3);
    lVar4 = (long)plVar2 + lVar3;
    do {
      plVar1 = (long *)((long)plVar2 + (long)*(int *)((long)param_1 + 0xbc));
      lVar4 = *(long *)(lVar4 + 8);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar2 + 0x28))();
      plVar2 = (long *)(lVar4 - lVar3);
    } while (plVar2 != (long *)((long)(param_1 + 0x15) - lVar3));
  }
  return;
}

