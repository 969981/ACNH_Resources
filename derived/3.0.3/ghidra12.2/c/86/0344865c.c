
void FUN_0344865c(float *param_1,ushort param_2)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_30;
  ushort local_28;
  
  local_30 = PTR_DAT_04bc06f0 + 0x10;
  uVar2 = (uint)param_2 - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
  if ((uVar2 < *(uint *)(DAT_05336138 + 0x1d8)) &&
     (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
    local_28 = param_2;
    uVar2 = FUN_01b84110(&local_30);
    *param_1 = (float)(uVar2 >> 0x18) / 255.0;
    param_1[1] = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
    param_1[2] = (float)(uVar2 >> 8 & 0xff) / 255.0;
    param_1[3] = (float)(uVar2 & 0xff) / 255.0;
    uVar3 = FUN_01b84270(&local_30);
    uVar2 = (uint)uVar3;
    param_1[4] = (float)(uVar3 >> 0x18 & 0xff) / 255.0;
    param_1[5] = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
    param_1[6] = (float)(uVar2 >> 8 & 0xff) / 255.0;
    param_1[7] = (float)(uVar2 & 0xff) / 255.0;
    uVar2 = FUN_01b843d0(&local_30);
    param_1[8] = (float)(uVar2 >> 0x18) / 255.0;
    param_1[9] = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
    param_1[10] = (float)(uVar2 >> 8 & 0xff) / 255.0;
    param_1[0xb] = (float)(uVar2 & 0xff) / 255.0;
    sVar1 = (**(code **)(local_30 + 0x50))(&local_30);
    if (sVar1 != -1) {
      uVar2 = FUN_01b84ab0(&local_30);
      param_1[0xc] = (float)(uVar2 >> 0x18) / 255.0;
      param_1[0xd] = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
      param_1[0xe] = (float)(uVar2 >> 8 & 0xff) / 255.0;
      param_1[0xf] = (float)(uVar2 & 0xff) / 255.0;
    }
    *(bool *)(param_1 + 0x10) = sVar1 != -1;
  }
  return;
}

