
void FUN_0039806c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_003980f0();
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_00367b50();
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  FUN_00364704(param_1,param_2);
  return;
}

