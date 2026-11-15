
/* WARNING: Removing unreachable block (ram,0x0242cb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0242b9e8(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined *puVar11;
  short sVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  float *pfVar19;
  undefined4 *puVar20;
  char cVar21;
  undefined8 *puVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  undefined8 *puVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_230;
  undefined4 local_22c;
  float local_228;
  byte local_214 [4];
  byte local_210 [4];
  byte local_20c [4];
  undefined8 local_208;
  undefined8 uStack_200;
  long local_1f8;
  long *local_1f0;
  undefined8 local_1e8;
  uint local_1dc;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float fStack_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  undefined1 uStack_1a0;
  byte bStack_19f;
  undefined2 uStack_19e;
  float local_19c;
  undefined2 uStack_198;
  undefined2 uStack_196;
  byte local_194;
  undefined2 local_193;
  undefined1 uStack_191;
  undefined2 local_190;
  undefined2 uStack_18e;
  float fStack_18c;
  uint local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined2 local_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_a5;
  undefined4 local_9c;
  
  puVar29 = *(undefined8 **)(param_4 + 0x60);
  if (puVar29 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar16 = __cxa_guard_acquire(&DAT_052461c0);
      puVar29 = &DAT_05240280;
      if (iVar16 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar29 = &DAT_05240280;
    }
  }
  iVar16 = *(int *)(param_4 + 0x178);
  puVar4 = (undefined8 *)(param_4 + 0x18e0);
  local_1c0 = (undefined *)0xfffe;
  lVar27 = param_4 + 0x1900;
  FUN_0277d4ac(&local_1c0);
  local_1c0 = *(undefined **)(param_4 + 0x1900);
  local_1cc = (float)FUN_0242d690(lVar27);
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  local_1dc = (uint)*(byte *)(param_4 + 0x1916);
  fStack_1d4 = (float)(int)*(short *)(param_4 + 0x190d) * 0.25;
  if (7 < local_1dc) {
    local_1dc = 0;
  }
  local_1d8 = (float)*(int *)(param_4 + 0x1909) * 0.001;
  local_1d0 = (float)*(int *)(param_4 + 0x190f) * 0.001;
  fStack_1c8 = param_2;
  local_1c4 = param_3;
  fVar35 = local_1d0;
  fVar39 = fStack_1d4;
  uVar17 = FUN_0251e98c(1);
  fVar30 = (float)FUN_02366c70(uVar17,&local_1c0);
  lVar2 = param_4 + 0x8b0;
  lVar3 = param_4 + 0x8d0;
  fVar38 = fVar35;
  fVar34 = fVar39;
  if (*(int *)(param_4 + 0x1c04) == 0) {
    local_1b8 = local_1c0;
    bVar24 = *pbVar1;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    local_1b0._0_2_ = CONCAT11(bVar24,*(int *)(param_4 + 0x178) == 0);
    if (*(int *)(param_4 + 0x178) == 0) {
      local_208 = CONCAT71(local_208._1_7_,bVar24);
      FUN_02f06e30(&local_1b8,&local_208);
    }
  }
  local_1e8 = 0xfffe;
  FUN_0277d4ac(&local_1e8);
  local_1e8 = *(undefined8 *)(param_4 + 0x1918);
  uVar18 = FUN_016e4e3c(&local_1e8);
  if (((uVar18 & 1) != 0) || (uVar18 = FUN_016e4d80(&local_1e8), (uVar18 & 1) != 0)) {
    puVar22 = *(undefined8 **)(param_4 + 0x60);
    local_1f8 = 0;
    local_1f0 = (long *)0x0;
    local_208 = 0;
    uStack_200 = 0;
    if (puVar22 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar14 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar22 = &DAT_05240280;
      }
      else {
        puVar22 = &DAT_05240280;
      }
    }
    local_230 = 0.0;
    local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x32);
    if ((puVar22[0x227] != 0) &&
       (uVar18 = FUN_03850a90(puVar22[0x227],0x32,&local_208,0), (uVar18 & 1) != 0)) {
      if (*(char *)(param_4 + 0x8f9) == '\0') {
        *(undefined1 *)(param_4 + 0x8f9) = 1;
        if (local_1f0 == (long *)0x0) {
          *(undefined4 *)(param_4 + 0x8f4) = 0x3f800000;
          uVar15 = 1;
        }
        else {
          if (*local_1f0 == 0) {
            local_a5 = 0;
            local_1a8 = 3.58732e-43;
            local_1b0 = &local_1a4;
            local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
            local_1b8 = PTR_DAT_04bb21f8 + 0x10;
            lVar26 = *(long *)(local_1f0[2] + 8);
            FUN_038d1270(&local_1b8,"%s.as",
                         lVar26 + *(int *)(lVar26 + 0x24) + (long)*(int *)(lVar26 + 8));
            *(undefined4 *)(param_4 + 0x8f4) = 0;
            if (local_1f0 == (long *)0x0) {
              uVar15 = 1;
              goto LAB_0242c180;
            }
          }
          else {
            iVar16 = *(int *)(*local_1f0 + 8);
            if (iVar16 < 0x60000000) {
              uVar31 = 0;
              piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar16);
              if (1 < *piVar5) {
                puVar20 = (undefined4 *)
                          (((ulong)(uint)piVar5[2] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4);
                goto LAB_0242c0a4;
              }
            }
            else {
              uVar15 = iVar16 + 0xa0000000;
              if (*(uint *)(local_1f8 + 0x80) <= uVar15) {
                uVar15 = 0;
              }
              lVar26 = *(long *)(local_1f8 + 0x88) + (ulong)uVar15 * 0x32;
              puVar20 = (undefined4 *)(lVar26 + (ulong)*(byte *)(lVar26 + 0x21));
LAB_0242c0a4:
              uVar31 = *puVar20;
            }
            *(undefined4 *)(param_4 + 0x8f4) = uVar31;
          }
          if (*local_1f0 == 0) {
            local_a5 = 0;
            local_1a8 = 3.58732e-43;
            local_1b0 = &local_1a4;
            local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
            local_1b8 = PTR_DAT_04bb21f8 + 0x10;
            lVar26 = *(long *)(local_1f0[2] + 8);
            FUN_038d1270(&local_1b8,"%s.as",
                         lVar26 + *(int *)(lVar26 + 0x24) + (long)*(int *)(lVar26 + 8));
LAB_0242c17c:
            uVar15 = 0;
          }
          else {
            iVar16 = *(int *)(*local_1f0 + 8);
            if (iVar16 < 0x60000000) {
              piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar16);
              if (*piVar5 < 1) goto LAB_0242c17c;
              uVar15 = *(uint *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8)
                                + 4);
            }
            else {
              uVar15 = iVar16 + 0xa0000000;
              if (*(uint *)(local_1f8 + 0x80) <= uVar15) {
                uVar15 = 0;
              }
              lVar26 = *(long *)(local_1f8 + 0x88) + (ulong)uVar15 * 0x32;
              uVar15 = *(uint *)(lVar26 + (ulong)*(byte *)(lVar26 + 0x20));
            }
          }
        }
LAB_0242c180:
        *(undefined4 *)(param_4 + 0x8d8) = 0;
        uVar7 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        uVar6 = uVar15 & (int)uVar15 >> 0x1f;
        bVar24 = (byte)(uVar15 >> 0x1f);
        *(byte *)(param_4 + 0x8e4) = bVar24;
        *(uint *)(param_4 + 0x8dc) = uVar6;
        *(uint *)(param_4 + 0x8bc) = uVar6;
        *(byte *)(param_4 + 0x8c4) = bVar24;
        local_20c[0] = *pbVar1;
        *(uint *)(param_4 + 0x8e0) = uVar7;
        *(undefined1 *)(param_4 + 0x8e5) = 1;
        *(uint *)(param_4 + 0x8c0) = uVar7;
        *(undefined4 *)(param_4 + 0x8b8) = 0;
        *(undefined1 *)(param_4 + 0x8c5) = 1;
        *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfffffffe;
        if (7 < local_20c[0]) {
          local_20c[0] = 0xff;
        }
        FUN_0242d8bc(local_20c,puVar4);
        *(undefined1 *)(param_4 + 0x8f8) = 1;
        uVar18 = FUN_016e4e3c(&local_1e8);
        if ((uVar18 & 1) == 0) {
          uVar18 = FUN_016e4d80(&local_1e8);
          if ((uVar18 & 1) != 0) {
            local_1b8 = (undefined *)0xed3a;
            goto LAB_0242c210;
          }
        }
        else {
          local_1b8 = (undefined *)0xed30;
LAB_0242c210:
          FUN_0277d4ac(&local_1b8);
          FUN_011ea660(&local_1b8,&local_1cc,&DAT_0405c462);
        }
        if (*(char *)(param_4 + 0x8f9) == '\0') {
          return;
        }
      }
      if ((*(char *)(param_4 + 0x8e5) != '\0') && (*(char *)(param_4 + 0x8c5) != '\0')) {
        uVar31 = (**(code **)(*(long *)(param_4 + 0x8d0) + (ulong)*(byte *)(param_4 + 0x8e4) * 8))
                           (lVar3);
        *(undefined4 *)(param_4 + 0x8d8) = uVar31;
        if (*(char *)(param_4 + 0x8c5) != '\0') {
          uVar31 = (**(code **)(*(long *)(param_4 + 0x8b0) + (ulong)*(byte *)(param_4 + 0x8c4) * 8))
                             (lVar2);
          *(undefined4 *)(param_4 + 0x8b8) = uVar31;
        }
        fVar30 = (float)FUN_0242b900(lVar27);
        local_1b8 = (undefined *)0xfffe;
        fVar35 = fVar38;
        fVar39 = fVar34;
        FUN_0277d4ac(&local_1b8);
        local_1b8 = *(undefined **)(param_4 + 0x1918);
        uVar18 = FUN_016e4e3c(&local_1b8);
        if ((uVar18 & 1) == 0) {
          uVar18 = FUN_016e4d80(&local_1b8);
          fVar35 = 0.0;
          fVar37 = 0.0;
          fVar32 = 0.0;
          fVar39 = 0.0;
          fVar40 = 0.0;
          if ((uVar18 & 1) != 0) goto LAB_0242c2d4;
        }
        else {
LAB_0242c2d4:
          fVar32 = (float)FUN_0242d690(lVar27);
          fVar32 = fVar32 + 0.0;
          fVar37 = fVar35 + 0.0;
          fVar40 = fVar39 + 0.0;
        }
        fVar35 = 0.0;
        if (*(char *)(param_4 + 0x8c5) != '\0') {
          iVar16 = *(int *)(param_4 + 0x8c0);
          fVar35 = 1.0;
          if ((*(int *)(param_4 + 0x8b8) < iVar16) && (iVar16 != 0)) {
            fVar41 = (float)*(int *)(param_4 + 0x8b8) / (float)iVar16;
            fVar39 = 1.0;
            if (fVar41 <= 1.0) {
              fVar39 = fVar41;
            }
            fVar35 = 0.0;
            if (0.0 <= fVar41) {
              fVar35 = fVar39;
            }
          }
        }
        fVar41 = 1.0 - fVar35;
        fVar39 = 0.0;
        if (*(char *)(param_4 + 0x8e5) != '\0') {
          iVar16 = *(int *)(param_4 + 0x8e0);
          fVar39 = 1.0;
          if ((*(int *)(param_4 + 0x8d8) < iVar16) && (fVar39 = 1.0, iVar16 != 0)) {
            fVar33 = (float)*(int *)(param_4 + 0x8d8) / (float)iVar16;
            fVar42 = 1.0;
            if (fVar33 <= 1.0) {
              fVar42 = fVar33;
            }
            fVar39 = 0.0;
            if (0.0 <= fVar33) {
              fVar39 = fVar42;
            }
          }
        }
        local_1b8 = (undefined *)
                    CONCAT44(fVar37 * fVar35 + fVar38 * fVar41,fVar32 * fVar35 + fVar30 * fVar41);
        local_1b0 = (float *)CONCAT44(local_1b0._4_4_,fVar40 * fVar35 + fVar34 * fVar41);
        FUN_012253d0((1.0 - fVar39) + *(float *)(param_4 + 0x8f4) * fVar39,0,0,0,0,
                     *(undefined8 *)PTR_DAT_04bb4778,lVar2,&local_1e8,&local_1b8,0);
        if ((*(char *)(param_4 + 0x8e5) != '\0') &&
           (*(int *)(param_4 + 0x8e0) <= *(int *)(param_4 + 0x8d8))) {
          *(undefined1 *)(param_4 + 0x8e5) = 0;
          *(undefined4 *)(param_4 + 0x8d8) = *(undefined4 *)(param_4 + 0x8dc);
        }
        if ((*(char *)(param_4 + 0x8c5) != '\0') &&
           (*(int *)(param_4 + 0x8c0) <= *(int *)(param_4 + 0x8b8))) {
          *(undefined1 *)(param_4 + 0x8c5) = 0;
          *(undefined4 *)(param_4 + 0x8b8) = *(undefined4 *)(param_4 + 0x8bc);
        }
      }
      local_1b0 = (float *)CONCAT44(fStack_1c8,local_1cc);
      local_19c = 0.0;
      uStack_198 = 0;
      uStack_196 = 0;
      local_190 = 0;
      uStack_18e = 0x3f80;
      fStack_18c = 1.0;
      local_193 = 0;
      local_188 = local_188 & 0xffffff00;
      local_184 = 0;
      local_17c = (ulong)local_17c._4_4_ << 0x20;
      local_1b8 = local_1c0;
      local_1a8 = local_1c4;
      uStack_1a0 = 0;
      bStack_19f = 0;
      uStack_19e = 0;
      goto LAB_0242d460;
    }
  }
  uVar18 = FUN_016e4c7c(&local_1e8);
  if ((uVar18 & 1) != 0) {
    puVar22 = *(undefined8 **)(param_4 + 0x60);
    local_1f8 = 0;
    local_1f0 = (long *)0x0;
    local_208 = 0;
    uStack_200 = 0;
    if (puVar22 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_052461c0);
        puVar22 = &DAT_05240280;
        if (iVar14 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar22 = &DAT_05240280;
      }
    }
    local_230 = 0.0;
    local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x32);
    if ((puVar22[0x227] != 0) &&
       (uVar18 = FUN_03850a90(puVar22[0x227],0x32,&local_208,0), (uVar18 & 1) != 0)) {
      if (*(char *)(param_4 + 0x8f9) == '\0') {
        *(undefined1 *)(param_4 + 0x8f9) = 1;
        if (local_1f0 == (long *)0x0) {
          *(undefined4 *)(param_4 + 0x8f4) = 0x3f800000;
          uVar15 = 1;
        }
        else {
          if (*local_1f0 == 0) {
            local_a5 = 0;
            local_1a8 = 3.58732e-43;
            local_1b0 = &local_1a4;
            local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
            local_1b8 = PTR_DAT_04bb21f8 + 0x10;
            lVar27 = *(long *)(local_1f0[2] + 8);
            FUN_038d1270(&local_1b8,"%s.as",
                         lVar27 + *(int *)(lVar27 + 0x24) + (long)*(int *)(lVar27 + 8));
            *(undefined4 *)(param_4 + 0x8f4) = 0;
            if (local_1f0 == (long *)0x0) {
              uVar15 = 1;
              goto LAB_0242d280;
            }
          }
          else {
            iVar16 = *(int *)(*local_1f0 + 8);
            if (iVar16 < 0x60000000) {
              uVar31 = 0;
              piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar16);
              if (1 < *piVar5) {
                puVar20 = (undefined4 *)
                          (((ulong)(uint)piVar5[2] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4);
                goto LAB_0242d1b4;
              }
            }
            else {
              uVar15 = iVar16 + 0xa0000000;
              if (*(uint *)(local_1f8 + 0x80) <= uVar15) {
                uVar15 = 0;
              }
              lVar27 = *(long *)(local_1f8 + 0x88) + (ulong)uVar15 * 0x32;
              puVar20 = (undefined4 *)(lVar27 + (ulong)*(byte *)(lVar27 + 0x21));
LAB_0242d1b4:
              uVar31 = *puVar20;
            }
            *(undefined4 *)(param_4 + 0x8f4) = uVar31;
          }
          if (*local_1f0 == 0) {
            local_a5 = 0;
            local_1a8 = 3.58732e-43;
            local_1b0 = &local_1a4;
            local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
            local_1b8 = PTR_DAT_04bb21f8 + 0x10;
            lVar27 = *(long *)(local_1f0[2] + 8);
            FUN_038d1270(&local_1b8,"%s.as",
                         lVar27 + *(int *)(lVar27 + 0x24) + (long)*(int *)(lVar27 + 8));
LAB_0242d27c:
            uVar15 = 0;
          }
          else {
            iVar16 = *(int *)(*local_1f0 + 8);
            if (iVar16 < 0x60000000) {
              piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar16);
              if (*piVar5 < 1) goto LAB_0242d27c;
              uVar15 = *(uint *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8)
                                + 4);
            }
            else {
              uVar15 = iVar16 + 0xa0000000;
              if (*(uint *)(local_1f8 + 0x80) <= uVar15) {
                uVar15 = 0;
              }
              lVar27 = *(long *)(local_1f8 + 0x88) + (ulong)uVar15 * 0x32;
              uVar15 = *(uint *)(lVar27 + (ulong)*(byte *)(lVar27 + 0x20));
            }
          }
        }
LAB_0242d280:
        *(undefined4 *)(param_4 + 0x8d8) = 0;
        *(byte *)(param_4 + 0x8e4) = (byte)(uVar15 >> 0x1f);
        *(undefined1 *)(param_4 + 0x8e5) = 1;
        *(uint *)(param_4 + 0x8dc) = uVar15 & (int)uVar15 >> 0x1f;
        *(uint *)(param_4 + 0x8e0) = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfffffffe;
        local_210[0] = *pbVar1;
        if (7 < local_210[0]) {
          local_210[0] = 0xff;
        }
        FUN_0242d8bc(local_210,puVar4);
        *(undefined1 *)(param_4 + 0x8f8) = 1;
        iVar16 = FUN_0277d6c4(&local_1e8);
        if (iVar16 == 0xecc1) {
          *(undefined1 *)(param_4 + 0x8e5) = 0;
          *(undefined4 *)(param_4 + 0x8d8) = *(undefined4 *)(param_4 + 0x8dc);
        }
        else {
          local_1b8 = (undefined *)0xed3a;
          FUN_0277d4ac(&local_1b8);
          FUN_011ea660(&local_1b8,&local_1cc,&DAT_0405c462);
        }
        if (*(char *)(param_4 + 0x8f9) == '\0') {
          return;
        }
      }
      if (*(char *)(param_4 + 0x8e5) == '\0') {
        fVar38 = local_1cc;
        fVar34 = fStack_1c8;
        fVar35 = local_1c4;
      }
      else {
        uVar31 = (**(code **)(*(long *)(param_4 + 0x8d0) + (ulong)*(byte *)(param_4 + 0x8e4) * 8))
                           (lVar3);
        fVar35 = local_1c4;
        fVar34 = fStack_1c8;
        fVar38 = local_1cc;
        *(undefined4 *)(param_4 + 0x8d8) = uVar31;
        if (*(char *)(param_4 + 0x8e5) == '\0') {
          fVar39 = 0.0;
        }
        else {
          iVar16 = *(int *)(param_4 + 0x8e0);
          fVar39 = 1.0;
          if ((iVar16 != 0) && (*(int *)(param_4 + 0x8d8) < iVar16)) {
            fVar32 = (float)*(int *)(param_4 + 0x8d8) / (float)iVar16;
            fVar30 = 1.0;
            if (fVar32 <= 1.0) {
              fVar30 = fVar32;
            }
            fVar39 = 0.0;
            if (0.0 <= fVar32) {
              fVar39 = fVar30;
            }
          }
        }
        local_1b8 = (undefined *)CONCAT44(fStack_1c8,local_1cc);
        local_1b0 = (float *)CONCAT44(local_1b0._4_4_,local_1c4);
        FUN_012253d0((1.0 - fVar39) + *(float *)(param_4 + 0x8f4) * fVar39,0,0,0,0,
                     *(undefined8 *)PTR_DAT_04bb4778,lVar2,&local_1e8,&local_1b8,0);
        if (*(char *)(param_4 + 0x8e5) != '\0') {
          if (*(int *)(param_4 + 0x8e0) <= *(int *)(param_4 + 0x8d8)) {
            *(undefined1 *)(param_4 + 0x8e5) = 0;
            *(undefined4 *)(param_4 + 0x8d8) = *(undefined4 *)(param_4 + 0x8dc);
          }
        }
      }
      uStack_1a0 = 0;
      bStack_19f = 0;
      uStack_19e = 0;
      local_19c = 0.0;
      local_190 = 0;
      uStack_18e = 0x3f80;
      fStack_18c = 1.0;
      uStack_198 = 0;
      uStack_196 = 0;
      local_193 = 0;
      local_188 = local_188 & 0xffffff00;
      local_184 = 0;
      local_17c = (ulong)local_17c._4_4_ << 0x20;
      FUN_0124d4b4(&local_230,&local_1e8);
      local_1b0 = (float *)CONCAT44(fVar34,fVar38);
      local_1b8 = (undefined *)CONCAT44(local_22c,local_230);
      local_1a8 = fVar35;
LAB_0242d460:
      local_1a4 = 1.0;
      local_194 = *pbVar1;
      if (7 < local_194) {
        local_194 = 0xff;
      }
      local_17c._0_5_ = CONCAT14(1,(undefined4)local_17c);
      FUN_0170d1d8(puVar29,&local_1b8);
      return;
    }
  }
  local_1f8 = 0;
  local_1f0 = (long *)0x0;
  local_230 = 0.0;
  local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x1d);
  local_208 = 0;
  uStack_200 = 0;
  if (puVar29[0x227] == 0) {
    local_230 = 0.0;
  }
  else {
    uVar18 = FUN_03850890(puVar29[0x227],0x1d,&local_208,0);
    if ((uVar18 & 1) != 0) {
      if (local_1f0 == (long *)0x0) {
        uVar15 = 1;
      }
      else if (*local_1f0 == 0) {
        local_a5 = 0;
        local_1a8 = 3.58732e-43;
        local_1b0 = &local_1a4;
        local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
        local_1b8 = PTR_DAT_04bb21f8 + 0x10;
        lVar27 = *(long *)(local_1f0[2] + 8);
        FUN_038d1270(&local_1b8,"%s.as",
                     lVar27 + *(int *)(lVar27 + 0x24) + (long)*(int *)(lVar27 + 8));
LAB_0242bdf4:
        uVar15 = 0;
      }
      else {
        iVar14 = *(int *)(*local_1f0 + 8);
        if (iVar14 < 0x60000000) {
          piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar14);
          if (*piVar5 < 1) goto LAB_0242bdf4;
          uVar15 = *(uint *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4)
          ;
        }
        else {
          uVar15 = iVar14 + 0xa0000000;
          if (*(uint *)(local_1f8 + 0x80) <= uVar15) {
            uVar15 = 0;
          }
          lVar27 = *(long *)(local_1f8 + 0x88) + (ulong)uVar15 * 0x32;
          uVar15 = *(uint *)(lVar27 + (ulong)*(byte *)(lVar27 + 0x20));
        }
      }
      uVar7 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
      uVar6 = uVar15 & (int)uVar15 >> 0x1f;
      bVar24 = (byte)(uVar15 >> 0x1f);
      *(byte *)(param_4 + 0x8c4) = bVar24;
      *(uint *)(param_4 + 0x8c0) = uVar7;
      *(uint *)(param_4 + 0x8bc) = uVar6;
      *(undefined4 *)(param_4 + 0x8b8) = 0;
      *(undefined1 *)(param_4 + 0x8c5) = 1;
      *(byte *)((long)puVar29 + 0x12b4) = bVar24;
      *(uint *)(puVar29 + 0x256) = uVar7;
      *(uint *)((long)puVar29 + 0x12ac) = uVar6;
      *(undefined4 *)(puVar29 + 0x255) = 0;
      puVar29[0x252] = CONCAT44(fStack_1c8,local_1cc);
      *(float *)(puVar29 + 0x253) = local_1c4;
      *(undefined1 *)((long)puVar29 + 0x12b5) = 1;
      *(undefined1 *)((long)puVar29 + 0x126c) = 1;
      if (*(char *)(param_4 + 0x8f8) == '\0') {
        *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfffffffe;
        local_214[0] = *pbVar1;
        if (7 < local_214[0]) {
          local_214[0] = 0xff;
        }
        FUN_0242d8bc(local_214,puVar4);
      }
    }
    local_230 = 0.0;
    local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x1e);
    if ((puVar29[0x227] != 0) &&
       (uVar18 = FUN_03850890(puVar29[0x227],0x1e,&local_208,0), (uVar18 & 1) != 0)) {
      uVar31 = 0x3f800000;
      if (local_1f0 == (long *)0x0) {
        uVar15 = 1;
      }
      else {
        if (*local_1f0 == 0) {
          local_a5 = 0;
          local_1a8 = 3.58732e-43;
          local_1b0 = &local_1a4;
          local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
          local_1b8 = PTR_DAT_04bb21f8 + 0x10;
          lVar27 = *(long *)(local_1f0[2] + 8);
          FUN_038d1270(&local_1b8,"%s.as",
                       lVar27 + *(int *)(lVar27 + 0x24) + (long)*(int *)(lVar27 + 8));
          uVar15 = 0;
          if (local_1f0 == (long *)0x0) goto LAB_0242c544;
LAB_0242bfa0:
          lVar27 = *local_1f0;
        }
        else {
          iVar14 = *(int *)(*local_1f0 + 8);
          if (0x5fffffff < iVar14) {
            uVar15 = iVar14 + 0xa0000000;
            if (*(uint *)(local_1f8 + 0x80) <= uVar15) {
              uVar15 = 0;
            }
            lVar27 = *(long *)(local_1f8 + 0x88) + (ulong)uVar15 * 0x32;
            puVar28 = (uint *)(lVar27 + (ulong)*(byte *)(lVar27 + 0x20));
LAB_0242bf9c:
            uVar15 = *puVar28;
            goto LAB_0242bfa0;
          }
          piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar14);
          if (0 < *piVar5) {
            puVar28 = (uint *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8) +
                              4);
            goto LAB_0242bf9c;
          }
          uVar15 = 0;
          lVar27 = *local_1f0;
        }
        if (lVar27 == 0) {
          local_a5 = 0;
          local_1a8 = 3.58732e-43;
          local_1b0 = &local_1a4;
          local_1a4 = (float)((uint)local_1a4 & 0xffffff00);
          local_1b8 = PTR_DAT_04bb21f8 + 0x10;
          lVar27 = *(long *)(local_1f0[2] + 8);
          FUN_038d1270(&local_1b8,"%s.as",
                       lVar27 + *(int *)(lVar27 + 0x24) + (long)*(int *)(lVar27 + 8));
          uVar31 = 0;
        }
        else {
          iVar14 = *(int *)(lVar27 + 8);
          if (iVar14 < 0x60000000) {
            uVar31 = 0;
            piVar5 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar14);
            if (1 < *piVar5) {
              uVar31 = *(undefined4 *)
                        (((ulong)(uint)piVar5[2] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4);
            }
          }
          else {
            uVar6 = iVar14 + 0xa0000000;
            if (*(uint *)(local_1f8 + 0x80) <= uVar6) {
              uVar6 = 0;
            }
            lVar27 = *(long *)(local_1f8 + 0x88) + (ulong)uVar6 * 0x32;
            uVar31 = *(undefined4 *)(lVar27 + (ulong)*(byte *)(lVar27 + 0x21));
          }
        }
      }
LAB_0242c544:
      *(undefined4 *)(param_4 + 0x8f4) = uVar31;
      *(byte *)(param_4 + 0x8e4) = (byte)(uVar15 >> 0x1f);
      *(uint *)(param_4 + 0x8e0) = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_4 + 0x8dc) = uVar15 & (int)uVar15 >> 0x1f;
      *(undefined4 *)(param_4 + 0x8d8) = 0;
      *(undefined1 *)(param_4 + 0x8e5) = 1;
    }
  }
  uVar18 = FUN_016e4e3c(&local_1e8);
  if (((uVar18 & 1) == 0) && (uVar18 = FUN_016e4d80(&local_1e8), (uVar18 & 1) == 0)) {
    FUN_023286a0(param_4,&local_1d8);
  }
  if (local_1dc != 0) {
    lVar27 = FUN_0251e98c(1);
    pfVar19 = (float *)(**(code **)(*(long *)(lVar27 + 0x13b0) + 0xf0))(lVar27 + 0x13b0);
    fVar32 = *pfVar19;
    fVar38 = local_1c4 - *(float *)(*(long *)(param_4 + 0x68) + 0x280);
    fVar34 = local_1cc;
    iVar14 = FUN_006f0400(local_1cc - *(float *)(*(long *)(param_4 + 0x68) + 0x278));
    if (*(int *)(param_4 + 0x178) == 0) {
      local_230 = 1.4013e-44;
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,10);
      if ((*(byte *)(param_4 + 0x18f5) >> 2 & 1) != 0) goto LAB_0242c6e8;
    }
    plVar9 = &DAT_054e9a58;
    if (*(long **)(param_4 + 0x4c8) != (long *)0x0) {
      plVar9 = *(long **)(param_4 + 0x4c8);
    }
    lVar27 = (**(code **)(*plVar9 + 0x148))();
    iVar36 = iVar14 - *(int *)(lVar27 + 4);
    if (0xb60b5e < iVar36 + 0x5b05afU) {
      fVar38 = (float)iVar36;
      iVar36 = 0x15555560;
      iVar14 = -0x15555560;
      iVar25 = (int)(fVar32 * 0.65 * fVar38);
      if (iVar25 < 1) {
        iVar36 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar8 = iVar25;
      if (iVar36 <= iVar25) {
        iVar8 = iVar36;
      }
      if (iVar14 <= iVar25) {
        iVar14 = iVar8;
      }
      iVar14 = iVar14 + *(int *)(lVar27 + 4);
    }
    *(int *)(lVar27 + 4) = iVar14;
  }
LAB_0242c6e8:
  cVar21 = *(char *)(param_4 + 0x8e5);
  if ((*(char *)((long)puVar29 + 0x12b5) != '\0') || (cVar21 != '\0')) {
    fVar34 = *(float *)(param_4 + 0x8f4);
    fVar32 = 0.0;
    fVar38 = 0.0;
    if (cVar21 != '\0') {
      iVar14 = *(int *)(param_4 + 0x8e0);
      fVar38 = 1.0;
      if ((*(int *)(param_4 + 0x8d8) < iVar14) && (iVar14 != 0)) {
        fVar40 = (float)*(int *)(param_4 + 0x8d8) / (float)iVar14;
        fVar37 = 1.0;
        if (fVar40 <= 1.0) {
          fVar37 = fVar40;
        }
        fVar38 = 0.0;
        if (0.0 <= fVar40) {
          fVar38 = fVar37;
        }
      }
    }
    if (*(char *)(param_4 + 0x1908) == '\x02') {
      lVar27 = FUN_0251e98c(1);
      pfVar19 = (float *)(**(code **)(*(long *)(lVar27 + 0xb70) + 0xf0))(lVar27 + 0xb70);
      fVar32 = *pfVar19;
      cVar21 = *(char *)(param_4 + 0x8e5);
    }
    fVar34 = (1.0 - fVar38) + fVar34 * fVar38;
    fVar37 = 0.0;
    if (cVar21 != '\0') {
      iVar14 = *(int *)(param_4 + 0x8e0);
      fVar37 = 1.0;
      if ((*(int *)(param_4 + 0x8d8) < iVar14) && (fVar37 = 1.0, iVar14 != 0)) {
        fVar40 = (float)*(int *)(param_4 + 0x8d8) / (float)iVar14;
        fVar38 = 1.0;
        if (fVar40 <= 1.0) {
          fVar38 = fVar40;
        }
        fVar37 = 0.0;
        if (0.0 <= fVar40) {
          fVar37 = fVar38;
        }
      }
    }
    local_184 = 0x3f80000000000000;
    local_194 = 0;
    local_193 = 0;
    uStack_191 = 0;
    local_190 = 0;
    local_19c = 0.0;
    uStack_198 = 0;
    uStack_196 = 0;
    local_188 = local_188 & 0xffffff00;
    fVar40 = (1.0 - fVar37) * 0.0;
    local_14c = 0;
    local_148 = 0;
    local_140 = 0;
    local_1b8 = local_1c0;
    bStack_19f = *pbVar1;
    fVar38 = fVar34 * (fVar35 * fVar37 + fVar32 * (1.0 - fVar37));
    local_1a8 = fVar34 * (fVar39 * fVar37 + fVar40);
    uStack_174 = _UNK_04102208;
    local_17c = _DAT_04102200;
    uStack_164 = _UNK_04102888;
    local_16c = _DAT_04102880;
    if (7 < bStack_19f) {
      bStack_19f = 0xff;
    }
    uStack_154 = (undefined4)_UNK_041023d8;
    iStack_150 = (int)((ulong)_UNK_041023d8 >> 0x20);
    local_15c = (undefined4)_DAT_041023d0;
    uStack_158 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
    uStack_1a0 = 1;
    local_1b0 = (float *)CONCAT44(fVar38,fVar34 * (fVar30 * fVar37 + fVar40));
    fStack_18c = 0.0;
    if (*(char *)(param_4 + 0x8c5) != '\0') {
      iVar14 = *(int *)(param_4 + 0x8c0);
      fStack_18c = 1.0;
      if ((*(int *)(param_4 + 0x8b8) < iVar14) && (iVar14 != 0)) {
        fVar35 = (float)*(int *)(param_4 + 0x8b8) / (float)iVar14;
        fVar38 = 1.0;
        if (fVar35 <= 1.0) {
          fVar38 = fVar35;
        }
        fStack_18c = 0.0;
        if (0.0 <= fVar35) {
          fStack_18c = fVar38;
        }
      }
    }
    puVar22 = *(undefined8 **)(param_4 + 0x60);
    local_13c = 1;
    local_1a4 = fVar34;
    if (puVar22 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_052461c0);
        puVar22 = &DAT_05240280;
        if (iVar14 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar22 = &DAT_05240280;
      }
    }
    local_9c = 0;
    local_230 = 3.64338e-44;
    if ((puVar22[0x227] == 0) || (uVar18 = FUN_03850a90(puVar22[0x227],0x1a,0,0), (uVar18 & 1) == 0)
       ) {
LAB_0242c940:
      FUN_0170d420(puVar29,&local_1b8);
      cVar21 = *(char *)(param_4 + 0x8e5);
    }
    else {
      puVar22 = *(undefined8 **)(param_4 + 0x60);
      if (puVar22 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar14 = __cxa_guard_acquire(&DAT_052461c0);
          puVar22 = &DAT_05240280;
          if (iVar14 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar22 = &DAT_05240280;
        }
      }
      lVar27 = FUN_0170b714(puVar22,*(undefined4 *)(param_4 + 0x230),0);
      if (lVar27 != 0) goto LAB_0242c940;
      FUN_0170d9b0(puVar29,&local_1b8);
      cVar21 = *(char *)(param_4 + 0x8e5);
    }
    if (cVar21 != '\0') {
      uVar31 = (**(code **)(*(long *)(param_4 + 0x8d0) + (ulong)*(byte *)(param_4 + 0x8e4) * 8))
                         (lVar3);
      *(undefined4 *)(param_4 + 0x8d8) = uVar31;
    }
    if (*(char *)(param_4 + 0x8c5) != '\0') {
      uVar31 = (**(code **)(*(long *)(param_4 + 0x8b0) + (ulong)*(byte *)(param_4 + 0x8c4) * 8))
                         (lVar2);
      *(undefined4 *)(param_4 + 0x8b8) = uVar31;
    }
  }
  lVar27 = FUN_0251e98c(1);
  pfVar19 = (float *)(**(code **)(*(long *)(lVar27 + 0x13b0) + 0xf0))(lVar27 + 0x13b0);
  if (iVar16 != 0) {
    iVar14 = *(int *)(param_4 + 0x18e5);
    fVar35 = *pfVar19;
    iVar36 = *(int *)(param_4 + 0x18eb);
    lVar27 = FUN_0251e98c(1);
    puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar27 + 0x1380) + 0xf0))(lVar27 + 0x1380);
    local_22c = 0;
    puVar22 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar22 = *(undefined8 **)(param_4 + 0x4c8);
    }
    local_1b8 = (undefined *)(puVar22[0x4f] & 0xffffffff);
    local_1b0 = (float *)CONCAT44(local_1b0._4_4_,*(undefined4 *)(puVar22 + 0x50));
    fVar34 = 0.19999999;
    local_230 = (float)iVar14 * 0.001;
    local_228 = (float)iVar36 * 0.001;
    FUN_03eb4b60(*puVar20,0x41200000,&local_1b8,&local_230);
    *(undefined4 *)(puVar22 + 0x4f) = (undefined4)local_1b8;
    *(float *)(puVar22 + 0x50) = (float)local_1b0;
    fVar38 = (float)local_1b0;
    if (local_1dc == 0) {
      if (*(int *)(param_4 + 0x178) == 0) {
        local_230 = 1.4013e-44;
        local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,10);
        if ((*(byte *)(param_4 + 0x18f5) >> 2 & 1) != 0) goto LAB_0242cb58;
      }
      iVar14 = (uint)*(ushort *)(param_4 + 0x18ef) * 0x10000;
      plVar9 = &DAT_054e9a58;
      if (*(long **)(param_4 + 0x4c8) != (long *)0x0) {
        plVar9 = *(long **)(param_4 + 0x4c8);
      }
      lVar27 = (**(code **)(*plVar9 + 0x148))();
      iVar36 = iVar14 - *(int *)(lVar27 + 4);
      if (0xb60b5e < iVar36 + 0x5b05afU) {
        fVar38 = (float)iVar36;
        iVar36 = 0x15555560;
        iVar14 = -0x15555560;
        iVar25 = (int)(fVar35 * 0.65 * fVar38);
        if (iVar25 < 1) {
          iVar36 = -0x5b05b0;
        }
        else {
          iVar14 = 0x5b05b0;
        }
        iVar8 = iVar25;
        if (iVar36 <= iVar25) {
          iVar8 = iVar36;
        }
        if (iVar14 <= iVar25) {
          iVar14 = iVar8;
        }
        iVar14 = iVar14 + *(int *)(lVar27 + 4);
      }
      *(int *)(lVar27 + 4) = iVar14;
    }
  }
LAB_0242cb58:
  uVar15 = 0;
  if (puVar29[0x227] != 0) {
    local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,1);
    uVar15 = *(uint *)(puVar29 + 0x2d3) >> 1 & 1;
  }
  uVar18 = FUN_0170a6d0(puVar29,uVar15);
  if ((uVar18 & 1) == 0) {
    lVar27 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar27 == 0) || (*(int *)(lVar27 + 0x15c) == 0)) {
LAB_0242cc44:
      uVar15 = *(uint *)(param_4 + 0x1c04);
    }
    else {
      pbVar10 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar27 + 0x15c) != 0) {
        pbVar10 = (byte *)(lVar27 + 0x158);
      }
      bVar23 = *pbVar1;
      bVar24 = *pbVar10;
      if (7 < bVar24) {
        bVar24 = 0xff;
      }
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      if (bVar24 == bVar23) goto LAB_0242cc44;
      puVar29 = *(undefined8 **)(param_4 + 0x60);
      if (puVar29 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar14 = __cxa_guard_acquire(&DAT_052461c0);
          puVar29 = &DAT_05240280;
          if (iVar14 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar29 = &DAT_05240280;
        }
      }
      local_230 = 0.0;
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x29);
      if (puVar29[0x227] == 0) goto LAB_0242cc44;
      uVar18 = FUN_03850890(puVar29[0x227],0x29,0,0);
      if ((uVar18 & 1) != 0) goto LAB_0242cc50;
      uVar15 = *(uint *)(param_4 + 0x1c04);
    }
    if (uVar15 < 0x5b) {
      return;
    }
  }
LAB_0242cc50:
  if ((*(uint *)(param_4 + 0x17cc) >> 9 & 1) == 0) {
    *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 0x200;
    uVar18 = (ulong)local_1b0 >> 0x10;
    local_1b8 = local_1c0;
    bVar24 = *(byte *)(param_4 + 0x1ee8);
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    local_1b0._0_2_ = CONCAT11(bVar24,*(int *)(param_4 + 0x178) == 0);
    uVar15 = (uint)*(byte *)(param_4 + 0x1908);
    if (0xb < uVar15) {
      uVar15 = 0;
    }
    local_1b0 = (float *)(CONCAT44(uVar15,(int)CONCAT62((int6)uVar18,(undefined2)local_1b0)) &
                         0xffffffffff00ffff);
    FUN_02306630(&local_1b8);
  }
  if (iVar16 != 0) {
    *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 8;
    FUN_023164ec(param_4,6);
    return;
  }
  if ((*(byte *)(param_4 + 0x1917) & 1) != 0) {
    FUN_0230e2b0(&local_1b8);
    pfVar19 = local_1b0;
    local_d8 = *(undefined2 *)PTR_DAT_04bb37e0;
    if (local_1b0 != (float *)"Player_GetDemo") {
      iVar16 = 0xe;
      if ((int)local_1a8 < 0xf) {
        iVar16 = (int)local_1a8 + -1;
      }
      memcpy(local_1b0,"Player_GetDemo",(long)iVar16);
      *(char *)((long)pfVar19 + (long)iVar16) = '\0';
    }
    pcVar13 = (char *)CONCAT44(uStack_154,uStack_158);
    if (pcVar13 != "Get_Pickup") {
      iVar16 = 10;
      if (iStack_150 < 0xb) {
        iVar16 = iStack_150 + -1;
      }
      memcpy(pcVar13,"Get_Pickup",(long)iVar16);
      pcVar13[iVar16] = '\0';
    }
    pfVar19 = local_1b0;
    if (local_1b0 != (float *)"Player_GetDemo") {
      iVar16 = 0xe;
      if ((int)local_1a8 < 0xf) {
        iVar16 = (int)local_1a8 + -1;
      }
      memcpy(local_1b0,"Player_GetDemo",(long)iVar16);
      *(char *)((long)pfVar19 + (long)iVar16) = '\0';
    }
    pcVar13 = (char *)CONCAT44(uStack_154,uStack_158);
    if (pcVar13 != "Get_Pickup") {
      iVar16 = 10;
      if (iStack_150 < 0xb) {
        iVar16 = iStack_150 + -1;
      }
      memcpy(pcVar13,"Get_Pickup",(long)iVar16);
      pcVar13[iVar16] = '\0';
    }
    local_100 = 0;
    local_d0 = 0;
    *(undefined8 *)(param_4 + 0x1990) = 0;
    *(undefined8 *)(param_4 + 0x1998) = 0;
    *(undefined8 *)(param_4 + 0x19a0) = 0;
    *(undefined8 *)(param_4 + 0x19a8) = 0;
    local_108 = (undefined2)local_1c0;
    local_106 = local_1c0._2_1_;
    local_d8 = (undefined2)local_1c0;
    uStack_d6 = local_1c0._2_1_;
    local_f0 = 1;
    local_ec = 1;
    local_e0 = 0x3c;
    local_105 = local_1c0._3_1_;
    *(undefined8 *)(param_4 + 0x1960) = *puVar4;
    *(undefined8 *)(param_4 + 0x1968) = *(undefined8 *)(param_4 + 0x18e8);
    local_104 = local_1c0._4_4_;
    uStack_d5 = local_1c0._3_1_;
    uStack_d4 = local_1c0._4_4_;
    local_cc = local_1cc;
    local_c8 = fStack_1c8;
    local_c4 = local_1c4;
    *(undefined8 *)(param_4 + 0x19b0) = 0;
    *(undefined8 *)(param_4 + 0x1978) = *(undefined8 *)(param_4 + 0x18f8);
    *(undefined8 *)(param_4 + 0x1970) = *(undefined8 *)(param_4 + 0x18f0);
    *(undefined8 *)(param_4 + 0x19b8) = 0;
    *(undefined8 *)(param_4 + 0x19c0) = 0;
    *(undefined8 *)(param_4 + 0x19c8) = 0;
    *(undefined8 *)(param_4 + 0x19d0) = 0;
    *(undefined2 *)(param_4 + 0x19d8) = 0;
    *(undefined1 *)(param_4 + 0x1988) = 0;
    iVar16 = (int)(fStack_1c8 * 4.0);
    if (0x7ffe < iVar16) {
      iVar16 = 0x7fff;
    }
    *(undefined **)(param_4 + 0x1980) = local_1c0;
    local_230 = 0.0;
    *(undefined1 *)(param_4 + 0x1989) = 0;
    *(int *)(param_4 + 0x198a) = (int)(local_1cc * 999.99994);
    if (iVar16 < -0x7fff) {
      iVar16 = -0x8000;
    }
    *(short *)(param_4 + 0x198e) = (short)iVar16;
    *(int *)(param_4 + 0x1990) = (int)(local_1c4 * 999.99994);
    FUN_023292c0(param_4 + 0xde0,&local_1b8);
    local_230 = 1.28919e-43;
    *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x19c0);
    *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x19c8);
    *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x19d0);
    *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x19d8);
    *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x19a0);
    *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x19a8);
    *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x19b0);
    *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x19b8);
    *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1980);
    *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1988);
    *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1990);
    *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1998);
    *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x1960);
    *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x1968);
    *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x1978);
    *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x1970);
    lVar27 = 0;
    if (*(long *)(param_4 + 0x70) != 0) {
      lVar27 = *(long *)(param_4 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar27,0x5c);
    return;
  }
  lVar27 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar27 != 0) && (*(int *)(lVar27 + 0x15c) != 0)) {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar27 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar27 + 0x158);
    }
    bVar23 = *pbVar1;
    bVar24 = *pbVar10;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    if (7 < bVar23) {
      bVar23 = 0xff;
    }
    if (bVar24 != bVar23) {
      uVar17 = FUN_0251e98c(1);
      uVar31 = FUN_02366a5c(uVar17,&local_1c0);
      lVar27 = *(long *)(param_4 + 0x68);
      local_188 = 0x3f800000;
      local_1a4 = 1.4013e-45;
      fStack_18c = *(float *)(lVar27 + 0x280);
      local_1b0 = (float *)0x5;
      uStack_1a0 = (undefined1)uVar31;
      bStack_19f = (byte)((uint)uVar31 >> 8);
      uStack_19e = (undefined2)((uint)uVar31 >> 0x10);
      local_1a8 = (float)((uint)local_1a8 & 0xffffff00);
      local_190 = (undefined2)*(undefined4 *)(lVar27 + 0x27c);
      uStack_18e = (undefined2)((uint)*(undefined4 *)(lVar27 + 0x27c) >> 0x10);
      uVar31 = *(undefined4 *)(lVar27 + 0x278);
      local_184 = CONCAT26(local_184._6_2_,0x10000000101);
      local_1b8 = local_1c0;
      uStack_198 = SUB42(fVar34,0);
      uStack_196 = (undefined2)((uint)fVar34 >> 0x10);
      local_194 = (byte)uVar31;
      local_193 = (undefined2)((uint)uVar31 >> 8);
      uStack_191 = (undefined1)((uint)uVar31 >> 0x18);
      local_19c = fVar38;
      FUN_0236cba0(param_4,&local_1b8);
      return;
    }
  }
  lVar27 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar27 == 0) || (*(long *)(lVar27 + 0x28) == 0)) || (*(int *)(lVar27 + 0x80) != 1)) {
    sVar12 = *(short *)PTR_DAT_04bb6298;
    if (sVar12 != -1) {
      local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,0x20);
      puVar11 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8;
      if (0xff < (uint)(int)sVar12) {
        puVar11 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar11 + 4) & 1) != 0) goto LAB_0242d100;
    }
    uVar18 = FUN_0277d9a8(&local_1c0);
    if ((uVar18 & 1) != 0) {
      FUN_01ad5d04(&local_230,&local_1c0);
      uVar18 = FUN_01b0e0ec(&local_230);
      if (((uVar18 & 1) == 0) || (uVar18 = FUN_01b09bec(&local_230), (uVar18 & 1) == 0)) {
        uVar15 = FUN_0243bb28(param_4);
        uVar18 = FUN_016dd4c4(pbVar1,&local_1c0,uVar15 & 1);
        if ((uVar18 & 1) != 0) {
          FUN_02448ae4(param_4);
          return;
        }
      }
      else {
        FUN_024f4060(&local_1b8,pbVar1,&local_1c0);
        uVar18 = FUN_024f43cc(&local_1b8);
        if ((uVar18 & 1) != 0) {
          FUN_025583ec(&local_1c0,pbVar1);
          FUN_024487e0(param_4,&local_1c0);
          return;
        }
      }
    }
  }
LAB_0242d100:
  FUN_0236a88c(param_4,6,1,0);
  return;
}

