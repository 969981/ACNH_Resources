
undefined4 FUN_0049e660(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == (long *)0x0) {
    return 0x80040200;
  }
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2);
  return uVar1;
}

