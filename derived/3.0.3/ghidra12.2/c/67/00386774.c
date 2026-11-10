
undefined8 FUN_00386774(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return uVar1;
}

