
undefined8 FUN_01813a64(void)

{
  undefined8 uVar1;
  
  if (DAT_056b6f18 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01813ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK_01813ab8 + (ulong)DAT_04177288 * 4))();
  return uVar1;
}

