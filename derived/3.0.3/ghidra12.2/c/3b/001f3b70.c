
void FUN_001f3b70(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x1d8) + 0x10))(param_1 + 0x1d8);
  FUN_001f372c(param_1,1000,"Client call close");
                    /* WARNING: Could not recover jumptable at 0x001f3bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x1d8) + 0x20))(param_1 + 0x1d8);
  return;
}

