
/* WARNING: Removing unreachable block (ram,0x02417954) */
/* WARNING: Removing unreachable block (ram,0x024179bc) */

undefined1 FUN_024178e0(long param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  uint *puVar22;
  char *pcVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_d0;
  undefined8 *local_c8;
  uint local_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  float fStack_88;
  undefined *local_80;
  char *local_78;
  
  fVar29 = -20.0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  lVar14 = *(long *)PTR_DAT_04bb2200;
  if (*(char *)(param_2 + 7) == '\0') {
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x50) != 0)) {
      local_d0 = (undefined8 *)((ulong)local_d0._4_4_ << 0x20);
      lVar14 = *(long *)(*(long *)(lVar14 + 0x50) + 0x118);
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + 0x280);
        fVar29 = 0.0;
        if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 8), lVar14 != 0)) {
          pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + 0x488) + 0xf0))(lVar14 + 0x488);
          fVar29 = *pfVar8;
        }
        lVar14 = FUN_0251e98c(1);
        lVar15 = 0x1560;
        goto LAB_024179fc;
      }
    }
  }
  else if ((lVar14 != 0) && (*(long *)(lVar14 + 0x50) != 0)) {
    local_d0 = (undefined8 *)((ulong)local_d0._4_4_ << 0x20);
    lVar14 = *(long *)(*(long *)(lVar14 + 0x50) + 0x118);
    if (lVar14 != 0) {
      lVar14 = *(long *)(lVar14 + 0x280);
      fVar29 = 0.0;
      if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 8), lVar14 != 0)) {
        pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + 0x488) + 0xf0))(lVar14 + 0x488);
        fVar29 = *pfVar8;
      }
      lVar14 = FUN_0251e98c(1);
      lVar15 = 0x1590;
