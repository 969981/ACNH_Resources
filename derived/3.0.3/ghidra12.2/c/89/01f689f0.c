
undefined8 FUN_01f689f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_290 [2];
  undefined *local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined *local_270;
  undefined8 local_268;
  ulong local_260;
  float local_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined5 local_234;
  undefined3 uStack_22f;
  undefined5 uStack_22c;
  undefined8 local_224;
  undefined4 local_21c;
  undefined2 local_218;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined *local_1f0;
  char *local_1e8;
  int local_1e0;
  char local_1dc [31];
  undefined1 local_1bd;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [31];
  undefined1 local_185;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined *puStack_160;
  int local_158;
  int local_154;
  undefined *local_150;
  int local_148;
  int local_144;
  undefined *local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  long local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined *local_d8;
  int local_d0;
  int local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  byte local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined8 local_88;
  char *pcStack_80;
  
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar12 = *(int *)(param_1 + 0x136c4) + -1;
    if (*(int *)(param_1 + 0x136c4) < 1) {
      iVar12 = 0x96;
    }
    *(int *)(param_1 + 0x136c4) = iVar12;
    if (iVar12 < 1) {
      lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar15 = *(float *)(lVar13 + 0x278);
      fVar16 = *(float *)(lVar13 + 0x280);
      local_c0 = 0;
      local_b0 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      fVar18 = fVar15 + -25.0;
      fVar15 = fVar15 + 25.0;
      fVar17 = fVar16 + -25.0;
      fVar16 = fVar16 + 25.0;
      local_90 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
      iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
      iVar8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar12 = local_90;
      if (iVar8 <= local_90) {
        iVar12 = iVar8;
      }
      if (local_90 <= iVar8) {
        local_90 = iVar8;
      }
      iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      iVar8 = iVar4;
      if (iVar6 <= iVar4) {
        iVar8 = iVar6;
      }
      if (iVar4 <= iVar6) {
        iVar4 = iVar6;
      }
      lVar13 = *(long *)PTR_DAT_04bb2720;
      puStack_a8 = puVar1;
      local_a0 = iVar12;
      iStack_9c = iVar8;
      local_98 = puVar1;
      iStack_8c = iVar4;
      if (lVar13 == 0) {
        puVar14 = &DAT_055c04a0;
      }
      else {
        puVar14 = &DAT_055c04a0;
        if (*(long *)(lVar13 + 0x330) != 0) {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
          iVar6 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
      }
      local_bc = *(undefined4 *)(puVar14 + 7);
      local_b8 = FUN_017baf44();
      puVar3 = PTR_DAT_04bb43c0;
      local_b8 = local_b8 & 1;
      local_c8 = PTR_DAT_04bb3140 + 0x10;
      if (iVar4 + 1 != iVar8) {
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        local_e8 = &puStack_a8;
        local_e0 = &local_98;
        local_d8 = puVar1;
        local_d0 = iVar12;
        local_cc = iVar8;
        do {
          local_f0 = 0;
          local_f8 = puVar2;
          puVar10 = (undefined4 *)FUN_01a5190c(&local_c8,0,&local_d8,&local_f8);
          local_100 = *puVar10;
          local_fc = puVar10[1];
          lVar13 = *(long *)puVar3;
          uVar7 = FUN_0277d6c4(&local_100);
          if (*(long *)puVar3 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
                (iVar8 = FUN_0277d6c4(&local_100), iVar8 == 0x35cf)) &&
               ((uVar11 = FUN_0277e024(&local_100), (uVar11 & 1) == 0 &&
                (uVar11 = FUN_0277e158(&local_100), (uVar11 & 1) == 0)))) {
              lVar13 = *(long *)puVar3;
              local_108 = 0;
              local_118 = PTR_DAT_04bc0510 + 0x10;
              local_110 = local_100;
              uStack_10c = local_fc;
              uVar7 = FUN_0277d6c4(&local_110);
              if (*(long *)puVar3 != 0) {
                lVar13 = *(long *)(lVar13 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                  lVar13 = *(long *)PTR_DAT_04bc0428;
                  uVar7 = FUN_0277d6c4(&local_100);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                  if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                     (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
                     lVar13 != 0)) {
                    local_108 = lVar13;
                  }
                }
              }
              puVar1 = PTR_DAT_04bbc1a0 + 0x10;
              local_130 = 0;
              puVar3 = PTR_DAT_04bb2010 + 0x10;
              local_120 = 0;
              local_140 = puVar1;
              puStack_138 = puVar3;
              local_128 = puVar3;
              FUN_01afb480(&local_118,&local_140);
              local_158 = (int)local_f0;
              local_148 = ((int)local_120 - (int)local_130) + (int)local_f0;
              local_144 = (local_120._4_4_ - local_130._4_4_) + local_f0._4_4_;
              local_154 = local_f0._4_4_;
              local_170 = 0;
              local_178 = 0;
              local_17c = 0;
              local_168 = puVar1;
              puStack_160 = puVar3;
              local_150 = puVar3;
              FUN_021fd6f0(&local_178,&local_17c,&local_100,&local_168,0);
              *(undefined4 *)(param_1 + 0x136cc) = 0;
              local_290[0] = 0;
              local_278 = 0;
              local_254 = 0;
              uStack_250 = 0xfffe;
              local_268 = 0;
              local_24c = 0;
              fVar16 = ((float)local_158 * 5.0 + (float)local_148 * 5.0 + 5.0) * 0.5;
              fVar15 = ((float)local_154 * 5.0 + (float)local_144 * 5.0 + 5.0) * 0.5;
              *(float *)(param_1 + 0x136c8) = fVar16;
              *(float *)(param_1 + 0x136d0) = fVar15;
              local_288 = puVar1;
              puStack_280 = puVar3;
              local_270 = puVar3;
              FUN_0277d4ac(&uStack_250);
              local_234 = 0;
              uStack_22f = 0;
              uStack_22c = 0;
              local_238 = 0xbf800000;
              local_248 = 0x41c8000041800000;
              uStack_240 = 0xbf800000bf800000;
              local_224 = 0xfffe;
              FUN_0277d4ac(&local_224);
              local_21c = 0;
              local_1e0 = 0x20;
              local_1b0 = local_1a4;
              local_1a8 = 0x20;
              local_1e8 = local_1dc;
              local_1bd = 0;
              local_1f0 = PTR_DAT_04bb2028 + 0x10;
              local_1dc[0] = '\0';
              local_185 = 0;
              local_1a4[0] = 0;
              local_290[0] = 0;
              local_278 = 0;
              local_258 = 0.0;
              local_254 = 0;
              local_88 = (undefined *)0xfffe;
              local_268 = 0;
              local_260 = 0;
              local_1b8 = local_1f0;
              FUN_0277d4ac(&local_88);
              uStack_250 = (undefined4)local_88;
              local_24c = local_88._4_4_;
              local_248 = 0x41c8000041800000;
              uStack_240 = 0xbf800000bf800000;
              local_238 = 0xbf800000;
              local_234 = 0;
              uStack_22f = 0;
              uStack_22c = 0;
              local_88 = (undefined *)0xfffe;
              FUN_0277d4ac(&local_88);
              local_218 = 0;
              local_214 = 0;
              local_20c = 0;
              local_204 = 0;
              local_1fc = 0;
              local_1f4 = 0;
              local_224 = local_88;
              local_21c = 0;
              *local_1e8 = '\0';
              *local_1b0 = 0;
              local_290[0] = 0;
              local_278 = 0;
              local_268 = 0;
              local_260 = 0;
              local_258 = 0.0;
              local_254 = 0;
              local_88 = (undefined *)0xfffe;
              FUN_0277d4ac(&local_88);
              uStack_250 = (undefined4)local_88;
              local_24c = local_88._4_4_;
              local_248 = 0x41c8000041800000;
              uStack_240 = 0xbf800000bf800000;
              local_238 = 0xbf800000;
              local_234 = 0;
              uStack_22f = 0;
              uStack_22c = 0;
              local_88 = (undefined *)0xfffe;
              FUN_0277d4ac(&local_88);
              local_21c = 0;
              local_218 = 0;
              local_214 = 0;
              local_20c = 0;
              local_204 = 0;
              local_1fc = 0;
              local_1f4 = 0;
              local_224 = local_88;
              *local_1e8 = '\0';
              *local_1b0 = 0;
              uStack_250 = local_100;
              local_24c = local_fc;
              uVar9 = FUN_0277d6c4(&local_100);
              pcVar5 = local_1e8;
              local_214 = CONCAT44(local_214._4_4_,uVar9);
              local_260 = (ulong)(uint)fVar16;
              local_278 = CONCAT44(local_154,local_158);
              local_204 = CONCAT44(local_204._4_4_,local_17c);
              local_268 = CONCAT44(local_144,local_148);
              local_258 = fVar15;
              if (local_1e8 != "MaReAddDance") {
                iVar12 = 0xc;
                if (local_1e0 < 0xd) {
                  iVar12 = local_1e0 + -1;
                }
                memcpy(local_1e8,"MaReAddDance",(long)iVar12);
                pcVar5[iVar12] = '\0';
              }
              FUN_01e6648c(param_1,0x79,local_290,0);
              if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
                local_88 = PTR_DAT_04bb2020 + 0x10;
                pcStack_80 = "ApproachUpdateStop";
                FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_88,1);
              }
              if (*(char *)(param_1 + 0x13716) != '\0') {
                *(undefined1 *)(param_1 + 0x13716) = 0;
              }
              *(undefined4 *)(param_1 + 0x1367c) = 0xffffffff;
              return 1;
            }
          }
          if (local_d0 < *(int *)(local_e0 + 1)) {
            local_d0 = local_d0 + 1;
          }
          else {
            local_cc = local_cc + 1;
            local_d0 = *(int *)(local_e8 + 1);
          }
        } while ((iVar12 != local_d0) || (iVar4 + 1 != local_cc));
      }
    }
  }
  return 0;
}

