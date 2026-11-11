
void FUN_004d1cf0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  ulong local_38;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = *param_1;
    uVar2 = FUN_00427110(lVar3,PTR_DAT_04bd7450);
    if ((((uVar2 & 1) != 0) && (uVar1 = FUN_004274f0(lVar3), lVar4 != 0)) && ((uVar1 >> 3 & 1) == 0)
       ) {
      local_48 = *param_1;
      lStack_40 = param_2;
      if (param_2 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_00428370(param_2);
        if ((local_38 & 1) != 0) {
          FUN_0043dd30(local_38 & 0xfffffffffffffffe);
        }
      }
      FUN_00440b30(&local_48,3,1);
      if ((local_38 & 1) != 0) {
        FUN_0043dd50(local_38 & 0xfffffffffffffffe);
      }
      uVar2 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if ((uVar2 & 1) != 0) {
        FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
      }
      return;
    }
  }
  FUN_00440b30(param_1,3,1);
  return;
}

