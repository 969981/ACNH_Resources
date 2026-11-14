
void FUN_01be2094(byte *param_1,undefined2 param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined *local_280;
  undefined *puStack_278;
  undefined *local_270;
  undefined1 auStack_268 [16];
  undefined *local_258;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined *local_168;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  
  puStack_278 = PTR_s_NookMilage_Keyword_Noun_04c485f8;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  local_280 = puVar3 + 0x10;
  FUN_006d8678(&local_270,"%03d_%02d_0",param_2,param_3 + -1);
  FUN_006f50a0(param_1 + 0x18,&local_280,&local_270,0);
  puStack_278 = PTR_s_NookMilage_Keyword_Noun_04c485f8;
  *(undefined2 *)(param_1 + 0x17a) = param_2;
  *(int *)(param_1 + 0x17c) = param_3;
  pbVar1 = param_1 + 0x188;
  local_280 = puVar3 + 0x10;
  FUN_006d8678(&local_270,"%03d_%02d_1",param_2,param_3 + -1);
  FUN_006f50a0(pbVar1,&local_280,&local_270,0);
  memset(auStack_268,0,0x1e0);
  local_238 = 0;
  uStack_230 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_258 = PTR_DAT_04bb2d80 + 0x10;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_88 = 0xffffffff;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_270 = PTR_DAT_04bc07e8 + 0x10;
  local_6c = 0;
  local_64 = 0;
  local_228 = local_258;
  local_1f8 = local_258;
  local_1c8 = local_258;
  local_198 = local_258;
  local_168 = local_258;
  local_138 = local_258;
  local_108 = local_258;
  local_d8 = local_258;
  local_a8 = local_258;
  bVar4 = FUN_01ba3894(&local_270,0x55,4,pbVar1);
  *param_1 = bVar4 & 1;
  bVar2 = (bVar4 & 1) == 0;
  if (bVar2) {
    bVar4 = FUN_01c072d0(param_1 + 0x18,pbVar1);
    bVar4 = bVar4 & 1;
    uVar5 = 2;
  }
  else {
    bVar4 = 0;
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x10) = (uint)bVar2;
  param_1[0x14] = bVar4;
  *(undefined4 *)(param_1 + 0x180) = uVar5;
  param_1[0x184] = bVar4;
  return;
}

