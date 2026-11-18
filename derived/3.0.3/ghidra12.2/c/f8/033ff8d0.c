
void FUN_033ff8d0(undefined8 param_1)

{
  if (*(long *)PTR_DAT_04bb7ff8 == 0) {
    FUN_033968f0(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x033ff91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_033ff920 + (ulong)DAT_0418ea5a * 4))
            (*(undefined4 *)(*(long *)PTR_DAT_04bb7ff8 + 0xef8));
  return;
}

