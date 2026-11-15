
/* WARNING: Removing unreachable block (ram,0x02465e30) */

void FUN_02465c70(long param_1,float *param_2)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_54;
  
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    uVar10 = 0;
    iVar8 = *(int *)(param_1 + 0x178);
    pfVar3 = (float *)PTR_DAT_04bc3038;
  }
  else {
    local_54 = 0x31;
    uVar10 = FUN_03850a90(puVar15[0x227],0x31,0,*(uint *)(puVar15 + 0x2d3) >> 1 & 1);
    uVar10 = uVar10 & 0xffffffff;
    iVar8 = *(int *)(param_1 + 0x178);
    pfVar3 = (float *)PTR_DAT_04bc3038;
  }
  PTR_DAT_04bc3038 = (undefined *)pfVar3;
  if (iVar8 != 0) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar18 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    fVar19 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    fVar17 = *(float *)(puVar15 + 0x4f);
    fVar16 = *(float *)(puVar15 + 0x50);
    bVar6 = false;
    if ((fVar17 == fVar18) && (bVar6 = false, !NAN(fVar16) && !NAN(fVar19))) {
      bVar6 = fVar16 == fVar19;
    }
    if (bVar6) {
      fVar18 = fVar17;
      fVar19 = fVar16;
    }
    else {
      fVar21 = fVar17 - fVar18;
      fVar22 = fVar16 - fVar19;
      fVar20 = SQRT(fVar21 * fVar21 + 0.0 + fVar22 * fVar22);
      if (0.19999999 <= fVar20) {
        fVar20 = fVar20 * 0.2;
        bVar6 = false;
        bVar7 = true;
        if (-1.1920929e-07 <= fVar20) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar20)) {
            bVar6 = fVar20 == 1.1920929e-07;
            bVar7 = 1.1920929e-07 <= fVar20;
          }
        }
        if (!(!bVar7 || bVar6)) {
          fVar21 = fVar21 * 0.2;
          fVar18 = 10.0;
          fVar22 = fVar22 * 0.2;
          if ((10.0 < fVar20) || (fVar18 = 0.19999999, fVar20 < 0.19999999)) {
            fVar21 = fVar21 * (fVar18 / fVar20);
            fVar22 = fVar22 * (fVar18 / fVar20);
          }
          fVar18 = fVar17 - fVar21;
          fVar19 = fVar16 - fVar22;
        }
      }
    }
    *(float *)(puVar15 + 0x4f) = fVar18;
    *(float *)(puVar15 + 0x50) = fVar19;
    if (((uVar10 & 1) == 0) &&
       ((*(int *)(param_1 + 0x178) != 0 ||
        (local_54 = 10, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)))) {
      iVar8 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar11 = (**(code **)(*plVar2 + 0x148))();
      iVar13 = iVar8 - *(int *)(lVar11 + 4);
      if (0xb60b5e < iVar13 + 0x5b05afU) {
        iVar5 = 0x15555560;
        iVar8 = -0x15555560;
        iVar13 = (int)((float)iVar13 * 0.2);
        if (iVar13 < 1) {
          iVar5 = -0x5b05b0;
        }
        else {
          iVar8 = 0x5b05b0;
        }
        iVar1 = iVar13;
        if (iVar5 <= iVar13) {
          iVar1 = iVar5;
        }
        if (iVar8 <= iVar13) {
          iVar8 = iVar1;
        }
        iVar8 = iVar8 + *(int *)(lVar11 + 4);
      }
      *(int *)(lVar11 + 4) = iVar8;
    }
    return;
  }
  pfVar9 = pfVar3;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar9 = (float *)(param_1 + 0xeec);
  }
  fVar19 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9);
  lVar11 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  fVar18 = 0.0;
  if (*pfVar9 <= fVar19) {
    lVar11 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar18 = *pfVar9;
    lVar11 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar16 = (fVar19 - *pfVar9) / (1.0 - fVar18);
    fVar19 = 0.9999;
    if (fVar16 <= 0.9999) {
      fVar19 = fVar16;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar16) {
      fVar18 = fVar19;
    }
  }
  fVar16 = param_2[1];
  fVar19 = fVar18 * *param_2;
  bVar6 = true;
  if ((*(char *)(param_2 + 3) == '\0') && (bVar6 = false, !NAN(fVar18))) {
    bVar6 = fVar18 == 0.0;
  }
  fVar17 = *(float *)(param_1 + 0x1820);
  uVar14 = *(uint *)(param_1 + 0x17cc);
  uVar12 = uVar14 | 0x80000;
  *(float *)(param_1 + 0x1848) = fVar16;
  *(uint *)(param_1 + 0x17cc) = uVar12;
  if (bVar6) {
    fVar19 = 0.0;
  }
  *(float *)(param_1 + 0x1844) = fVar19;
  if (fVar17 == fVar19) {
    uVar12 = uVar14 & 0xfff7ffff;
    *(uint *)(param_1 + 0x17cc) = uVar12;
  }
  if ((uVar10 & 1) != 0) {
    if ((*(uint *)(param_1 + 0x17d8) & 1) != 0) {
      return;
    }
    *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1;
    if ((uVar12 >> 0x13 & 1) == 0) {
      return;
    }
    if (fVar16 != 0.0) {
      if (fVar19 <= fVar17) {
        if (fVar19 < fVar17) {
          fVar16 = fVar17 - fVar16;
          fVar18 = fVar19;
          if (fVar16 <= fVar17 && fVar19 < fVar16) {
            fVar18 = fVar16;
          }
          *(float *)(param_1 + 0x1820) = fVar18;
          if (fVar16 <= fVar17 && fVar19 < fVar16) {
            return;
          }
        }
      }
      else {
        fVar16 = fVar16 + fVar17;
        fVar18 = fVar19;
        if (fVar17 <= fVar16 && fVar16 < fVar19) {
          fVar18 = fVar16;
        }
        *(float *)(param_1 + 0x1820) = fVar18;
        if (fVar17 <= fVar16 && fVar16 < fVar19) {
          return;
        }
      }
    }
    *(uint *)(param_1 + 0x17cc) = uVar12 & 0xfff7ffff;
    return;
  }
  if (*(char *)(param_2 + 3) == '\0') {
    if (fVar18 != 0.0) {
      lVar11 = *(long *)(*(long *)(param_1 + 0xf08) + 0x68);
      if (*(char *)(param_1 + 0x12f8) != '\0') {
        pfVar3 = (float *)(param_1 + 0xeec);
      }
      FUN_02569464(&local_54,pfVar3);
      fVar18 = param_2[2];
      puVar15 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar15 = *(undefined8 **)(param_1 + 0x4c8);
      }
      iVar8 = *(int *)((long)puVar15 + 0x2b4) + (local_54 - *(int *)(lVar11 + 0x2b4));
      *(int *)(param_1 + 0x1854) = iVar8;
      *(int *)(param_1 + 0x1858) = (int)(long)(fVar18 * 11930465.0);
      uVar12 = *(uint *)(param_1 + 0x17cc);
      uVar14 = uVar12 | 0x200000;
      *(uint *)(param_1 + 0x17cc) = uVar14;
      if (iVar8 == *(int *)((long)puVar15 + 0x2b4)) goto LAB_02466138;
      goto LAB_02466140;
    }
    uVar14 = uVar12 & 0xffdfffff;
    *(uint *)(param_1 + 0x17cc) = uVar14;
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar4 = *(undefined4 *)((long)puVar15 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar4;
    uVar12 = *(uint *)(param_1 + 0x17d8);
  }
  else {
    fVar18 = param_2[2];
    *(undefined4 *)(param_1 + 0x1854) = 0;
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(int *)(param_1 + 0x1858) = (int)(long)(fVar18 * 11930465.0);
    uVar14 = uVar12 | 0x200000;
    *(uint *)(param_1 + 0x17cc) = uVar14;
    if (*(int *)((long)puVar15 + 0x2b4) == 0) {
LAB_02466138:
      uVar14 = uVar12 & 0xffdfffff;
      *(uint *)(param_1 + 0x17cc) = uVar14;
    }
LAB_02466140:
    uVar12 = *(uint *)(param_1 + 0x17d8);
  }
  if (((uVar12 & 1) == 0) && (*(uint *)(param_1 + 0x17d8) = uVar12 | 1, (uVar14 >> 0x13 & 1) != 0))
  {
    fVar18 = *(float *)(param_1 + 0x1848);
    if (fVar18 != 0.0) {
      fVar19 = *(float *)(param_1 + 0x1844);
      fVar16 = *(float *)(param_1 + 0x1820);
      if (fVar19 <= fVar16) {
        if (fVar19 < fVar16) {
          fVar18 = fVar16 - fVar18;
          fVar17 = fVar19;
          if (fVar18 <= fVar16 && fVar19 < fVar18) {
            fVar17 = fVar18;
          }
          *(float *)(param_1 + 0x1820) = fVar17;
          if (fVar18 <= fVar16 && fVar19 < fVar18) goto LAB_0246625c;
        }
      }
      else {
        fVar18 = fVar18 + fVar16;
        fVar17 = fVar19;
        if (fVar16 <= fVar18 && fVar18 < fVar19) {
          fVar17 = fVar18;
        }
        *(float *)(param_1 + 0x1820) = fVar17;
        if (fVar16 <= fVar18 && fVar18 < fVar19) goto LAB_0246625c;
      }
    }
    *(uint *)(param_1 + 0x17cc) = uVar14 & 0xfff7ffff;
  }
LAB_0246625c:
  FUN_0231d604(param_1);
  return;
}

