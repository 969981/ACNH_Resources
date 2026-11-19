
void FUN_03837e58(float param_1,byte *param_2,long param_3,uint param_4)

{
  undefined8 local_220;
  undefined **local_218;
  byte *pbStack_210;
  undefined *local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  char *pcStack_1c0;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  byte *local_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [127];
  undefined1 local_f5;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [127];
  undefined1 local_5d;
  undefined *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined1 local_44 [31];
  undefined1 local_25;
  
  local_208 = PTR_DAT_04bcb3e0;
  if ((*param_2 >> 2 & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (param_1 < 0.0) {
      return;
    }
    if (12544.0 <= param_1) {
      if (param_1 < 32400.0) {
        return;
      }
      uStack_1e0 = 0;
      *param_2 = *param_2 & 0xfd;
      local_1b8 = PTR_DAT_04bcb3b8;
      param_2[4] = 6;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      local_218 = &local_208;
      local_180 = local_174;
      local_208 = local_208 + 0x10;
      local_1a8 = *(undefined8 *)(param_3 + 8);
      local_1b8 = local_1b8 + 0x10;
      uStack_1b0 = 0;
      local_198 = 0;
      pbStack_210 = param_2 + 0x1420;
      local_178 = 0x80;
      local_1c8 = PTR_DAT_04bb2020 + 0x10;
      local_f5 = 0;
      local_174[0] = 0;
      local_e0 = 0x80;
      puStack_188 = PTR_DAT_04bb2d88 + 0x10;
      puStack_e8 = local_dc;
      local_dc[0] = 0;
      local_5d = 0;
      local_25 = 0;
      local_190 = 0;
      local_48 = 0x20;
      puStack_50 = local_44;
      local_44[0] = 0;
      local_58 = PTR_DAT_04bb2028 + 0x10;
      local_220 = 0;
      pcStack_1c0 = "DestroyObjectInstance";
      local_200 = 1;
      local_1f8 = *(undefined8 *)(DAT_05ae0928 + 0x50);
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1f0 = 0;
      local_1fe = 2;
      local_1e8 = DAT_05ae0928 + 0x230;
      local_1a0 = pbStack_210;
      local_f0 = puStack_188;
      FUN_03f45184(DAT_05ae0928 + 0x58,&local_220);
      return;
    }
  }
  if (((param_4 & 1) == 0) && (*(int *)(param_2 + 4) == 4)) {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x198))();
    param_2[4] = 5;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}

