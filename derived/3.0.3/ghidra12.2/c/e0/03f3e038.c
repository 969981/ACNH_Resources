
void FUN_03f3e038(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined **local_168;
  char *pcStack_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined *local_a8;
  undefined4 local_a0;
  undefined **local_98;
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
  undefined **local_40;
  undefined *puStack_38;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 & 1) == 0) {
    if (((uVar2 >> 3 & 1) == 0) && ((uVar2 >> 0x12 & 1) != 0)) {
      local_178 = 0;
      uStack_170 = 0;
      puStack_138 = local_12c;
      local_158 = 0;
      local_ad = 0;
      local_1a8 = PTR_DAT_04bdf0f0 + 0x10;
      local_150 = 0;
      uStack_148 = 0;
      local_12c[0] = 0;
      local_130 = 0x80;
      local_140 = &DAT_048fc708;
      local_a0 = 1;
      local_98 = &PTR_LAB_048f9770;
      puStack_90 = PTR_DAT_04bb2120;
      local_64 = 0;
      local_5c = 0;
      local_54 = 0;
      local_4c = 0;
      local_7c = 0;
      local_a8 = PTR_DAT_04bdf0b0 + 0x10;
      local_74 = 0;
      local_6c = 0;
      local_84 = 0;
      local_44 = 0;
      local_1a0 = 0;
      local_88 = 0x1010100;
      local_83 = 0x1010101;
      local_19e = 10;
      local_40 = &PTR_LAB_048f9770;
      puStack_38 = PTR_DAT_04bb2120;
      local_198 = *(undefined8 *)(*(long *)PTR_DAT_04bb49b8 + 0x148);
      local_188 = *(long *)PTR_DAT_04bb49b8 + 0x330;
      local_168 = &PTR_LAB_048f9770;
      pcStack_160 = "HeapAdjust";
      uStack_190 = 0;
      lStack_180 = param_1;
      FUN_03f44830(param_1 + 0x160,&local_1a8);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((uVar2 >> 1 & 1) == 0) {
        lVar1 = 0;
        if (*(long **)(param_1 + 0x3f8) != (long *)0x0) {
          lVar1 = (**(code **)(**(long **)(param_1 + 0x3f8) + 0x70))();
        }
        *(long *)(lVar3 + 0xc0) = *(long *)(lVar3 + 0xc0) + lVar1;
        uVar2 = *(uint *)(param_1 + 0xc) | 2;
        *(uint *)(param_1 + 0xc) = uVar2;
      }
      if ((uVar2 & 0x8004) == 0) {
        lVar1 = 0;
        if (*(long **)(param_1 + 0x3f8) != (long *)0x0) {
          lVar1 = (**(code **)(**(long **)(param_1 + 0x3f8) + 0x70))();
        }
        *(long *)(lVar3 + 200) = *(long *)(lVar3 + 200) + lVar1;
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0xc) = uVar2 | 8;
  }
  return;
}

