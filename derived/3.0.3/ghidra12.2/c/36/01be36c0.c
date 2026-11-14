
void FUN_01be36c0(int *param_1)

{
  undefined5 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  char local_350 [8];
  undefined1 auStack_348 [16];
  undefined *local_338;
  undefined8 *puStack_330;
  undefined4 local_328;
  undefined4 local_320;
  undefined8 local_314;
  undefined **local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  undefined1 auStack_2f4 [68];
  undefined **local_2b0;
  undefined1 *puStack_2a8;
  undefined4 local_2a0;
  undefined1 auStack_29c [68];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined5 uStack_1d8;
  undefined3 local_1d3;
  undefined5 uStack_1d0;
  undefined *local_1c8;
  undefined8 *puStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined **local_198;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined **local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  local_350[0] = '\x01';
  memset(auStack_348,0,0x260);
  local_328 = 0x40;
  local_320 = 0xffffffff;
  puStack_300 = auStack_2f4;
  local_314 = 0xffffffffffffffff;
  puStack_2a8 = auStack_29c;
  local_2f8 = 0x40;
  local_2a0 = 0x40;
  local_308 = &PTR_LAB_048fb9f8;
  local_2b0 = &PTR_LAB_048fb9f8;
  local_1c8 = PTR_DAT_04bb6b18 + 0x10;
  puVar1 = &uStack_1d8;
  if (&uStack_1d8 <= (undefined5 *)((long)&local_258 + 2U)) {
    puVar1 = (undefined5 *)((long)&local_258 + 2U);
  }
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_338 = local_1c8;
  puStack_330 = &local_258;
  memset(&local_258,0,(long)puVar1 + (-0xe0 - (long)&local_338));
  uStack_1d0 = 0;
  local_1b0 = 0xffffffff;
  uStack_1a8 = 0xffffffff00000000;
  puStack_1c0 = &local_e8;
  puStack_190 = local_184;
  local_184[0] = 0;
  local_198 = &PTR_LAB_048fb9f8;
  local_138 = local_12c;
  local_12c[0] = 0;
  puVar2 = auStack_68;
  if (auStack_68 <= (undefined1 *)((long)&local_e8 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_e8 + 2U);
  }
  local_1b8 = 0x40;
  local_1b4 = 0;
  local_1a0 = 0xffffffff;
  local_188 = 0x40;
  local_145 = 0;
  local_130 = 0x40;
  local_ed = 0;
  local_140 = &PTR_LAB_048fb9f8;
  uStack_1d8 = 0;
  local_1d3 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  memset(puStack_1c0,0,(size_t)(puVar2 + (-0xe0 - (long)&local_1c8)));
  FUN_01be2094(local_350,999,1);
  if (*param_1 < param_1[1]) {
    uVar4 = 1;
    do {
      puVar5 = *(undefined8 **)(param_1 + 4);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar5;
      }
      FUN_01be1c1c(puVar5,auStack_348);
      iVar3 = *param_1;
      if (iVar3 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar3 * 8) = puVar5;
        iVar3 = *param_1 + 1;
        *param_1 = iVar3;
      }
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if (local_350[0] == '\0') {
        if (param_1[1] <= iVar3) {
          return;
        }
        puVar5 = *(undefined8 **)(param_1 + 4);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 4) = *puVar5;
        }
        FUN_01be1c1c(puVar5,&uStack_1d8);
        if (*param_1 < param_1[1]) {
          *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar5;
          *param_1 = *param_1 + 1;
        }
      }
      if (0xb < uVar4) {
        return;
      }
      uVar4 = uVar4 + 1;
      FUN_01be2094(local_350,999,uVar4);
    } while (*param_1 < param_1[1]);
  }
  return;
}

