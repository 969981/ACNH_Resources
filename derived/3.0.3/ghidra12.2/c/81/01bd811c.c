
void FUN_01bd811c(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **local_310;
  long local_308 [2];
  undefined *local_2f8 [4];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined *local_2c8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined *local_298;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined *local_268;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  uint local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined2 local_e7;
  undefined2 local_e4;
  undefined4 local_e2;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long *local_98;
  undefined2 local_90;
  char local_8e;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  
  if (param_3 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(param_3 + 0x40);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x218);
  uVar3 = *(undefined1 *)(param_1 + 0x252);
  uVar13 = *(undefined8 *)(param_1 + 600);
  uVar12 = *(undefined8 *)(param_1 + 0x260);
  uVar11 = *(undefined8 *)(param_1 + 0x208);
  memset(local_308,0,0x1e0);
  local_128 = 0xffffffff;
  local_310 = &PTR_LAB_04a3ccc0;
  local_c0 = 1;
  local_f0 = *(undefined8 *)(param_1 + 0x220);
  local_120 = 0;
  local_2f8[0] = PTR_DAT_04bb2d80 + 0x10;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_e8 = *(undefined1 *)(param_1 + 0x228);
  local_118 = 0;
  local_110 = 0;
  local_e7 = *(undefined2 *)(param_1 + 0x229);
  local_88[0] = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_8e = '\0';
  local_e4 = *(undefined2 *)(param_1 + 0x22c);
  local_e2 = *(undefined4 *)(param_1 + 0x22e);
  local_d8 = *(undefined8 *)(param_1 + 0x238);
  local_90 = *(undefined2 *)(param_1 + 0x280);
  local_d0 = *(undefined8 *)(param_1 + 0x240);
  local_c8 = *(undefined4 *)(param_1 + 0x248);
  local_c4 = *(undefined1 *)(param_1 + 0x24c);
  local_a8 = *(undefined8 *)(param_1 + 0x268);
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_2c8 = local_2f8[0];
  local_298 = local_2f8[0];
  local_268 = local_2f8[0];
  local_238 = local_2f8[0];
  local_208 = local_2f8[0];
  local_1d8 = local_2f8[0];
  local_1a8 = local_2f8[0];
  local_178 = local_2f8[0];
  local_148 = local_2f8[0];
  local_108 = uVar11;
  local_100 = param_1 + 0x220;
  local_f8 = uVar9;
  local_be = uVar3;
  local_b8 = uVar13;
  local_b0 = uVar12;
  local_a0 = lVar10;
  local_98 = param_2;
  if (lVar10 != 0) {
    lVar6 = (**(code **)(*param_2 + 0x68))(param_2);
    if (**(char **)(lVar6 + 8) != '\0') {
      uVar7 = FUN_029ba7e0(lVar10,local_88,lVar6);
      if ((uVar7 & 1) == 0) {
        if (local_8e == '\0') goto LAB_01bd82fc;
      }
      else {
        local_8e = '\x01';
      }
      local_78 = 0;
      local_70 = local_80;
    }
  }
LAB_01bd82fc:
  (*(code *)local_310[2])(&local_310);
  local_120 = 0;
  local_118 = 0;
  local_128 = 0xffffffff;
  local_110 = 0;
  lVar10 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar6 != 0) && (uVar7 = (**(code **)(*param_2 + 0x20))(param_2), lVar10 != 0)) &&
     ((int)local_128 < 9)) {
    local_128 = local_128 + 1;
    bVar5 = 9 < local_128;
    uVar4 = (ulong)local_128;
    plVar1 = local_308 + uVar4 * 6;
    if (bVar5) {
      plVar1 = local_308;
    }
    *plVar1 = lVar10;
    plVar1 = local_308 + uVar4 * 6 + 1;
    if (bVar5) {
      plVar1 = local_308 + 1;
    }
    *plVar1 = lVar6 + (uVar7 & 0xffffffff) * 2;
    ppuVar2 = local_2f8 + uVar4 * 6;
    if (bVar5) {
      ppuVar2 = local_2f8;
    }
    *ppuVar2 = PTR_DAT_04bb2d80 + 0x10;
  }
  (*(code *)local_310[3])(&local_310);
  FUN_006f1490(&local_310);
  puVar8 = *(undefined8 **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x220) = *puVar8;
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(puVar8 + 1);
  *(undefined1 *)(param_1 + 0x229) = *(undefined1 *)((long)puVar8 + 9);
  *(undefined1 *)(param_1 + 0x22a) = *(undefined1 *)((long)puVar8 + 10);
  *(undefined2 *)(param_1 + 0x22c) = *(undefined2 *)((long)puVar8 + 0xc);
  *(undefined2 *)(param_1 + 0x22e) = *(undefined2 *)((long)puVar8 + 0xe);
  *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(puVar8 + 2);
  *(undefined8 *)(param_1 + 0x238) = puVar8[3];
  *(undefined8 *)(param_1 + 0x240) = puVar8[4];
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(puVar8 + 5);
  *(undefined1 *)(param_1 + 0x24c) = *(undefined1 *)((long)puVar8 + 0x2c);
  return;
}

