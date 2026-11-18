
/* WARNING: Removing unreachable block (ram,0x032f9b20) */
/* WARNING: Removing unreachable block (ram,0x032f9b3c) */

void FUN_032f9b00(long param_1)

{
  if ((param_1 == 0) || (*DAT_05730eb0 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032f9b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*DAT_05730eb0 + 0x38))((long *)*DAT_05730eb0,param_1);
  return;
}

