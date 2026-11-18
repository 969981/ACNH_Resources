
ulong FUN_0368f440(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  uint local_24c;
  undefined *local_248;
  uint *puStack_240;
  float local_228 [36];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  uint local_108 [35];
  uint3 local_7c [3];
  
  local_108[0x22] = 0;
  local_7c[0] = 0x80023;
  local_108[0] = 0;
  local_108[1] = 0;
  local_110 = 0;
  local_108[0x1e] = 0;
  local_108[0x1f] = 0;
  local_108[0x20] = 0;
  local_108[0x21] = 0;
  local_198 = 0;
  local_108[0x1a] = 0;
  local_108[0x1b] = 0;
  local_108[0x1c] = 0;
  local_108[0x1d] = 0;
  local_108[0x16] = 0;
  local_108[0x17] = 0;
  local_108[0x18] = 0;
  local_108[0x19] = 0;
  local_108[0x12] = 0;
  local_108[0x13] = 0;
  local_108[0x14] = 0;
  local_108[0x15] = 0;
  local_108[0xe] = 0;
  local_108[0xf] = 0;
  local_108[0x10] = 0;
  local_108[0x11] = 0;
  local_108[10] = 0;
  local_108[0xb] = 0;
  local_108[0xc] = 0;
  local_108[0xd] = 0;
  local_108[6] = 0;
  local_108[7] = 0;
  local_108[8] = 0;
  local_108[9] = 0;
  local_108[2] = 0;
  local_108[3] = 0;
  local_108[4] = 0;
  local_108[5] = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  FUN_0376c3f0(local_108,&local_198,0,1);
  local_228[0x22] = 0.0;
  local_228[0x1e] = 0.0;
  local_228[0x1f] = 0.0;
  local_228[0x20] = 0.0;
  local_228[0x21] = 0.0;
  local_228[0x18] = 0.0;
  local_228[0x19] = 0.0;
  local_228[0x1a] = 0.0;
  local_228[0x1b] = 0.0;
  local_228[0x1c] = 0.0;
  local_228[0x1d] = 0.0;
  local_228[0x14] = 0.0;
  local_228[0x15] = 0.0;
  local_228[0x16] = 0.0;
  local_228[0x17] = 0.0;
  local_228[0x10] = 0.0;
  local_228[0x11] = 0.0;
  local_228[0x12] = 0.0;
  local_228[0x13] = 0.0;
  local_228[0xc] = 0.0;
  local_228[0xd] = 0.0;
  local_228[0xe] = 0.0;
  local_228[0xf] = 0.0;
  local_228[8] = 0.0;
  local_228[9] = 0.0;
  local_228[10] = 0.0;
  local_228[0xb] = 0.0;
  local_228[4] = 0.0;
  local_228[5] = 0.0;
  local_228[6] = 0.0;
  local_228[7] = 0.0;
  local_228[0] = 0.0;
  local_228[1] = 0.0;
  local_228[2] = 0.0;
  local_228[3] = 0.0;
  local_248 = &DAT_04b435d8;
  puStack_240 = local_108;
  FUN_0376ec70(&local_248);
  param_1 = param_1 + 0x6a0;
  lVar10 = 0x26;
  do {
    local_248 = (undefined *)((ulong)local_248 & 0xffffffff00000000);
    uVar3 = FUN_020fc100(&local_248,&local_24c,param_1);
    if ((uVar3 & 1) != 0) {
      uVar3 = (ulong)local_248 & 0xffffffff;
      if (local_24c < 0x20) {
        if (0x22 < (uint)local_248) {
          uVar3 = 0;
        }
        local_108[uVar3] = local_108[uVar3] & (1 << (ulong)(local_24c & 0x1f) ^ 0xffffffffU);
      }
      uVar3 = (ulong)local_248 & 0xffffffff;
      if (0x22 < (uint)local_248) {
        uVar3 = 0;
      }
      local_228[uVar3] = local_228[uVar3] + -1.0;
    }
    lVar10 = lVar10 + -1;
    param_1 = param_1 + 0xd8;
  } while (lVar10 != 0);
  local_248 = (undefined *)((ulong)local_248 & 0xffffffff00000000);
  uVar3 = FUN_020fc100(&local_248,&local_24c,param_2);
  if ((uVar3 & 1) != 0) {
    uVar3 = (ulong)local_248 & 0xffffffff;
    if (local_24c < 0x20) {
      if (0x22 < (uint)local_248) {
        uVar3 = 0;
      }
      local_108[uVar3] = local_108[uVar3] & (1 << (ulong)(local_24c & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar3 = 0;
  do {
    uVar7 = *(uint *)((long)local_108 + (-(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2));
    uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
    uVar7 = uVar7 + (uVar7 >> 8);
    if ((uVar7 + (uVar7 >> 0x10) & 0x3f) != 0) goto LAB_0368f994;
    uVar7 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar7;
  } while (uVar7 != 0x23);
  uVar3 = (ulong)DAT_0545a400;
  if ((uVar3 < 0x23) && (DAT_0545a401 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a401 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a401 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a403;
  if ((uVar3 < 0x23) && (DAT_0545a404 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a404 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a404 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a406;
  if ((uVar3 < 0x23) && (DAT_0545a407 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a407 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a407 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a409;
  if ((uVar3 < 0x23) && (DAT_0545a40a <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a40a & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a40a < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a40c;
  if ((uVar3 < 0x23) && (DAT_0545a40d <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a40d & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a40d < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a40f;
  if ((uVar3 < 0x23) && (DAT_0545a410 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a410 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a410 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a412;
  if ((uVar3 < 0x23) && (DAT_0545a413 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a413 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a413 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a415;
  if ((uVar3 < 0x23) && (DAT_0545a416 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a416 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a416 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
  uVar3 = (ulong)DAT_0545a418;
  if ((uVar3 < 0x23) && (DAT_0545a419 <= (byte)(&DAT_053e6e93)[uVar3])) {
    uVar7 = 1 << (ulong)(DAT_0545a419 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar3] & uVar7) != 0) && (DAT_0545a419 < 0x20)) {
      local_108[uVar3] = local_108[uVar3] | uVar7;
    }
  }
LAB_0368f994:
  puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  local_248 = (undefined *)((ulong)local_248 & 0xffffffff00000000);
  fVar12 = -3.4028235e+38;
  uVar7 = 0;
  do {
    uVar3 = (ulong)uVar7;
    if (0x22 < uVar7) {
      uVar3 = 0;
    }
    uVar9 = local_108[uVar3] - (local_108[uVar3] >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    local_24c = uVar7;
    if ((uVar9 + (uVar9 >> 0x10) & 0x3f) != 0) {
      puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar9 = *puVar5 ^ *puVar5 << 0xb;
      uVar6 = puVar5[3];
      *puVar5 = puVar5[1];
      puVar5[1] = puVar5[2];
      uVar9 = uVar9 >> 8 ^ uVar6 >> 0x13 ^ uVar9 ^ uVar6;
      puVar5[2] = uVar6;
      puVar5[3] = uVar9;
      uVar3 = (ulong)local_24c;
      if (0x22 < local_24c) {
        uVar3 = 0;
      }
      fVar11 = local_228[uVar3] + (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      if (fVar12 < fVar11) {
        local_248 = (undefined *)CONCAT44(local_248._4_4_,local_24c);
        fVar12 = fVar11;
      }
    }
    uVar9 = 0x23;
    if ((int)uVar7 < 0x23) {
      uVar9 = uVar7 + 1;
    }
    uVar7 = uVar9;
  } while (uVar9 != 0x23);
  uVar3 = (ulong)local_248 & 0xffffffff;
  if (0x22 < (uint)local_248) {
    uVar3 = 0;
  }
  uVar7 = local_108[uVar3] - (local_108[uVar3] >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  uVar7 = uVar7 + (uVar7 >> 0x10) & 0x3f;
  if (uVar7 == 0) {
    FUN_020fd3a0(local_7c,param_3);
  }
  else {
    uVar3 = (ulong)local_248 & 0xffffffff;
    uVar9 = 0xffffffff;
    uVar6 = puVar4[3];
    if (0x22 < (uint)local_248) {
      uVar3 = 0;
    }
    uVar1 = *puVar4 ^ *puVar4 << 0xb;
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    uVar1 = uVar1 >> 8 ^ uVar6 >> 0x13 ^ uVar1 ^ uVar6;
    puVar4[2] = uVar6;
    puVar4[3] = uVar1;
    uVar6 = local_108[uVar3];
    if ((uVar6 != 0) &&
       (uVar2 = uVar6 - (uVar6 >> 1 & 0x55555555),
       uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
       uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f, uVar2 = uVar2 + (uVar2 >> 8),
       uVar7 = (uint)((ulong)uVar1 * (ulong)uVar7 >> 0x20), uVar7 < (uVar2 + (uVar2 >> 0x10) & 0x3f)
       )) {
      iVar8 = uVar7 + 2;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 2) {
          uVar7 = uVar6 - 1 & (uVar6 ^ 0xffffffff);
          uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
          uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
          uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
          uVar7 = uVar7 + (uVar7 >> 8);
          uVar9 = uVar7 + (uVar7 >> 0x10) & 0x3f;
          break;
        }
        uVar6 = uVar6 - 1 & uVar6;
      } while (uVar6 != 0);
    }
    FUN_020fd218(local_7c,(ulong)local_248 & 0xffffffff,uVar9);
  }
  return (ulong)local_7c[0];
}

