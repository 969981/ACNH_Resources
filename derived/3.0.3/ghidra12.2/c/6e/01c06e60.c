
void FUN_01c06e60(long param_1)

{
  long *plVar1;
  short sVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x250);
  plVar1 = plVar4;
  if (*(int *)(param_1 + 600) < 1) {
    plVar1 = (long *)0x0;
  }
  plVar5 = plVar1 + -3;
  if (plVar1 != (long *)0x0 && plVar5 != (long *)0x0) {
    sVar2 = *(short *)(param_1 + 0x206);
    while ((short)*plVar5 == sVar2) {
      pcVar3 = (code *)plVar5[1];
      if ((plVar5[2] & 1U) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + (plVar5[2] >> 1)));
      }
      (*pcVar3)();
      if (*plVar4 != 0) {
        *(long *)(*plVar4 + 8) = plVar4[1];
      }
      if ((long *)plVar4[1] != (long *)0x0) {
        *(long *)plVar4[1] = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
      *plVar5 = *(long *)(param_1 + 0x260);
      *(long **)(param_1 + 0x260) = plVar5;
      plVar4 = *(long **)(param_1 + 0x250);
      sVar2 = *(short *)(param_1 + 0x206) + 1;
      plVar5 = plVar4;
      if (*(int *)(param_1 + 600) < 1) {
        plVar5 = (long *)0x0;
      }
      *(short *)(param_1 + 0x206) = sVar2;
      if (plVar5 == (long *)0x0) {
        return;
      }
      plVar5 = plVar5 + -3;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
  }
  return;
}

