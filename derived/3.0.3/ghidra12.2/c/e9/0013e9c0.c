
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0013e9c0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xffff) - 1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0013ea8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_0013ea90 +
                      (ulong)*(ushort *)(&DAT_04059474 + (ulong)((param_2 & 0xffff) - 1) * 2) * 4))
                      ();
    return uVar1;
  }
  return 0xffff;
}

