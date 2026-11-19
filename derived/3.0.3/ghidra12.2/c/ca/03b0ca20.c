
void FUN_03b0ca20(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *local_208;
  char *pcStack_200;
  long local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined **ppuStack_1c0;
  undefined *local_1a0;
  char *pcStack_198;
  long local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  int local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined **ppuStack_158;
  undefined *local_138;
  char *pcStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  uint local_110;
  int iStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **ppuStack_f0;
  undefined *local_d0;
  char *pcStack_c8;
  long local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  uint uStack_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar2 = param_5 & 1 | 0x40;
    lVar5 = (long)*(int *)(param_1 + 0x88) << 3;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    plVar3 = *(long **)(param_1 + 0x90);
    do {
      lVar4 = *plVar3;
      pcStack_c8 = "Model(XluZPrePass/ZOnly)";
      local_b8 = *param_4;
      local_b4 = 0x100000004;
      local_88 = &PTR_LAB_04b6bbc0;
      local_a4 = (int)*(short *)(lVar4 + 4);
      local_ac = 0;
      local_a0 = 0x10000000f;
      local_98 = 0xffffffff00000000;
      uStack_90 = 0xd;
      local_d0 = puVar1;
      local_c0 = param_1 + 8;
      uStack_a8 = uVar2;
      FUN_039eec04(param_3,param_2,&local_d0);
      pcStack_130 = "Model(XluZPrePass/ZOnly/DepthFill)";
      uStack_120 = 0x400000010;
      iStack_10c = (int)*(short *)(lVar4 + 4);
      local_108 = 0x10000000f;
      uStack_100 = 0xffffffff00000000;
      local_118 = 1;
      local_f8 = 0xe;
      ppuStack_f0 = &PTR_LAB_04b6bbc0;
      local_138 = puVar1;
      local_128 = param_1 + 0x48;
      local_110 = uVar2;
      FUN_039eec04(param_3,param_2,&local_138);
      pcStack_198 = "Model(XluZPrePass/Opa+AlphaMask)";
      local_188 = *param_4;
      local_174 = (int)*(short *)(lVar4 + 4);
      local_170 = 0x10000000f;
      uStack_168 = 0xffffffff00000000;
      local_184 = 0xa00000004;
      local_17c = 0x44000000000;
      local_160 = 0xf;
      ppuStack_158 = &PTR_LAB_04b6bbc0;
      local_1a0 = puVar1;
      local_190 = param_1 + 8;
      FUN_039eec04(param_3,param_2,&local_1a0);
      pcStack_200 = "Model(XluZPrePass/Xlu)";
      local_1f0 = *param_4;
      local_1ec = 0xa00000004;
      local_1dc = (int)*(short *)(lVar4 + 4);
      local_1d8 = 0x10000000f;
      uStack_1d0 = 0xffffffff00000000;
      local_1e4 = 0x2044000000000;
      local_1c8 = 0x10;
      ppuStack_1c0 = &PTR_LAB_04b6bbc0;
      local_208 = puVar1;
      local_1f8 = param_1 + 0x48;
      FUN_039eec04(param_3,param_2,&local_208);
      lVar5 = lVar5 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}

