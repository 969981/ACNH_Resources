
void FUN_01c4242c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))();
                    /* WARNING: Could not recover jumptable at 0x01c4245c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xf0) + 0xf0))((long *)(param_1 + 0xf0));
  return;
}

