
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0248dac0(long param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulong uVar12;
  byte bVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  int iVar27;
  ulong local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long *local_1e0;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined8 local_1cc;
  float local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  byte local_1b0;
  undefined2 local_1af;
  undefined1 *local_1ac;
  undefined1 local_1a4;
  undefined5 local_1a0;
  undefined3 uStack_19b;
  undefined5 uStack_198;
  undefined8 local_190;
  float local_188;
  float fStack_184;
  float local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined8 local_170;
  float local_168;
  float local_164;
  undefined1 local_160;
  byte local_15f;
  undefined6 uStack_15c;
  undefined2 local_156;
  undefined4 uStack_154;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined4 local_14c;
  undefined1 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined1 local_10c;
  undefined5 local_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined1 local_65;
  
  bVar13 = *(byte *)(param_1 + 0x1916);
  fVar22 = (float)(int)*(short *)(param_1 + 0x1913) * 0.001;
  fVar21 = (float)*(int *)(param_1 + 0x1909) * 0.001;
  local_180 = (float)*(int *)(param_1 + 0x190f) * 0.001;
  if (7 < bVar13) {
    bVar13 = 0;
  }
  local_190 = (undefined *)0xfffe;
  fStack_184 = (float)(int)*(short *)(param_1 + 0x190d) * 0.25 + fVar22;
  local_188 = fVar21;
  FUN_0277d4ac(&local_190);
  local_190 = *(undefined **)(param_1 + 0x1900);
  uVar16 = 0;
  if (bVar13 == 0) {
    lVar9 = FUN_0146d638(0x5d);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x420) + 0xf0))(lVar9 + 0x420);
    fVar21 = -3.0;
    uVar16 = (uint)(*pfVar11 + -3.0);
    puVar15 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar15 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar27 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar27 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_1cc = 0;
  local_1ac = &DAT_3f8000003f800000;
  local_1c4 = 0.0;
  local_1b0 = *PTR_DAT_04bb32e0;
  local_1af = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_1d4 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_1d0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_1c0 = 0x3f800000;
  uStack_1b8 = 0;
  uStack_19b = 0;
  uStack_198 = 0;
  if (7 < local_1b0) {
    local_1b0 = 0xff;
  }
  if (*(uint *)(param_1 + 0x1c04) < uVar16) {
    local_1c0 = 0x3f800000;
    local_1b0 = *(byte *)(param_1 + 0x1ee8);
    local_1cc = CONCAT44(fStack_184,local_188);
    local_1d4 = (undefined4)local_190;
    uStack_1d0 = local_190._4_4_;
LAB_0248e188:
    if (7 < local_1b0) {
      local_1b0 = 0xff;
    }
    local_1af = CONCAT11(local_1af._1_1_,1);
    local_1c4 = local_180;
    FUN_0170d1d8(puVar15,&local_1d4);
  }
  else {
    if (*(uint *)(param_1 + 0x1c04) == uVar16) {
      FUN_0231ece4(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_188);
      fVar18 = fStack_184;
      iVar27 = *(int *)(param_1 + 0x18eb);
      sVar4 = *(short *)(param_1 + 0x18e9);
      puVar17 = *(undefined8 **)(param_1 + 0x60);
      if (puVar17 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar19 = __cxa_guard_acquire(&DAT_052461c0);
          puVar17 = &DAT_05240280;
          if (iVar19 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar17 = &DAT_05240280;
        }
      }
      puVar6 = PTR_DAT_04bb2020;
      local_178 = PTR_DAT_04bb2020 + 0x10;
      local_170 = "PlayerPickupFtrOffsetY";
      if (((puVar17[0x227] != 0) && (lVar9 = *(long *)(puVar17[0x227] + 0x78), lVar9 != 0)) &&
         (plVar7 = *(long **)(lVar9 + 0x48), plVar7 != (long *)0x0)) {
        fVar22 = -0.25;
        fVar21 = 10.0;
        (**(code **)(*plVar7 + 0x30))((fVar18 + (float)(int)sVar4 * -0.25) * 10.0,plVar7,&local_178)
        ;
      }
      if (((bVar13 == 0) || (bVar13 == 7)) || (bVar13 == 6)) {
        local_170 = "PlayerFtrPickup1";
      }
      else if (bVar13 == 1) {
        local_170 = "PlayerFtrPickup2";
        fVar22 = (float)iVar27 * 0.001 - local_180;
        fVar22 = fVar22 * fVar22;
        fVar21 = 15.0;
      }
      else {
        local_170 = "PlayerFtrPickupWall";
      }
      local_178 = puVar6 + 0x10;
      FUN_017081d0(puVar15,&local_178,6,0,0);
    }
    local_1e8 = 0;
    local_1e0 = (long *)0x0;
    local_17c = 0;
    local_178 = (undefined *)CONCAT44(local_178._4_4_,0x1d);
    local_1f8 = 0;
    local_1f0 = 0;
    if (puVar15[0x227] == 0) {
      local_17c = 0;
    }
    else {
      uVar12 = FUN_03850890(puVar15[0x227],0x1d,&local_1f8,0);
      if ((uVar12 & 1) != 0) {
        if (local_1e0 == (long *)0x0) {
          uVar16 = 1;
        }
        else if (*local_1e0 == 0) {
          local_65 = 0;
          local_168 = 3.58732e-43;
          local_170 = (char *)&local_164;
          local_164 = (float)((uint)local_164 & 0xffffff00);
          local_178 = PTR_DAT_04bb21f8 + 0x10;
          lVar9 = *(long *)(local_1e0[2] + 8);
          FUN_038d1270(&local_178,"%s.as",lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8)
                      );
LAB_0248de9c:
          uVar16 = 0;
        }
        else {
          iVar27 = *(int *)(*local_1e0 + 8);
          if (iVar27 < 0x60000000) {
            piVar2 = (int *)(*(long *)(local_1e0[2] + 8) + (long)iVar27);
            if (*piVar2 < 1) goto LAB_0248de9c;
            uVar16 = *(uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1e0[2] + 8) +
                              4);
          }
          else {
            uVar16 = iVar27 + 0xa0000000;
            if (*(uint *)(local_1e8 + 0x80) <= uVar16) {
              uVar16 = 0;
            }
            lVar9 = *(long *)(local_1e8 + 0x88) + (ulong)uVar16 * 0x32;
            uVar16 = *(uint *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x20));
          }
        }
        *(undefined4 *)(puVar15 + 0x255) = 0;
        *(byte *)((long)puVar15 + 0x12b4) = (byte)(uVar16 >> 0x1f);
        *(undefined1 *)((long)puVar15 + 0x12b5) = 1;
        *(undefined1 *)((long)puVar15 + 0x126c) = 0;
        *(uint *)((long)puVar15 + 0x12ac) = uVar16 & (int)uVar16 >> 0x1f;
        *(uint *)(puVar15 + 0x256) = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
        *(float *)(puVar15 + 0x253) = local_180;
        puVar15[0x252] = CONCAT44(fStack_184,local_188);
      }
      local_17c = 0;
      local_178 = (undefined *)CONCAT44(local_178._4_4_,0x1e);
      if ((puVar15[0x227] != 0) &&
         (uVar12 = FUN_03850890(puVar15[0x227],0x1e,&local_1f8,0), (uVar12 & 1) != 0)) {
        uVar26 = 0x3f800000;
        if (local_1e0 == (long *)0x0) {
          uVar16 = 1;
        }
        else {
          if (*local_1e0 == 0) {
            local_65 = 0;
            local_168 = 3.58732e-43;
            local_170 = (char *)&local_164;
            local_164 = (float)((uint)local_164 & 0xffffff00);
            local_178 = PTR_DAT_04bb21f8 + 0x10;
            lVar9 = *(long *)(local_1e0[2] + 8);
            FUN_038d1270(&local_178,"%s.as",
                         lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8));
            uVar16 = 0;
            if (local_1e0 == (long *)0x0) goto LAB_0248e0bc;
LAB_0248dfe8:
            lVar9 = *local_1e0;
          }
          else {
            iVar27 = *(int *)(*local_1e0 + 8);
            if (0x5fffffff < iVar27) {
              uVar16 = iVar27 + 0xa0000000;
              if (*(uint *)(local_1e8 + 0x80) <= uVar16) {
                uVar16 = 0;
              }
              lVar9 = *(long *)(local_1e8 + 0x88) + (ulong)uVar16 * 0x32;
              puVar14 = (uint *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x20));
LAB_0248dfe4:
              uVar16 = *puVar14;
              goto LAB_0248dfe8;
            }
            piVar2 = (int *)(*(long *)(local_1e0[2] + 8) + (long)iVar27);
            if (0 < *piVar2) {
              puVar14 = (uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1e0[2] + 8)
                                + 4);
              goto LAB_0248dfe4;
            }
            uVar16 = 0;
            lVar9 = *local_1e0;
          }
          if (lVar9 == 0) {
            local_65 = 0;
            local_168 = 3.58732e-43;
            local_170 = (char *)&local_164;
            local_164 = (float)((uint)local_164 & 0xffffff00);
            local_178 = PTR_DAT_04bb21f8 + 0x10;
            lVar9 = *(long *)(local_1e0[2] + 8);
            FUN_038d1270(&local_178,"%s.as",
                         lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8));
            uVar26 = 0;
          }
          else {
            iVar27 = *(int *)(lVar9 + 8);
            if (iVar27 < 0x60000000) {
              uVar26 = 0;
              piVar2 = (int *)(*(long *)(local_1e0[2] + 8) + (long)iVar27);
              if (1 < *piVar2) {
                uVar26 = *(undefined4 *)
                          (((ulong)(uint)piVar2[2] & 0xfffffff) + *(long *)(local_1e0[2] + 8) + 4);
              }
            }
            else {
              uVar1 = iVar27 + 0xa0000000;
              if (*(uint *)(local_1e8 + 0x80) <= uVar1) {
                uVar1 = 0;
              }
              lVar9 = *(long *)(local_1e8 + 0x88) + (ulong)uVar1 * 0x32;
              uVar26 = *(undefined4 *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x21));
            }
          }
        }
