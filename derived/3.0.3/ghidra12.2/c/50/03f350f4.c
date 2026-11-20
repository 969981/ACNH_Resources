
void FUN_03f350f4(long param_1,long param_2)

{
  undefined8 local_1b0;
  undefined ***local_1a8;
  undefined8 uStack_1a0;
  undefined **local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  long lStack_160;
  undefined *local_158;
  char *pcStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_73;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined *local_30;
  undefined *puStack_28;
  
  lStack_170 = *(long *)(param_2 + 0x10);
  if (lStack_170 != 0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    local_198 = &PTR_LAB_04ba8c98;
    local_1a8 = &local_198;
    puStack_128 = local_11c;
    local_148 = 0;
    local_158 = PTR_DAT_04bb2020 + 0x10;
    local_140 = 0;
    uStack_138 = 0;
    local_120 = 0x80;
    local_9d = 0;
    local_11c[0] = 0;
    local_130 = PTR_DAT_04bb2d88 + 0x10;
    local_90 = 1;
    puStack_80 = PTR_DAT_04bb2120;
    local_98 = PTR_DAT_04bdf0b0 + 0x10;
    local_3c = 0;
    local_44 = 0;
    local_4c = 0;
    local_54 = 0;
    local_5c = 0;
    local_64 = 0;
    local_6c = 0;
    local_74 = 0;
    local_34 = 0;
    local_190 = 0;
    local_1b0 = 0;
    local_78 = 0x1010100;
    local_73 = 0x1010101;
    lStack_160 = param_1 + 0x350;
    local_18e = 3;
    local_188 = *(undefined8 *)(param_1 + 0x140);
    puStack_28 = PTR_DAT_04bb2120;
    local_168 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_1 + 0x340;
    pcStack_150 = "Unload";
    local_88 = local_158;
    local_30 = local_158;
    FUN_03f45184(*(undefined8 *)(param_1 + 0x1a0),&local_1b0);
  }
  return;
}