LAB_024179fc:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + lVar15) + 0xf0))();
      fVar29 = fVar29 + *pfVar8;
    }
  }
  puVar21 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar21 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar21 + 0x27c) = fVar29;
  fVar29 = *param_2 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar26 = param_2[2] - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  fVar29 = SQRT(fVar26 * fVar26 + fVar29 * fVar29);
  uVar7 = FUN_006f0400();
  lVar14 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + 0x1ff0) + 0xf0))(lVar14 + 0x1ff0);
  if (*pfVar8 * 10.0 * 0.7 < fVar29) {
    fVar29 = *param_2;
    uVar24 = FUN_0231eef4(param_1,param_2,0);
    local_d0 = (undefined8 *)CONCAT44(uVar24,fVar29);
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,param_2[2]);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_d0,1);
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
    puVar19 = *(undefined4 **)(param_2 + 4);
    if (puVar19 != (undefined4 *)0x0) {
      lVar14 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
      *(undefined4 *)(lVar14 + 4) = *puVar19;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffdfffff;
      puVar21 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar21 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar24 = *(undefined4 *)((long)puVar21 + 0x2b4);
      *(undefined4 *)(param_1 + 0x1858) = 0;
      *(undefined4 *)(param_1 + 0x1854) = uVar24;
    }
    return 1;
  }
  plVar20 = *(long **)(param_1 + 0x60);
  local_d0 = &DAT_0407ebb1;
  local_c8 = &DAT_0407ebb1;
  local_c0 = 0;
  local_98 = 0;
  local_b8 = &DAT_0407ebb1;
  puStack_b0 = &DAT_0407ebb1;
  local_a8 = 0;
  uStack_a0 = 0;
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar20 + 0x128))(plVar20,&local_d0,0);
  uVar6 = local_c0;
  if (fVar29 < 1.0) {
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
    puVar21 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar21 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fStack_88 = param_2[2];
    local_90 = *(ulong *)param_2 & 0xffffffff;
    local_80 = (undefined *)(puVar21[0x4f] & 0xffffffff);
    local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)(puVar21 + 0x50));
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,&local_80,&local_90);
    *(undefined4 *)(puVar21 + 0x4f) = local_80._0_4_;
    *(undefined4 *)(puVar21 + 0x50) = local_78._0_4_;
    puVar22 = *(uint **)(param_2 + 4);
    if (puVar22 == (uint *)0x0) {
      if (*(char *)(param_2 + 7) == '\0') {
        FUN_0231b3c0(param_1,0x14,1);
        return 1;
      }
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar17 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar17 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "CommonDiveWait";
      FUN_017081d0(puVar21,&local_80,0x14,1,1);
      return 1;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      local_90 = CONCAT44(local_90._4_4_,10);
      local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02417c88;
    }
    else {
LAB_02417c88:
      plVar20 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar20 = *(long **)(param_1 + 0x4c8);
      }
      lVar14 = (**(code **)(*plVar20 + 0x148))();
      uVar7 = *puVar22;
      iVar17 = uVar7 - *(int *)(lVar14 + 4);
      if (0xb60b5e < iVar17 + 0x5b05afU) {
        iVar4 = 0x15555560;
        iVar5 = -0x15555560;
        iVar17 = (int)((float)iVar17 * 0.15);
        if (iVar17 < 1) {
          iVar4 = -0x5b05b0;
        }
        else {
          iVar5 = 0x5b05b0;
        }
        iVar1 = iVar17;
        if (iVar4 <= iVar17) {
          iVar1 = iVar4;
        }
        if (iVar5 <= iVar17) {
          iVar5 = iVar1;
        }
        uVar7 = iVar5 + *(int *)(lVar14 + 4);
      }
      *(uint *)(lVar14 + 4) = uVar7;
      puVar22 = *(uint **)(param_2 + 4);
    }
    uVar7 = *puVar22;
    uVar18 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    uVar12 = uVar18 - uVar7;
    if (uVar12 == 0) {
LAB_02417d54:
      fVar29 = 8.381903e-08;
    }
    else {
      uVar2 = uVar12;
      if (uVar18 <= uVar7) {
        uVar2 = uVar7 - uVar18;
      }
      if (uVar2 < 0x80000001) {
        if (uVar18 <= uVar7) {
          fVar29 = 8.381903e-08;
          uVar12 = uVar7 - uVar18;
          goto joined_r0x02417f08;
        }
      }
      else {
        uVar12 = -uVar2;
        if (uVar7 < uVar18) goto LAB_02417d54;
      }
      fVar29 = -8.381903e-08;
    }
joined_r0x02417f08:
    if (uVar6 < 0xc) {
      return 1;
    }
    fVar29 = fVar29 * (float)uVar12;
    fVar26 = -fVar29;
    if (0.0 <= fVar29) {
      fVar26 = fVar29;
    }
    if (10.0 <= fVar26) {
      cVar3 = *(char *)(param_2 + 7);
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar17 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar17 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      if (0.0 <= fVar29) {
        if (cVar3 != '\0') goto LAB_02418358;
        if (((puVar21[0x227] != 0) && (lVar14 = *(long *)(puVar21[0x227] + 0x78), lVar14 != 0)) &&
           (plVar20 = *(long **)(lVar14 + 0x48), plVar20 != (long *)0x0)) {
          lVar14 = *plVar20;
          uVar24 = 0x42b40000;
          goto LAB_024183d0;
        }
      }
      else {
        if (cVar3 != '\0') {
LAB_02418358:
          local_78 = "PlayerDiveWait";
          goto LAB_024183fc;
        }
        if (((puVar21[0x227] != 0) && (lVar14 = *(long *)(puVar21[0x227] + 0x78), lVar14 != 0)) &&
           (plVar20 = *(long **)(lVar14 + 0x48), plVar20 != (long *)0x0)) {
          lVar14 = *plVar20;
          uVar24 = 0xc2b40000;
LAB_024183d0:
          (**(code **)(lVar14 + 0x30))(uVar24,plVar20,PTR_DAT_04bc2fd0);
        }
      }
    }
    else {
      cVar3 = *(char *)(param_2 + 7);
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar17 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar17 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      if (cVar3 != '\0') goto LAB_02418358;
      if (((puVar21[0x227] != 0) && (lVar14 = *(long *)(puVar21[0x227] + 0x78), lVar14 != 0)) &&
         (plVar20 = *(long **)(lVar14 + 0x48), plVar20 != (long *)0x0)) {
        lVar14 = *plVar20;
        uVar24 = 0;
        goto LAB_024183d0;
      }
    }
    puVar21 = (undefined8 *)FUN_016e3954(param_1);
    local_78 = "PlayerSwimStand";
