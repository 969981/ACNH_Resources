
void FUN_0019c910(long param_1,int param_2)

{
  *(int *)(param_1 + 0x40) = param_2;
  if ((param_2 == 5) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0019c928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1,param_1 + 0x30);
    return;
  }
  return;
}

