
long FUN_035a2150(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(param_1 + 0x128) + 0xf0))(param_1 + 0x128);
  (**(code **)(*plVar1 + 0x18))();
  return plVar1[1];
}

