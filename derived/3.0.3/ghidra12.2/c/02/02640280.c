
void FUN_02640280(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar1 != (long *)0x0)) {
    local_28 = *(undefined8 *)(param_1 + 8);
    uStack_20 = *(undefined8 *)(param_1 + 0x10);
    local_18 = param_2;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_28);
  }
  return;
}

