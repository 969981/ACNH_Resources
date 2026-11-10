
undefined4 FUN_001f3b1c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = (long *)(param_1 + 0x1d8);
  (**(code **)(*(long *)(param_1 + 0x1d8) + 0x10))(plVar1);
  if (*(long *)(param_1 + 0x148) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x148) + 8);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return uVar2;
}

