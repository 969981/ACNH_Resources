
undefined8 FUN_01d7dd50(long param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  ulong uVar12;
  byte local_2a4 [4];
  undefined **local_2a0;
  undefined8 *puStack_298;
  undefined4 local_290;
  undefined1 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined *local_270;
  undefined1 *puStack_268;
  undefined4 local_260;
  undefined1 local_25c [63];
  undefined1 local_21d;
  undefined *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [4];
  byte local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined *local_160;
  undefined2 *local_158;
  int local_150;
  undefined2 local_14c [31];
  undefined2 local_10e;
  undefined *local_108;
  undefined2 *local_100;
  int local_f8;
  undefined2 local_f4 [31];
  undefined2 local_b6;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  local_10e = 0;
  local_150 = 0x20;
  local_14c[0] = 0;
  local_f8 = 0x20;
  local_158 = local_14c;
  local_b6 = 0;
  local_f4[0] = 0;
  local_160 = PTR_DAT_04bc0840 + 0x10;
  local_100 = local_f4;
  local_108 = local_160;
  puVar6 = (undefined2 *)(**(code **)(param_2[1] + 0x18))();
  puVar4 = local_100;
  if (local_100 != puVar6) {
    lVar9 = 0;
    psVar11 = puVar6 + 1;
    do {
      if (psVar11[-1] == 0) goto LAB_01d7de2c;
      if (*psVar11 == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01d7de2c;
      }
      if (psVar11[1] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01d7de2c;
      }
      lVar9 = lVar9 + 3;
      psVar11 = psVar11 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01d7de2c:
    uVar5 = (uint)lVar9;
    if (local_f8 <= (int)(uint)lVar9) {
      uVar5 = local_f8 - 1;
    }
    uVar12 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
    memcpy(local_100,puVar6,uVar12);
    *(undefined2 *)((long)puVar4 + uVar12) = 0;
  }
  local_168 = *param_2;
  local_17c[0] = *param_3;
  if (7 < local_17c[0]) {
    local_17c[0] = 0xff;
  }
  lVar9 = FUN_025830c0(DAT_055021a0,local_17c,1);
  if (lVar9 != 0) {
    if ((*(long **)(lVar9 + 0x17f68) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x17f68), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    lVar10 = *(long *)(lVar9 + 0x17f48);
    lVar3 = *(long *)(lVar9 + 0x17f50);
    local_21d = 0;
    local_290 = 0x20;
    local_260 = 0x40;
    local_208 = 0x40;
    puStack_268 = local_25c;
    puStack_210 = local_204;
    local_1c5 = 0;
    local_270 = PTR_DAT_04bb2bc0 + 0x10;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_2a0 = &PTR_LAB_049173e0;
    puVar2 = auStack_180;
    if (auStack_180 <= (undefined1 *)((long)&local_1c0 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_1c0 + 2U);
    }
    local_190 = 0;
    uStack_188 = 0;
    puStack_298 = &local_1c0;
    local_218 = local_270;
    memset(&local_1c0,0,(size_t)(puVar2 + (-0xe0 - (long)&local_2a0)));
    local_a8[0] = 10;
    local_a0 = lVar3 + lVar10 + 4;
    memset(&local_1c0,0,((ulong)(puVar2 + ~(ulong)&local_1c0) & 0xfffffffffffffffe) + 2);
    local_28c = 0;
    local_288 = 0xffffffff;
    uStack_280 = 0xffffffff00000000;
    local_278 = 0xffffffff;
    local_25c[0] = 0;
    local_204[0] = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_70 = 1;
    local_98 = PTR_DAT_04bc0cd8 + 0x10;
    local_6c = 0;
    FUN_02906b00(&local_98,&local_2a0,local_a8);
    puVar6 = (undefined2 *)(*(code *)local_2a0[2])(&local_2a0);
    puVar4 = local_158;
    if (local_158 != puVar6) {
      lVar10 = 0;
      psVar11 = puVar6 + 1;
      do {
        if (psVar11[-1] == 0) goto LAB_01d7e03c;
        if (*psVar11 == 0) {
          lVar10 = lVar10 + 1;
          goto LAB_01d7e03c;
        }
        if (psVar11[1] == 0) {
          lVar10 = lVar10 + 2;
          goto LAB_01d7e03c;
        }
        lVar10 = lVar10 + 3;
        psVar11 = psVar11 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_01d7e03c:
      uVar1 = (uint)lVar10;
      if (local_150 <= (int)(uint)lVar10) {
        uVar1 = local_150 - 1;
      }
      uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(local_158,puVar6,uVar12);
      *(undefined2 *)((long)puVar4 + uVar12) = 0;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x17f68) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x17f68) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    local_2a0 = (undefined **)0x0;
    uVar12 = FUN_01df3070(&local_2a0);
    if ((uVar12 & 1) != 0) {
      local_2a4[0] = *param_3;
      if (7 < local_2a4[0]) {
        local_2a4[0] = 0xff;
      }
      uVar12 = FUN_007b36c8(&local_178,local_2a4);
      if ((uVar12 & 1) != 0) {
        local_b0 = nn::oe::GetDesiredLanguage();
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x7f) = 0;
        *(undefined8 *)(param_1 + 0x28) = local_178;
        *(undefined8 *)(param_1 + 0x30) = uStack_170;
        *(undefined8 *)(param_1 + 0x38) = local_168;
        (**(code **)(local_160 + 0x18))(&local_160);
        FUN_038d4e80(param_1 + 0x40,0x40,local_158,0xffffffff);
        *(undefined1 *)(param_1 + 199) = 0;
        *(undefined8 *)(param_1 + 0x80) = local_b0;
        (**(code **)(local_108 + 0x18))(&local_108);
        FUN_038d4e80(param_1 + 0x88,0x40,local_100,0xffffffff);
        *(undefined8 *)(param_1 + 0x80) = local_b0;
        plVar8 = *(long **)(DAT_05aec868 + 0x330);
        plVar8[0x21] = param_1;
        *(undefined1 *)((long)plVar8 + 0x104) = 1;
        (**(code **)(*plVar8 + 0x18))(plVar8,1,0);
        return 1;
      }
    }
  }
  return 0;
}

