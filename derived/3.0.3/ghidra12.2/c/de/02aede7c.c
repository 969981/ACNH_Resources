
void FUN_02aede7c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 200) + 0xf0))();
  (**(code **)(*(long *)(param_1 + 0xf8) + 0xf0))((long *)(param_1 + 0xf8));
  (**(code **)(*(long *)(param_1 + 0x128) + 0xf0))(param_1 + 0x128);
  (**(code **)(*(long *)(param_1 + 0x158) + 0xf0))(param_1 + 0x158);
  (**(code **)(*(long *)(param_1 + 0x188) + 0xf0))(param_1 + 0x188);
                    /* WARNING: Could not recover jumptable at 0x02aedeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x1e8) + 0xf0))(param_1 + 0x1e8);
  return;
}

