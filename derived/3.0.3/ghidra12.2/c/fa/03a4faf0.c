
void FUN_03a4faf0(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 *param_5,
                 undefined8 *param_6,long param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  long local_128;
  undefined4 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_10c;
  ulong local_104;
  undefined8 local_f8;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined4 local_e4;
  undefined4 local_cc;
  uint local_74;
  
  if (((*(byte *)(param_1 + 0x3c9) ^ 0xff) & 3) != 0) {
    return;
  }
  if (DAT_05aea958 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x3e0);
  uVar5 = 1 << (ulong)(param_3 & 0x1f);
  lVar8 = *(long *)(DAT_05aea958 + 0x18);
  uVar1 = *(uint *)(lVar8 + 0x1b0);
  uVar7 = (ulong)uVar1;
  if (0 < (int)*(uint *)(puVar6 + 0x21)) {
    if ((int)uVar1 < 1) {
      return;
    }
    uVar13 = 0;
    do {
      lVar16 = (long)*(int *)((long)puVar6 + uVar13 * 4 + 0x88);
      if ((*(uint *)(*(long *)(lVar8 + 0x1b8) + lVar16 * 4) & uVar5) != 0) goto LAB_03a4fbf4;
      uVar15 = 0;
      puVar12 = (uint *)(*(long *)(lVar8 + 0x1b8) + 0x300 + lVar16 * 4);
      do {
        if (uVar7 - 1 == uVar15) goto LAB_03a4fb90;
        uVar2 = *puVar12;
        puVar12 = puVar12 + 0xc0;
        uVar15 = uVar15 + 1;
      } while ((uVar2 & uVar5) == 0);
      if (uVar15 < uVar7) goto LAB_03a4fbf4;
LAB_03a4fb90:
      uVar13 = uVar13 + 1;
    } while (uVar13 != *(uint *)(puVar6 + 0x21));
  }
  if ((int)uVar1 < 1) {
    return;
  }
  if ((*(uint *)(*(long *)(lVar8 + 0x1b8) + 0xfc) & uVar5) == 0) {
    uVar13 = 0;
    puVar12 = (uint *)(*(long *)(lVar8 + 0x1b8) + 0x3fc);
    do {
      if (uVar7 - 1 == uVar13) {
        return;
      }
      uVar1 = *puVar12;
      puVar12 = puVar12 + 0xc0;
      uVar13 = uVar13 + 1;
    } while ((uVar1 & uVar5) == 0);
    if (uVar7 <= uVar13) {
      return;
    }
  }
LAB_03a4fbf4:
  bVar4 = *(byte *)(param_1 + 8);
  uVar9 = *(undefined8 *)(DAT_05ae9110 + 0xc0);
  *puVar6 = *(undefined8 *)(DAT_05ae9110 + 0x40);
  puVar6[1] = uVar9;
  local_74 = param_4;
  FUN_03b05b60(puVar6,*(undefined8 *)(DAT_05aea958 + 0x18));
  lVar16 = DAT_05aea958;
  lVar8 = *(long *)(param_1 + 0x3e0) + 0x88;
  lVar10 = *(long *)(DAT_05aea958 + 0x18);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x3e0) + 0x108);
  uVar2 = *(uint *)(lVar10 + 0x1b0);
  uVar7 = (ulong)uVar2;
  if (0 < (int)uVar1) {
    if ((int)uVar2 < 1) {
      return;
    }
    uVar13 = 0;
    do {
      lVar14 = (long)*(int *)(lVar8 + uVar13 * 4);
      if ((*(uint *)(*(long *)(lVar10 + 0x1b8) + lVar14 * 4) & uVar5) != 0) goto LAB_03a4fcc4;
      uVar15 = 0;
      puVar12 = (uint *)(*(long *)(lVar10 + 0x1b8) + 0x300 + lVar14 * 4);
      do {
        if (uVar7 - 1 == uVar15) goto LAB_03a4fc60;
        uVar3 = *puVar12;
        puVar12 = puVar12 + 0xc0;
        uVar15 = uVar15 + 1;
      } while ((uVar3 & uVar5) == 0);
      if (uVar15 < uVar7) goto LAB_03a4fcc4;
LAB_03a4fc60:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar1);
  }
  if ((int)uVar2 < 1) {
    return;
  }
  if ((*(uint *)(*(long *)(lVar10 + 0x1b8) + 0xfc) & uVar5) == 0) {
    uVar13 = 0;
    puVar12 = (uint *)(*(long *)(lVar10 + 0x1b8) + 0x3fc);
    do {
      if (uVar7 - 1 == uVar13) {
        return;
      }
      uVar2 = *puVar12;
      puVar12 = puVar12 + 0xc0;
      uVar13 = uVar13 + 1;
    } while ((uVar2 & uVar5) == 0);
    if (uVar7 <= uVar13) {
      return;
    }
  }
