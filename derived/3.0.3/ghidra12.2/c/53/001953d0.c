
bool FUN_001953d0(long *param_1,long *param_2)

{
  bool bVar1;
  
  bVar1 = (ulong)param_1[7] <= (ulong)(param_2[3] - param_2[2]) &&
          (ulong)(param_2[3] - param_2[2]) <= (ulong)param_1[8];
  if (bVar1) {
    if (param_1 + 2 != param_2) {
      FUN_001a2ac0(param_1 + 4);
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return bVar1;
}

