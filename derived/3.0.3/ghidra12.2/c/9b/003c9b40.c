
void FUN_003c9b40(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_003c9a84();
  if (plVar1 != (long *)0x0) {
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x1a0);
      *(undefined4 *)(plVar1 + 8) = 3;
      nn::os::SignalEvent((EventType *)(plVar1 + 3));
      plVar1 = (long *)FUN_003c9a84(param_1);
    } while (plVar1 != (long *)0x0);
  }
  return;
}

