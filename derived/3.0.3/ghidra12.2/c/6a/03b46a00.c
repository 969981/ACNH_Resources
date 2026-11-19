
undefined8 FUN_03b46a00(float param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ushort uVar16;
  undefined2 *puVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined1 uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  uint local_240 [6];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined2 local_1bf;
  undefined1 local_1bd;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined2 local_1b9;
  undefined2 local_1b7;
  undefined1 local_1b5;
  undefined4 local_1b4;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined1 local_1ac;
  undefined1 local_1aa;
  undefined2 local_1a9;
  undefined1 local_1a7;
  undefined8 local_1a6;
  undefined1 local_19e;
  undefined1 local_19c;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  undefined1 local_190;
  undefined1 local_18e;
  undefined2 local_18d;
  undefined1 local_18b;
  undefined4 local_18a;
  undefined2 local_186;
  undefined2 local_184;
  undefined1 local_182;
  undefined1 local_180;
  undefined2 local_17f;
  undefined1 local_17d;
  undefined8 local_17c;
  undefined1 local_174;
  undefined1 local_172;
  undefined2 local_171;
  undefined1 local_16f;
  undefined8 local_16e;
  undefined1 local_166;
  undefined1 local_164;
  undefined2 local_163;
  undefined1 local_161;
  undefined4 local_160;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined1 local_158;
  undefined1 local_156;
  undefined2 local_155;
  undefined1 local_153;
  undefined4 local_152;
  undefined2 local_14e;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_134;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_11c;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [127];
  undefined1 local_45;
  
  if (*(long **)(param_2 + 0x40) == (long *)0x0) {
    return 0;
  }
  lVar7 = **(long **)(param_2 + 0x40);
  if (lVar7 != 0) {
    FUN_003ceb1c(lVar7,0);
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    return 0;
  }
  local_240[0] = 0;
  local_218 = 0xffffffffffffffff;
  uStack_210 = 0xffffffffffffffff;
  local_1d0 = 0;
  local_1c8 = 0x3f80000000000000;
  local_1c0 = 0x7f;
  local_1b9._1_1_ = 0x7f;
  local_1b7 = 0;
  local_1aa = 0x7f;
  local_1a6 = 0xffff00000040;
  local_1a9 = 0;
  local_19c = 0x7f;
  local_19b = 0;
  local_18e = 0x7f;
  local_18a = 0x40;
  local_18d = 0;
  local_180 = 0x7f;
  local_17c = 0xffff00000040;
  local_17f = 0;
  local_172 = 0x7f;
  local_16e = 0xffff00000040;
  local_171 = 0;
  local_164 = 0x7f;
  local_163 = 0;
  local_156 = 0x7f;
  local_152 = 0x40;
  local_155 = 0;
  local_14c = 0;
  local_1bf = 0;
  local_144 = 0xffffffff;
  local_134 = 0;
  local_11c = 0x7f00000000;
  local_1d8 = 0;
  local_1bc = 0;
  local_1ba = 0;
  local_1b4 = 0x40;
  local_1b0 = 0xffff;
  local_1b5 = 0;
  local_1ae = 0;
  local_1ac = 0;
  local_1a7 = 0;
  local_19e = 0;
  local_198 = 0xffff00000040;
  local_199 = 0;
  local_190 = 0;
  local_186 = 0xffff;
  local_18b = 0;
  local_184 = 0;
  local_182 = 0;
  local_17d = 0;
  local_174 = 0;
  local_16f = 0;
  local_166 = 0;
  local_160 = 0x40;
  local_15c = 0xffff;
  local_161 = 0;
  local_15a = 0;
  local_158 = 0;
  local_14e = 0xffff;
  local_153 = 0;
  local_140 = 0;
  local_1bd = 0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_e0 = 1;
  local_228 = 0;
  uStack_220 = 0;
  local_208 = (undefined1 *)0x0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    local_240[0] = 1;
    local_240[1] = 2;
    local_240[2] = *(int *)(param_2 + 0x10);
    iVar5 = FUN_02a0c760(*(undefined1 *)(*(long *)(param_2 + 0x30) + 0x10));
    iVar6 = 0;
    if (iVar5 != -1) {
      iVar6 = iVar5;
    }
    iVar5 = FUN_02a0c760(0);
    if ((iVar6 == iVar5) && (*(char *)(DAT_05aebb78 + 0xc2) != '\0')) {
      local_11c = CONCAT44(local_11c._4_4_,2);
      local_114 = 1;
    }
  }
  iVar5 = FUN_02a0c760(*(undefined1 *)(*(long *)(param_2 + 0x30) + 0x10));
  iVar6 = 0;
  if (iVar5 != -1) {
    iVar6 = iVar5;
  }
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar6);
  iVar6 = FUN_03b471ec(&local_d8);
  if (iVar6 == 1) {
    puVar10 = *(undefined8 **)(param_2 + 0x30);
    if (puVar10 == (undefined8 *)0x0) {
      return 0;
    }
    local_240[0] = local_240[0] | 0x420;
    if ((((puVar10[1] != 0) && ((*(byte *)(puVar10[1] + 0x2c) >> 1 & 1) != 0)) &&
        ((*(byte *)((long)puVar10 + 0x11) >> 2 & 1) == 0)) &&
       (*(char *)(DAT_05aebb78 + 0xc0) != '\0')) {
      local_1e0 = *puVar10;
    }
    local_45 = 0;
    local_c8 = 0x80;
    local_d0 = local_c4;
    local_c4[0] = 0;
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    bVar2 = *(byte *)((long)puVar10 + 0x11);
    if (((bVar2 >> 3 & 1) == 0) || (puVar8 = (undefined8 *)puVar10[3], puVar8 == (undefined8 *)0x0))
    {
      if ((bVar2 >> 1 & 1) == 0) {
        if (DAT_05aebb78 == 0) {
          if ((bVar2 >> 5 & 1) == 0) {
            if (puVar10[1] == 0) {
              pcVar9 = (char *)0x0;
            }
            else {
              puVar14 = (uint *)(puVar10[1] + 0x24);
              pcVar9 = (char *)((ulong)*puVar14 + (long)puVar14);
            }
          }
          else {
            pcVar9 = "<NoSound>";
          }
          pcVar1 = ".bfstm";
          if (DAT_05aebc00 != '\0') {
            pcVar1 = ".bwav";
          }
          FUN_038d1270(&local_d8,&DAT_0406a3d7,pcVar9,pcVar1);
        }
        else {
          if ((bVar2 >> 5 & 1) == 0) {
            if (puVar10[1] == 0) {
              pcVar9 = (char *)0x0;
            }
            else {
              puVar14 = (uint *)(puVar10[1] + 0x24);
              pcVar9 = (char *)((ulong)*puVar14 + (long)puVar14);
            }
          }
          else {
            pcVar9 = "<NoSound>";
          }
          pcVar1 = ".bfstm";
          if (DAT_05aebc00 != '\0') {
            pcVar1 = ".bwav";
          }
          FUN_038d1270(&local_d8,"%s%s%s",*(undefined8 *)(DAT_05aebb78 + 0xb8),pcVar9,pcVar1);
        }
      }
    }
    else {
      (**(code **)*puVar8)(puVar8,&local_d8);
    }
    (**(code **)(local_d8 + 0x18))(&local_d8);
    local_208 = local_d0;
    lVar7 = *(long *)(param_2 + 0x30);
    local_1f0 = *(undefined8 *)(param_2 + 0x18);
    local_1e8 = *(undefined8 *)(param_2 + 0x20);
    if ((*(long *)(lVar7 + 8) == 0) || ((*(byte *)(*(long *)(lVar7 + 8) + 0x2c) >> 4 & 1) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 3;
    }
    local_14c = CONCAT44(local_14c._4_4_,uVar12);
    lVar11 = *(long *)(lVar7 + 8);
    if (lVar11 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ushort)*(byte *)(lVar11 + 0x30);
      if (*(byte *)(lVar11 + 0x30) != 0) {
        uVar16 = (ushort)*(byte *)(lVar11 + 0x31);
      }
    }
    local_1c0 = 0x7f;
    uVar15 = 0;
    uVar18 = 0;
    local_1c8 = CONCAT44(0x3f800000,(uint)uVar16 << 0x10);
    puVar17 = &local_1b0;
    while( true ) {
      uVar19 = 0;
      if (*(long *)(lVar7 + 8) != 0) {
        uVar19 = (ulong)*(byte *)(*(long *)(lVar7 + 8) + 0x30);
      }
      if ((7 < uVar15) || (uVar19 <= uVar15)) break;
      local_1c8 = CONCAT62(local_1c8._2_6_,(short)local_1c8 << 1) | 1;
      lVar11 = *(long *)(lVar7 + 8);
      if ((lVar11 == 0) || (uVar13 = (uint)uVar15, *(byte *)(lVar11 + 0x30) <= uVar13)) {
        uVar19 = 0;
        uVar21 = 0;
      }
      else {
        pbVar20 = (byte *)(lVar11 + 0x31);
        if ((((uVar13 != 0) && (pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 1)) &&
            (pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 2)) &&
           (((pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 3 &&
             (pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 4)) &&
            ((pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 5 &&
             ((pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 6 &&
              (pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1, uVar13 != 7)))))))) {
          pbVar20 = pbVar20 + (ulong)*pbVar20 * 2 + 1;
        }
        uVar19 = (ulong)*pbVar20;
        uVar21 = 0x7f;
      }
      uVar23 = (long)local_240 + uVar15 * 0xe;
      *(char *)((long)&local_1b4 + uVar15 * 0xe + 3) = (char)uVar19;
      *(undefined1 *)(&local_1bc + uVar15 * 7) = uVar21;
      (&local_1b9)[uVar15 * 7] = 0x7f00;
      if (uVar19 != 0) {
        if (uVar19 < 4) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0;
          do {
            cVar3 = (char)uVar18 + (char)uVar22;
            pcVar9 = (char *)((long)puVar17 + uVar22);
            *pcVar9 = cVar3;
            uVar22 = uVar22 + 4;
            pcVar9[1] = cVar3 + '\x01';
            pcVar9[2] = cVar3 + '\x02';
            pcVar9[3] = cVar3 + '\x03';
          } while ((uVar19 & 0xfc) != uVar22);
          uVar23 = (ulong)(uint)((int)uVar18 + (int)uVar22);
          uVar18 = uVar23;
        }
        uVar4 = uVar18;
        for (uVar19 = uVar19 & 3; uVar18 = uVar23, uVar19 != 0; uVar19 = uVar19 - 1) {
          uVar23 = (ulong)((int)uVar4 + 1);
          *(char *)((long)puVar17 + uVar22) = (char)uVar4;
          uVar22 = uVar22 + 1;
          uVar4 = uVar23;
        }
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 7;
      uVar18 = uVar18 & 0xffffffff;
    }
    if (DAT_05aebb20 != 0) {
      if ((param_3 & 1) == 0) {
        iVar6 = FUN_003e5ee8(DAT_05aebb20,*(undefined8 *)(param_2 + 0x40),0x1000000,local_240);
      }
      else {
        iVar6 = FUN_003e610c();
      }
      if (iVar6 != 0) {
        return 0;
      }
    }
  }
  else {
    if (iVar6 != 0) {
      return 0;
    }
    puVar10 = *(undefined8 **)(param_2 + 0x30);
    if (((puVar10 == (undefined8 *)0x0) || ((int *)*puVar10 == (int *)0x0)) ||
       (*(int *)*puVar10 != 0x56415746)) {
      return 0;
    }
    local_240[0] = local_240[0] | 0x40;
    local_128 = *puVar10;
    local_120 = 0;
    if ((DAT_05aebb20 != 0) &&
       (iVar6 = FUN_003e5ee8(DAT_05aebb20,*(undefined8 *)(param_2 + 0x40),0x1000001,local_240),
       iVar6 != 0)) {
      return 0;
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      FUN_003e5df0(&local_d8);
      if (local_d8 != (undefined *)0x0) {
        FUN_003e14d4(local_d8,*(undefined4 *)(param_2 + 0x2c));
      }
      FUN_003e5ec0(&local_d8);
    }
  }
  lVar7 = *(long *)(param_2 + 0x38);
  if (param_1 == 0.0) {
    *(undefined1 **)(lVar7 + 8) = &DAT_3f8000003f800000;
    *(undefined8 *)(lVar7 + 0x10) = 0x3f800000;
    goto LAB_03b47144;
  }
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  if (param_1 < 0.0) goto LAB_03b47144;
  lVar11 = *(long *)(param_2 + 0x38);
  fVar25 = *(float *)(lVar11 + 8);
  *(undefined4 *)(lVar11 + 0x10) = 0x3f800000;
  lVar7 = DAT_05aebb78;
  if (fVar25 == 1.0) {
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(undefined1 **)(lVar11 + 8) = &DAT_3f8000003f800000;
    goto LAB_03b47144;
  }
  param_1 = (1.0 - fVar25) / param_1;
  *(float *)(lVar11 + 0x14) = param_1;
  fVar25 = fVar25 + *(float *)(*(long *)(lVar7 + 0x10) + 0x1c) * param_1;
  if (0.0 <= param_1) {
    if (1.0 < fVar25) goto LAB_03b4713c;
  }
  else if (fVar25 < 1.0) {
LAB_03b4713c:
    fVar25 = 1.0;
  }
  *(float *)(lVar11 + 0xc) = fVar25;
LAB_03b47144:
  *(undefined4 *)(param_2 + 0x28) = 0x3f800000;
  if ((*(long *)(param_2 + 0x40) != 0) && (*(long *)(param_2 + 0x38) != 0)) {
    iVar6 = *(int *)(param_2 + 0xc);
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar6);
    fVar25 = *(float *)(*(long *)(param_2 + 0x38) + 8);
    if (iVar6 == 3) {
      fVar24 = sinf(fVar25 * 1.5707964);
    }
    else if (iVar6 == 2) {
      fVar24 = SQRT(fVar25);
      if (NAN(fVar24)) {
        fVar24 = sqrtf(fVar25);
      }
    }
    else if (iVar6 == 1) {
      fVar24 = fVar25 * fVar25;
    }
    else {
      fVar24 = fVar25;
    }
    if (**(long **)(param_2 + 0x40) != 0) {
      FUN_003cfb08(fVar24,**(long **)(param_2 + 0x40),0);
    }
  }
  *(undefined4 *)(param_2 + 8) = 1;
  return 1;
}