LAB_03a4fcc4:
  FUN_038e4cec(local_74,&local_e8);
  local_e4 = 0;
  local_e6 = 1;
  local_e8 = 0x101;
  local_cc = 0;
  FUN_038e4d90(&local_e8,param_2);
  local_104 = 0;
  local_144 = 0x3f8000003dcccccd;
  local_13c = &DAT_3f8000003f800000;
  local_134 = 0x3f800000;
  local_10c = 0x1b;
  local_f8 = *(undefined8 *)(param_1 + 0x3e0);
  local_130 = 0;
  if (local_74 - 1 < 3) {
    puVar11 = (undefined4 *)(lVar16 + 0x3d0);
  }
  else {
    if (local_74 != 4) goto LAB_03a4fdb4;
    puVar11 = (undefined4 *)(lVar16 + 0x3d4);
  }
  local_104 = (ulong)local_74;
  local_10c = CONCAT44(*puVar11,param_3);
LAB_03a4fdb4:
  uStack_188 = param_6[1];
  uStack_190 = *param_6;
  uStack_178 = param_6[3];
  local_180 = param_6[2];
  uStack_198 = param_5[5];
  local_1a0 = param_5[4];
  uStack_1b8 = param_5[1];
  local_1c0 = *param_5;
  uStack_1a8 = param_5[3];
  uStack_1b0 = param_5[2];
  uStack_168 = param_6[5];
  uStack_170 = param_6[4];
  uStack_158 = param_6[7];
  local_160 = param_6[6];
  fVar18 = (float)((ulong)uStack_1b8 >> 0x20);
  fVar17 = (float)((ulong)uStack_1a8 >> 0x20);
  fVar19 = (float)((ulong)uStack_198 >> 0x20);
  local_150 = (-(float)uStack_1b0 * fVar17 - fVar18 * (float)local_1c0) - fVar19 * (float)local_1a0;
  fStack_14c = (-(float)((ulong)uStack_1b0 >> 0x20) * fVar17 -
               fVar18 * (float)((ulong)local_1c0 >> 0x20)) -
               fVar19 * (float)((ulong)local_1a0 >> 0x20);
  local_148 = (-(float)uStack_1a8 * fVar17 - fVar18 * (float)uStack_1b8) -
              fVar19 * (float)uStack_198;
  if (param_7 != 0) {
    local_13c = (undefined1 *)
                CONCAT44(*(undefined4 *)(param_7 + 0xe8),*(undefined4 *)(param_7 + 0xec));
    local_134 = *(undefined4 *)(param_7 + 0xf4);
    local_130 = *(undefined8 *)(param_7 + 0xfc);
    local_144 = *(undefined8 *)(param_7 + 0xe0);
  }
  local_128 = param_7;
  local_120 = param_8;
  local_118 = param_2;
  local_110 = (uint)bVar4;
  FUN_03b098f0(lVar16,param_2,lVar8,(ulong)uVar1,uVar5,&local_1c0,
               *(byte *)(param_1 + 0x3c9) >> 2 & 1);
  return;
}

