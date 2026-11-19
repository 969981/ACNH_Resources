
void FUN_03bc12b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    if (DAT_05aebb78 == 0) {
      lVar7 = 0;
      cVar3 = *(char *)(lVar6 + 0x79);
    }
    else {
      lVar7 = *(long *)(DAT_05aebb78 + 0x38);
      cVar3 = *(char *)(lVar6 + 0x79);
    }
    if (cVar3 != '\0') {
      nn::os::LockMutex((MutexType *)(lVar7 + 0x80));
      plVar1 = (long *)(*(int *)(lVar7 + 0x34) + lVar6);
      lVar2 = *plVar1;
      plVar4 = (long *)plVar1[1];
      if (plVar4 != (long *)0x0 || lVar2 != 0) {
        if (lVar2 != 0) {
          *(long **)(lVar2 + 8) = plVar4;
          plVar4 = (long *)plVar1[1];
        }
        if (plVar4 != (long *)0x0) {
          *plVar4 = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
      }
      FUN_03bc4ba0(lVar6);
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x80));
    }
    *param_1 = 0;
  }
  plVar1 = param_1 + 0x10;
  plVar4 = (long *)param_1[0x11];
  while (plVar4 != plVar1) {
    plVar5 = (long *)plVar4[1];
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4 = plVar5;
  }
  param_1[0x10] = (long)plVar1;
  param_1[0x11] = (long)plVar1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  return;
}

