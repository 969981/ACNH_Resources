
void FUN_03448808(float *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb4788;
  uVar1 = (uint)*(ushort *)(param_2 + 8) - (uint)*(ushort *)(lVar3 + 0x3f8);
  if ((uVar1 < *(uint *)(lVar3 + 0x3d8)) &&
     (*(long *)(*(long *)(lVar3 + 0x3e0) + (long)(int)uVar1 * 8) != 0)) {
    uVar1 = FUN_01b84110(param_2);
    *param_1 = (float)(uVar1 >> 0x18) / 255.0;
    param_1[1] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    param_1[2] = (float)(uVar1 >> 8 & 0xff) / 255.0;
    param_1[3] = (float)(uVar1 & 0xff) / 255.0;
    uVar2 = FUN_01b84270(param_2);
    uVar1 = (uint)uVar2;
    param_1[4] = (float)(uVar2 >> 0x18 & 0xff) / 255.0;
    param_1[5] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    param_1[6] = (float)(uVar1 >> 8 & 0xff) / 255.0;
    param_1[7] = (float)(uVar1 & 0xff) / 255.0;
    uVar2 = FUN_01b843d0(param_2);
    uVar1 = (uint)uVar2;
    param_1[8] = (float)(uVar2 >> 0x18 & 0xff) / 255.0;
    param_1[9] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    param_1[10] = (float)(uVar1 >> 8 & 0xff) / 255.0;
    param_1[0xb] = (float)(uVar1 & 0xff) / 255.0;
    uVar1 = FUN_01b84ab0(param_2);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0xc] = (float)(uVar1 >> 0x18) / 255.0;
    param_1[0xd] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    param_1[0xe] = (float)(uVar1 >> 8 & 0xff) / 255.0;
    param_1[0xf] = (float)(uVar1 & 0xff) / 255.0;
  }
  return;
}

