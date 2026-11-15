
/* WARNING: Removing unreachable block (ram,0x02464b98) */
/* WARNING: Removing unreachable block (ram,0x02464c0c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02464b10(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined *local_130;
  undefined1 *puStack_128;
  int local_120;
  undefined1 auStack_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *puStack_d0;
  int local_c8;
  undefined1 auStack_c4 [63];
  undefined1 local_85;
  uint local_7c;
  
  cVar8 = *(char *)(param_2 + 5);
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (puVar18 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  if (puVar18[0x227] == 0) {
    local_160 = (ulong)local_160._4_4_ << 0x20;
LAB_02464bac:
    puVar18 = *(undefined8 **)(param_1 + 0x60);
    if (puVar18 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar18 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar18 = &DAT_05240280;
      }
    }
    if (puVar18[0x227] == 0) {
      local_7c = 0;
      local_160 = (ulong)local_160._4_4_ << 0x20;
    }
    else {
      local_7c = *(uint *)(puVar18 + 0x2d3) >> 1 & 1;
      local_160 = CONCAT44(local_160._4_4_,*(uint *)(puVar18 + 0x2d3) >> 1) & 0xffffffff00000001;
      uVar11 = FUN_03850368(puVar18[0x227],local_7c);
      uVar7 = local_7c;
      if ((((uVar11 & 1) == 0) && (puVar18[0x227] != 0)) &&
         (uVar11 = FUN_03850368(puVar18[0x227],local_7c), (uVar11 & 1) == 0)) {
        FUN_0384fca4(puVar18[0x227],uVar7);
      }
    }
  }
  else {
    local_160 = CONCAT44(local_160._4_4_,*(uint *)(puVar18 + 0x2d3) >> 1) & 0xffffffff00000001;
    uVar11 = FUN_03850368(puVar18[0x227],*(uint *)(puVar18 + 0x2d3) >> 1 & 1);
    if ((uVar11 & 1) == 0) goto LAB_02464bac;
  }
  pfVar6 = (float *)PTR_DAT_04bc3038;
  pfVar14 = (float *)(param_1 + 0xeec);
  pcVar3 = (char *)(param_1 + 0x12f8);
  pfVar13 = (float *)PTR_DAT_04bc3038;
  if (*pcVar3 != '\0') {
    pfVar13 = pfVar14;
  }
  fVar23 = SQRT(pfVar13[1] * pfVar13[1] + *pfVar13 * *pfVar13);
  lVar12 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
  if (*pfVar13 <= fVar23) {
    lVar12 = FUN_0251e98c(1);
    pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
    fVar24 = *pfVar13;
    lVar12 = FUN_0251e98c(1);
    pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
    fVar24 = (fVar23 - *pfVar13) / (1.0 - fVar24);
    fVar23 = 0.9999;
    if (fVar24 <= 0.9999) {
      fVar23 = fVar24;
    }
    if ((fVar24 < 0.0) || (fVar23 == 0.0)) goto LAB_02464ca8;
    lVar12 = *(long *)(*(long *)(param_1 + 0xf08) + 0x68);
    pfVar13 = pfVar6;
    if (*pcVar3 != '\0') {
      pfVar13 = pfVar14;
    }
    FUN_02569464(&local_160,pfVar13);
    fVar23 = *(float *)((long)param_2 + 0x1c);
    puVar18 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar18 = *(undefined8 **)(param_1 + 0x4c8);
    }
    iVar10 = *(int *)((long)puVar18 + 0x2b4) + ((int)(float)local_160 - *(int *)(lVar12 + 0x2b4));
    *(int *)(param_1 + 0x1854) = iVar10;
    *(int *)(param_1 + 0x1858) = (int)(long)(fVar23 * 11930465.0);
    uVar7 = *(uint *)(param_1 + 0x17cc);
    *(uint *)(param_1 + 0x17cc) = uVar7 | 0x200000;
    if (iVar10 == *(int *)((long)puVar18 + 0x2b4)) {
      bVar9 = true;
      *(uint *)(param_1 + 0x17cc) = uVar7 & 0xffdfffff;
    }
    else {
      bVar9 = true;
    }
  }
  else {
LAB_02464ca8:
    bVar9 = false;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffdfffff;
    puVar18 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar18 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar22 = *(undefined4 *)((long)puVar18 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar22;
  }
  pfVar13 = pfVar6;
  if (*pcVar3 != '\0') {
    pfVar13 = pfVar14;
  }
  FUN_02569464(&local_160,pfVar13);
  uVar7 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  uVar17 = uVar7 - (int)(float)local_160;
  uVar5 = uVar17;
  if (uVar17 == 0) {
joined_r0x02465038:
    uVar17 = uVar5;
    fVar23 = 8.381903e-08;
    if (!bVar9) goto LAB_0246503c;
LAB_02464e38:
    fVar23 = fVar23 * (float)uVar17;
    fVar24 = -fVar23;
    if (0.0 <= fVar23) {
      fVar24 = fVar23;
    }
    if ((cVar8 == '\0') && (fVar24 < 15.5)) {
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      puVar16 = param_2 + 0x11;
      FUN_01707d90(puVar18,puVar16,6,0,1);
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      uVar11 = (ulong)(long)(fVar23 * 11930465.0) >> 0x18 & 0xff;
      fVar24 = *(float *)(PTR_DAT_04bb2d00 + uVar11 * 0x10 + 8);
      fVar25 = *(float *)(PTR_DAT_04bb2d00 + uVar11 * 0x10 + 0xc);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      local_7c = 0;
      local_160 = CONCAT44(local_160._4_4_,0x3a);
      if ((puVar18[0x227] == 0) ||
         (uVar11 = FUN_03850a90(puVar18[0x227],0x3a,0,0), (uVar11 & 1) == 0)) {
        uVar22 = *(undefined4 *)(param_2 + 3);
        *(undefined4 *)(param_1 + 0x1844) = 0;
        *(undefined4 *)(param_1 + 0x1848) = uVar22;
        uVar7 = *(uint *)(param_1 + 0x17cc);
        *(uint *)(param_1 + 0x17cc) = uVar7 | 0x80000;
        if (*(float *)(param_1 + 0x1820) == 0.0) {
          *(uint *)(param_1 + 0x17cc) = uVar7 & 0xfff7ffff;
        }
      }
      else {
        local_148 = param_2[3];
        uStack_140 = param_2[4];
        local_dd = 0;
        local_160 = *param_2;
        local_138 = *(undefined1 *)(param_2 + 5);
        local_158 = param_2[1];
        uStack_150 = param_2[2];
        local_120 = 0x40;
        plVar21 = param_2 + 6;
        puVar1 = PTR_DAT_04bb2f70 + 0x10;
        local_130 = puVar1;
        puStack_128 = auStack_11c;
        (**(code **)(*plVar21 + 0x18))(plVar21);
        puVar20 = (undefined1 *)param_2[7];
        if (auStack_11c != puVar20) {
          (**(code **)(param_2[6] + 0x18))(plVar21);
          lVar12 = 0;
          do {
            if (*(char *)(param_2[7] + lVar12) == '\0') goto LAB_024650e8;
            lVar4 = param_2[7] + lVar12;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_024650e8;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_024650e8;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_024650e8:
          iVar10 = (int)lVar12;
          if (local_120 <= (int)lVar12) {
            iVar10 = local_120 + -1;
          }
          memcpy(auStack_11c,puVar20,(long)iVar10);
          auStack_11c[iVar10] = 0;
        }
        fVar24 = fVar24 + fVar25 * (float)((uint)(long)(fVar23 * 11930465.0) & 0xffffff) *
                          5.9604645e-08;
        local_85 = 0;
        puVar2 = PTR_DAT_04bb2bc0 + 0x10;
        local_c8 = 0x40;
        local_130 = puVar2;
        local_d8 = puVar1;
        puStack_d0 = auStack_c4;
        (**(code **)(param_2[0x11] + 0x18))(puVar16);
        puVar20 = (undefined1 *)param_2[0x12];
        if (auStack_c4 != puVar20) {
          (**(code **)(param_2[0x11] + 0x18))(puVar16);
          lVar12 = 0;
          do {
            if (*(char *)(param_2[0x12] + lVar12) == '\0') goto LAB_024651b0;
            lVar4 = param_2[0x12] + lVar12;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_024651b0;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_024651b0;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_024651b0:
          iVar10 = (int)lVar12;
          if (local_c8 <= (int)lVar12) {
            iVar10 = local_c8 + -1;
          }
          memcpy(auStack_c4,puVar20,(long)iVar10);
          auStack_c4[iVar10] = 0;
        }
        local_160 = CONCAT44(local_160._4_4_,fVar24 * (float)local_160);
        local_158 = CONCAT44(local_158._4_4_,fVar24 * (float)local_158);
        local_d8 = puVar2;
        FUN_02465514(param_1,&local_160);
      }
      if (*(float *)(param_2 + 4) == 0.0) {
        return 1;
      }
      if (*pcVar3 != '\0') {
        pfVar6 = pfVar14;
      }
      fVar24 = SQRT(pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6);
      lVar12 = FUN_0251e98c(1);
      pfVar14 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
      fVar23 = 0.0;
      if (*pfVar14 <= fVar24) {
        lVar12 = FUN_0251e98c(1);
        pfVar14 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
        fVar23 = *pfVar14;
        lVar12 = FUN_0251e98c(1);
        pfVar14 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
        fVar25 = (fVar24 - *pfVar14) / (1.0 - fVar23);
        fVar24 = 0.9999;
        if (fVar25 <= 0.9999) {
          fVar24 = fVar25;
        }
        fVar23 = 0.0;
        if (0.0 <= fVar25) {
          fVar23 = fVar24;
        }
      }
      uVar19 = 1;
      fVar23 = fVar23 * *(float *)(param_2 + 4);
      goto LAB_024652d8;
    }
    if (cVar8 == '\0') {
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          goto LAB_02464fec;
        }
        puVar18 = &DAT_05240280;
        puVar16 = param_2 + 0x11;
      }
      else {
LAB_02464fec:
        puVar16 = param_2 + 0x11;
      }
      goto LAB_02465064;
    }
  }
  else {
    if (uVar7 <= (uint)(float)local_160) {
      uVar5 = (int)(float)local_160 - uVar7;
    }
    if (0x80000000 < uVar5) {
      uVar17 = -uVar5;
      uVar5 = uVar17;
      if (uVar7 <= (uint)(float)local_160) goto LAB_02464e2c;
      goto joined_r0x02465038;
    }
    uVar5 = (int)(float)local_160 - uVar7;
    if (uVar7 <= (uint)(float)local_160) goto joined_r0x02465038;
LAB_02464e2c:
    fVar23 = -8.381903e-08;
    if (bVar9) goto LAB_02464e38;
LAB_0246503c:
    if (cVar8 == '\0') {
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      puVar16 = param_2 + 6;
LAB_02465064:
      FUN_01707d90(puVar18,puVar16,6,0,1);
      uVar22 = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)(param_1 + 0x1844) = 0;
      *(undefined4 *)(param_1 + 0x1848) = uVar22;
      uVar7 = *(uint *)(param_1 + 0x17cc);
      *(uint *)(param_1 + 0x17cc) = uVar7 | 0x80000;
      if (*(float *)(param_1 + 0x1820) == 0.0) {
        *(uint *)(param_1 + 0x17cc) = uVar7 & 0xfff7ffff;
      }
    }
  }
  fVar23 = 0.0;
  uVar19 = 0;
  if (*(float *)(param_2 + 4) == 0.0) {
    return 0;
  }
LAB_024652d8:
  uVar22 = *(undefined4 *)((long)param_2 + 0x24);
  *(float *)(param_1 + 0x184c) = fVar23;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar22;
  plVar21 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar21 = *(long **)(param_1 + 0x4c8);
  }
  piVar15 = (int *)(**(code **)(*plVar21 + 0x148))();
  if (*piVar15 == (int)(long)(fVar23 * 11930465.0)) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  return uVar19;
}

