
void FUN_00347cdc(long param_1)

{
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00347cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf040)(*(undefined8 *)(param_1 + 8));
  return;
}

