
void FUN_004dc3c0(long *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uVar2;
  long local_48;
  long lStack_40;
  ulong local_38;
  undefined4 local_28 [2];
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
  }
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = *param_4;
  if ((((param_1[1] != 0) && (*param_1 != 0)) && (uVar2 = FUN_00428440(), (uVar2 & 0x1f) == 7)) &&
     (lVar1 = FUN_004c7730(param_1[3] + 0x68,param_1[1]), lVar1 != 0)) {
    local_28[0] = *param_4;
    FUN_004d6800(&local_48,param_1[3],param_1,local_28);
    if (local_48 != 0) {
      *param_1 = local_48;
      param_1[1] = lStack_40;
      if ((local_38 & 1) != 0) {
        FUN_0043dd30(local_38 & 0xfffffffffffffffe);
      }
      if ((param_1[2] & 1U) != 0) {
        FUN_0043dd50(param_1[2] & 0xfffffffffffffffe);
      }
      param_1[2] = local_38;
    }
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
  }
  return;
}

