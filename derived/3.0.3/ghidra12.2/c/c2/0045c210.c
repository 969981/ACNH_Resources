
void FUN_0045c210(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  long lStack_48;
  ulong local_40;
  ulong local_38;
  
  FUN_00429460(&local_38,param_3[1]);
  if ((local_38 < 2) || (uVar1 = FUN_004290b0(&local_38), (uVar1 >> 6 & 1) == 0)) {
    local_50 = *param_3;
    local_40 = param_3[2];
    lStack_48 = param_3[1];
  }
  else {
    lVar3 = *(long *)(param_3[1] + 8);
    uVar2 = FUN_00428440(lVar3);
    local_50 = *param_3;
    if ((uVar2 & 0x1f) != 3) {
      lVar3 = 0;
    }
    local_40 = 0;
    lStack_48 = lVar3;
    if (lVar3 != 0) {
      local_40 = FUN_00428370();
    }
  }
  if ((local_40 & 1) != 0) {
    FUN_0043dd30(local_40 & 0xfffffffffffffffe);
  }
  FUN_0045c310(param_1,param_2,&local_50);
  if ((local_40 & 1) != 0) {
    FUN_0043dd50(local_40 & 0xfffffffffffffffe);
  }
  return;
}

