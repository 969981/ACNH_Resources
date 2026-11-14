
void FUN_01b3eaf8(byte *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined1 local_90 [8];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  local_35 = 0;
  local_3c[0] = 0;
  local_48 = local_3c;
  lVar3 = *(long *)PTR_DAT_04bb28f8;
  local_40 = 8;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_50,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_50,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  (**(code **)(local_50 + 0x18))(&local_50);
  puVar2 = local_48;
  local_15c = 0;
  local_160 = 0x20;
  local_148 = 0xffffffff;
  local_158 = 0xffffffff;
  uStack_150 = 0xffffffff00000000;
  puStack_138 = local_12c;
  local_130 = 0x40;
  puStack_168 = local_90;
  local_ed = 0;
  local_12c[0] = 0;
  local_140 = PTR_DAT_04bb2bc0 + 0x10;
  local_d8 = 0x40;
  local_95 = 0;
  local_d4[0] = 0;
  puStack_e0 = local_d4;
  local_170 = PTR_DAT_04bb4e10 + 0x10;
  local_90 = (undefined1  [8])0x0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  ppuVar1 = &local_50;
  if (&local_50 <= local_90 + 2) {
    ppuVar1 = (undefined **)(local_90 + 2);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_e8 = local_140;
  memset(puStack_168,0,(size_t)((long)ppuVar1 + (-0xe0 - (long)&local_170)));
  FUN_01c0e6b4(&local_170,puVar2,lVar3 + 0x26d0);
  FUN_01bae5d0(param_2,&local_170,0);
  return;
}

