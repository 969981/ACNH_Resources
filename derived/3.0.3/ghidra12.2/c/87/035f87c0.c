
void FUN_035f87c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  if ((*(ushort *)(param_1 + 0x168) & 0xff01) == 0) {
    *(undefined1 *)(param_1 + 0x16e) = param_3;
                    /* WARNING: Could not recover jumptable at 0x035f8804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_035f8808 + (ulong)(byte)(&DAT_041932aa)[*(uint *)(param_1 + 0xa8)] * 4))();
    return;
  }
  return;
}

