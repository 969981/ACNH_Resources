
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023dfbe0(long param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  byte bVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  ulong local_208;
  undefined8 local_200;
  long local_1f8;
  long *local_1f0;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined8 local_1dc;
  float local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  byte local_1c0;
  undefined2 local_1bf;
  undefined1 *local_1bc;
  undefined1 local_1b4;
  undefined5 local_1b0;
  undefined3 uStack_1ab;
  undefined5 uStack_1a8;
  undefined8 local_1a0;
  float local_198;
  float fStack_194;
  float local_190;
  undefined4 local_18c;
  undefined *local_188;
  undefined8 local_180;
  float local_178;
  float local_174;
  undefined1 local_170;
  byte local_16f;
  undefined6 uStack_16c;
  undefined2 local_166;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined1 local_11c;
  undefined5 local_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined1 local_75;
  
  fVar22 = (float)(int)*(short *)(param_1 + 0x1913);
  fVar21 = (float)*(int *)(param_1 + 0x1909);
  bVar14 = *(byte *)(param_1 + 0x1916);
  fVar26 = fVar21 * 0.001;
  fVar24 = (float)*(int *)(param_1 + 0x190f) * 0.001;
  if (7 < bVar14) {
    bVar14 = 0;
  }
  local_1a0 = (undefined *)0xfffe;
  fVar27 = (float)(int)*(short *)(param_1 + 0x190d) * 0.25 + fVar22 * 0.001;
  local_198 = fVar26;
  fStack_194 = fVar27;
  local_190 = fVar24;
  FUN_0277d4ac(&local_1a0);
  local_1a0 = *(undefined **)(param_1 + 0x1900);
  uVar17 = 0;
  if (bVar14 == 0) {
    lVar10 = FUN_0146d638(0x5d);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x420) + 0xf0))(lVar10 + 0x420);
    fVar21 = -3.0;
    uVar17 = (uint)(*pfVar12 + -3.0);
    puVar16 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_1dc = 0;
  local_1bc = &DAT_3f8000003f800000;
  local_1d4 = 0.0;
  local_1c0 = *PTR_DAT_04bb32e0;
  local_1bf = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1e4 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_1e0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_1d0 = 0x3f800000;
  uStack_1c8 = 0;
  uStack_1ab = 0;
  uStack_1a8 = 0;
  if (7 < local_1c0) {
    local_1c0 = 0xff;
  }
  if (*(uint *)(param_1 + 0x1c04) < uVar17) {
    local_1c0 = *(byte *)(param_1 + 0x1ee8);
    local_1d0 = 0x3f800000;
    local_1dc = CONCAT44(fVar27,fVar26);
    local_1e4 = (undefined4)local_1a0;
    uStack_1e0 = local_1a0._4_4_;
    if (7 < local_1c0) {
      local_1c0 = 0xff;
    }
    local_1d4 = fVar24;
LAB_023e0268:
    local_1bf = CONCAT11(local_1bf._1_1_,1);
    local_1b4 = 1;
    FUN_0170d1d8(puVar16,&local_1e4);
  }
  else {
    if (*(uint *)(param_1 + 0x1c04) == uVar17) {
      FUN_0231ece4(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_198);
      fVar24 = fStack_194;
      sVar4 = *(short *)(param_1 + 0x18e9);
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      puVar6 = PTR_DAT_04bb2020;
      local_188 = PTR_DAT_04bb2020 + 0x10;
      local_180 = "PlayerPickupFtrOffsetY";
      if (((puVar18[0x227] != 0) && (lVar10 = *(long *)(puVar18[0x227] + 0x78), lVar10 != 0)) &&
         (plVar8 = *(long **)(lVar10 + 0x48), plVar8 != (long *)0x0)) {
        fVar21 = 10.0;
        (**(code **)(*plVar8 + 0x30))((fVar24 + (float)(int)sVar4 * -0.25) * 10.0,plVar8,&local_188)
        ;
      }
      if (bVar14 == 0) {
LAB_023dfe30:
        local_180 = "PlayerFtrPickup1";
      }
      else if (bVar14 == 7) {
LAB_023dfe3c:
        local_180 = "PlayerFtrPickupWall";
      }
      else {
        if (bVar14 == 6) goto LAB_023dfe30;
        if (bVar14 != 1) goto LAB_023dfe3c;
        local_180 = "PlayerFtrPickup2";
      }
      local_188 = puVar6 + 0x10;
      FUN_017081d0(puVar16,&local_188,6,0,0);
    }
    local_1f8 = 0;
    local_1f0 = (long *)0x0;
    local_18c = 0;
    local_188 = (undefined *)CONCAT44(local_188._4_4_,0x1d);
    local_208 = 0;
    local_200 = 0;
    if (puVar16[0x227] == 0) {
      local_18c = 0;
    }
    else {
      uVar13 = FUN_03850890(puVar16[0x227],0x1d,&local_208,0);
      if ((uVar13 & 1) != 0) {
        if (local_1f0 == (long *)0x0) {
          uVar17 = 1;
        }
        else if (*local_1f0 == 0) {
          local_75 = 0;
          local_178 = 3.58732e-43;
          local_180 = (char *)&local_174;
          local_174 = (float)((uint)local_174 & 0xffffff00);
          local_188 = PTR_DAT_04bb21f8 + 0x10;
          lVar10 = *(long *)(local_1f0[2] + 8);
          FUN_038d1270(&local_188,"%s.as",
                       lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
LAB_023dff78:
          uVar17 = 0;
        }
        else {
          iVar7 = *(int *)(*local_1f0 + 8);
          if (iVar7 < 0x60000000) {
            piVar2 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar7);
            if (*piVar2 < 1) goto LAB_023dff78;
            uVar17 = *(uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8) +
                              4);
          }
          else {
            uVar17 = iVar7 + 0xa0000000;
            if (*(uint *)(local_1f8 + 0x80) <= uVar17) {
              uVar17 = 0;
            }
            lVar10 = *(long *)(local_1f8 + 0x88) + (ulong)uVar17 * 0x32;
            uVar17 = *(uint *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x20));
          }
        }
        *(undefined4 *)(puVar16 + 0x255) = 0;
        *(byte *)((long)puVar16 + 0x12b4) = (byte)(uVar17 >> 0x1f);
        *(undefined1 *)((long)puVar16 + 0x12b5) = 1;
        *(undefined1 *)((long)puVar16 + 0x126c) = 0;
        *(uint *)((long)puVar16 + 0x12ac) = uVar17 & (int)uVar17 >> 0x1f;
        *(uint *)(puVar16 + 0x256) = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        *(float *)(puVar16 + 0x253) = local_190;
        puVar16[0x252] = CONCAT44(fStack_194,local_198);
      }
      local_18c = 0;
      local_188 = (undefined *)CONCAT44(local_188._4_4_,0x1e);
      if ((puVar16[0x227] != 0) &&
         (uVar13 = FUN_03850890(puVar16[0x227],0x1e,&local_208,0), (uVar13 & 1) != 0)) {
        uVar25 = 0x3f800000;
        if (local_1f0 == (long *)0x0) {
          uVar17 = 1;
        }
        else {
          if (*local_1f0 == 0) {
            local_75 = 0;
            local_178 = 3.58732e-43;
            local_180 = (char *)&local_174;
            local_174 = (float)((uint)local_174 & 0xffffff00);
            local_188 = PTR_DAT_04bb21f8 + 0x10;
            lVar10 = *(long *)(local_1f0[2] + 8);
            FUN_038d1270(&local_188,"%s.as",
                         lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
            uVar17 = 0;
            if (local_1f0 == (long *)0x0) goto LAB_023e0198;
LAB_023e00c4:
            lVar10 = *local_1f0;
          }
          else {
            iVar7 = *(int *)(*local_1f0 + 8);
            if (0x5fffffff < iVar7) {
              uVar17 = iVar7 + 0xa0000000;
              if (*(uint *)(local_1f8 + 0x80) <= uVar17) {
                uVar17 = 0;
              }
              lVar10 = *(long *)(local_1f8 + 0x88) + (ulong)uVar17 * 0x32;
              puVar15 = (uint *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x20));
LAB_023e00c0:
              uVar17 = *puVar15;
              goto LAB_023e00c4;
            }
            piVar2 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar7);
            if (0 < *piVar2) {
              puVar15 = (uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8)
                                + 4);
              goto LAB_023e00c0;
            }
            uVar17 = 0;
            lVar10 = *local_1f0;
          }
          if (lVar10 == 0) {
            local_75 = 0;
            local_178 = 3.58732e-43;
            local_180 = (char *)&local_174;
            local_174 = (float)((uint)local_174 & 0xffffff00);
            local_188 = PTR_DAT_04bb21f8 + 0x10;
            lVar10 = *(long *)(local_1f0[2] + 8);
            FUN_038d1270(&local_188,"%s.as",
                         lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
            uVar25 = 0;
          }
          else {
            iVar7 = *(int *)(lVar10 + 8);
            if (iVar7 < 0x60000000) {
              uVar25 = 0;
              piVar2 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar7);
              if (1 < *piVar2) {
                uVar25 = *(undefined4 *)
                          (((ulong)(uint)piVar2[2] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4);
              }
            }
            else {
              uVar1 = iVar7 + 0xa0000000;
              if (*(uint *)(local_1f8 + 0x80) <= uVar1) {
                uVar1 = 0;
              }
              lVar10 = *(long *)(local_1f8 + 0x88) + (ulong)uVar1 * 0x32;
              uVar25 = *(undefined4 *)(lVar10 + (ulong)*(byte *)(lVar10 + 0x21));
            }
          }
        }
