
undefined8 FUN_0016439c(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = (param_2 & 0xf00000) - 0x100000 >> 0x14;
    if (uVar1 < 6) {
                    /* WARNING: Jumptable with 0 entries at 0x00164424 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK_00164428 + (ulong)(byte)(&DAT_04102fe0)[uVar1] * 4))();
      return uVar2;
    }
  }
  return 0x30;
}

