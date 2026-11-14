
bool FUN_01878bb8(long param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  undefined *puStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  local_44 = *(undefined4 *)(param_1 + 0x4a8);
  puStack_38 = PTR_DAT_04bb2010 + 0x10;
  local_48[0] = *(byte *)(param_1 + 0x494) ^ 1;
  local_40 = *(undefined8 *)(param_1 + 0x498);
  local_30 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
  local_2c = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
  local_28 = 0;
  local_18 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  iStack_14 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  local_20 = puStack_38;
  FUN_01946dd0(*(undefined4 *)(param_1 + 0x338),&local_40,&local_20,local_48);
  return (local_28 >> 8 & 0xff) + (local_28 & 0xff) + (local_28 >> 0x10 & 0xff) + (local_28 >> 0x18)
         < 2;
}

