
void FUN_023b8a50(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  uint *puVar5;
  float *pfVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  float *pfVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  uint *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  char *pcVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_e0;
  undefined8 local_d8;
  float fStack_d0;
  undefined1 local_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined1 auStack_a4 [12];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  long *local_90;
  char local_88;
  char local_86;
  int local_78;
  undefined4 local_74;
  
  puVar29 = &local_e0;
  iVar14 = *(int *)(param_4 + 0x178);
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  lVar15 = FUN_00a77090(pbVar1);
  if ((lVar15 != 0) && (-1 < (int)*(uint *)PTR_DAT_04bb6260)) {
    uVar18 = 0;
    piVar25 = (int *)PTR_DAT_04bb6258;
    do {
      piVar3 = piVar25;
      if (999 < uVar18) {
        piVar3 = (int *)PTR_DAT_04bb6258;
      }
      if ((*piVar3 != 0) && (*(long *)(piVar3 + 2) == *(long *)(lVar15 + 0x10))) {
        if ((uint)uVar18 != 0xffffffff) {
          if (999 < (uint)uVar18) {
            piVar25 = (int *)PTR_DAT_04bb6258;
          }
          local_78 = *piVar25;
          goto LAB_023b8b08;
        }
        break;
      }
      uVar18 = uVar18 + 1;
      piVar25 = piVar25 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar18);
  }
  local_78 = 0;
LAB_023b8b08:
  local_e0 = (long *)CONCAT44(local_e0._4_4_,*(undefined4 *)(param_4 + 0x230));
  FUN_0071cb58(&local_90,&local_78,&local_e0,0);
  plVar28 = local_90;
  if (local_90 != (long *)0x0) {
    if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb3298 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32a0);
    }
    uVar18 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb3298);
    if ((uVar18 & 1) == 0) {
      local_86 = '\0';
    }
  }
  if (iVar14 == 0) {
    if (local_90 == (long *)0x0) {
      return;
    }
    if (local_88 == '\0') {
      return;
    }
    if (local_86 == '\0') {
      return;
    }
    sVar7 = *(short *)((long)local_90 + 0x284);
    lVar15 = (long)sVar7;
    if (lVar15 != -1) {
      puVar4 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar7 * 0x10;
      if (999 < (uint)(int)sVar7) {
        puVar4 = PTR_DAT_04bb6258;
      }
      lVar15 = *(long *)(puVar4 + 8);
    }
    *(long *)(param_4 + 0x1920) = lVar15;
  }
  uVar18 = FUN_02545954(pbVar1);
  puVar4 = PTR_DAT_04bb4718;
  if ((uVar18 & 1) != 0) {
    if (*(int *)PTR_DAT_04bc20e0 == 0) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar27 = &DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar27 = &DAT_054f0958;
        }
      }
      else {
        puVar27 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar27 = puVar27 + *pbVar1;
        }
      }
      local_e0 = (long *)CONCAT44(local_e0._4_4_,0x35);
      if ((*(uint *)((long)puVar27 + 4) >> 0x15 & 1) == 0) goto LAB_023b8e18;
    }
    if (*PTR_DAT_04bc2de0 != '\0') {
      pfVar16 = (float *)PTR_DAT_04bc3038;
      if (*(char *)(param_4 + 0x12f8) != '\0') {
        pfVar16 = (float *)(param_4 + 0xeec);
      }
      param_2 = pfVar16[1];
      param_3 = param_2 * param_2;
      fVar36 = SQRT(param_3 + *pfVar16 * *pfVar16);
      lVar15 = FUN_0251e98c(1);
      pfVar16 = (float *)(**(code **)(*(long *)(lVar15 + 0x120) + 0xf0))(lVar15 + 0x120);
      if (*pfVar16 <= fVar36) {
        lVar15 = FUN_0251e98c(1);
        pfVar16 = (float *)(**(code **)(*(long *)(lVar15 + 0x120) + 0xf0))(lVar15 + 0x120);
        fVar31 = *pfVar16;
        lVar15 = FUN_0251e98c(1);
        pfVar16 = (float *)(**(code **)(*(long *)(lVar15 + 0x120) + 0xf0))(lVar15 + 0x120);
        fVar36 = (fVar36 - *pfVar16) / (1.0 - fVar31);
        param_2 = 0.9999;
        if (fVar36 <= 0.9999) {
          param_2 = fVar36;
        }
        bVar10 = false;
        bVar11 = true;
        bVar12 = false;
        if (0.0 <= fVar36) {
          bVar10 = false;
          bVar11 = false;
          bVar12 = true;
          if (!NAN(param_2)) {
            bVar10 = param_2 < 0.1;
            bVar11 = param_2 == 0.1;
            bVar12 = false;
          }
        }
        if (!bVar11 && bVar10 == bVar12) {
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xc);
          lVar19 = *(long *)(param_4 + 0x70);
          uVar23 = 0;
          lVar15 = 0;
          if (lVar19 != 0) {
            uVar23 = 0;
            if (*(uint *)(lVar19 + 0x280) < 0x149) {
              uVar23 = *(uint *)(lVar19 + 0x280);
            }
            lVar15 = lVar19 + 0x278;
          }
          local_e0 = (long *)CONCAT44(local_e0._4_4_,uVar23);
          if (uVar23 != 0xc) {
            local_e0 = (long *)CONCAT44(local_e0._4_4_,0xc);
            *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x1940);
            *(undefined8 *)(param_4 + 0x18c0) = 0;
            *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x1948);
            *(undefined8 *)(param_4 + 0x18c8) = 0;
            *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x1950);
            *(undefined8 *)(param_4 + 0x18d0) = 0;
            *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x1958);
            *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x1920);
            *(undefined8 *)(param_4 + 0x18a0) = 0;
            *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x1928);
            *(undefined8 *)(param_4 + 0x18a8) = 0;
            *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x1930);
            *(undefined8 *)(param_4 + 0x18b0) = 0;
            *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x1938);
            *(undefined8 *)(param_4 + 0x18b8) = 0;
            *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1900);
            *(undefined8 *)(param_4 + 0x1880) = 0;
            *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1908);
            *(undefined8 *)(param_4 + 0x1888) = 0;
            *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1910);
            *(undefined8 *)(param_4 + 0x1890) = 0;
            *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1918);
            *(undefined8 *)(param_4 + 0x1898) = 0;
            *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x18e0);
            *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x18e8);
            *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x18f0);
            *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x18f8);
            FUN_03ebb160(lVar15,0xc);
          }
        }
      }
    }
  }
