
undefined8 FUN_006f0c54(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (param_1 & 0xffff) - 0x41;
  if (uVar1 < 0x113) {
                    /* WARNING: Could not recover jumptable at 0x006f0c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_006f0c80 + (ulong)(byte)(&DAT_0414dbe4)[uVar1] * 4))(1);
    return uVar2;
  }
  return 0;
}

