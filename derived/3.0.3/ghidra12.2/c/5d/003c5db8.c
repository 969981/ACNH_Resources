
void FUN_003c5db8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,0xffffffff);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  nn::os::SignalEvent((EventType *)(param_1 + 8));
  return;
}