LAB_023b8e18:
  local_94[0] = 0;
  local_98[0] = 0;
  fVar36 = (float)FUN_023b7030(param_4,auStack_a4,local_94,local_98);
  if ((*(uint *)(param_4 + 0x1810) & 0xfffffff7) == 1) {
    uVar23 = *(uint *)(param_4 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar15 = *(long *)(param_4 + 0x68);
    *(int *)(param_4 + 0x18e5) = (int)(*(float *)(lVar15 + 0x278) * 999.99994);
    iVar13 = (int)(*(float *)(lVar15 + 0x27c) * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_4 + 0x18e9) = (short)iVar13;
    fVar31 = *(float *)(lVar15 + 0x280);
    *(undefined4 *)(param_4 + 0x1830) = 0;
    *(undefined4 *)(param_4 + 0x1828) = 0;
    *(int *)(param_4 + 0x18eb) = (int)(fVar31 * 999.99994);
    uVar23 = *(uint *)(param_4 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_4 + 0x17cc) = uVar23;
  if (*(uint *)(param_4 + 0x1810) - 2 < 3) {
    puVar27 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar27 = *(undefined8 **)(param_4 + 0x4c8);
    }
    uVar32 = FUN_016e026c(0,*(long *)(param_4 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar27 + 0x2ec) = uVar32;
    *(undefined1 *)((long)puVar27 + 0x2e5) = 1;
  }
  puVar8 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_4 + 0x1be4) = 2;
  local_b8 = puVar8 + 0x10;
  local_b0 = "PlayerDemoReadyMove";
  if (iVar14 == 0) {
    if ((((*(long *)(param_4 + 0x70) != 0) && (*(int *)(*(long *)(param_4 + 0x70) + 0x280) == 0xf))
        && (*(char *)(param_4 + 0x190c) == '\0')) && (*(char *)(param_4 + 0x190a) == '\0')) {
      local_c8 = *(float *)(param_4 + 0x230);
      FUN_0071cb58(&local_e0,&local_78,&local_c8,0);
      plVar28 = local_e0;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      if ((plVar28 != (long *)0x0) &&
         (uVar18 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb37d0), (uVar18 & 1) != 0)) {
        local_74 = *(undefined4 *)(param_4 + 0x230);
        FUN_0071cb58(&local_c8,&local_78,&local_74,0);
        plVar28 = (long *)CONCAT44(uStack_c4,local_c8);
        if (plVar28 != (long *)0x0) {
          if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar13 != 0)) {
            *(undefined **)PTR_DAT_04bb3298 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32a0);
          }
          uVar18 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb3298);
          if ((uVar18 & 1) == 0) {
            local_c0._0_3_ = (uint3)(ushort)local_c0;
          }
        }
        if ((((CONCAT44(uStack_c4,local_c8) != 0) && ((char)local_c0 != '\0')) &&
            (local_c0._2_1_ != '\0')) &&
           ((*(byte *)(CONCAT44(uStack_c4,local_c8) + 0x286) >> 6 & 1) == 0)) {
          *(undefined1 *)(param_4 + 0x190a) = 1;
          *(undefined1 *)(param_4 + 0x190b) = local_98[0];
        }
      }
    }
    bVar10 = *(char *)(param_4 + 0x190b) != '\0';
    if (*(char *)(param_4 + 0x190a) == '\0') {
      bVar10 = false;
      puVar27 = *(undefined8 **)(param_4 + 0x60);
    }
    else {
      if ((((float)*(int *)(param_4 + 0x1900) * 0.001 == 0.0) &&
          ((float)(int)*(short *)(param_4 + 0x1904) * 0.25 == 0.0)) &&
         ((float)*(int *)(param_4 + 0x1906) * 0.001 == 0.0)) {
        iVar13 = (int)(param_2 * 4.0);
        if (0x7ffe < iVar13) {
          iVar13 = 0x7fff;
        }
        if (iVar13 < -0x7fff) {
          iVar13 = -0x8000;
        }
        *(short *)(param_4 + 0x1904) = (short)iVar13;
        *(int *)(param_4 + 0x1900) = (int)(fVar36 * 999.99994);
        *(int *)(param_4 + 0x1906) = (int)(param_3 * 999.99994);
      }
      puVar27 = *(undefined8 **)(param_4 + 0x60);
    }
    if (puVar27 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar27 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar27 = &DAT_05240280;
      }
    }
    local_e0 = (long *)((ulong)local_e0 & 0xffffffff00000000);
    if (puVar27[0x227] == 0) {
LAB_023b92f4:
      if ((!bVar10) || ((*(byte *)(param_4 + 0x17d2) >> 5 & 1) != 0)) {
        FUN_023b7320(param_4,0);
      }
      else {
        FUN_023b7320(param_4,1);
        puVar27 = *(undefined8 **)(param_4 + 0x60);
        *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) | 0x200000;
        if (puVar27 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(&DAT_052461c0);
            puVar27 = &DAT_05240280;
            if (iVar13 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar27 = &DAT_05240280;
          }
        }
        FUN_01707d90(puVar27,&local_b8,6,0,0);
        *(undefined4 *)(param_4 + 0x1be4) = 0;
      }
    }
    else {
      lVar15 = *(long *)(puVar27[0x227] + 0x88);
      plVar28 = (long *)(lVar15 + 0x60);
      (**(code **)(*plVar28 + 0x18))(plVar28);
      (**(code **)(*plVar28 + 0x18))(plVar28);
      pcVar30 = *(char **)(lVar15 + 0x68);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      if (pcVar30 != local_b0) {
        pcVar30 = *(char **)(lVar15 + 0x68);
        if (*pcVar30 != *local_b0) goto LAB_023b92f4;
        if (*pcVar30 != '\0') {
          uVar18 = 0;
          do {
            uVar20 = uVar18;
            if ((uVar20 == 0x80000) || (pcVar30[uVar20 + 1] != local_b0[uVar20 + 1]))
            goto LAB_023b92f4;
            if (pcVar30[uVar20 + 1] == '\0') goto LAB_023b9290;
            if (pcVar30[uVar20 + 2] != local_b0[uVar20 + 2]) goto LAB_023b92f4;
            uVar18 = uVar20 + 2;
          } while (pcVar30[uVar20 + 2] != '\0');
          uVar20 = uVar20 + 1;
LAB_023b9290:
          if (uVar20 >> 0x13 != 0) goto LAB_023b92f4;
        }
      }
      FUN_023b7320(param_4,1);
      puVar27 = *(undefined8 **)(param_4 + 0x60);
      *(undefined4 *)(param_4 + 0x1be4) = 0;
      if (puVar27 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_052461c0);
          puVar27 = &DAT_05240280;
          if (iVar13 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar27 = &DAT_05240280;
        }
      }
      uVar18 = FUN_0170a6d0(puVar27,0);
      if ((uVar18 & 1) != 0) {
        *(undefined4 *)(param_4 + 0x1be4) = 2;
        FUN_023164ec(param_4,6);
      }
    }
    puVar27 = *(undefined8 **)(param_4 + 0x60);
    if (puVar27 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar27 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar27 = &DAT_05240280;
      }
    }
    local_e0 = (long *)((ulong)local_e0 & 0xffffffff00000000);
    if (puVar27[0x227] != 0) {
      lVar15 = *(long *)(puVar27[0x227] + 0x88);
      plVar28 = (long *)(lVar15 + 0x60);
      (**(code **)(*plVar28 + 0x18))(plVar28);
      (**(code **)(*plVar28 + 0x18))(plVar28);
      pcVar30 = *(char **)(lVar15 + 0x68);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      if (pcVar30 != local_b0) {
        pcVar30 = *(char **)(lVar15 + 0x68);
        if (*pcVar30 != *local_b0) goto LAB_023b8f30;
        if (*pcVar30 != '\0') {
          uVar18 = 0;
          do {
            uVar20 = uVar18;
            if ((uVar20 == 0x80000) || (pcVar30[uVar20 + 1] != local_b0[uVar20 + 1]))
            goto LAB_023b8f30;
            if (pcVar30[uVar20 + 1] == '\0') goto LAB_023b9474;
            if (pcVar30[uVar20 + 2] != local_b0[uVar20 + 2]) goto LAB_023b8f30;
            uVar18 = uVar20 + 2;
          } while (pcVar30[uVar20 + 2] != '\0');
          uVar20 = uVar20 + 1;
LAB_023b9474:
          if (uVar20 >> 0x13 != 0) goto LAB_023b8f30;
        }
      }
      uStack_c4 = 0;
      puVar27 = &DAT_054e9a58;
      if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
        puVar27 = *(undefined8 **)(param_4 + 0x4c8);
      }
      local_c8 = (float)*(int *)(param_4 + 0x1900) * 0.001;
      local_c0 = (float)*(int *)(param_4 + 0x1906) * 0.001;
      local_e0 = (long *)(puVar27[0x4f] & 0xffffffff);
      local_d8 = (char *)CONCAT44(local_d8._4_4_,*(undefined4 *)(puVar27 + 0x50));
      FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,&local_e0,&local_c8);
      *(float *)(puVar27 + 0x4f) = (float)local_e0;
      *(float *)(puVar27 + 0x50) = (float)local_d8;
    }
  }
