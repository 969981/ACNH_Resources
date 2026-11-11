
void FUN_0045c770(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong local_28;
  
  local_50 = *param_3;
  uStack_48 = param_3[1];
  local_40 = param_3[2];
  if ((local_40 & 1) != 0) {
    FUN_0043dd30(local_40 & 0xfffffffffffffffe);
  }
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = param_2[2];
  if ((local_28 & 1) != 0) {
    FUN_0043dd30(local_28 & 0xfffffffffffffffe);
  }
  FUN_0045c850(param_1,&local_50,1);
  if ((local_28 & 1) != 0) {
    FUN_0043dd50(local_28 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) == 0) {
    return;
  }
  FUN_0043dd50(local_40 & 0xfffffffffffffffe);
  return;
}

