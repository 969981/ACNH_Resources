
void FUN_024c915c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  short *psVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_90;
  char *local_88;
  uint *local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "PlayerSlingshotShooting";
  FUN_017081d0(puVar15,&local_90,6,1,0);
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x68);
  fVar20 = *(float *)(lVar10 + 0x278);
  fVar21 = *(float *)(lVar10 + 0x280);
  fVar22 = *(float *)(lVar10 + 0x27c) + 10.0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
LAB_024c93c4:
    uVar11 = 0xc0000000;
  }
  else {
    uVar5 = *(uint *)PTR_DAT_04bb5858;
    if ((((uVar5 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                              ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar5)) {
      plVar16 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0x288) != 1 && *(int *)(lVar10 + 0x288) != -1) {
LAB_024c92a0:
      uVar5 = 0;
      if (plVar16 != (long *)0x0) goto LAB_024c92b4;
      goto LAB_024c93c4;
    }
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_024c92a0;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar16 == (long *)0x0) goto LAB_024c93c4;
LAB_024c92b4:
    lVar10 = plVar16[0x2a];
    if (((*PTR_DAT_04bb5848 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5848), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5840 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5848);
    }
    uVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb5840);
    uVar11 = 0xc0000000;
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar5;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      local_90 = (undefined *)0x0;
      local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
      uVar8 = FUN_0222c1a0(0x42c80000,plVar16,&local_90,*(long *)(param_1 + 0x68) + 0x278);
      if ((uVar8 & 1) != 0) {
        fVar19 = (float)local_90 - fVar20;
        fVar17 = -fVar19;
        if (0.0 <= fVar19) {
          fVar17 = fVar19;
        }
        if ((fVar17 < 8.0) && (local_88._0_4_ < fVar21 + -0.5)) {
          fVar19 = atan2f(local_90._4_4_ - fVar22,local_88._0_4_ - fVar21);
          fVar19 = 6.2831855 - fVar19;
          fVar17 = 3.2212255e+09;
          if (fVar19 <= 4.712389) {
            fVar17 = fVar19 * 6.8356525e+08;
          }
          fVar18 = 2.6843543e+09;
          if (3.9269907 <= fVar19) {
            fVar18 = fVar17;
          }
          uVar11 = (ulong)fVar18;
          goto LAB_024c93c8;
        }
      }
      goto LAB_024c93c4;
    }
  }
LAB_024c93c8:
  fVar19 = (float)(uVar11 & 0xffffffff) * 1.4629181e-09;
  fVar17 = sinf(fVar19);
  fVar19 = cosf(fVar19);
  puVar3 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    psVar14 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    psVar14 = (short *)(lVar10 + ((ulong)*(uint *)(lVar10 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_78 = *psVar14;
  local_76 = (undefined1)psVar14[1];
  local_75 = *(undefined1 *)((long)psVar14 + 3);
  local_74 = *(undefined4 *)(psVar14 + 2);
  local_88 = *(char **)psVar14;
  if (local_78 == -2) {
    return;
  }
  local_90 = PTR_DAT_04bc0510 + 0x10;
  local_80 = (uint *)0x0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar3 == 0) {
LAB_024c9588:
    uVar5 = 0x21;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_024c9588;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_78);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (puVar12 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar12 == (uint *)0x0)) goto LAB_024c9588;
    uVar5 = 0;
    uVar1 = *puVar12;
    local_80 = puVar12;
    if ((uVar1 != 0) && (puVar12 != (uint *)(ulong)uVar1)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar1);
      uVar5 = 0;
      if (*puVar13 != 0) {
        uVar5 = puVar13[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar5);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar1 * 2),
               uVar5 < 0xa2)) goto LAB_024c958c;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_024c958c:
  if (2 < uVar5 - 0x40) {
    return;
  }
  uVar5 = FUN_024c9820(param_1);
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    return;
  }
  if ((((uVar5 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8),
       plVar16 == (long *)0x0)) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar16 + 0x46) != uVar5)) {
    plVar16 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
      goto LAB_024c9648;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto LAB_024c9648;
    }
  }
  uVar5 = 0;
LAB_024c9648:
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0x2a];
    uVar1 = *(uint *)(plVar16 + 0x49);
    if (((*PTR_DAT_04bbe2d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe2d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe2d0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2d8);
    }
    uVar6 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbe2d0);
    if ((((uVar6 & uVar5) == 1) && ((int)lVar10 == 1)) && ((uVar1 >> 4 & 1) != 0)) {
      fVar18 = fVar17 * 0.0;
      pfVar9 = (float *)(**(code **)(*(long *)plVar16[0xd] + 0xf8))();
      *pfVar9 = fVar20;
      pfVar9[1] = fVar22;
      pfVar9[2] = fVar21;
      *(float *)(plVar16 + 0x50) = fVar20;
      *(float *)((long)plVar16 + 0x284) = fVar22;
      *(float *)(plVar16 + 0x51) = fVar21;
      lVar10 = 0;
      if (plVar16[0xe] != 0) {
        lVar10 = plVar16[0xe] + 0x278;
      }
      *(float *)((long)plVar16 + 0x274) =
           (fVar18 + fVar19 * 0.0 + (fVar18 - fVar19 * 0.0) * 0.0 + 0.0) * 6.0;
      *(float *)(plVar16 + 0x4f) =
           ((fVar19 * 0.0 * 0.0 - fVar17) + (fVar19 + fVar18 * 0.0) * 0.0 + 0.0) * 6.0;
      *(float *)((long)plVar16 + 0x27c) = (fVar19 + fVar18 + 0.0) * 6.0;
      if (*(int *)(lVar10 + 8) != 1) {
        FUN_03ebb160();
      }
    }
  }
  return;
}