LAB_023b8f30:
  puVar9 = PTR_DAT_04bb27c0;
  if (*(char *)(param_4 + 0x190f) == '\0') {
    if (*(int *)(param_4 + 0x178) == 1) {
      if (-1 < (int)*(uint *)PTR_DAT_04bb6260) {
        uVar18 = 0;
        puVar26 = (uint *)PTR_DAT_04bb6258;
        do {
          puVar5 = puVar26;
          if (999 < uVar18) {
            puVar5 = (uint *)PTR_DAT_04bb6258;
          }
          if ((*puVar5 != 0) && (*(long *)(puVar5 + 2) == *(long *)(param_4 + 0x1920))) {
            if ((uint)uVar18 != 0xffffffff) {
              if (999 < (uint)uVar18) {
                puVar26 = (uint *)PTR_DAT_04bb6258;
              }
              uVar23 = *puVar26;
              goto LAB_023b90e8;
            }
            break;
          }
          uVar18 = uVar18 + 1;
          puVar26 = puVar26 + 4;
        } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar18);
      }
      uVar23 = 0;
LAB_023b90e8:
      lVar15 = *(long *)PTR_DAT_04bb27c0;
      if (lVar15 == 0) {
LAB_023b9560:
        lVar15 = *(long *)(param_4 + 0x60);
      }
      else {
        if ((((uVar23 == 0) ||
             (plVar28 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                  (ulong)(uVar23 >> 0x14) * 8), plVar28 == (long *)0x0)) ||
            ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar28 + 0x46) != uVar23)) {
          plVar28 = (long *)0x0;
        }
        if (*(int *)(lVar15 + 0x288) != 1 && *(int *)(lVar15 + 0x288) != -1) {
LAB_023b950c:
          uVar23 = 0;
          if (plVar28 != (long *)0x0) goto LAB_023b9520;
          goto LAB_023b9560;
        }
        plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar15 = *(long *)puVar9;
        iVar13 = (**(code **)(*plVar17 + 0x60))();
        if (iVar13 < 0x11) {
          uVar23 = 1;
        }
        else {
          if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_023b950c;
          uVar23 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
        }
        if (plVar28 == (long *)0x0) goto LAB_023b9560;
