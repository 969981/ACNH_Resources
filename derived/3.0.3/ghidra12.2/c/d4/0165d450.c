
void FUN_0165d450(long param_1,undefined8 param_2,uint param_3)

{
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) && ((param_3 & 1) == 0)) {
    return;
  }
  FUN_01628598(param_2);
                    /* WARNING: Could not recover jumptable at 0x0165d498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + 0xf0))
            (*(long *)(param_1 + 0x10) + 0x210);
  return;
}

