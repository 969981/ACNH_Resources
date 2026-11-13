
void FUN_0146d4e0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  param_1[0x10a] = PTR_DAT_04bbc1a0 + 0x10;
  FUN_00960e20(param_1 + 0xcb);
  FUN_00960e20(param_1 + 0x8d);
  puVar3 = param_1 + 0x5e;
  do {
    puVar3 = (undefined8 *)puVar3[1];
  } while (puVar3 != param_1 + 0x5e);
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

