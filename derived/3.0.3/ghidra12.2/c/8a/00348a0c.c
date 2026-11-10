
void FUN_00348a0c(long param_1,uint param_2)

{
  if ((param_2 & 0x49c0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00348a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb0),1);
  return;
}

