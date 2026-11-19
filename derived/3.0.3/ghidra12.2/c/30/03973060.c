
void FUN_03973060(byte *param_1,long param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  char *pcVar10;
  size_t __n;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  uint uVar22;
  byte *pbVar23;
  uint local_858 [4];
  undefined *local_848;
  char *local_840;
  undefined4 local_838;
  undefined4 local_830;
  undefined *local_828;
  char *pcStack_820;
  undefined4 local_818;
  undefined4 local_810;
  undefined *local_808;
  char *pcStack_800;
  undefined4 local_7f8;
  undefined4 local_7f0;
  undefined *local_7e8;
  char *pcStack_7e0;
  undefined4 local_7d8;
  undefined4 local_7d0;
  undefined *local_7c8;
  char *pcStack_7c0;
  undefined4 local_7b8;
  undefined4 local_7b0;
  undefined *local_7a8;
  char *pcStack_7a0;
  undefined4 local_798;
  undefined4 local_790;
  undefined *local_788;
  char *pcStack_780;
  undefined4 local_778;
  undefined4 local_770;
  undefined *local_768;
  char *pcStack_760;
  undefined4 local_758;
  undefined4 local_750;
  undefined *local_748;
  char *pcStack_740;
  undefined4 local_738;
  undefined4 local_730;
  undefined *local_728;
  char *pcStack_720;
  undefined4 local_718;
  undefined4 local_710;
  undefined *local_708;
  char *pcStack_700;
  undefined4 local_6f8;
  undefined4 local_6f0;
  undefined *local_6e8;
  char *pcStack_6e0;
  undefined4 local_6d8;
  undefined4 local_6d0;
  undefined *local_6c8;
  char *pcStack_6c0;
  undefined4 local_6b8;
  undefined4 local_6b0;
  undefined *local_6a8;
  char *pcStack_6a0;
  undefined4 local_698;
  undefined4 local_690;
  undefined *local_688;
  char *pcStack_680;
  undefined4 local_678;
  undefined4 local_670;
  undefined *local_668;
  char *local_660;
  ulong local_658;
  undefined1 *local_650;
  undefined8 *local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628 [32];
  undefined1 auStack_528 [2];
  short local_526 [3];
  uint local_520 [2];
  undefined8 local_518 [78];
  uint local_2a8 [2];
  uint local_2a0 [2];
  undefined *local_298;
  char *local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined *local_278;
  char *local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined *local_258;
  char *local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined *local_238;
  char *local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined *local_218;
  char *local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined *local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined *local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined *local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  char *local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined *local_178;
  char *local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined *local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined *local_138;
  char *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined *local_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined *local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined *local_b8;
  char *local_b0;
  uint local_a8 [18];
  
  lVar21 = *(long *)(param_2 + 0x20);
  if (lVar21 != 0) {
    local_858[0] = 0;
    local_858[2] = 0xffffffff;
    local_838 = 0;
    local_830 = 0xffffffff;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_818 = 0;
    local_810 = 0xffffffff;
    local_7f8 = 0;
    local_7f0 = 0xffffffff;
    local_7d8 = 0;
    local_7d0 = 0xffffffff;
    local_7b8 = 0;
    local_7b0 = 0xffffffff;
    local_798 = 0;
    local_790 = 0xffffffff;
    local_778 = 0;
    local_770 = 0xffffffff;
    local_758 = 0;
    local_750 = 0xffffffff;
    local_738 = 0;
    local_730 = 0xffffffff;
    local_718 = 0;
    local_710 = 0xffffffff;
    local_6f8 = 0;
    local_6f0 = 0xffffffff;
    local_6d8 = 0;
    local_6d0 = 0xffffffff;
    local_6b8 = 0;
    local_6b0 = 0xffffffff;
    local_698 = 0;
    local_690 = 0xffffffff;
    local_678 = 0;
    local_670 = 0xffffffff;
    local_668 = puVar2;
    local_660 = "Undefined";
    local_848 = puVar2;
    local_840 = "Undefined";
    local_828 = puVar2;
    pcStack_820 = "Undefined";
    local_808 = puVar2;
    pcStack_800 = "Undefined";
    local_7e8 = puVar2;
    pcStack_7e0 = "Undefined";
    local_7c8 = puVar2;
    pcStack_7c0 = "Undefined";
    local_7a8 = puVar2;
    pcStack_7a0 = "Undefined";
    local_788 = puVar2;
    pcStack_780 = "Undefined";
    local_768 = puVar2;
    pcStack_760 = "Undefined";
    local_748 = puVar2;
    pcStack_740 = "Undefined";
    local_728 = puVar2;
    pcStack_720 = "Undefined";
    local_708 = puVar2;
    pcStack_700 = "Undefined";
    local_6e8 = puVar2;
    pcStack_6e0 = "Undefined";
    local_6c8 = puVar2;
    pcStack_6c0 = "Undefined";
    local_6a8 = puVar2;
    pcStack_6a0 = "Undefined";
    local_688 = puVar2;
    pcStack_680 = "Undefined";
    if (*(char *)(param_4 + 0xec) == '\0') {
      uVar22 = 0;
    }
    else {
      uVar19 = 0;
      uVar22 = 0;
      do {
        if (*(long *)(param_4 + 0x30) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(*(long *)(param_4 + 0x30) + uVar19 * 0x10 + 0x20) + 2;
        }
        pcVar10 = (char *)FUN_0166ac50(lVar21,lVar12);
        if (((pcVar10 != (char *)0x0) &&
            (uVar18 = (uint)*(byte *)(*(long *)(param_4 + 0x28) + uVar19 * 2 + 1), uVar18 != 0xff))
           && ((param_5 == 0 ||
               ((*(uint *)(param_5 + 0x30) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)))) {
          lVar12 = (long)(int)uVar22;
          local_858[lVar12 * 8 + 2] = uVar18 | 0xffffff00;
          (&local_840)[lVar12 * 4] = pcVar10;
          lVar17 = *(long *)(*(long *)(param_3 + 0x10) + 0x10);
          if (lVar17 == 0) {
            uVar18 = 0xffffffff;
          }
          else {
            __n = strlen(pcVar10);
            uVar11 = (ulong)*(ushort *)(lVar17 + 0xc);
            puVar13 = (uint *)((int *)(lVar17 + 8) + uVar11 * 4);
            uVar18 = *puVar13;
            if (*(int *)(lVar17 + 8) < (int)*puVar13) {
              do {
                uVar15 = (long)((ulong)uVar18 << 0x20) >> 0x23;
                if (uVar15 < __n) {
                  uVar15 = (ulong)((byte)pcVar10[__n + ~uVar15] >> ((ulong)uVar18 & 7)) & 1;
                }
                else {
                  uVar15 = 0;
                }
                uVar11 = (ulong)*(ushort *)(lVar17 + 8 + uVar11 * 0x10 + uVar15 * 2 + 4);
                puVar13 = (uint *)(lVar17 + 8 + uVar11 * 0x10);
                bVar1 = (int)uVar18 < (int)*puVar13;
                uVar18 = *puVar13;
              } while (bVar1);
            }
            uVar18 = 0xffffffff;
            if (__n == **(ushort **)(puVar13 + 2)) {
              iVar9 = memcmp(*(ushort **)(puVar13 + 2) + 1,pcVar10,__n);
              uVar18 = 0xffffffff;
              if (iVar9 == 0) {
                uVar18 = (uint)((ulong)((long)puVar13 + (-0x18 - lVar17)) >> 4);
              }
            }
          }
          uVar22 = uVar22 + 1;
          local_858[lVar12 * 8] = uVar18;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(byte *)(param_4 + 0xec));
    }
    uVar18 = 0;
    local_2a8[0] = 0;
    local_298 = puVar2;
    local_290 = "Undefined";
    local_288 = 0;
    lVar21 = *(long *)(param_3 + 0x10);
    *param_1 = 0;
    local_278 = puVar2;
    local_270 = "Undefined";
    local_268 = 0;
    local_258 = puVar2;
    local_250 = "Undefined";
    local_248 = 0;
    local_238 = puVar2;
    local_230 = "Undefined";
    local_228 = 0;
    local_218 = puVar2;
    local_210 = "Undefined";
    local_208 = 0;
    local_1f8 = puVar2;
    local_2a0[0] = 0xffffffff;
    local_280 = 0xffffffff;
    local_260 = 0xffffffff;
    local_240 = 0xffffffff;
    local_220 = 0xffffffff;
    local_200 = 0xffffffff;
    local_1e0 = 0xffffffff;
    local_1c0 = 0xffffffff;
    local_1a0 = 0xffffffff;
    local_180 = 0xffffffff;
    local_160 = 0xffffffff;
    local_140 = 0xffffffff;
    local_120 = 0xffffffff;
    local_100 = 0xffffffff;
    local_e0 = 0xffffffff;
    local_c0 = 0xffffffff;
    local_1f0 = "Undefined";
    local_1e8 = 0;
    local_1d8 = puVar2;
    local_1d0 = "Undefined";
    local_1c8 = 0;
    local_1b8 = puVar2;
    local_1b0 = "Undefined";
    local_1a8 = 0;
    local_198 = puVar2;
    local_190 = "Undefined";
    local_188 = 0;
    local_178 = puVar2;
    local_170 = "Undefined";
    local_168 = 0;
    local_158 = puVar2;
    local_150 = "Undefined";
    local_148 = 0;
    local_138 = puVar2;
    local_130 = "Undefined";
    local_128 = 0;
    local_118 = puVar2;
    local_110 = "Undefined";
    local_108 = 0;
    local_f8 = puVar2;
    local_f0 = "Undefined";
    local_e8 = 0;
    local_d8 = puVar2;
    local_d0 = "Undefined";
    local_c8 = 0;
    local_b8 = puVar2;
    local_b0 = "Undefined";
    local_a8[0xc] = 0xffffffff;
    local_a8[0xd] = 0xffffffff;
    local_a8[0xe] = 0xffffffff;
    local_a8[0xf] = 0xffffffff;
    local_a8[8] = 0xffffffff;
    local_a8[9] = 0xffffffff;
    local_a8[10] = 0xffffffff;
    local_a8[0xb] = 0xffffffff;
    local_a8[4] = 0xffffffff;
    local_a8[5] = 0xffffffff;
    local_a8[6] = 0xffffffff;
    local_a8[7] = 0xffffffff;
    local_a8[0] = 0xffffffff;
    local_a8[1] = 0xffffffff;
    local_a8[2] = 0xffffffff;
    local_a8[3] = 0xffffffff;
    if (0 < (int)uVar22) {
      uVar19 = (ulong)uVar22;
      puVar13 = local_858;
      do {
        if ((puVar13[2] != 0xffffffff) && (uVar3 = *puVar13, uVar3 != 0xffffffff)) {
          lVar12 = (long)(int)uVar18;
          uVar18 = uVar18 + 1;
          *(uint *)((long)local_2a0 + lVar12 * 0x20) = puVar13[2];
          pcVar10 = *(char **)(puVar13 + 6);
          local_2a8[lVar12 * 8] = uVar3;
          (&local_290)[lVar12 * 4] = pcVar10;
        }
        uVar19 = uVar19 - 1;
        puVar13 = puVar13 + 8;
      } while (uVar19 != 0);
    }
    param_1[0x228] = (byte)uVar22;
    param_1[0x229] = (byte)uVar18;
    memset(auStack_528,0,0x280);
    local_628[0x1f] = 0;
    local_628[0x1e] = 0;
    local_628[0x1d] = 0;
    local_628[0x1c] = 0;
    local_628[0x1b] = 0;
    local_628[0x1a] = 0;
    local_628[0x19] = 0;
    local_628[0x18] = 0;
    local_628[0x17] = 0;
    local_628[0x16] = 0;
    local_628[0x15] = 0;
    local_628[0x14] = 0;
    local_628[0x13] = 0;
    local_628[0x12] = 0;
    local_628[0x11] = 0;
    local_628[0x10] = 0;
    local_628[0xf] = 0;
    local_628[0xe] = 0;
    local_628[0xd] = 0;
    local_628[0xc] = 0;
    local_628[0xb] = 0;
    local_628[10] = 0;
    local_628[9] = 0;
    local_628[8] = 0;
    local_628[7] = 0;
    local_628[6] = 0;
    local_628[5] = 0;
    local_628[4] = 0;
    local_628[3] = 0;
    local_628[2] = 0;
    local_628[1] = 0;
    local_628[0] = 0;
    if (0 < (int)uVar18) {
      lVar12 = 0;
      pbVar20 = (byte *)local_2a0;
      pbVar23 = param_1 + 0x1af;
      do {
        lVar17 = *(long *)(lVar21 + 8) + (long)*(int *)(pbVar20 + -8) * 0x10;
        bVar5 = *(byte *)(lVar17 + 0xe);
        uVar11 = (ulong)bVar5;
        uVar19 = uVar11;
        if (0xf < bVar5) {
          uVar19 = 0;
        }
        if (local_a8[uVar19] == 0xffffffff) {
          bVar6 = *param_1;
          uVar14 = *(undefined8 *)(*(long *)(lVar21 + 0x28) + uVar11 * 8);
          pbVar16 = param_1 + (ulong)bVar6 * 0x18 + 8;
          local_a8[uVar19] = (uint)bVar6;
          *(undefined8 *)pbVar16 = uVar14;
          *(undefined4 *)(pbVar16 + 8) = *(undefined4 *)(*(long *)(lVar21 + 0x38) + uVar11 * 0x10);
          uVar4 = *(undefined4 *)(*(long *)(lVar21 + 0x30) + uVar11 * 0x10);
          pbVar16[0x10] = bVar5;
          *(undefined4 *)(pbVar16 + 0xc) = uVar4;
          FUN_0034fd04(local_628 + (ulong)bVar6 * 2);
          bVar5 = *param_1;
          *param_1 = bVar5 + 1;
          *(undefined4 *)(local_628 + (ulong)bVar5 * 2) =
               *(undefined4 *)(param_1 + (ulong)bVar5 * 0x18 + 0x10);
        }
        bVar5 = *pbVar20;
        uVar4 = *(undefined4 *)(lVar17 + 8);
        uVar7 = *(ushort *)(lVar17 + 0xc);
        FUN_0034fcf0(auStack_528 + lVar12);
        uVar22 = local_a8[uVar19];
        *(uint *)((long)local_520 + lVar12) = (uint)uVar7;
        *(undefined4 *)((long)local_520 + lVar12 + 4) = uVar4;
        *(short *)((long)local_526 + lVar12) = (short)(char)bVar5;
        *(undefined8 *)((long)local_518 + lVar12) = 0;
        *(short *)((long)local_526 + lVar12 + 2) = (short)uVar22;
        uVar8 = FUN_038f612c(uVar4);
        lVar12 = lVar12 + 0x28;
        *(short *)(pbVar23 + -7) = (short)uVar4;
        *(undefined2 *)(pbVar23 + -5) = uVar8;
        *(ushort *)(pbVar23 + -3) = uVar7;
        pbVar23[-1] = bVar5;
        *pbVar23 = (byte)uVar22;
        pbVar20 = pbVar20 + 0x20;
        pbVar23 = pbVar23 + 8;
      } while ((ulong)uVar18 * 0x28 != lVar12);
      uVar18 = (uint)param_1[0x229];
    }
    local_650 = auStack_528;
    local_648 = local_628;
    local_630 = 0;
    local_638 = 0;
    local_640 = 0;
    local_658 = (ulong)(CONCAT12(*param_1,(short)uVar18) & 0xffff00ff);
    uVar8 = FUN_0034efc0(&local_658);
    *(undefined2 *)(param_1 + 0x22a) = uVar8;
    puVar2 = PTR_DAT_04bc1010;
    if (param_1[0x188] != 0) {
      FUN_0034f3d4(param_1 + 0x188,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
    }
    if (param_1[0x229] != 0) {
      FUN_0034f070(param_1 + 0x188,*(undefined8 *)(*(long *)puVar2 + 0x30),&local_658,0);
    }
  }
  return;
}