LAB_023b9520:
        uVar23 = uVar23 ^ 1;
        if ((int)plVar28[0x2a] != 1) {
          uVar23 = 1;
        }
        if (uVar23 != 0) goto LAB_023b9560;
        puVar29 = (undefined8 *)(**(code **)(*plVar28 + 0x110))(plVar28);
        lVar15 = *(long *)(param_4 + 0x60);
        if (puVar29 != (undefined8 *)0x0) {
          if (lVar15 != 0) goto LAB_023b8f84;
          goto LAB_023b9598;
        }
      }
      if (lVar15 != 0) {
        *(undefined4 *)(lVar15 + 0x12d0) = 0;
        *(undefined1 *)(lVar15 + 0x142d) = 0;
        **(undefined1 **)(lVar15 + 0x12e0) = 0;
        *(undefined4 *)(lVar15 + 0x1330) = 0xffffffff;
        *(undefined4 *)(lVar15 + 0x1428) = 0;
        *(undefined8 *)(lVar15 + 0x1334) = 0;
        *(undefined8 *)(lVar15 + 0x133c) = 0;
        *(undefined4 *)(lVar15 + 0x1344) = 0;
      }
    }
  }
  else {
    lVar15 = *(long *)(param_4 + 0x60);
    local_e0 = (long *)CONCAT44((float)(int)*(short *)(param_4 + 0x1914) * 0.25,
                                (float)*(int *)(param_4 + 0x1910) * 0.001);
    local_d8 = (char *)CONCAT44(local_d8._4_4_,(float)*(int *)(param_4 + 0x1916) * 0.001);
    if (lVar15 != 0) {
LAB_023b8f84:
      FUN_01730cb4(lVar15 + 0x12c0,puVar29);
    }
  }
