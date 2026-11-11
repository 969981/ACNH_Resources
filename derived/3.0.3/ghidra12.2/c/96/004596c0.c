
void FUN_004596c0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  long lStack_38;
  ulong local_30;
  ulong local_28;
  
  FUN_00429460(&local_28,param_1[1]);
  if ((local_28 < 2) || (uVar1 = FUN_004290b0(&local_28), (uVar1 >> 6 & 1) == 0)) {
    local_40 = *param_1;
    lStack_38 = param_1[1];
    local_30 = param_1[2];
  }
  else {
    lVar2 = *(long *)(param_1[1] + 8);
    FUN_00428440(lVar2);
    local_40 = *param_1;
    lStack_38 = lVar2;
    if (lVar2 == 0) {
      local_30 = 0;
      goto LAB_00459758;
    }
    local_30 = FUN_00428370(lVar2);
  }
  if ((local_30 & 1) != 0) {
    FUN_0043dd30(local_30 & 0xfffffffffffffffe);
  }
LAB_00459758:
  FUN_004601e0(&local_40);
  if ((local_30 & 1) != 0) {
    FUN_0043dd50(local_30 & 0xfffffffffffffffe);
  }
  return;
}

