
void FUN_02785bd0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *local_1c0;
  undefined8 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined8 local_e0;
  undefined6 uStack_d8;
  undefined2 local_d2;
  undefined6 uStack_d0;
  undefined1 auStack_ca [2];
  uint local_c8;
  undefined *local_c0;
  undefined2 *local_b8;
  undefined4 local_b0;
  undefined2 local_ac [10];
  undefined2 local_98;
  undefined4 local_90 [2];
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_b8 = local_ac;
  *(undefined1 *)((long)param_1 + 0x14) = 2;
  local_b0 = 0xb;
  local_98 = 0;
  local_c0 = PTR_DAT_04bc0d30 + 0x10;
  local_1b0 = 0xb;
  puStack_1b8 = &local_e0;
  local_ac[0] = 0;
  local_1ac = 0;
  local_198 = 0xffffffff;
  local_13d = 0;
  local_17c[0] = 0;
  local_1a8 = 0xffffffff;
  uStack_1a0 = 0xffffffff00000000;
  puStack_188 = local_17c;
  local_180 = 0x40;
  local_190 = PTR_DAT_04bb2bc0 + 0x10;
  local_128 = 0x40;
  local_e5 = 0;
  local_124[0] = 0;
  puStack_130 = local_124;
  uStack_d0 = 0;
  local_1c0 = PTR_DAT_04bb5128 + 0x10;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d2 = 0;
  puVar3 = auStack_ca;
  if (auStack_ca <= (undefined1 *)((long)&local_e0 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_e0 + 2U);
  }
  local_138 = local_190;
  memset(puStack_1b8,0,(ulong)(puVar3 + (-0xe1 - (long)&local_1c0)) & 0xfffffffffffffffc | 2);
  local_88 = param_2 + 4;
  local_c8 = 2;
  local_90[0] = 10;
  FUN_0082b014(&local_1c0);
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 1;
  local_54 = 0;
  local_80 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_78 = 0;
  FUN_02906b00(&local_80,&local_1c0,local_90);
  local_c8 = 2;
  if (*(byte *)(param_2 + 0x18) < 4) {
    local_c8 = (uint)*(byte *)(param_2 + 0x18);
  }
  FUN_006f4da4(&local_1c0,&local_c0,0);
  (**(code **)(local_c0 + 0x18))(&local_c0);
  puVar5 = PTR_DAT_04bb2da0;
  lVar7 = 0;
  do {
    if (local_b8[lVar7] == 0) {
LAB_02785d84:
      uVar6 = (uint)lVar7;
joined_r0x02785d88:
      if (0 < (int)uVar6) {
        if (9 < (int)uVar6) {
          uVar6 = 10;
        }
        uVar9 = 0;
        do {
          (**(code **)(local_c0 + 0x18))(&local_c0);
          uVar8 = 0;
          do {
            if (local_b8[uVar8] == 0) goto LAB_02785db8;
            if (local_b8[uVar8 + 1] == 0) {
              uVar8 = uVar8 + 1;
              goto LAB_02785db8;
            }
            if (local_b8[uVar8 + 2] == 0) {
              uVar8 = uVar8 + 2;
              goto LAB_02785db8;
            }
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          uVar8 = 0;
LAB_02785db8:
          uVar1 = uVar9 + 1;
          puVar4 = (undefined2 *)puVar5;
          if (uVar9 <= (uVar8 & 0xffffffff)) {
            puVar4 = local_b8 + uVar9;
          }
          *(undefined2 *)((long)param_1 + uVar9 * 2) = *puVar4;
          uVar9 = uVar1;
        } while (uVar1 != uVar6);
      }
      break;
    }
    if (local_b8[lVar7 + 1] == 0) {
      lVar7 = lVar7 + 1;
      goto LAB_02785d84;
    }
    if (local_b8[lVar7 + 2] == 0) {
      uVar6 = (int)lVar7 + 2;
      goto joined_r0x02785d88;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  bVar2 = 2;
  if (*(byte *)(param_2 + 0x18) < 4) {
    bVar2 = *(byte *)(param_2 + 0x18);
  }
  *(byte *)((long)param_1 + 0x14) = bVar2;
  return;
}

