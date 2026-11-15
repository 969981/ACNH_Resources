
void FUN_02290ab0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))();
  (**(code **)(*(long *)(param_1 + 0xf0) + 0xf0))((long *)(param_1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x02290af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x120) + 0xf0))(param_1 + 0x120);
  return;
}