LAB_023b9598:
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_054f0960);
      puVar29 = &DAT_054f0958;
      if (iVar13 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar29 = &DAT_054f0958;
    }
  }
  else {
    puVar29 = (undefined8 *)(lVar15 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar29 = puVar29 + *pbVar1;
    }
  }
  local_e0 = (long *)CONCAT44(local_e0._4_4_,0x36);
  if ((*(uint *)((long)puVar29 + 4) >> 0x16 & 1) != 0) {
    lVar15 = *(long *)PTR_DAT_04bb39b0;
    pbVar21 = PTR_DAT_04bb32e0;
    if (lVar15 == 0) {
LAB_023b9650:
      if (*pbVar21 < 8) goto LAB_023b96c8;
LAB_023b965c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_023b96c0:
        pbVar21 = PTR_DAT_04bb5038;
        goto LAB_023b96c8;
      }
      lVar15 = **(long **)PTR_DAT_04bb27d0;
      bVar22 = *(byte *)(lVar15 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar22 != 0xffffffffffffffff) {
        puVar26 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
        if (7 < bVar22) {
          puVar26 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar26 & 8) != 0) {
          pbVar21 = (byte *)(lVar15 + 0x471);
        }
      }
      bVar22 = *pbVar21;
      bVar10 = 7 < bVar22;
      if (bVar10) {
        bVar22 = 0xff;
      }
      local_e0 = (long *)CONCAT71(local_e0._1_7_,bVar22);
      if (bVar10) goto LAB_023b96c0;
    }
    else {
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar21 = (byte *)(lVar15 + 0x158);
      }
      if (7 < *pbVar21) {
        if ((*(int *)(lVar15 + 0x15c) != 0) && (lVar15 = *(long *)puVar4, lVar15 != 0)) {
          pbVar21 = (byte *)(lVar15 + 0x11a5);
          goto LAB_023b9650;
        }
        goto LAB_023b965c;
      }
