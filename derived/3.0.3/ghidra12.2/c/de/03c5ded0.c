
void FUN_03c5ded0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
    lVar3 = (long)*(int *)(param_1 + 0x4c);
    lVar2 = *(long *)(param_1 + 0x40) - lVar3;
    do {
      FUN_03c5ded0(lVar2,param_2);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (param_1 + 0x38) - lVar3);
  }
  return;
}

