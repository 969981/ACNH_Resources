
undefined8 FUN_0283cb2c(long param_1)

{
  ulong uVar1;
  
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
    (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))();
    if (((*(long **)(param_1 + 0x60) != (long *)0x0) &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x40))(), (uVar1 & 1) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
    }
  }
  return 1;
}