LAB_023b96c8:
      bVar22 = *pbVar21;
      if (7 < bVar22) {
        bVar22 = 0xff;
      }
      local_e0 = (long *)CONCAT71(local_e0._1_7_,bVar22);
    }
    lVar15 = FUN_00a77090(&local_e0);
    if ((lVar15 != 0) && (-1 < (int)*(uint *)PTR_DAT_04bb6260)) {
      uVar18 = 0;
      pfVar16 = (float *)PTR_DAT_04bb6258;
      do {
        pfVar6 = pfVar16;
        if (999 < uVar18) {
          pfVar6 = (float *)PTR_DAT_04bb6258;
        }
        if ((*pfVar6 != 0.0) && (*(long *)(pfVar6 + 2) == *(long *)(lVar15 + 0x10))) {
          if ((uint)uVar18 != 0xffffffff) {
            if (999 < (uint)uVar18) {
              pfVar16 = (float *)PTR_DAT_04bb6258;
            }
            local_c8 = *pfVar16;
            goto LAB_023b975c;
          }
          break;
        }
        uVar18 = uVar18 + 1;
        pfVar16 = pfVar16 + 4;
      } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar18);
    }
    local_c8 = 0.0;
LAB_023b975c:
    local_74 = *(undefined4 *)(param_4 + 0x230);
    FUN_0071c8d0(&local_e0,&local_c8,&local_74,0);
    plVar28 = local_e0;
    if (local_e0 != (long *)0x0) {
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar18 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb37d0);
      if ((uVar18 & 1) == 0) {
        local_d8._0_2_ = (ushort)(byte)local_d8;
      }
    }
    if ((((local_e0 != (long *)0x0) && ((byte)local_d8 != '\0')) && (local_d8._1_1_ != '\0')) &&
       ((local_e0[0xc] != 0 && (*(long *)(param_4 + 0x60) != 0)))) {
      FUN_01730cb4(*(long *)(param_4 + 0x60) + 0x12c0,local_e0[0xc] + 0x15fc);
    }
  }
  if ((*(long *)(param_4 + 0x70) == 0) || (*(int *)(*(long *)(param_4 + 0x70) + 0x280) != 0xf)) {
    FUN_023164ec(param_4,6);
  }
  else if (iVar14 != 0) {
    puVar29 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar29 = *(undefined8 **)(param_4 + 0x4c8);
    }
    local_e0 = (long *)CONCAT44((float)(int)*(short *)(param_4 + 0x18e9) * 0.25,
                                (float)*(int *)(param_4 + 0x18e5) * 0.001);
    local_d8 = (char *)CONCAT44(local_d8._4_4_,(float)*(int *)(param_4 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e800000,0x41200000,0x3e4ccccc,puVar29 + 0x4f,&local_e0);
    puVar29 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar29 = *(undefined8 **)(param_4 + 0x4c8);
    }
    if (SQRT((*(float *)(puVar29 + 0x50) - (float)local_d8) *
             (*(float *)(puVar29 + 0x50) - (float)local_d8) +
             (*(float *)(puVar29 + 0x4f) - (float)local_e0) *
             (*(float *)(puVar29 + 0x4f) - (float)local_e0)) <= 1.0) {
      FUN_023164ec(param_4,6);
    }
    else {
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
      local_e0 = (long *)(puVar8 + 0x10);
      local_d8 = "PlayerDemoReadyMove";
      FUN_01707d90(puVar29,&local_e0,6,0,0);
    }
    if (*(int *)(param_4 + 0x178) == 0) {
      local_c8 = 1.4013e-44;
      local_e0 = (long *)CONCAT44(local_e0._4_4_,10);
      if ((*(byte *)(param_4 + 0x18f5) >> 2 & 1) != 0) goto LAB_023b99fc;
    }
    iVar14 = (uint)*(ushort *)(param_4 + 0x18ef) * 0x10000;
    plVar28 = &DAT_054e9a58;
    if (*(long **)(param_4 + 0x4c8) != (long *)0x0) {
      plVar28 = *(long **)(param_4 + 0x4c8);
    }
    lVar15 = (**(code **)(*plVar28 + 0x148))();
    iVar13 = iVar14 - *(int *)(lVar15 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar24 = (int)((float)iVar13 * 0.1666667);
      iVar13 = 0x10000000;
      if (iVar24 < 1) {
        iVar13 = -0x5b05b0;
      }
      iVar14 = -0x10000000;
      if (0 < iVar24) {
        iVar14 = 0x5b05b0;
      }
      iVar2 = iVar24;
      if (iVar13 <= iVar24) {
        iVar2 = iVar13;
      }
      if (iVar14 <= iVar24) {
        iVar14 = iVar2;
      }
      iVar14 = iVar14 + *(int *)(lVar15 + 4);
    }
    *(int *)(lVar15 + 4) = iVar14;
  }
