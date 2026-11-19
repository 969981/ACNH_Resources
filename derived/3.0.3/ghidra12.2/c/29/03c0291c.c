
void FUN_03c0291c(long param_1)

{
  long *plVar1;
  
  (**(code **)(**(long **)(param_1 + 0x3d0) + 0x18))();
  plVar1 = *(long **)(param_1 + 800);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  nn::os::SignalLightEvent((LightEventType *)(plVar1[0x11] + 0x3c8));
                    /* WARNING: Could not recover jumptable at 0x03c02970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x3d8) + 0xc0))();
  return;
}

