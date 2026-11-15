
void FUN_02199930(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[1];
  while (plVar2 != param_1) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    plVar2[-2] = param_1[3];
    param_1[3] = (long)(plVar2 + -2);
    plVar2 = plVar1;
  }
  plVar2 = (long *)param_1[0xf];
  while (plVar2 != param_1 + 0xe) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + -1;
    plVar2[-2] = param_1[0x11];
    param_1[0x11] = (long)(plVar2 + -2);
    plVar2 = plVar1;
  }
  param_1[0x3e] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  param_1[0x3c] = 0x22001d0005;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  *(undefined4 *)((long)param_1 + 0x1f7) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0x22;
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x222) = 0x101;
  param_1[0x43] = 0;
  *(undefined4 *)((long)param_1 + 0x22a) = 0x101;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x226) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((long)param_1 + 0x22e) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((long)param_1 + 0x233) = 0;
  return;
}

