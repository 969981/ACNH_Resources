
void FUN_004292f0(ulong *param_1,ulong param_2)

{
  *param_1 = 0;
  if ((param_2 < 2) || ((*(byte *)(param_2 + 2) >> 1 & 1) == 0)) {
    param_2 = 0;
  }
  *param_1 = param_2;
  return;
}

