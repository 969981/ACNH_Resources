
bool FUN_01bc1000(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_01bc0860();
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2;
    do {
      plVar1 = (long *)((long)*(int *)(param_1 + 0x2c) + (long)plVar3);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      (**(code **)(*plVar3 + 0x18))();
      plVar3 = (long *)FUN_01bc0860(param_1,param_2,param_3 & 1);
    } while (plVar3 != (long *)0x0);
  }
  return plVar2 != (long *)0x0;
}

