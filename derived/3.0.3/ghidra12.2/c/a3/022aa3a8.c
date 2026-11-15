
uint FUN_022aa3a8(float *param_1,float *param_2)

{
  uint uVar1;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined *local_30;
  uint local_28;
  uint local_24;
  undefined *local_20;
  uint local_18;
  uint local_14;
  
  local_18 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  local_14 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_20 = PTR_DAT_04bbbad8 + 0x10;
  if ((local_18 & 1) != 0) {
    local_18 = local_18 - 1;
  }
  if ((local_14 & 1) != 0) {
    local_14 = local_14 - 1;
  }
  local_30 = PTR_DAT_04bbbad8 + 0x10;
  local_28 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  local_24 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  if ((local_28 & 1) != 0) {
    local_28 = local_28 - 1;
  }
  if ((local_24 & 1) != 0) {
    local_24 = local_24 - 1;
  }
  local_38 = 0;
  local_34[0] = 0xff;
  uVar1 = FUN_022a6bb0(param_1,&local_20,&local_30,0,local_34,&local_38);
  return uVar1 & 1;
}

