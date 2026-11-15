
/* WARNING: Removing unreachable block (ram,0x02449d30) */
/* WARNING: Removing unreachable block (ram,0x02449be4) */
/* WARNING: Removing unreachable block (ram,0x02449a34) */
/* WARNING: Removing unreachable block (ram,0x02449b70) */
/* WARNING: Removing unreachable block (ram,0x0244a104) */
/* WARNING: Removing unreachable block (ram,0x0244a488) */

void FUN_02449560(long param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined2 uVar16;
  ulong uVar15;
  byte bVar17;
  uint uVar18;
  undefined8 *puVar19;
  long *plVar20;
  char *pcVar21;
  undefined4 uVar22;
  char *__src;
  void *__src_00;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  uint local_180;
  uint local_17c;
  undefined8 local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined4 local_15a;
  void *local_130;
  int local_128;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  long *local_88;
  uint local_7c;
  undefined **local_78;
  
  cVar4 = *(char *)(param_1 + 0x191b);
  local_78 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_78);
  local_78 = *(undefined ***)(param_1 + 0x1911);
  if ((*(int *)(param_1 + 0x178) == 0) && ((*(byte *)(param_1 + 0x17d0) >> 4 & 1) != 0)) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0x230));
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 == -1) {
LAB_02449624:
      FUN_016f742c(&local_190,&local_a0,1);
      uVar16 = local_190._2_2_;
    }
    else {
      local_190 = (undefined **)CONCAT44(local_190._4_4_,1);
      puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar13 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar13 >> 1 & 1) == 0) goto LAB_02449624;
      uVar16 = 0;
    }
    *(undefined2 *)(param_1 + 0x1905) = uVar16;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar28 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar9 + 0x278) * 999.99994);
    iVar24 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
    if (0x7ffe < iVar24) {
      iVar24 = 0x7fff;
    }
    if (iVar24 < -0x7fff) {
      iVar24 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar24;
    fVar26 = *(float *)(lVar9 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar26 * 999.99994);
    uVar28 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar28;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar23 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar19 + 0x2ec) = uVar23;
    *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
  }
  if ((*(int *)(param_1 + 0x178) == 0) &&
     (**(char **)(param_1 + 0x9f0) == '\0' && (cVar4 == '\0' && *(int *)(param_1 + 0xab0) == 0)))
  goto LAB_0244972c;
  iVar24 = *(int *)(param_1 + 0x18e5);
  iVar25 = *(int *)(param_1 + 0x18eb);
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)iVar25 * 0.001);
  local_a0 = (undefined *)(ulong)(uint)((float)iVar24 * 0.001);
  puVar19 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar19 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_190 = (undefined **)(puVar19[0x4f] & 0xffffffff);
  local_188 = (char *)CONCAT44(local_188._4_4_,*(undefined4 *)(puVar19 + 0x50));
  FUN_03eb4b60(*pfVar10 * 0.5,0x41200000,0x3e4ccccc,&local_190,&local_a0);
  *(undefined4 *)(puVar19 + 0x4f) = (undefined4)local_190;
  *(undefined4 *)(puVar19 + 0x50) = (undefined4)local_188;
  if (*(char *)(param_1 + 0x1904) == '\0') {
    iVar24 = *(int *)(param_1 + 0x178);
    if (iVar24 == 1) {
      uVar6 = *(ushort *)(param_1 + 0x18ef);
      goto LAB_024497fc;
    }
  }
  else {
    uVar6 = *(ushort *)(param_1 + 0x1905);
LAB_024497fc:
    lVar9 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
    fVar26 = *pfVar10;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,10);
      local_190 = (undefined **)CONCAT44(local_190._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0244987c;
    }
    else {
LAB_0244987c:
      iVar24 = (uint)uVar6 * 0x10000;
      plVar20 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar20 = *(long **)(param_1 + 0x4c8);
      }
      lVar9 = (**(code **)(*plVar20 + 0x148))();
      iVar25 = iVar24 - *(int *)(lVar9 + 4);
      if (0xb60b5e < iVar25 + 0x5b05afU) {
        iVar8 = 0x15555560;
        iVar24 = -0x15555560;
        iVar25 = (int)(fVar26 * 0.5 * (float)iVar25);
        if (iVar25 < 1) {
          iVar8 = -0x5b05b0;
        }
        else {
          iVar24 = 0x5b05b0;
        }
        iVar3 = iVar25;
        if (iVar8 <= iVar25) {
          iVar3 = iVar8;
        }
        if (iVar24 <= iVar25) {
          iVar24 = iVar3;
        }
        iVar24 = iVar24 + *(int *)(lVar9 + 4);
      }
      *(int *)(lVar9 + 4) = iVar24;
    }
    iVar24 = *(int *)(param_1 + 0x178);
  }
  if (iVar24 == 0) {
    if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      if (*(long *)(param_1 + 0x4d0) != 0) {
        uVar23 = *(undefined4 *)(*(long *)(param_1 + 0x4d0) + 8);
      }
    }
    local_190 = (undefined **)CONCAT44(local_190._4_4_,uVar23);
    *(char *)(param_1 + 0x191d) = (char)uVar23;
  }
  else {
    uVar28 = (uint)*(byte *)(param_1 + 0x191d);
    if (0x78 < uVar28) {
      uVar28 = 0;
    }
    local_190 = (undefined **)CONCAT44(local_190._4_4_,uVar28);
    if (uVar28 != 0) {
      if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        if (*(long *)(param_1 + 0x4d0) != 0) {
          uVar18 = *(uint *)(*(long *)(param_1 + 0x4d0) + 8);
        }
      }
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar18);
      if (uVar28 != uVar18) {
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,5);
        local_7c = uVar28;
        FUN_023c79d0(param_1,&local_7c,&local_a0);
      }
    }
  }
  FUN_023c8568(param_1);
  if (*(int *)(param_1 + 0x1900) != 0) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(int *)(param_1 + 0x1900));
    FUN_0171ed40(&local_a0);
    FUN_0171ea90(&local_190);
    if (*local_188 != '\0') {
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      if (puVar19 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar24 = __cxa_guard_acquire(&DAT_052461c0);
          puVar19 = &DAT_05240280;
          if (iVar24 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar19 = &DAT_05240280;
        }
      }
      lVar9 = puVar19[0x227];
      if (lVar9 == 0) {
        local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
      }
      else {
        uVar28 = *(uint *)(puVar19 + 0x2d3) >> 1 & 1;
        local_a0 = (undefined *)
                   (CONCAT44(local_a0._4_4_,*(uint *)(puVar19 + 0x2d3) >> 1) & 0xffffffff00000001);
        uVar18 = 0;
        if (*(long *)(lVar9 + 0x78) != 0) {
          uVar18 = *(uint *)(*(long *)(lVar9 + 0x78) + 0x18);
        }
        if (uVar18 <= uVar28) {
          uVar28 = 0;
        }
        if (*(uint *)(lVar9 + 0x80) <= uVar28) {
          uVar28 = 0;
        }
        lVar9 = *(long *)(lVar9 + 0x88) + (long)(int)uVar28 * 0xe8;
        plVar20 = (long *)(lVar9 + 0x60);
        (**(code **)(*plVar20 + 0x18))(plVar20);
        (**(code **)(*plVar20 + 0x18))(plVar20);
        pcVar21 = *(char **)(lVar9 + 0x68);
        (*(code *)local_190[3])(&local_190);
        if (pcVar21 != local_188) {
          pcVar21 = *(char **)(lVar9 + 0x68);
          if (*pcVar21 != *local_188) goto LAB_02449c30;
          if (*pcVar21 != '\0') {
            uVar11 = 0;
            do {
              uVar15 = uVar11;
              if ((uVar15 == 0x80000) || (pcVar21[uVar15 + 1] != local_188[uVar15 + 1]))
              goto LAB_02449c30;
              if (pcVar21[uVar15 + 1] == '\0') goto LAB_02449b10;
              if (pcVar21[uVar15 + 2] != local_188[uVar15 + 2]) goto LAB_02449c30;
              uVar11 = uVar15 + 2;
            } while (pcVar21[uVar15 + 2] != '\0');
            uVar15 = uVar15 + 1;
LAB_02449b10:
            if (uVar15 >> 0x13 != 0) goto LAB_02449c30;
          }
        }
        puVar19 = *(undefined8 **)(param_1 + 0x60);
        if (puVar19 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar24 = __cxa_guard_acquire(&DAT_052461c0);
            puVar19 = &DAT_05240280;
            if (iVar24 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar19 = &DAT_05240280;
          }
        }
        if (puVar19[0x227] == 0) {
          local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
        }
        else {
          local_a0 = (undefined *)
                     (CONCAT44(local_a0._4_4_,*(uint *)(puVar19 + 0x2d3) >> 1) & 0xffffffff00000001)
          ;
          uVar11 = FUN_03850368(puVar19[0x227],*(uint *)(puVar19 + 0x2d3) >> 1 & 1);
          if ((uVar11 & 1) != 0) goto LAB_02449c30;
        }
        puVar19 = *(undefined8 **)(param_1 + 0x60);
        if (puVar19 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar24 = __cxa_guard_acquire(&DAT_052461c0);
            puVar19 = &DAT_05240280;
            if (iVar24 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar19 = &DAT_05240280;
          }
        }
        if (puVar19[0x227] == 0) {
          local_b0 = 0;
          local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
        }
        else {
          local_b0 = *(uint *)(puVar19 + 0x2d3) >> 1 & 1;
          local_a0 = (undefined *)
                     (CONCAT44(local_a0._4_4_,*(uint *)(puVar19 + 0x2d3) >> 1) & 0xffffffff00000001)
          ;
          uVar11 = FUN_03850368(puVar19[0x227],local_b0);
          uVar28 = local_b0;
          if (((((uVar11 & 1) == 0) && (puVar19[0x227] != 0)) &&
              (uVar11 = FUN_03850368(puVar19[0x227],local_b0), (uVar11 & 1) == 0)) &&
             (uVar11 = FUN_0384fca4(puVar19[0x227],uVar28), (uVar11 & 1) == 0)) goto LAB_02449c30;
        }
        FUN_023164ec(param_1,6);
      }
    }
  }
