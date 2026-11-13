
void FUN_0118a640(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04983a48;
  DAT_050cd528 = 0;
  puVar3 = param_1 + 0x4f;
  do {
    puVar3 = (undefined8 *)puVar3[1];
  } while (puVar3 != param_1 + 0x4f);
  *param_1 = &PTR_LAB_048fce60;
  if ((undefined8 *)param_1[0x16] != param_1 + 0x15) {
    lVar4 = (long)*(int *)((long)param_1 + 0xbc);
    plVar2 = (long *)((long)param_1[0x16] - lVar4);
    lVar5 = (long)plVar2 + lVar4;
    do {
      plVar1 = (long *)((long)plVar2 + (long)*(int *)((long)param_1 + 0xbc));
      lVar5 = *(long *)(lVar5 + 8);
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
      plVar2 = (long *)(lVar5 - lVar4);
    } while (plVar2 != (long *)((long)(param_1 + 0x15) - lVar4));
  }
  return;
}

