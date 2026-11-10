
bool FUN_00194da8(long *param_1,long *param_2)

{
  bool bVar1;
  
  bVar1 = (ulong)param_1[8] <= (ulong)(param_2[3] - param_2[2]) &&
          (ulong)(param_2[3] - param_2[2]) <= (ulong)param_1[9];
  if (bVar1) {
    if (param_1 + 3 != param_2) {
      FUN_001a2ac0(param_1 + 5);
    }
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  return bVar1;
}