LAB_023e0198:
        *(undefined4 *)(param_1 + 0x8d8) = 0;
        *(undefined1 *)(param_1 + 0x8e5) = 1;
        *(byte *)(param_1 + 0x8e4) = (byte)(uVar17 >> 0x1f);
        *(undefined4 *)(param_1 + 0x8e8) = uVar25;
        *(uint *)(param_1 + 0x8e0) = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        *(uint *)(param_1 + 0x8dc) = uVar17 & (int)uVar17 >> 0x1f;
      }
    }
    if (*(char *)((long)puVar16 + 0x12b5) == '\0' && *(char *)(param_1 + 0x8e5) == '\0') {
      local_1d0 = CONCAT44(local_1d0._4_4_,0x3f800000);
      local_1e4 = (undefined4)local_1a0;
      uStack_1e0 = local_1a0._4_4_;
      local_1c0 = *(byte *)(param_1 + 0x1ee8);
      local_1dc = CONCAT44(fStack_194,local_198);
      local_1d4 = local_190;
      if (7 < local_1c0) {
        local_1c0 = 0xff;
      }
      goto LAB_023e0268;
    }
    uVar9 = FUN_0251e98c(1);
    fVar24 = (float)FUN_02366c70(uVar9,&local_1a0);
    local_174 = *(float *)(param_1 + 0x8e8);
    if (*(char *)(param_1 + 0x8e5) == '\0') {
      fVar26 = 0.0;
      local_174 = local_174 * 0.0 + 1.0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x8e0);
      if ((*(int *)(param_1 + 0x8d8) < iVar7) && (iVar7 != 0)) {
        fVar23 = (float)*(int *)(param_1 + 0x8d8) / (float)iVar7;
        fVar27 = 1.0;
        if (fVar23 <= 1.0) {
          fVar27 = fVar23;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar23) {
          fVar26 = fVar27;
        }
        local_174 = (1.0 - fVar26) + local_174 * fVar26;
      }
      else {
        local_174 = local_174 + 0.0;
        fVar26 = 1.0;
      }
    }
    local_15c = 0x3f800000;
    local_154 = 0x3f80000000000000;
    uStack_164 = 0;
    uStack_15f = 0;
    uStack_16c = 0;
    local_166 = 0;
    local_11c = 0;
    local_118 = 0;
    uStack_113 = 0;
    uStack_110 = 0;
    local_188 = local_1a0;
    uStack_144 = _UNK_04102208;
    local_14c = _DAT_04102200;
    fVar27 = (1.0 - fVar26) * 0.0;
    local_16f = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_16f) {
      local_16f = 0xff;
    }
    uStack_134 = _UNK_04102888;
    local_13c = _DAT_04102880;
    local_170 = 1;
    uStack_124 = _UNK_041023d8;
    local_12c = _DAT_041023d0;
    uStack_160 = 1;
    local_178 = local_174 * (fVar22 * fVar26 + fVar27);
    local_158 = 1;
    local_180 = (char *)CONCAT44(local_174 * (fVar21 * fVar26 + fVar27),
                                 local_174 * (fVar24 * fVar26 + fVar27));
    FUN_0170d420(puVar16,&local_188);
    if (*(char *)(param_1 + 0x8e5) != '\0') {
      uVar25 = (**(code **)(*(long *)(param_1 + 0x8d0) + (ulong)*(byte *)(param_1 + 0x8e4) * 8))
                         (param_1 + 0x8d0);
      *(undefined4 *)(param_1 + 0x8d8) = uVar25;
    }
  }
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 != 0) {
    iVar19 = *(int *)(param_1 + 0x18e5);
    iVar20 = *(int *)(param_1 + 0x18eb);
    lVar10 = FUN_0251e98c(1);
    puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
    local_200 = CONCAT44(local_200._4_4_,(float)iVar20 * 0.001);
    local_208 = (ulong)(uint)((float)iVar19 * 0.001);
    puVar18 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar18 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_188 = (undefined *)(puVar18[0x4f] & 0xffffffff);
    local_180 = (char *)CONCAT44(local_180._4_4_,*(undefined4 *)(puVar18 + 0x50));
    FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,&local_188,&local_208);
    *(undefined4 *)(puVar18 + 0x4f) = local_188._0_4_;
    *(undefined4 *)(puVar18 + 0x50) = (undefined4)local_180;
  }
  lVar10 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar21 = *pfVar12;
  iVar19 = FUN_006f0400((float)*(int *)(param_1 + 0x1909) * 0.001 -
                        *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        (float)*(int *)(param_1 + 0x190f) * 0.001 -
                        *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  if (*(int *)(param_1 + 0x178) == 0) {
    local_208 = CONCAT44(local_208._4_4_,10);
    local_188 = (undefined *)CONCAT44(local_188._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023e0484;
  }
  plVar8 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar8 = *(long **)(param_1 + 0x4c8);
  }
  lVar10 = (**(code **)(*plVar8 + 0x148))();
  iVar20 = iVar19 - *(int *)(lVar10 + 4);
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
    iVar19 = iVar19 + *(int *)(lVar10 + 4);
  }
  *(int *)(lVar10 + 4) = iVar19;
LAB_023e0484:
  local_188 = (undefined *)((ulong)local_188 & 0xffffffff00000000);
  if (((puVar16[0x227] == 0) || (uVar13 = FUN_03850368(puVar16[0x227],0), (uVar13 & 1) == 0)) &&
     (uVar13 = FUN_0170a6d0(puVar16,0), (uVar13 & 1) != 0)) {
    if ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0) {
      uVar13 = (ulong)local_180 >> 0x18;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
      local_188 = local_1a0;
      bVar14 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      local_180._0_3_ = CONCAT12(1,CONCAT11(bVar14,*(int *)(param_1 + 0x178) == 0));
      local_180 = (char *)(CONCAT53((int5)uVar13,(undefined3)local_180) & 0xffffffff);
      FUN_02306630(&local_188);
    }
    if (iVar7 == 0) {
      FUN_0236a88c(param_1,6,1,0);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

