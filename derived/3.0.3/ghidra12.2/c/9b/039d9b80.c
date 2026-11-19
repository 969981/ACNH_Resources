
void FUN_039d9b80(long param_1,short *param_2,long param_3)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  
  sVar2 = *param_2;
  *param_2 = sVar2 + 1;
  if (sVar2 == 0) {
    if (*(long *)(param_2 + 0xac) == 0) {
      FUN_039dd660(param_2 + 4,0);
    }
    plVar1 = (long *)((long)*(int *)(param_1 + 0x34) + (long)param_2);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  if (param_3 != 0) {
    plVar4 = (long *)(param_2 + 0x10);
    lVar3 = *plVar4;
    plVar1 = (long *)(*(int *)(param_2 + 0x1a) + param_3);
    *plVar4 = (long)plVar1;
    *plVar1 = lVar3;
    plVar1[1] = (long)plVar4;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar1;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  if ((*(byte *)(param_2 + 1) >> 2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_04bb29d0;
    do {
      nn::os::ConvertToTimeSpan(lVar3 / 10000);
      nn::os::SleepThread();
    } while ((*(byte *)(param_2 + 1) >> 2 & 1) == 0);
  }
  return;
}