LAB_024183fc:
    local_80 = PTR_DAT_04bb2020 + 0x10;
    FUN_01707d90(puVar21,&local_80,0x14,0,1);
    return 1;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_90 = CONCAT44(local_90._4_4_,10);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02417db8;
  }
  else {
LAB_02417db8:
    plVar20 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar20 = *(long **)(param_1 + 0x4c8);
    }
    lVar14 = (**(code **)(*plVar20 + 0x148))();
    iVar17 = uVar7 - *(int *)(lVar14 + 4);
    uVar18 = uVar7;
    if (0xb60b5e < iVar17 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar5 = -0x15555560;
      iVar17 = (int)((float)iVar17 * 0.25);
      if (iVar17 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar17;
      if (iVar4 <= iVar17) {
        iVar1 = iVar4;
      }
      if (iVar5 <= iVar17) {
        iVar5 = iVar1;
      }
      uVar18 = iVar5 + *(int *)(lVar14 + 4);
    }
    *(uint *)(lVar14 + 4) = uVar18;
  }
  uVar18 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  uVar12 = uVar18 - uVar7;
  if (uVar12 == 0) {
LAB_02417e54:
    fVar26 = 8.381903e-08;
    uVar13 = uVar12;
  }
  else {
    uVar13 = uVar7 - uVar18;
    uVar2 = uVar12;
    if (uVar18 <= uVar7) {
      uVar2 = uVar13;
    }
    if (uVar2 < 0x80000001) {
      if (uVar18 <= uVar7) {
        fVar26 = 8.381903e-08;
        goto LAB_02417ff0;
      }
    }
    else {
      uVar12 = -uVar2;
      if (uVar7 < uVar18) goto LAB_02417e54;
    }
    fVar26 = -8.381903e-08;
    uVar13 = uVar12;
  }
