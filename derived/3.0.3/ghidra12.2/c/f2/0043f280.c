
void FUN_0043f280(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if (*param_2 == 0) {
LAB_0043f330:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  FUN_00429460(&local_38);
  local_48 = local_38;
  if (local_38 < 2) goto LAB_0043f330;
  uVar2 = param_2[2];
  if ((uVar2 & 1) == 0) {
    lVar3 = param_2[1];
    FUN_00429460(&local_38,lVar3);
    if (1 < local_38) {
      FUN_00429460(&local_38,lVar3);
      local_40 = local_38;
      uVar2 = FUN_004290b0(&local_40);
      if ((uVar2 & 0x50) != 0) {
        uVar2 = param_2[2];
        goto LAB_0043f310;
      }
    }
    uVar2 = FUN_00428370(local_48);
    uVar4 = 0;
  }
  else {
LAB_0043f310:
    uVar2 = (**(code **)(*(long *)(uVar2 & 0xfffffffffffffffe) + 0x20))
                      ((long *)(uVar2 & 0xfffffffffffffffe),param_2,local_48);
    uVar4 = 1;
  }
  lVar3 = *param_2;
  iVar1 = FUN_00429050(&local_48);
  *param_1 = lVar3 + iVar1;
  param_1[1] = local_48;
  param_1[2] = uVar4 | uVar2;
  if (uVar4 == 0 && (uVar2 & 1) == 0) {
    return;
  }
  FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
  return;
}

