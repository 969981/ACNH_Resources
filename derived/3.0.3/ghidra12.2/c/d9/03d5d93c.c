
void FUN_03d5d93c(long *param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x120))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x03d5d988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x4a] + 0x20))((long *)param_1[0x4a],param_2,param_3);
  return;
}

