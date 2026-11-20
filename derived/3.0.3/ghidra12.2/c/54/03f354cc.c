
void FUN_03f354cc(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined **local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
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
  
  if ((((param_2 != (long *)0x0) && (lVar2 = *param_2, lVar2 != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0xc), (uVar1 >> 0xf & 1) != 0)) &&
     (((*(int *)(lVar2 + 0x10) != 1 && (*(long *)(lVar2 + 0x80) != 0)) &&
      (((uVar1 >> 0x10 & 1) == 0 && (*(int *)(lVar2 + 0x90) < 1)))))) {
    *(uint *)(lVar2 + 0xc) = uVar1 | 0x10000;
    if ((param_3 & 1) == 0) {
      local_178 = 0;
      uStack_170 = 0;
      local_168 = PTR_DAT_04bb2020 + 0x10;
      local_1a8 = &PTR_LAB_04ba8c98;
      local_158 = 0;
      puStack_138 = local_12c;
      local_130 = 0x80;
      local_ad = 0;
      local_12c[0] = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = PTR_DAT_04bb2d88 + 0x10;
      local_a0 = 1;
      puStack_90 = PTR_DAT_04bb2120;
      local_a8 = PTR_DAT_04bdf0b0 + 0x10;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_5c = 0;
      local_54 = 0;
      local_4c = 0;
      local_84 = 0;
      local_44 = 0;
      local_88 = 0x1010100;
      local_83 = 0x1010101;
      local_1a0 = 0x101;
      local_19e = 4;
      local_198 = *(undefined8 *)(param_1 + 0x140);
      puStack_38 = PTR_DAT_04bb2120;
      lStack_180 = *param_2;
      uStack_190 = 0;
      local_188 = param_1 + 0x380;
      pcStack_160 = "ClearCache(ForSync)";
      local_98 = local_168;
      local_40 = local_168;
      FUN_03f44830(lStack_180 + 0x1f8,&local_1a8);
    }
    else {
      lVar2 = *param_2;
      if (*(long *)(lVar2 + 0x218) != 0) {
        FUN_03f42ca4(*(long *)(lVar2 + 0x218),lVar2 + 0x1f8,1);
        lVar2 = *param_2;
      }
      FUN_03f3ff20(lVar2,1);
      FUN_03f4075c(*param_2,0);
      lVar2 = *param_2;
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x70) != 0) {
          *(undefined8 *)(lVar2 + 0x70) = 0;
          FUN_03f2d620(lVar2 + 0x38);
        }
        FUN_03f41298(param_1 + 0x488,lVar2);
      }
    }
    *param_2 = 0;
  }
  return;
}

