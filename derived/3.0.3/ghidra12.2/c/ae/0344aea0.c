
void FUN_0344aea0(float *param_1,ushort param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *local_30;
  ushort local_28;
  
  if (param_1 != (float *)0x0) {
    local_30 = PTR_DAT_04bc06f8 + 0x10;
    uVar1 = (uint)param_2 - (uint)*(ushort *)(DAT_05336138 + 0x3f8);
    if ((uVar1 < *(uint *)(DAT_05336138 + 0x3d8)) &&
       (*(long *)(*(long *)(DAT_05336138 + 0x3e0) + (long)(int)uVar1 * 8) != 0)) {
      local_28 = param_2;
      uVar1 = FUN_01b84530(&local_30);
      *param_1 = (float)(uVar1 >> 0x18) / 255.0;
      param_1[1] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
      param_1[2] = (float)(uVar1 >> 8 & 0xff) / 255.0;
      param_1[3] = (float)(uVar1 & 0xff) / 255.0;
      uVar2 = FUN_01b84690(&local_30);
      uVar1 = (uint)uVar2;
      param_1[4] = (float)(uVar2 >> 0x18 & 0xff) / 255.0;
      param_1[5] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
      param_1[6] = (float)(uVar1 >> 8 & 0xff) / 255.0;
      param_1[7] = (float)(uVar1 & 0xff) / 255.0;
      uVar2 = FUN_01b847f0(&local_30);
      uVar1 = (uint)uVar2;
      param_1[8] = (float)(uVar2 >> 0x18 & 0xff) / 255.0;
      param_1[9] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
      param_1[10] = (float)(uVar1 >> 8 & 0xff) / 255.0;
      param_1[0xb] = (float)(uVar1 & 0xff) / 255.0;
      uVar2 = FUN_01b84950(&local_30);
      uVar1 = (uint)uVar2;
      param_1[0xc] = (float)(uVar2 >> 0x18 & 0xff) / 255.0;
      param_1[0xd] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
      param_1[0xe] = (float)(uVar1 >> 8 & 0xff) / 255.0;
      param_1[0xf] = (float)(uVar1 & 0xff) / 255.0;
    }
  }
  return;
}

