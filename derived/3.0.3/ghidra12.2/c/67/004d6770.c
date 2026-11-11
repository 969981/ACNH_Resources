
void FUN_004d6770(long *param_1)

{
  long local_38;
  long lStack_30;
  ulong local_28;
  undefined4 local_18 [2];
  
  local_18[0] = (undefined4)param_1[4];
  FUN_004d6800(&local_38,param_1[3],param_1,local_18);
  if (local_38 != 0) {
    *param_1 = local_38;
    param_1[1] = lStack_30;
    if ((local_28 & 1) != 0) {
      FUN_0043dd30(local_28 & 0xfffffffffffffffe);
    }
    if ((param_1[2] & 1U) != 0) {
      FUN_0043dd50(param_1[2] & 0xfffffffffffffffe);
    }
    param_1[2] = local_28;
  }
  if ((local_28 & 1) != 0) {
    FUN_0043dd50(local_28 & 0xfffffffffffffffe);
  }
  return;
}

