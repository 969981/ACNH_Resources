
void FUN_024b79c4(long param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  float *pfVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  byte bStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  float fStack_98;
  float fStack_94;
  undefined1 local_90;
  undefined5 local_8c;
  undefined3 uStack_87;
  undefined5 uStack_84;
  undefined4 local_74;
  int local_70;
  float local_6c;
  float fStack_68;
  float local_64;
  
  puVar8 = PTR_DAT_04bb48a0;
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    uVar15 = FUN_016ff740(puVar23,6,&local_c0);
    if ((uVar15 & 1) != 0) {
      uVar11 = FUN_024b1b70(param_1);
      puVar7 = PTR_DAT_04bb27c0;
      lVar18 = *(long *)PTR_DAT_04bb27c0;
      if (lVar18 != 0) {
        if ((((uVar11 == 0) ||
             (plVar24 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                                  (ulong)(uVar11 >> 0x14) * 8), plVar24 == (long *)0x0)) ||
            ((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar24 + 0x46) != uVar11)) {
          plVar24 = (long *)0x0;
        }
        if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
          plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar18 = *(long *)puVar7;
          iVar12 = (**(code **)(*plVar16 + 0x60))();
          if (iVar12 < 0x11) {
            uVar11 = 1;
          }
          else {
            if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_024b7ae0;
            uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_024b7ae0:
          uVar11 = 0;
        }
        if (plVar24 != (long *)0x0) {
          if (((*PTR_DAT_04bb4b28 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb4b28), iVar12 != 0)) {
            *(undefined **)PTR_DAT_04bb4b20 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb4b28);
          }
          uVar13 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb4b20);
          if ((uVar11 & uVar13) == 1) {
            bVar21 = *(byte *)(param_1 + 0x1ee8);
            if (7 < bVar21) {
              bVar21 = 0xff;
            }
            fVar31 = (float)((ulong)plVar24[0x52] >> 0x20);
            fVar32 = (float)((ulong)plVar24[0x54] >> 0x20);
            lVar18 = *(long *)puVar8;
            fVar33 = (float)((ulong)plVar24[0x56] >> 0x20);
            bVar22 = *(byte *)(lVar18 + 0x44);
            if (7 < bVar22) {
              bVar22 = 0xff;
            }
            if (bVar21 == bVar22) {
              lVar20 = 0;
LAB_024b7c78:
              lVar18 = lVar18 + 0x40 + lVar20 * 0x20;
            }
            else {
              bVar22 = *(byte *)(lVar18 + 100);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 1;
                goto LAB_024b7c78;
              }
              bVar22 = *(byte *)(lVar18 + 0x84);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 2;
                goto LAB_024b7c78;
              }
              bVar22 = *(byte *)(lVar18 + 0xa4);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 3;
                goto LAB_024b7c78;
              }
              bVar22 = *(byte *)(lVar18 + 0xc4);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 4;
                goto LAB_024b7c78;
              }
              bVar22 = *(byte *)(lVar18 + 0xe4);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 5;
                goto LAB_024b7c78;
              }
              bVar22 = *(byte *)(lVar18 + 0x104);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 6;
                goto LAB_024b7c78;
              }
              bVar22 = *(byte *)(lVar18 + 0x124);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              if (bVar21 == bVar22) {
                lVar20 = 7;
                goto LAB_024b7c78;
              }
              lVar18 = lVar18 + 0x140;
            }
            *(float *)(lVar18 + 0x10) =
                 fStack_b4 +
                 fVar31 * (float)local_c0 + fVar32 * (float)((ulong)local_c0 >> 0x20) +
                 fVar33 * fStack_b8;
            *(float *)(lVar18 + 0x14) =
                 fStack_a4 + fVar31 * local_b0 + fVar32 * fStack_ac + fVar33 * local_a8;
            *(float *)(lVar18 + 0x18) =
                 fStack_94 +
                 fVar31 * local_a0 +
                 fVar32 * (float)(CONCAT17(uStack_99,
                                           CONCAT16(uStack_9a,
                                                    CONCAT15(uStack_9b,CONCAT14(bStack_9c,local_a0))
                                                   )) >> 0x20) + fVar33 * fStack_98;
          }
        }
      }
    }
  }
  lVar18 = *(long *)puVar8;
  bVar21 = *(byte *)(param_1 + 0x1ee8);
  bVar22 = *(byte *)(lVar18 + 0x44);
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  if (7 < bVar22) {
    bVar22 = 0xff;
  }
  if (bVar21 == bVar22) {
    lVar20 = 0;
LAB_024b7d84:
    lVar18 = lVar18 + 0x40 + lVar20 * 0x20;
    puVar23 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    bVar22 = *(byte *)(lVar18 + 100);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 1;
      goto LAB_024b7d84;
    }
    bVar22 = *(byte *)(lVar18 + 0x84);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 2;
      goto LAB_024b7d84;
    }
    bVar22 = *(byte *)(lVar18 + 0xa4);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 3;
      goto LAB_024b7d84;
    }
    bVar22 = *(byte *)(lVar18 + 0xc4);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 4;
      goto LAB_024b7d84;
    }
    bVar22 = *(byte *)(lVar18 + 0xe4);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 5;
      goto LAB_024b7d84;
    }
    bVar22 = *(byte *)(lVar18 + 0x104);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 6;
      goto LAB_024b7d84;
    }
    bVar22 = *(byte *)(lVar18 + 0x124);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar21 == bVar22) {
      lVar20 = 7;
      goto LAB_024b7d84;
    }
    lVar18 = lVar18 + 0x140;
    puVar23 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  FUN_016ff8c0(puVar23,8,&local_6c);
  puVar8 = PTR_DAT_04bb6298;
  uVar11 = *(uint *)(param_1 + 0x1c04);
  uVar14 = 0;
  if (3 < uVar11) {
    fVar33 = *(float *)(param_1 + 0xac8);
    fVar31 = *(float *)(param_1 + 0xacc);
    fVar32 = *(float *)(param_1 + 0xad0);
    uVar25 = *(undefined8 *)PTR_DAT_04bb3d80;
    local_c0 = 0xfffe;
    FUN_0277d4ac(&local_c0);
    local_c0 = *(long *)(param_1 + 0x1900);
    uVar14 = FUN_0277d6c4(&local_c0);
    uVar15 = FUN_013eec20(uVar25,uVar14);
    if ((uVar15 & 1) != 0) {
      local_74 = *(undefined4 *)(param_1 + 0x230);
      sVar5 = *(short *)puVar8;
      if (sVar5 == -1) {
LAB_024b7e80:
        FUN_016f742c(&local_70,&local_74,0);
        iVar12 = *(int *)(param_1 + 0x178);
      }
      else {
        local_c0 = CONCAT44(local_c0._4_4_,1);
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 1 & 1) == 0) goto LAB_024b7e80;
        local_70 = 0;
        iVar12 = *(int *)(param_1 + 0x178);
      }
      if (iVar12 == 0) {
        local_c8._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
        local_c8 = CONCAT44(local_c8._4_4_,10);
        local_c0._4_4_ = (uint)((ulong)local_c0 >> 0x20);
        local_c0 = CONCAT44(local_c0._4_4_,10);
        if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b7f80;
      }
      plVar24 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar24 = *(long **)(param_1 + 0x4c8);
      }
      lVar20 = (**(code **)(*plVar24 + 0x148))();
      iVar19 = local_70 - *(int *)(lVar20 + 4);
      iVar12 = local_70;
      if (0xb60b5e < iVar19 + 0x5b05afU) {
        iVar6 = 0x15555560;
        iVar12 = -0x15555560;
        iVar19 = (int)((float)iVar19 * 0.25);
        if (iVar19 < 1) {
          iVar6 = -0x5b05b0;
        }
        else {
          iVar12 = 0x5b05b0;
        }
        iVar1 = iVar19;
        if (iVar6 <= iVar19) {
          iVar1 = iVar6;
        }
        if (iVar12 <= iVar19) {
          iVar12 = iVar1;
        }
        iVar12 = iVar12 + *(int *)(lVar20 + 4);
      }
      *(int *)(lVar20 + 4) = iVar12;
    }
