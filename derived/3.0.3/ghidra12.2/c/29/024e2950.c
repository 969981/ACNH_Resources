
/* WARNING: Removing unreachable block (ram,0x024e2fc4) */

void FUN_024e2950(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  undefined8 *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_54;
  
  uVar3 = *(ushort *)(param_1 + 0x190e);
  if (*(int *)(param_1 + 0x178) == 1) {
    fVar22 = *(float *)(param_1 + 0xcc8);
    fVar23 = *(float *)(param_1 + 0xccc);
    fVar24 = *(float *)(param_1 + 0xcd0);
    FUN_03eb4b60(0x3e99999a,0x41200000,0x3e4ccccc,param_1 + 0xcc8,PTR_DAT_04bb2150);
    plVar8 = *(long **)(param_1 + 0x68);
    local_78 = (undefined **)
               CONCAT44((fVar23 - *(float *)(param_1 + 0xccc)) + *(float *)((long)plVar8 + 0x27c),
                        (fVar22 - *(float *)(param_1 + 0xcc8)) + *(float *)(plVar8 + 0x4f));
    local_70 = CONCAT44(local_70._4_4_,
                        (fVar24 - *(float *)(param_1 + 0xcd0)) + *(float *)(plVar8 + 0x50));
    (**(code **)(*plVar8 + 0x100))(plVar8,&local_78);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_54 = 10;
      local_78 = (undefined **)CONCAT44(local_78._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024e2b00;
    }
    iVar7 = (uint)uVar3 * 0x10000;
    plVar8 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar8 + 0x148))();
    iVar13 = iVar7 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar7 = -0x15555560;
      iVar13 = (int)((float)iVar13 * 0.3);
      if (iVar13 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar7 = 0x5b05b0;
      }
      iVar1 = iVar13;
      if (iVar4 <= iVar13) {
        iVar1 = iVar4;
      }
      if (iVar7 <= iVar13) {
        iVar7 = iVar1;
      }
      iVar7 = iVar7 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar7;
  }