LAB_02449c30:
  lVar9 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0xf00) + 0xf0))(lVar9 + 0xf00);
  uVar23 = *puVar12;
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0xf30) + 0xf0))(lVar9 + 0xf30);
  uVar27 = *puVar12;
  puVar13 = (uint *)(**(code **)(*(long *)(lVar9 + 0xf60) + 0xf0))(lVar9 + 0xf60);
  uVar28 = *puVar13;
  if (cVar4 != '\0') {
    local_17c = local_17c & 0xffffff00;
    local_188 = (char *)CONCAT44(uVar27,uVar23);
    local_178 = CONCAT17((char)((ulong)local_178 >> 0x38),0x1000000000000);
    local_190 = local_78;
    local_178 = CONCAT44(local_178._4_4_,0x3f800000);
    local_a0 = PTR_DAT_04bb2020 + 0x10;
    local_98 = &DAT_040ee5ef;
    local_180 = uVar28;
    FUN_023c49a8(param_1,&local_190,param_1 + 0x9dc,param_1 + 0x9d8,&local_a0);
  }
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar24 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar24 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  if (puVar19[0x227] == 0) {
    local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
  }
  else {
    local_a0 = (undefined *)
               (CONCAT44(local_a0._4_4_,*(uint *)(puVar19 + 0x2d3) >> 1) & 0xffffffff00000001);
    local_190 = (undefined **)CONCAT44(local_190._4_4_,0x32);
    uVar11 = FUN_03850890(puVar19[0x227],0x32,0,*(uint *)(puVar19 + 0x2d3) >> 1 & 1);
    if (((uVar11 & 1) != 0) && ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0)) {
      uVar18 = local_b0 >> 0x10;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
      bVar5 = *pbVar1;
      bVar17 = bVar5;
      if (7 < bVar5) {
        bVar17 = 0xff;
      }
      local_b0._0_2_ = CONCAT11(bVar17,*(int *)(param_1 + 0x178) == 0);
      local_b0 = CONCAT22((short)uVar18,(undefined2)local_b0) & 0xff00ffff;
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar24 = __cxa_guard_acquire(&DAT_054f0960);
          puVar19 = &DAT_054f0958;
          if (iVar24 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar19 = &DAT_054f0958;
        }
      }
      else {
        puVar19 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (bVar5 < 8) {
          puVar19 = puVar19 + bVar5;
        }
      }
      local_190 = (undefined **)CONCAT44(local_190._4_4_,0x26);
      uVar18 = *(uint *)((long)puVar19 + 4) & 0x40;
      local_b0._0_3_ = CONCAT12(uVar18 != 0,(undefined2)local_b0);
      if (uVar18 != 0) {
        pcVar21 = (char *)((ulong)&local_b0 | 1);
        local_190 = &PTR_FUN_04a72ea0;
        iVar24 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
        local_188 = pcVar21;
        if (iVar24 != 0) {
          lVar9 = (long)iVar24 << 3;
          puVar19 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
          do {
            (*(code *)*local_190)(&local_190,*puVar19);
            lVar9 = lVar9 + -8;
            puVar19 = puVar19 + 1;
          } while (lVar9 != 0);
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x1d);
        FUN_02548b40(&local_a0,pcVar21);
      }
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  FUN_02332b04(param_1,1,0);
  uVar11 = FUN_0231eddc(param_1,0);
  if ((uVar11 & 1) == 0) {
    if (**(char **)(param_1 + 0x9f0) == '\0') {
      puVar19 = *(undefined8 **)(param_1 + 0x60);
      if (puVar19 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar24 = __cxa_guard_acquire(&DAT_052461c0);
          puVar19 = &DAT_05240280;
          if (iVar24 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar19 = &DAT_05240280;
        }
      }
      uVar18 = 0;
      if (puVar19[0x227] != 0) {
        local_190 = (undefined **)CONCAT44(local_190._4_4_,1);
        uVar18 = *(uint *)(puVar19 + 0x2d3) >> 1 & 1;
      }
      uVar11 = FUN_0170a6d0(puVar19,uVar18);
      if ((uVar11 & 1) != 0) goto LAB_02449eb0;
    }
    if ((*(byte *)(param_1 + 0x17d0) & 6) != 0) {
      return;
    }
    if (**(char **)(param_1 + 0x9f0) == '\0') {
      return;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    local_90 = 0;
    local_88 = (long *)0x0;
    local_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar24 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar24 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    local_b0 = 0;
    local_190 = (undefined **)CONCAT44(local_190._4_4_,0xe);
    if ((puVar19[0x227] == 0) ||
       (uVar11 = FUN_03850a90(puVar19[0x227],0xe,&local_a0,0), (uVar11 & 1) == 0)) {
      uVar14 = FUN_016debb0(param_1);
      uVar11 = FUN_017068ec(uVar14,0,&local_a0,0);
      if ((uVar11 & 1) != 0) goto LAB_0244a1a0;
      uVar28 = 0xffffffff;
    }
    else {
LAB_0244a1a0:
      if ((local_88 == (long *)0x0) || (lVar9 = *local_88, lVar9 == 0)) {
        uVar28 = 1;
      }
      else {
        fVar26 = *(float *)(lVar9 + 0x18);
        if (fVar26 < 0.0) {
          fVar26 = *(float *)(local_88[1] + 0xc);
        }
        uVar28 = (uint)(fVar26 - *(float *)(lVar9 + 0x14));
        if (uVar28 < 2) {
          uVar28 = 1;
        }
      }
    }
    iVar24 = *(int *)(param_1 + 0x1900);
    local_190 = (undefined **)CONCAT44(local_190._4_4_,iVar24);
    FUN_0171ed40(&local_190);
    FUN_0171ea90(&local_b0);
    uVar23 = *(undefined4 *)(param_1 + 0xa98);
    if ((((iVar24 != 0) && (*local_a8 != '\0')) && (*(uint *)(param_1 + 0x1c04) < 0x12d)) &&
       ((uVar28 != 1 && (*(char *)(param_1 + 0xab8) != '\0')))) {
      lVar9 = FUN_016debb0(param_1);
      local_190 = (undefined **)((ulong)local_190 & 0xffffffff00000000);
      if ((*(long *)(lVar9 + 0x1138) == 0) ||
         (uVar11 = FUN_03850368(*(long *)(lVar9 + 0x1138),0), (uVar11 & 1) == 0)) {
        uVar14 = FUN_016debb0(param_1);
        uVar11 = FUN_01706778(uVar14,0x32,0);
        if ((uVar11 & 1) == 0) {
          lVar9 = FUN_016debb0(param_1);
          if (*(long *)(lVar9 + 0x1138) == 0) {
            local_190 = (undefined **)((ulong)local_190._4_4_ << 0x20);
          }
          else {
            uVar28 = *(uint *)(lVar9 + 0x1698) >> 1;
            local_190 = (undefined **)(CONCAT44(local_190._4_4_,uVar28) & 0xffffffff00000001);
            uVar11 = FUN_03850368(*(long *)(lVar9 + 0x1138),uVar28 & 1);
            if ((uVar11 & 1) != 0) {
              return;
            }
          }
          lVar9 = FUN_016debb0(param_1);
          if (*(long *)(lVar9 + 0x1138) == 0) {
            uVar28 = 0;
          }
          else {
            local_190 = (undefined **)CONCAT44(local_190._4_4_,1);
            uVar28 = *(uint *)(lVar9 + 0x1698) >> 1 & 1;
          }
          uVar11 = FUN_0170a684(lVar9,uVar28);
          if ((uVar11 & 1) == 0) {
            return;
          }
          goto LAB_0244a4dc;
        }
      }
    }
    FUN_0230e2b0(&local_190);
    pcVar21 = local_188;
    (**(code **)(*(long *)(param_1 + 0x9e8) + 0x18))(param_1 + 0x9e8);
    __src = *(char **)(param_1 + 0x9f0);
    if (pcVar21 != __src) {
      (**(code **)(*(long *)(param_1 + 0x9e8) + 0x18))(param_1 + 0x9e8);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x9f0) + lVar9) == '\0') goto LAB_0244a2f4;
        lVar2 = *(long *)(param_1 + 0x9f0) + lVar9;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0244a2f4;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0244a2f4;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0244a2f4:
      iVar24 = (int)lVar9;
      if ((int)local_180 <= (int)lVar9) {
        iVar24 = local_180 - 1;
      }
      memcpy(pcVar21,__src,(long)iVar24);
      pcVar21[iVar24] = '\0';
    }
    (**(code **)(*(long *)(param_1 + 0xa40) + 0x18))(param_1 + 0xa40);
    __src_00 = *(void **)(param_1 + 0xa48);
    if (local_130 != __src_00) {
      (**(code **)(*(long *)(param_1 + 0xa40) + 0x18))(param_1 + 0xa40);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0xa48) + lVar9) == '\0') goto LAB_0244a390;
        lVar2 = *(long *)(param_1 + 0xa48) + lVar9;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0244a390;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0244a390;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0244a390:
      iVar24 = (int)lVar9;
      if (local_128 <= (int)lVar9) {
        iVar24 = local_128 + -1;
      }
      memcpy(local_130,__src_00,(long)iVar24);
      *(undefined1 *)((long)local_130 + (long)iVar24) = 0;
    }
    local_cc = 0;
    local_198 = 0xfffe;
    local_d8 = uVar23;
    FUN_0277d4ac(&local_198);
    local_c8 = *(undefined1 *)(param_1 + 0xaa0);
    local_b4 = *(undefined1 *)(param_1 + 0xab4);
    uVar14 = *(undefined8 *)(param_1 + 0x1911);
    local_c4 = *(undefined4 *)(param_1 + 0xaa4);
    uStack_b8 = *(undefined4 *)(param_1 + 0xab0);
    local_e0 = (undefined2)uVar14;
    local_dd = (undefined1)((ulong)uVar14 >> 0x18);
    local_dc = (undefined4)((ulong)uVar14 >> 0x20);
    local_de = (undefined1)((ulong)uVar14 >> 0x10);
    local_c0 = local_e0;
    local_be = local_de;
    local_bd = local_dd;
    local_bc = local_dc;
    uVar11 = FUN_02328d9c(param_1,&local_190);
    if ((uVar11 & 1) != 0) {
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 4;
      return;
    }
  }
  else {
LAB_02449eb0:
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffb;
    if (*(int *)(param_1 + 0xabc) != 0) {
      uVar11 = FUN_02546f34(pbVar1,*(undefined4 *)PTR_DAT_04bb3238);
      if ((uVar11 & 1) != 0) {
        return;
      }
      uVar28 = *(uint *)(param_1 + 0xabc);
      local_190 = (undefined **)CONCAT44(local_190._4_4_,uVar28);
      if (0x148 < uVar28) {
        return;
      }
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
      lVar9 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar9 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar9,uVar28);
      return;
    }
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0xac0) == '\0') {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x68);
      local_160 = 0x3f800000;
      uVar22 = 1;
      local_180 = local_180 & 0xffffff00;
      local_178 = 0;
      local_170 = 0;
      local_15c = 0;
      local_16c = *(undefined4 *)(lVar9 + 0x278);
      uStack_168 = *(undefined4 *)(lVar9 + 0x27c);
      local_15a = 0;
      local_188 = (char *)0x4;
      local_190 = local_78;
      local_17c = 1;
      local_164 = *(undefined4 *)(lVar9 + 0x280);
      iVar24 = FUN_00a74b78(pbVar1);
      local_a0._0_4_ = iVar24;
      if (iVar24 != 4) {
        local_a0._0_4_ = FUN_00a74b78(pbVar1);
        if ((((int)local_a0 == 0x13) || (local_a0._0_4_ = FUN_00a74b78(pbVar1), (int)local_a0 == 9))
           || (**(char **)(param_1 + 0x9f0) != '\0')) {
          uVar22 = 5;
        }
        else {
          uVar22 = 2;
        }
      }
      local_188 = (char *)CONCAT44(uVar22,(undefined4)local_188);
      local_15b = 0;
      local_178 = CONCAT44(uVar27,uVar23);
      local_180 = local_180 & 0xffffff00;
      local_15a._0_2_ = CONCAT11(*(short *)(param_1 + 0x2230) == -2,(undefined1)local_15a);
      local_170 = uVar28;
      FUN_0236cba0(param_1,&local_190);
      return;
    }
  }
LAB_0244a4dc:
  uVar11 = FUN_02372a04(param_1);
  if ((uVar11 & 1) != 0) {
    return;
  }
LAB_0244972c:
  FUN_023736d8(param_1);
  return;
}