LAB_024b7f80:
    fVar30 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c) +
             (float)(int)*(short *)(param_1 + 0x1916) * -0.25;
    if (8.0 <= fVar30) {
      puVar3 = (undefined4 *)0x4c48330;
      if (25.0 <= fVar30) {
        puVar3 = &DAT_04c48344;
      }
      puVar4 = (undefined4 *)0x4c4831c;
      if (15.0 <= fVar30) {
        puVar4 = puVar3;
      }
      if ((uVar15 & 1) != 0) {
        puVar3 = &DAT_04c48380;
        if (25.0 <= fVar30) {
          puVar3 = &DAT_04c48394;
        }
        puVar4 = &DAT_04c4836c;
        if (15.0 <= fVar30) {
          puVar4 = puVar3;
        }
        fVar26 = (float)puVar4[1];
        fVar28 = (float)puVar4[2];
        fVar27 = (float)puVar4[3];
        fVar29 = (float)puVar4[4];
        if (15.0 <= fVar30) {
        }
        goto LAB_024b807c;
      }
      fVar26 = (float)puVar4[1];
      fVar28 = (float)puVar4[2];
      uVar13 = 0;
      fVar27 = (float)puVar4[3];
      fVar29 = (float)puVar4[4];
    }
    else if ((uVar15 & 1) == 0) {
      uVar13 = 0;
      fVar27 = DAT_04c48314;
      fVar28 = DAT_04c48310;
      fVar29 = DAT_04c48318;
      fVar26 = DAT_04c4830c;
    }
    else {
      fVar26 = DAT_04c4835c;
      fVar28 = DAT_04c48360;
      fVar27 = DAT_04c48364;
      fVar29 = DAT_04c48368;
LAB_024b807c:
      uVar13 = DAT_04102e40;
    }
    fVar34 = fVar33;
    fVar30 = fVar32;
    if (uVar13 < *(uint *)(param_1 + 0x1c04)) {
      if ((fVar33 != local_6c) || (fVar32 != local_64)) {
        fVar35 = fVar33 - local_6c;
        fVar36 = fVar32 - local_64;
        fVar37 = SQRT(fVar35 * fVar35 + 0.0 + fVar36 * fVar36);
        fVar30 = local_64;
        fVar34 = local_6c;
        if (fVar27 <= fVar37) {
          fVar37 = fVar37 * fVar28;
          bVar9 = false;
          bVar10 = true;
          if (-1.1920929e-07 <= fVar37) {
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar37)) {
              bVar9 = fVar37 == 1.1920929e-07;
              bVar10 = 1.1920929e-07 <= fVar37;
            }
          }
          if (bVar10 && !bVar9) {
            fVar35 = fVar35 * fVar28;
            fVar36 = fVar36 * fVar28;
            if ((fVar29 < fVar37) || (fVar29 = fVar27, fVar37 < fVar27)) {
              fVar35 = fVar35 * (fVar29 / fVar37);
              fVar36 = fVar36 * (fVar29 / fVar37);
            }
            fVar34 = fVar33 - fVar35;
            fVar30 = fVar32 - fVar36;
          }
        }
      }
      uVar14 = NEON_fminnm(*(float *)(param_1 + 0xad8) + 0.05,0x3f800000);
      *(undefined4 *)(param_1 + 0xad8) = uVar14;
    }
    fVar26 = *(float *)(param_1 + 0xad4) - fVar26;
    fVar31 = fVar31 + fVar26;
    *(float *)(param_1 + 0xad4) = fVar26;
    bVar9 = false;
    if ((fVar31 < fStack_68) && (bVar9 = false, !NAN(fVar26))) {
      bVar9 = fVar26 < 0.0;
    }
    fVar32 = fStack_68;
    if (!bVar9) {
      fVar32 = fVar31;
    }
    if (uVar11 < 10) {
      *(float *)(lVar18 + 0x10) = local_6c;
      *(float *)(lVar18 + 0x14) = fStack_68;
      *(float *)(lVar18 + 0x18) = local_64;
    }
    *(float *)(param_1 + 0xac8) = fVar34;
    *(float *)(param_1 + 0xacc) = fVar32;
    *(float *)(param_1 + 0xad0) = fVar30;
    if ((uVar15 & 1) == 0) {
      uVar14 = 0x3f800000;
    }
    else {
      fVar31 = (float)NEON_fminnm((float)*(int *)(param_1 + 0x1c04) / (float)(int)DAT_04102e40,
                                  0x3f800000);
      uVar14 = NEON_fminnm(DAT_04102e60 + fVar31 * (1.0 - DAT_04102e60),0x3f800000);
    }
  }
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x230));
  sVar5 = *(short *)puVar8;
  if (sVar5 != -1) {
    local_c0 = CONCAT44(local_c0._4_4_,1);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) != 0) {
      local_c0 = (ulong)local_c0._4_4_ << 0x20;
      goto LAB_024b82d8;
    }
  }
  FUN_016f742c(&local_c0,&local_c8,0);