LAB_02417ff0:
  fVar30 = 1.0;
  if (fVar29 < 7.0) {
    fVar30 = (fVar29 / 7.0) * 0.9 + 0.1;
  }
  lVar14 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + 0x1980) + 0xf0))(lVar14 + 0x1980);
  fVar30 = fVar30 * *pfVar8;
  lVar14 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + 0x19b0) + 0xf0))(lVar14 + 0x19b0);
  fVar25 = *(float *)(param_1 + 0x1820);
  fVar27 = *pfVar8;
  uVar18 = *(uint *)(param_1 + 0x17cc);
  uVar7 = uVar18 | 0x80000;
  *(float *)(param_1 + 0x1844) = fVar30;
  *(float *)(param_1 + 0x1848) = fVar27;
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (fVar25 == fVar30) {
    uVar7 = uVar18 & 0xfff7ffff;
    *(uint *)(param_1 + 0x17cc) = uVar7;
  }
  fVar28 = fVar25;
  if (((*(uint *)(param_1 + 0x17d8) & 1) != 0) ||
     (*(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1, (uVar7 >> 0x13 & 1) == 0))
  goto LAB_024180c4;
  if (fVar27 == 0.0) {
LAB_024180b4:
    fVar30 = fVar25;
LAB_024180b8:
    *(uint *)(param_1 + 0x17cc) = uVar7 & 0xfff7ffff;
    fVar28 = fVar30;
  }
  else if (fVar30 <= fVar25) {
    if (fVar25 <= fVar30) goto LAB_024180b4;
    fVar28 = fVar25 - fVar27;
    fVar27 = fVar30;
    if (fVar25 >= fVar28 && fVar28 > fVar30) {
      fVar27 = fVar28;
    }
    *(float *)(param_1 + 0x1820) = fVar27;
    if (fVar25 < fVar28 || fVar28 <= fVar30) goto LAB_024180b8;
  }
  else {
    fVar28 = fVar27 + fVar25;
    fVar27 = fVar30;
    if (fVar28 >= fVar25 && fVar30 > fVar28) {
      fVar27 = fVar28;
    }
    *(float *)(param_1 + 0x1820) = fVar27;
    if (fVar28 < fVar25 || fVar30 <= fVar28) goto LAB_024180b8;
  }
LAB_024180c4:
  uVar16 = (ulong)(fVar26 * (float)uVar13 * 11930465.0);
  uVar9 = uVar16 >> 0x18 & 0xff;
  fVar26 = *(float *)(PTR_DAT_04bb2d00 + uVar9 * 0x10 + 8) +
           *(float *)(PTR_DAT_04bb2d00 + uVar9 * 0x10 + 0xc) * (float)((uint)uVar16 & 0xffffff) *
           5.9604645e-08;
  fVar29 = fVar29 * fVar26 * fVar26;
  if (fVar29 < fVar28) {
    *(float *)(param_1 + 0x1820) = fVar29;
  }
  local_78 = "PlayerSwimStride_Remote";
  if (*(char *)(param_2 + 7) != '\0') {
    local_78 = "PlayerDiveStride_Remote";
  }
  puVar21 = *(undefined8 **)(param_1 + 0x60);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  if (puVar21 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar21 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar21 = &DAT_05240280;
    }
  }
  local_90 = local_90 & 0xffffffff00000000;
  if (puVar21[0x227] == 0) {
LAB_024182c4:
    if (uVar6 < 0xc) {
      return 0;
    }
    puVar21 = *(undefined8 **)(param_1 + 0x60);
    if (puVar21 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        puVar21 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar21 = &DAT_05240280;
      }
    }
    uVar10 = 0x10;
    uVar11 = 1;
  }
  else {
    lVar14 = *(long *)(puVar21[0x227] + 0x88);
    plVar20 = (long *)(lVar14 + 0x60);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    pcVar23 = *(char **)(lVar14 + 0x68);
    (**(code **)(local_80 + 0x18))(&local_80);
    if (pcVar23 != local_78) {
      pcVar23 = *(char **)(lVar14 + 0x68);
      if (*pcVar23 != *local_78) goto LAB_024182c4;
      if (*pcVar23 != '\0') {
        uVar9 = 0;
        do {
          uVar16 = uVar9;
          if ((uVar16 == 0x80000) || (pcVar23[uVar16 + 1] != local_78[uVar16 + 1]))
          goto LAB_024182c4;
          if (pcVar23[uVar16 + 1] == '\0') goto LAB_02418250;
          if (pcVar23[uVar16 + 2] != local_78[uVar16 + 2]) goto LAB_024182c4;
          uVar9 = uVar16 + 2;
        } while (pcVar23[uVar16 + 2] != '\0');
        uVar16 = uVar16 + 1;
LAB_02418250:
        if (uVar16 >> 0x13 != 0) goto LAB_024182c4;
      }
    }
    puVar21 = *(undefined8 **)(param_1 + 0x60);
    if (puVar21 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        puVar21 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar21 = &DAT_05240280;
      }
    }
    local_90 = local_90 & 0xffffffff00000000;
    uVar9 = FUN_0073da08(puVar21,0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    puVar21 = *(undefined8 **)(param_1 + 0x60);
    if (puVar21 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        puVar21 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar21 = &DAT_05240280;
      }
    }
    uVar10 = 4;
    uVar11 = 0;
  }
  FUN_017029bc(puVar21,&local_80,uVar10,0,uVar11);
  return 0;
}

