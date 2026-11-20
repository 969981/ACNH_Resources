
void FUN_03f35214(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_1c0;
  undefined ***local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  long lStack_170;
  undefined *local_168;
  char *pcStack_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_83;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined *local_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 8) >> 2 & 1) == 0) {
      (**(code **)(*(long *)(lVar1 + 0x360) + 0x18))(lVar1 + 0x360);
      FUN_006e9528(&local_1a8,&DAT_04064d1a,*(undefined8 *)(lVar1 + 0x368));
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    local_1a8 = &PTR_LAB_04ba8c98;
    local_1b8 = &local_1a8;
    puStack_138 = local_12c;
    local_158 = 0;
    local_168 = PTR_DAT_04bb2020 + 0x10;
    local_150 = 0;
    uStack_148 = 0;
    local_130 = 0x80;
    local_ad = 0;
    local_140 = PTR_DAT_04bb2d88 + 0x10;
    local_12c[0] = 0;
    local_a0 = 1;
    local_a8 = PTR_DAT_04bdf0b0 + 0x10;
    local_4c = 0;
    local_54 = 0;
    local_5c = 0;
    local_64 = 0;
    local_6c = 0;
    local_74 = 0;
    local_7c = 0;
    local_84 = 0;
    local_44 = 0;
    local_1c0 = 0;
    local_88 = 0x1010100;
    local_83 = 0x1010101;
    local_19e = 3;
    local_1a0 = 0x101;
    local_198 = *(undefined8 *)(param_1 + 0x140);
    puStack_90 = PTR_DAT_04bb2120;
    puStack_38 = PTR_DAT_04bb2120;
    lStack_170 = param_1 + 0x350;
    local_178 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = param_1 + 0x340;
    pcStack_160 = "Unload(ForSync)";
    lStack_180 = lVar1;
    local_98 = local_168;
    local_40 = local_168;
    FUN_03f45184(*(undefined8 *)(param_1 + 0x1a0),&local_1c0);
  }
  return;
}