LAB_023b99fc:
  if (*(char *)(param_4 + 0x190a) != '\0') {
    if (*(char *)(param_4 + 0x3a5) == '\0') {
      bVar10 = true;
    }
    else {
      uVar32 = (**(code **)(*(long *)(param_4 + 0x390) + (ulong)*(byte *)(param_4 + 0x3a4) * 8))
                         (param_4 + 0x390);
      *(undefined4 *)(param_4 + 0x398) = uVar32;
      bVar10 = *(char *)(param_4 + 0x3a5) == '\0';
    }
    fVar31 = 0.0;
    fVar36 = 0.0;
    if (!bVar10) {
      iVar14 = *(int *)(param_4 + 0x3a0);
      fVar36 = 1.0;
      if ((iVar14 != 0) && (*(int *)(param_4 + 0x398) < iVar14)) {
        fVar33 = (float)*(int *)(param_4 + 0x398) / (float)iVar14;
        fVar34 = 1.0;
        if (fVar33 <= 1.0) {
          fVar34 = fVar33;
        }
        fVar36 = 0.0;
        if (0.0 <= fVar33) {
          fVar36 = fVar34;
        }
      }
    }
    lVar15 = *(long *)(param_4 + 0x68);
    fStack_d0 = fVar36 * 0.49 + 0.01;
    fVar36 = 0.0;
    fVar34 = 0.0;
    if (lVar15 != 0) {
      fVar33 = fStack_d0 * 5.0 + 5.0;
      fVar36 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      pfVar16 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar15 + 0x2b4) >> 0x14) & 0xff0));
      fVar35 = *pfVar16 + fVar36 * pfVar16[1];
      fVar34 = pfVar16[2] + fVar36 * pfVar16[3];
      fVar36 = fVar35 * 0.0;
      fVar31 = *(float *)(lVar15 + 0x278) + fVar36 * 0.0 + fVar34 * 0.0 + fVar33 * (fVar35 + 0.0);
      fVar36 = *(float *)(lVar15 + 0x27c) +
               (fVar36 * 0.0 + 1.0) * 0.0 + fVar34 * 0.0 * 0.0 + fVar33 * fVar36;
      fVar34 = *(float *)(lVar15 + 0x280) + (fVar34 * 0.0 * 0.0 - fVar35 * 0.0) + fVar33 * fVar34;
    }
    bVar22 = *pbVar1;
    local_e0 = (long *)CONCAT44(fVar31,(float)local_e0);
    local_d8 = (char *)CONCAT44(fVar34,fVar36);
    local_cc = 1;
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    local_e0 = (long *)CONCAT71(local_e0._1_7_,bVar22);
    FUN_016fa230(*(undefined4 *)(param_4 + 0x388),&local_e0,*(undefined4 *)(param_4 + 0x230),0);
  }
  return;
}