LAB_024b82d8:
  lVar18 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
  fStack_94 = 1.0;
  local_90 = 0;
  local_8c = 0;
  iVar12 = (int)local_c0 - *(int *)(lVar18 + 4);
  uStack_87 = 0;
  uStack_84 = 0;
  local_c8 = 0xfffe;
  FUN_0277d4ac(&local_c8);
  local_c0 = *(undefined8 *)(param_1 + 0x1900);
  lVar18 = FUN_0251e98c(1);
  pfVar17 = (float *)(**(code **)(*(long *)(lVar18 + 0xf00) + 0xf0))(lVar18 + 0xf00);
  fVar31 = *pfVar17;
  pfVar17 = (float *)(**(code **)(*(long *)(lVar18 + 0xf30) + 0xf0))(lVar18 + 0xf30);
  fVar32 = *pfVar17;
  pfVar17 = (float *)(**(code **)(*(long *)(lVar18 + 0xf60) + 0xf0))(lVar18 + 0xf60);
  fStack_b8 = fVar31 + *(float *)(param_1 + 0xac8);
  bStack_9c = *(byte *)(param_1 + 0x1ee8);
  fStack_b4 = fVar32 + *(float *)(param_1 + 0xacc);
  if (7 < bStack_9c) {
    bStack_9c = 0xff;
  }
  local_b0 = *pfVar17 + *(float *)(param_1 + 0xad0);
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  local_a8 = 0.0;
  local_a0 = 0.0;
  uStack_9b = 0;
  fStack_98 = *(float *)(param_1 + 0xad8);
  uStack_9a = *(char *)(param_1 + 0x1920) != '\0';
  fStack_ac = (float)uVar14;
  fStack_a4 = (float)iVar12;
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  FUN_0170d1d8(puVar23,&local_c0);
  if ((*(int *)(param_1 + 0x178) == 0) &&
     (local_6c = local_6c - *(float *)(param_1 + 0xac8),
     fStack_68 = fStack_68 - *(float *)(param_1 + 0xacc),
     local_64 = local_64 - *(float *)(param_1 + 0xad0),
     fStack_68 * fStack_68 + local_6c * local_6c + local_64 * local_64 < 4.0)) {
    local_c8 = CONCAT44(local_c8._4_4_,0x9d);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar18 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar18 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar18,0x9d);
  }
  return;
}

