
void FUN_03f40b90(undefined *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined *local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  undefined *puStack_180;
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
  
  if (*(int *)(param_1 + 0x10) == 5) {
    if (*(char *)(param_3 + 8) == '\0') {
      local_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      puStack_138 = local_12c;
      uVar1 = 1;
      local_168 = PTR_DAT_04bb2020 + 0x10;
      local_130 = 0x80;
      local_1a8 = PTR_DAT_04bdf0f0 + 0x10;
      local_ad = 0;
      local_12c[0] = 0;
      local_140 = PTR_DAT_04bb2d88 + 0x10;
      local_a0 = 1;
      puStack_90 = PTR_DAT_04bb2120;
      local_4c = 0;
      local_54 = 0;
      local_5c = 0;
      local_64 = 0;
      local_6c = 0;
      local_74 = 0;
      local_a8 = PTR_DAT_04bdf0b0 + 0x10;
      local_7c = 0;
      local_84 = 0;
      local_44 = 0;
      puStack_38 = PTR_DAT_04bb2120;
      local_1a0 = 1;
      local_88 = 0x1010100;
      local_83 = 0x1010101;
      local_19e = 9;
      lStack_170 = *(long *)PTR_DAT_04bb49b8;
      local_198 = *(undefined8 *)(lStack_170 + 0x148);
      uStack_190 = 0;
      local_188 = lStack_170 + 0x3a0;
      lStack_170 = lStack_170 + 0x3b0;
      local_178 = 0;
      pcStack_160 = "ClearCache";
      puStack_180 = param_1;
      local_98 = local_168;
      local_40 = local_168;
      FUN_03f44830(*(undefined8 *)(param_3 + 0x10),&local_1a8);
      goto LAB_03f40cd8;
    }
  }
  else {
    local_1a8 = param_1;
    FUN_03f35694(*(undefined8 *)PTR_DAT_04bb49b8,&local_1a8);
  }
  uVar1 = 0;
LAB_03f40cd8:
  *(undefined1 *)(param_2 + 8) = uVar1;
  return;
}

