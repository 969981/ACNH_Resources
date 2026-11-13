
void FUN_01488530(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_038e1a84(param_1 + 0x72);
  FUN_038e1a84(param_1 + 0x67);
  FUN_038e1a84(param_1 + 0x5c);
  *param_1 = &PTR_LAB_048fce60;
  if ((undefined8 *)param_1[0x16] != param_1 + 0x15) {
    lVar3 = (long)*(int *)((long)param_1 + 0xbc);
    plVar2 = (long *)((long)param_1[0x16] - lVar3);
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
      *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
      (**(code **)(*plVar2 + 0x28))();
      plVar2 = (long *)(lVar4 - lVar3);
    } while (plVar2 != (long *)((long)(param_1 + 0x15) - lVar3));
  }
  return;
}

