
void FUN_00348a34(long param_1,uint param_2)

{
  if (((param_2 >> 6 & 0x48) == 0 && (param_2 & 0x4020) == 0) && (param_2 & 0x2050) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00348a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb0));
  return;
}

