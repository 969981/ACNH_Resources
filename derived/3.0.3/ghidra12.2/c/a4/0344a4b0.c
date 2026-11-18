
void FUN_0344a4b0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined4 uVar11;
  undefined **local_288;
  undefined **ppuStack_280;
  undefined *local_268;
  long lStack_260;
  undefined *local_258;
  undefined1 *puStack_250;
  undefined4 local_248;
  undefined1 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined *local_228;
  undefined1 *puStack_220;
  undefined4 local_218;
  undefined1 local_214 [63];
  undefined1 local_1d5;
  undefined *local_1d0;
  undefined1 *puStack_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  undefined1 local_178 [8];
  undefined6 uStack_170;
  undefined2 local_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  long local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_105;
  undefined **local_100;
  undefined **ppuStack_f8;
  undefined **local_e0;
  undefined **ppuStack_d8;
  undefined *local_c0;
  long lStack_b8;
  undefined *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_5d;
  long local_58;
  
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) &&
     (((param_1[3] != 0 && (param_1[4] != 0)) && ((param_1[5] != 0 && (param_1[6] != 0)))))) {
    uVar6 = FUN_027ae998(param_2 + 4,(byte *)(param_2 + 0x60));
    cVar4 = *(char *)(param_2 + 0xb8);
    if ((uVar6 & 1) == 0) {
      if (cVar4 == '\x01') {
        local_105 = 0;
        local_128 = 0x3074616300000020;
        local_130 = (long)&local_128 + 4;
        local_120 = 0x30;
        local_138 = PTR_DAT_04bb2028 + 0x10;
        FUN_038d1270(&local_138,"-----");
        uVar6 = (ulong)*(byte *)(param_2 + 0x60);
        if (uVar6 < 0x23) {
          FUN_038d1270(&local_138,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar6 * 8 + 0xb0),
                       *(undefined1 *)(param_2 + 0x61));
        }
        (**(code **)(local_138 + 0x18))(&local_138);
        lVar5 = local_130;
        local_244 = 0;
        local_248 = 0x20;
        local_240 = 0xffffffff;
        uStack_238 = 0xffffffff00000000;
        ppuStack_280 = &local_258;
        puStack_250 = local_178;
        local_230 = 0xffffffff;
        puStack_220 = local_214;
        local_218 = 0x40;
        local_1d5 = 0;
        local_214[0] = 0;
        local_b0 = PTR_DAT_04bb2bc0 + 0x10;
        local_1c0 = 0x40;
        local_17d = 0;
        local_1bc[0] = 0;
        puStack_1c8 = local_1bc;
        local_258 = PTR_DAT_04bb4e10 + 0x10;
        local_178 = (undefined1  [8])0x0;
        uStack_170 = 0;
        local_16a = 0;
        uStack_168 = 0;
        uStack_162 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        ppuVar9 = &local_138;
        if (&local_138 <= local_178 + 2) {
          ppuVar9 = (undefined **)(local_178 + 2);
        }
        local_228 = local_b0;
        local_1d0 = local_b0;
        memset(puStack_250,0,(size_t)((long)ppuVar9 + (-0xe0 - (long)ppuStack_280)));
        FUN_01c0e6b4(&local_258,lVar5,PTR_DAT_04bb2df0);
        lStack_b8 = *param_1;
        local_58 = param_1[1];
        ppuVar8 = &local_c0;
        ppuVar9 = &local_268;
        pppuVar10 = &local_288;
        local_a0 = CONCAT35(local_a0._5_3_,0x40);
        local_268 = PTR_DAT_04bb2020 + 0x10;
        lStack_260 = param_1[2];
        local_288 = &PTR_LAB_04b2ac40;
        local_c0 = local_268;
      }
      else {
        if (cVar4 != '\0') {
          return;
        }
        local_244 = 0;
        local_248 = 0xb;
        local_240 = 0xffffffff;
        uStack_238 = 0xffffffff00000000;
        puStack_220 = local_214;
        puStack_250 = local_178;
        local_230 = 0xffffffff;
        local_218 = 0x40;
        local_1d5 = 0;
        local_214[0] = 0;
        puVar1 = PTR_DAT_04bb2bc0 + 0x10;
        local_1c0 = 0x40;
        local_17d = 0;
        local_1bc[0] = 0;
        puStack_1c8 = local_1bc;
        local_258 = PTR_DAT_04bb5128 + 0x10;
        uStack_168 = 0;
        local_178 = (undefined1  [8])0x0;
        uStack_170 = 0;
        local_16a = 0;
        puVar2 = &uStack_162;
        if (&uStack_162 <= local_178 + 2) {
          puVar2 = (undefined2 *)(local_178 + 2);
        }
        local_228 = puVar1;
        local_1d0 = puVar1;
        memset(puStack_250,0,
               (ulong)((long)puVar2 + (-0xe1 - (long)&local_258)) & 0xfffffffffffffffc | 2);
        local_138 = (undefined *)CONCAT44(local_138._4_4_,10);
        local_130 = param_2 + 0x80;
        FUN_0082b014(&local_258);
        local_98 = 0;
        uStack_90 = 0;
        local_a0 = 0;
        local_88 = 1;
        local_84 = 0;
        local_b0 = PTR_DAT_04bc0cd8 + 0x10;
        lStack_a8 = 0;
        FUN_02906b00(&local_b0,&local_258,&local_138);
        iVar3 = *(int *)(param_2 + 0x94);
        puVar7 = (undefined4 *)(**(code **)(local_258 + 0x40))(&local_258);
        ppuVar8 = &local_138;
        uVar11 = 1;
        if (iVar3 == 1) {
          uVar11 = 2;
        }
        *puVar7 = uVar11;
        ppuVar9 = &local_c0;
        local_130 = *param_1;
        local_58 = param_1[1];
        local_a0 = CONCAT35(local_a0._5_3_,0x40);
        pppuVar10 = &local_100;
        local_138 = PTR_DAT_04bb2020 + 0x10;
        lStack_b8 = param_1[2];
        local_100 = &PTR_LAB_04b2ac18;
        ppuStack_f8 = &local_258;
        local_c0 = local_138;
        local_b0 = puVar1;
      }
    }
    else {
      if (cVar4 != '\0') {
        return;
      }
      local_244 = 0;
      local_248 = 0xb;
      local_240 = 0xffffffff;
      uStack_238 = 0xffffffff00000000;
      puStack_220 = local_214;
      puStack_250 = local_178;
      local_230 = 0xffffffff;
      local_218 = 0x40;
      local_1d5 = 0;
      local_214[0] = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      local_1c0 = 0x40;
      local_17d = 0;
      local_1bc[0] = 0;
      puStack_1c8 = local_1bc;
      local_258 = PTR_DAT_04bb5128 + 0x10;
      uStack_168 = 0;
      local_178 = (undefined1  [8])0x0;
      uStack_170 = 0;
      local_16a = 0;
      puVar2 = &uStack_162;
      if (&uStack_162 <= local_178 + 2) {
        puVar2 = (undefined2 *)(local_178 + 2);
      }
      local_228 = puVar1;
      local_1d0 = puVar1;
      memset(puStack_250,0,
             (ulong)((long)puVar2 + (-0xe1 - (long)&local_258)) & 0xfffffffffffffffc | 2);
      local_138 = (undefined *)CONCAT44(local_138._4_4_,10);
      local_130 = param_2 + 0x80;
      FUN_0082b014(&local_258);
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = 0;
      local_88 = 1;
      local_84 = 0;
      local_b0 = PTR_DAT_04bc0cd8 + 0x10;
      lStack_a8 = 0;
      FUN_02906b00(&local_b0,&local_258,&local_138);
      iVar3 = *(int *)(param_2 + 0x94);
      puVar7 = (undefined4 *)(**(code **)(local_258 + 0x40))(&local_258);
      ppuVar8 = &local_138;
      uVar11 = 1;
      if (iVar3 == 1) {
        uVar11 = 2;
      }
      *puVar7 = uVar11;
      ppuVar9 = &local_c0;
      local_130 = *param_1;
      local_58 = param_1[1];
      local_a0 = CONCAT35(local_a0._5_3_,0x40);
      pppuVar10 = &local_e0;
      local_138 = PTR_DAT_04bb2020 + 0x10;
      lStack_b8 = param_1[2];
      local_e0 = &PTR_LAB_04b2abf0;
      ppuStack_d8 = &local_258;
      local_c0 = local_138;
      local_b0 = puVar1;
    }
    local_5d = 0;
    lStack_a8 = (long)&local_a0 + 4;
    FUN_03462c84(&local_b0,ppuVar8,ppuVar9,pppuVar10);
  }
  return;
}

