
void FUN_008f1f18(long *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
                    /* WARNING: Could not recover jumptable at 0x008f1f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1,uVar1);
  return;
}

