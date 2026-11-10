
void FUN_0031e720(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x198);
  while (plVar2 != (long *)(param_1 + 400)) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    plVar2 = *(long **)(param_1 + 0x198);
  }
  FUN_00347c8c(param_1 + 8,param_2);
  FUN_0034915c(param_1 + 0x50,param_2);
  return;
}

