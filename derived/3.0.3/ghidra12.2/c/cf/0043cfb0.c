
void FUN_0043cfb0(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) < 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043cfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)PTR_DAT_048607b8 + 0x18))
            (PTR_DAT_048607b8,*param_1,(long)(*(int *)((long)param_1 + 0xc) * 0x10 + 0x10));
  return;
}