LAB_024e2b00:
  puVar16 = *(undefined8 **)(param_1 + 0x60);
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
  local_54 = 0;
  local_78 = (undefined **)CONCAT44(local_78._4_4_,0x4b);
  if ((puVar16[0x227] != 0) && (uVar10 = FUN_03850890(puVar16[0x227],0x4b,0,0), (uVar10 & 1) != 0))
  {
    bVar15 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_54._0_2_ = CONCAT11(bVar15,*(int *)(param_1 + 0x178) == 0);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_70 = (ulong)&local_54 | 1;
      local_78 = &PTR_FUN_04a72f40;
      iVar7 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar7 != 0) {
        lVar9 = (long)iVar7 << 3;
        puVar16 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_78)(&local_78,*puVar16);
          lVar9 = lVar9 + -8;
          puVar16 = puVar16 + 1;
        } while (lVar9 != 0);
      }
    }
    uVar10 = FUN_016d7a94(param_1);
    if ((uVar10 & 1) != 0) {
      FUN_02326130((byte *)(param_1 + 0x1ee8),PTR_DAT_04bb37e0,1);
      puVar5 = PTR_DAT_04bb27c0;
      if (*(long *)(param_1 + 0x298) != 0) {
        lVar9 = *(long *)PTR_DAT_04bb27c0;
        if (lVar9 != 0) {
          lVar14 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
          uVar17 = *(uint *)(lVar14 + ((ulong)*(uint *)(lVar14 + 0x10) & 1) * 0x20 + 0x28);
          if ((((uVar17 == 0) ||
               (plVar8 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                   ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
              ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar17)) {
            plVar8 = (long *)0x0;
          }
          if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
            plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar9 = *(long *)puVar5;
            iVar7 = (**(code **)(*plVar11 + 0x60))();
            if (iVar7 < 0x11) {
              uVar17 = 1;
            }
            else {
              if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_024e2ca8;
              uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_024e2ca8:
            uVar17 = 0;
          }
          if (plVar8 != (long *)0x0) {
            lVar9 = plVar8[0x2a];
            if (((*PTR_DAT_04bbe050 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe050), iVar7 != 0)) {
              *(undefined **)PTR_DAT_04bbe048 = PTR_DAT_04bbe058 + 0x10;
              __cxa_guard_release(PTR_DAT_04bbe050);
            }
            uVar10 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbe048);
            uVar2 = 0;
            if ((int)lVar9 == 1) {
              uVar2 = uVar17;
            }
            if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
              (**(code **)(*plVar8 + 0x108))(plVar8);
            }
          }
        }
        if (*(long *)(param_1 + 0x298) != 0) {
          plVar8 = *(long **)(*(long *)(param_1 + 0x298) + 0x1480);
          local_78 = (undefined **)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x230));
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
        }
      }
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
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
  local_54 = 0;
  local_78 = (undefined **)CONCAT44(local_78._4_4_,0x33);
  if ((puVar16[0x227] != 0) && (uVar10 = FUN_03850a90(puVar16[0x227],0x33,0,0), (uVar10 & 1) != 0))
  {
    lVar9 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar9 + 0x7e0) + 0xf0))(lVar9 + 0x7e0);
    fVar22 = *pfVar12 / 15.0;
    if (*(int *)(param_1 + 0x178) == 0) {
      *(float *)(param_1 + 0x1848) = fVar22;
      uVar17 = *(uint *)(param_1 + 0x17cc);
      *(undefined4 *)(param_1 + 0x1844) = 0;
      *(uint *)(param_1 + 0x17cc) = uVar17 | 0x80000;
      if (*(float *)(param_1 + 0x1820) == 0.0) {
        *(uint *)(param_1 + 0x17cc) = uVar17 & 0xfff7ffff;
      }
    }
    else {
      fVar24 = *(float *)(param_1 + 0xcd4);
      *(undefined4 *)(param_1 + 0x1844) = 0;
      *(float *)(param_1 + 0x1848) = fVar22;
      uVar17 = *(uint *)(param_1 + 0x17cc);
      *(uint *)(param_1 + 0x17cc) =
           uVar17 & 0xfff00000 | uVar17 & 0x7ffff | (uint)(fVar24 != 0.0) << 0x13;
      fVar23 = fVar24;
      if (((*(uint *)(param_1 + 0x17d8) & 1) == 0) &&
         (*(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1, fVar24 != 0.0)) {
        if (fVar22 != 0.0) {
          if (0.0 <= fVar24) {
            if (fVar24 <= 0.0) goto LAB_024e2de8;
            fVar23 = fVar24 - fVar22;
            bVar6 = true;
            if ((0.0 < fVar23) && (bVar6 = false, !NAN(fVar24) && !NAN(fVar23))) {
              bVar6 = fVar24 < fVar23;
            }
          }
          else {
            fVar23 = fVar22 + fVar24;
            bVar6 = true;
            if ((fVar23 < 0.0) && (bVar6 = false, !NAN(fVar23) && !NAN(fVar24))) {
              bVar6 = fVar23 < fVar24;
            }
          }
          fVar24 = 0.0;
          if (!bVar6) goto LAB_024e2df4;
        }
LAB_024e2de8:
        fVar23 = fVar24;
        *(uint *)(param_1 + 0x17cc) = uVar17 & 0xfff7ffff;
      }
LAB_024e2df4:
      *(float *)(param_1 + 0xcd4) = fVar23;
      *(undefined4 *)(param_1 + 0x1820) = 0;
      plVar8 = *(long **)(param_1 + 0x68);
      pfVar12 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 5) & 0x7f0));
      fVar22 = (float)((uVar3 & 0x1ff) << 0xf) * 5.9604645e-08;
      fVar24 = *pfVar12 + fVar22 * pfVar12[1];
      fVar22 = pfVar12[2] + fVar22 * pfVar12[3];
      fVar18 = fVar24 * 0.0;
      fVar22 = fVar22 + fVar22;
      fVar20 = fVar24 * (fVar24 + fVar24);
      fVar19 = (fVar24 + fVar24) * fVar18;
      fVar25 = fVar18 * (fVar18 + fVar18);
      fVar21 = fVar24 * (fVar18 + fVar18);
      fVar18 = fVar18 * fVar22;
      fVar24 = fVar24 * fVar22;
      local_78 = (undefined **)
                 CONCAT44(*(float *)((long)plVar8 + 0x27c) +
                          ((1.0 - fVar25) - fVar25) * 0.0 + (fVar21 + fVar18) * 0.0 +
                          fVar23 * (fVar19 - fVar18),
                          *(float *)(plVar8 + 0x4f) +
                          (fVar21 - fVar18) * 0.0 + ((1.0 - fVar20) - fVar25) * 0.0 +
                          fVar23 * (fVar25 + fVar24));
      local_70 = CONCAT44(local_70._4_4_,
                          *(float *)(plVar8 + 0x50) +
                          (fVar19 + fVar18) * 0.0 + (fVar25 - fVar24) * 0.0 +
                          fVar23 * ((1.0 - fVar25) - fVar20));
      (**(code **)(*plVar8 + 0x100))(plVar8,&local_78);
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
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
  FUN_016ff8c0(puVar16,10,&local_78);
  FUN_016dec40(param_1,&local_78,0,0,0,0,0);
  puVar16 = *(undefined8 **)(param_1 + 0x60);
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
  if (puVar16[0x227] == 0) {
    local_54 = 0;
    local_78 = (undefined **)((ulong)local_78._4_4_ << 0x20);
  }
  else {
    local_54 = *(uint *)(puVar16 + 0x2d3) >> 1 & 1;
    local_78 = (undefined **)
               (CONCAT44(local_78._4_4_,*(uint *)(puVar16 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar10 = FUN_03850368(puVar16[0x227],local_54);
    uVar17 = local_54;
    if (((((uVar10 & 1) == 0) && (puVar16[0x227] != 0)) &&
        (uVar10 = FUN_03850368(puVar16[0x227],local_54), (uVar10 & 1) == 0)) &&
       (uVar10 = FUN_0384fca4(puVar16[0x227],uVar17), (uVar10 & 1) == 0)) goto LAB_024e305c;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar10 & 1) == 0) {
      local_70 = local_70 & 0xffffffff00000000;
      local_78 = (undefined **)CONCAT35(local_78._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_78);
    }
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
  }
LAB_024e305c:
  FUN_0231e48c(param_1);
  return;
}