LAB_0248e0bc:
        *(undefined4 *)(param_1 + 0x8d8) = 0;
        *(undefined1 *)(param_1 + 0x8e5) = 1;
        *(byte *)(param_1 + 0x8e4) = (byte)(uVar16 >> 0x1f);
        *(undefined4 *)(param_1 + 0x8e8) = uVar26;
        *(uint *)(param_1 + 0x8e0) = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
        *(uint *)(param_1 + 0x8dc) = uVar16 & (int)uVar16 >> 0x1f;
      }
    }
    if (*(char *)((long)puVar15 + 0x12b5) == '\0' && *(char *)(param_1 + 0x8e5) == '\0') {
      local_1c0 = CONCAT44(local_1c0._4_4_,0x3f800000);
      local_1d4 = (undefined4)local_190;
      uStack_1d0 = local_190._4_4_;
      local_1b0 = *(byte *)(param_1 + 0x1ee8);
      local_1cc = CONCAT44(fStack_184,local_188);
      goto LAB_0248e188;
    }
    uVar8 = FUN_0251e98c(1);
    fVar18 = (float)FUN_02366c70(uVar8,&local_190);
    local_164 = *(float *)(param_1 + 0x8e8);
    if (*(char *)(param_1 + 0x8e5) == '\0') {
      fVar24 = 0.0;
      local_164 = local_164 * 0.0 + 1.0;
    }
    else {
      iVar27 = *(int *)(param_1 + 0x8e0);
      if ((*(int *)(param_1 + 0x8d8) < iVar27) && (iVar27 != 0)) {
        fVar23 = (float)*(int *)(param_1 + 0x8d8) / (float)iVar27;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        fVar24 = 0.0;
        if (0.0 <= fVar23) {
          fVar24 = fVar25;
        }
        local_164 = (1.0 - fVar24) + local_164 * fVar24;
      }
      else {
        local_164 = local_164 + 0.0;
        fVar24 = 1.0;
      }
    }
    local_14c = 0x3f800000;
    local_144 = 0x3f80000000000000;
    uStack_154 = 0;
    uStack_14f = 0;
    uStack_15c = 0;
    local_156 = 0;
    local_148 = 0;
    local_10c = 0;
    local_108 = 0;
    fVar25 = (1.0 - fVar24) * 0.0;
    local_15f = *(byte *)(param_1 + 0x1ee8);
    uStack_103 = 0;
    uStack_100 = 0;
    uStack_134 = _UNK_04102208;
    local_13c = _DAT_04102200;
    local_168 = local_164 * (fVar22 * fVar24 + fVar25);
    uStack_124 = _UNK_04102888;
    local_12c = _DAT_04102880;
    local_178 = local_190;
    if (7 < local_15f) {
      local_15f = 0xff;
    }
    uStack_114 = _UNK_041023d8;
    local_11c = _DAT_041023d0;
    local_170 = (char *)CONCAT44(local_164 * (fVar21 * fVar24 + fVar25),
                                 local_164 * (fVar18 * fVar24 + fVar25));
    local_160 = 1;
    uStack_150 = 1;
    FUN_0170d420(puVar15,&local_178);
    if (*(char *)(param_1 + 0x8e5) != '\0') {
      uVar26 = (**(code **)(*(long *)(param_1 + 0x8d0) + (ulong)*(byte *)(param_1 + 0x8e4) * 8))
                         (param_1 + 0x8d0);
      *(undefined4 *)(param_1 + 0x8d8) = uVar26;
    }
  }
  iVar27 = *(int *)(param_1 + 0x178);
  if (iVar27 != 0) {
    iVar19 = *(int *)(param_1 + 0x18e5);
    iVar20 = *(int *)(param_1 + 0x18eb);
    lVar9 = FUN_0251e98c(1);
    puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
    local_1f0 = CONCAT44(local_1f0._4_4_,(float)iVar20 * 0.001);
    local_1f8 = (ulong)(uint)((float)iVar19 * 0.001);
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_178 = (undefined *)(puVar17[0x4f] & 0xffffffff);
    local_170 = (char *)CONCAT44(local_170._4_4_,*(undefined4 *)(puVar17 + 0x50));
    FUN_03eb4b60(*puVar10,0x41200000,0x3e4ccccc,&local_178,&local_1f8);
    *(undefined4 *)(puVar17 + 0x4f) = local_178._0_4_;
    *(undefined4 *)(puVar17 + 0x50) = (undefined4)local_170;
  }
  lVar9 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar21 = *pfVar11;
  iVar19 = FUN_006f0400((float)*(int *)(param_1 + 0x1909) * 0.001 -
                        *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        (float)*(int *)(param_1 + 0x190f) * 0.001 -
                        *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  if (*(int *)(param_1 + 0x178) == 0) {
    local_1f8 = CONCAT44(local_1f8._4_4_,10);
    local_178 = (undefined *)CONCAT44(local_178._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0248e3a4;
  }
  plVar7 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x4c8);
  }
  lVar9 = (**(code **)(*plVar7 + 0x148))();
  iVar20 = iVar19 - *(int *)(lVar9 + 4);
  if (0xb60b5e < iVar20 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar19 = -0x15555560;
    iVar20 = (int)(fVar21 * 0.65 * (float)iVar20);
    if (iVar20 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar19 = 0x5b05b0;
    }
    iVar3 = iVar20;
    if (iVar5 <= iVar20) {
      iVar3 = iVar5;
    }
    if (iVar19 <= iVar20) {
      iVar19 = iVar3;
    }
    iVar19 = iVar19 + *(int *)(lVar9 + 4);
  }
  *(int *)(lVar9 + 4) = iVar19;
LAB_0248e3a4:
  local_178 = (undefined *)((ulong)local_178 & 0xffffffff00000000);
  if (((puVar15[0x227] == 0) || (uVar12 = FUN_03850368(puVar15[0x227],0), (uVar12 & 1) == 0)) &&
     (uVar12 = FUN_0170a6d0(puVar15,0), (uVar12 & 1) != 0)) {
    if ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0) {
      local_170._3_5_ = (uint5)((ulong)local_170 >> 0x18) & 0xff;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
      local_170 = (char *)((ulong)local_170._3_5_ << 0x18);
      local_178 = local_190;
      bVar13 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_170._0_2_ = CONCAT11(bVar13,*(int *)(param_1 + 0x178) == 0);
      FUN_02306630(&local_178);
    }
    if (iVar27 == 0) {
      FUN_0236a88c(param_1,6,1,0);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

