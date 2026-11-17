
void FUN_031c5214(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x260))();
  FUN_03d5c660(uVar1,0);
  if (param_1[0x3831] != 0) {
    FUN_03869260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x031c5264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x308))(param_1);
  return;
}

