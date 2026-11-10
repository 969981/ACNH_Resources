
void FUN_0036ee94(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_00367b50(plVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_00364704(param_1,param_2);
  return;
}

