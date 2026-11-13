
void FUN_011d2550(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  DAT_050dfb28 = 0;
  DAT_050dfb2c = 0;
  *param_1 = &PTR_FUN_04986d38;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x3c67] = puVar1;
  param_1[0x3c61] = puVar1;
  param_1[0x3c5b] = puVar1;
  param_1[0x3c55] = puVar1;
  param_1[0x3c4f] = puVar1;
  DAT_050dfb30 = 0;
  FUN_03838610(param_1 + 0x3c49);
  FUN_03838610(param_1 + 0x3c43);
  FUN_03838610(param_1 + 0x3c3d);
  FUN_03838610(param_1 + 0x3c37);
  *param_1 = &PTR_LAB_048fce60;
  if ((undefined8 *)param_1[0x16] != param_1 + 0x15) {
    lVar4 = (long)*(int *)((long)param_1 + 0xbc);
    plVar3 = (long *)((long)param_1[0x16] - lVar4);
    lVar5 = (long)plVar3 + lVar4;
    do {
      plVar2 = (long *)((long)plVar3 + (long)*(int *)((long)param_1 + 0xbc));
      lVar5 = *(long *)(lVar5 + 8);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
      (**(code **)(*plVar3 + 0x28))();
      plVar3 = (long *)(lVar5 - lVar4);
    } while (plVar3 != (long *)((long)(param_1 + 0x15) - lVar4));
  }
  return;
}

