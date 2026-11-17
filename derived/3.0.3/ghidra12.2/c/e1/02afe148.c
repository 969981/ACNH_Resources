
void FUN_02afe148(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))((long *)(param_1 + 0xc0));
  (**(code **)(*(long *)(param_1 + 0x100) + 0xf0))(param_1 + 0x100);
  (**(code **)(*(long *)(param_1 + 0x130) + 0xf0))(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x02afe19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x160) + 0xf0))(param_1 + 0x160);
  return;
}

