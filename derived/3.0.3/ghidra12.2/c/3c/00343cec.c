
void FUN_00343cec(long param_1,long param_2)

{
  (**(code **)**(undefined8 **)(param_1 + 0x10))();
  *(undefined1 *)(param_2 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00343d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  return;
}

