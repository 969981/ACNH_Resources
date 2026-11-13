
undefined8 FUN_014cc6b4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)(param_2 >> 0x20);
  if (iVar3 == 3) {
    iVar3 = 0x11;
  }
  else if (iVar3 == 2) {
    iVar3 = 9;
  }
  else {
    if (iVar3 != 1) goto LAB_014cc714;
    iVar3 = 8;
  }
  if (*(int *)(param_1 + 0x378) != iVar3) {
    return 0;
  }
LAB_014cc714:
  if ((*(int *)(param_1 + 0x3c0) == 0) && (uVar1 = FUN_014cc2ec(0), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014cc750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_014cc754 + (ulong)(byte)(&DAT_0417578c)[param_2 & 0xffffffff] * 4))
                      (*(undefined1 *)(param_1 + 0xa2c));
    return uVar2;
  }
  return 0;
}

