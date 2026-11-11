
void FUN_003a54e0(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       *(code **)(PTR_PTR_04bd0a78 + ((ulong)(*(uint *)(param_1[0xd] + 4) >> 0xc) & 7) * 0x10);
  if ((*(uint *)(param_1[0xd] + 4) & 0x6000) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x003a550c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

