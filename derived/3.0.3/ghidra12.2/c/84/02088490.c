
/* WARNING: Removing unreachable block (ram,0x020885f0) */
/* WARNING: Removing unreachable block (ram,0x02088570) */
/* WARNING: Removing unreachable block (ram,0x02088580) */
/* WARNING: Removing unreachable block (ram,0x0208858c) */
/* WARNING: Removing unreachable block (ram,0x020885fc) */

void FUN_02088490(long param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  short *psVar20;
  int iVar21;
  short *psVar22;
  char cVar23;
  uint *puVar24;
  int *piVar25;
  long *plVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float unaff_s11;
  float unaff_s13;
  undefined4 unaff_s15;
  undefined4 local_138;
  float local_134;
  float local_120 [2];
  undefined1 auStack_118 [8];
  uint *local_110;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0 [2];
  
  if (*(char *)(param_1 + 0x804) == '\0') {
    return;
  }
  uVar33 = *(undefined4 *)(param_1 + 0x29c);
  pfVar13 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1db8) + 0xf0))
                               (*(long *)PTR_DAT_04bb3968 + 0x1db8);
  fVar34 = *pfVar13;
  local_b0[0] = 0xfffe;
  *(float *)(param_1 + 0x29c) = fVar34;
  FUN_0277d4ac(local_b0);
  puVar7 = PTR_DAT_04bb37e0;
  fVar30 = 5.0;
  lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x68);
  fVar29 = fVar34 / 5.0 + fVar34 / 5.0;
  fVar31 = (float)(int)fVar29 * 0.5 * 5.0 + -2.5;
  fVar32 = *(float *)(lVar18 + 0x278) - fVar31;
  fVar31 = *(float *)(lVar18 + 0x280) - fVar31;
  lVar18 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar18 == 0) {
    return;
  }
  iVar21 = (int)fVar29;
  if (iVar21 == 0) {
    bVar10 = 0;
    fVar29 = 3.4028235e+38;
  }
  else {
    bVar10 = 0;
    fVar29 = 3.4028235e+38;
    iVar6 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
    iVar28 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
    iVar1 = iVar28 + iVar21;
    plVar26 = (long *)PTR_DAT_04bbbc68;
    iVar27 = iVar6;
    do {
      local_f0 = 0.0;
      lVar19 = *(long *)(lVar18 + 0xd0);
      local_f8 = 0;
      psVar20 = (short *)puVar7;
      if (lVar19 != 0) {
        lVar2 = lVar19 + 0x130 + (ulong)*(uint *)(lVar19 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar19 + 0x198)) {
          lVar2 = lVar19 + 0x130;
        }
        iVar12 = *(int *)(lVar2 + 0x28);
        if (iVar12 <= iVar27 && iVar27 <= *(int *)(lVar2 + 8) + iVar12 + -1) {
          iVar4 = *(int *)(lVar2 + 0x2c);
          if ((iVar4 <= iVar28 && iVar28 <= *(int *)(lVar2 + 0xc) + iVar4 + -1) &&
             (uVar11 = (iVar28 - iVar4) + (iVar27 - iVar12) * *(int *)(lVar2 + 0xc),
             uVar11 < *(uint *)(lVar2 + 0x10))) {
            psVar20 = (short *)(*(long *)(lVar2 + 0x18) + (long)(int)uVar11 * 8);
          }
        }
      }
      lVar19 = *(long *)(lVar18 + 0xe0);
      psVar22 = (short *)puVar7;
      if (lVar19 != 0) {
        lVar2 = lVar19 + 0x130 + (ulong)*(uint *)(lVar19 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar19 + 0x198)) {
          lVar2 = lVar19 + 0x130;
        }
        iVar12 = *(int *)(lVar2 + 0x28);
        if (iVar12 <= iVar27 && iVar27 <= *(int *)(lVar2 + 8) + iVar12 + -1) {
          iVar4 = *(int *)(lVar2 + 0x2c);
          if ((iVar4 <= iVar28 && iVar28 <= *(int *)(lVar2 + 0xc) + iVar4 + -1) &&
             (uVar11 = (iVar28 - iVar4) + (iVar27 - iVar12) * *(int *)(lVar2 + 0xc),
             uVar11 < *(uint *)(lVar2 + 0x10))) {
            psVar22 = (short *)(*(long *)(lVar2 + 0x18) + (long)(int)uVar11 * 8);
          }
        }
      }
      lVar19 = *plVar26;
      if (*psVar22 != -2) {
        psVar20 = psVar22;
      }
      if (lVar19 != 0) {
        if ((*(long *)(lVar19 + 0xb0) != 0) && (*(long *)(*(long *)(lVar19 + 0xb0) + 8) != 0)) {
          if ((*(long *)(lVar19 + 0x488) != 0) && (*(long *)(*(long *)(lVar19 + 0x488) + 8) != 0)) {
            if ((*(long *)(lVar19 + 0x2b0) != 0) && (*(long *)(*(long *)(lVar19 + 0x2b0) + 8) != 0))
            {
              uVar11 = FUN_0277d6c4(psVar20);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
                 ((*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0 &&
                  (iVar12 = FUN_0277d6c4(psVar20), iVar12 != 0xea79)))) {
                local_120[0] = -1.0;
                local_f0 = (float)iVar28 * 5.0 + 5.0;
                local_f8._0_4_ = (float)iVar27 * 5.0 + 5.0;
                uVar14 = FUN_02087eec(param_1,&local_f8,local_120);
                if ((uVar14 & 1) != 0) {
                  if (local_120[0] < fVar29) {
                    local_138 = local_f8._4_4_;
                    local_134 = (float)local_f8;
                    local_b0[0] = *(undefined8 *)psVar20;
                    fVar29 = local_120[0];
                    unaff_s13 = local_f0;
                  }
                  bVar10 = 1;
                }
              }
              plVar26 = (long *)PTR_DAT_04bbbc68;
            }
          }
        }
      }
      if (iVar27 < iVar21 + iVar6 + -1) {
        iVar27 = iVar27 + 1;
      }
      else {
        iVar28 = iVar28 + 1;
        iVar27 = iVar6;
      }
    } while ((iVar6 != iVar27) || (iVar1 != iVar28));
  }
  puVar7 = PTR_DAT_04bb27c0;
  local_f0 = *(float *)PTR_DAT_04bb3238;
  local_f8 = CONCAT44(local_f0,local_f0);
  lVar18 = *(long *)PTR_DAT_04bb27c0;
  uStack_ec = local_f0;
  local_e8 = local_f0;
  uStack_e4 = local_f0;
  local_e0 = local_f0;
  uStack_dc = local_f0;
  local_d8 = local_f0;
  uStack_d4 = local_f0;
  local_d0 = local_f0;
  uStack_cc = local_f0;
  local_c8 = local_f0;
  uStack_c4 = local_f0;
  local_c0 = local_f0;
  uStack_bc = local_f0;
  local_b8 = local_f0;
  uStack_b4 = local_f0;
  if (lVar18 == 0) {
LAB_02088b20:
    bVar17 = 0;
    fVar31 = 3.4028235e+38;
    local_100 = (float)unaff_s15;
    local_fc = unaff_s11;
  }
  else {
    uVar11 = *(uint *)PTR_DAT_04bbc7c0;
    if ((((uVar11 == 0) ||
         (plVar26 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar26 == (long *)0x0)) ||
        ((*(uint *)(plVar26 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar26 + 0x46) != uVar11)) {
      plVar26 = (long *)0x0;
    }
    if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
      plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar18 = *(long *)puVar7;
      iVar21 = (**(code **)(*plVar15 + 0x60))();
      if (iVar21 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_02088970;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02088970:
      uVar11 = 0;
    }
    if (plVar26 == (long *)0x0) goto LAB_02088b20;
    lVar18 = plVar26[0x2a];
    if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
       (iVar21 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar21 != 0)) {
      *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7a8);
    }
    uVar14 = (**(code **)(*plVar26 + 0x20))(plVar26,PTR_DAT_04bbc7a0);
    fVar31 = 3.4028235e+38;
    bVar17 = 0;
    uVar5 = 0;
    if ((int)lVar18 == 1) {
      uVar5 = uVar11;
    }
    local_100 = (float)unaff_s15;
    local_fc = unaff_s11;
    if ((uVar14 & 1) != 0) {
      local_100 = (float)unaff_s15;
      local_fc = unaff_s11;
      if (uVar5 != 0) {
        FUN_013e8b3c(plVar26,&local_f8);
        puVar8 = PTR_DAT_04bb3350;
        fVar31 = 3.4028235e+38;
        bVar17 = 0;
        uVar14 = 0;
        do {
          lVar18 = *(long *)puVar7;
          if (lVar18 != 0) {
            uVar11 = *(uint *)((long)local_b0 +
                              ((-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2) - 0x48));
            if ((((uVar11 == 0) ||
                 (lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                                    ((ulong)(uVar11 >> 0x11) & 0x7ff8)), lVar19 == 0)) ||
                ((*(uint *)(lVar19 + 0x248) >> 1 & 1) != 0)) ||
               (*(uint *)(lVar19 + 0x230) != uVar11)) {
              lVar19 = 0;
            }
            if (*(int *)(lVar18 + 0x288) == 1 || *(int *)(lVar18 + 0x288) == -1) {
              plVar26 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
              lVar18 = *(long *)puVar7;
              iVar21 = (**(code **)(*plVar26 + 0x60))();
              if (iVar21 < 0x11) {
                uVar11 = 1;
              }
              else {
                if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_02088ab4;
                uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_02088ab4:
              uVar11 = 0;
            }
            if (lVar19 != 0) {
              uVar11 = uVar11 ^ 1;
              if (*(int *)(lVar19 + 0x150) != 1) {
                uVar11 = 1;
              }
              if (uVar11 == 0) {
                lVar18 = *(long *)(lVar19 + 0x68);
                local_120[0] = -1.0;
                uVar16 = FUN_02087eec(param_1,lVar18 + 0x278,local_120);
                if ((uVar16 & 1) != 0) {
                  if (local_120[0] < fVar31) {
                    fVar34 = *(float *)(lVar18 + 0x278);
                    bVar17 = 1;
                    unaff_s15 = *(undefined4 *)(lVar18 + 0x27c);
                    unaff_s11 = *(float *)(lVar18 + 0x280);
                    fVar31 = local_120[0];
                  }
                  else {
                    bVar17 = 1;
                  }
                }
              }
            }
          }
          uVar11 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar11;
        } while (uVar11 != 0x12);
        local_100 = (float)unaff_s15;
        local_fc = unaff_s11;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar33;
  puVar7 = PTR_DAT_04bb27c8;
  if (!(bool)(bVar10 | bVar17)) {
    return;
  }
  if (fVar29 <= fVar31) {
    local_104 = local_134;
    local_100 = (float)local_138;
    local_fc = unaff_s13;
    FUN_0124c030(local_120,local_b0);
    iVar21 = FUN_0123db50(auStack_118,local_110);
    if ((8 < iVar21 - 0x23U) || (uVar14 = FUN_0123d890(local_110,0), (uVar14 & 1) != 0)) {
      iVar21 = FUN_0123db50(auStack_118,local_110);
      puVar9 = PTR_DAT_04bbbc78;
      puVar8 = PTR_DAT_04bbbc70;
      if ((0xfffffff8 < iVar21 - 0x12U) &&
         ((local_110 != (uint *)0x0 && (uVar11 = *local_110, uVar11 != 0)))) {
        cVar23 = *PTR_DAT_04bbbc70;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined4 *)(puVar9 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
            uVar11 = *local_110;
          }
          else {
            uVar5 = *(uint *)(puVar9 + 0x4c);
            if (-1 < (int)uVar5) {
              if (((char *)((ulong)uVar5 + (long)local_110) != (char *)0x0) &&
                 (*(char *)((ulong)uVar5 + (long)local_110) != '\0')) {
                fVar30 = 2.5;
                goto LAB_02088d84;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)uVar11;
          if ((puVar24 == (uint *)0x0) || (local_110 == puVar24)) break;
          lVar18 = 0xc;
          if (*(char *)((long)local_110 + (10 - (long)puVar24)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)local_110 + (lVar18 - (long)puVar24);
          if (lVar18 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)local_110 + (8 - (long)puVar24));
          *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar25 = (int *)(lVar18 + 4);
          while (piVar25[-1] != -0xa58ccc9) {
            piVar25 = piVar25 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02088d18;
          }
          iVar21 = 0;
          if (*piVar25 != -1) {
            iVar21 = *piVar25;
          }
          *(int *)(puVar9 + 0x4c) = iVar21;
          uVar11 = *local_110;
          if (uVar11 == 0) break;
        } while( true );
      }
LAB_02088d18:
      iVar21 = FUN_0123db50(auStack_118);
      if ((6 < iVar21 - 0x18U) || (bVar10 = FUN_0124dff0(local_120), bVar10 < 2)) {
        uVar14 = FUN_0123d890(local_110,4);
        if (((uVar14 & 1) == 0) && (uVar14 = FUN_0124dcb0(local_120), (uVar14 & 1) == 0)) {
          iVar21 = FUN_0123db50(auStack_118,local_110);
          fVar30 = 0.0;
          if ((iVar21 - 2U & 0xfffffff9) != 0) goto LAB_02088d84;
        }
        fVar30 = (float)FUN_02201b50(local_b0);
      }
    }
  }
  else {
    local_104 = fVar34;
    fVar30 = (float)FUN_015cb8d4(&local_104,0);
    lVar18 = *(long *)puVar7;
    if (((lVar18 == 0) || (*(long *)(lVar18 + 0xa8) == 0)) || (*(char *)(lVar18 + 0x11c8) != '\0'))
    {
      fVar30 = fVar30 - -500.0;
    }
    else {
      fVar29 = (float)FUN_0093a950(lVar18 + 0x28,&local_104,0);
      fVar30 = fVar30 - fVar29;
    }
  }
LAB_02088d84:
  lVar18 = *(long *)puVar7;
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0xa8) == 0)) || (*(char *)(lVar18 + 0x11c8) != '\0')) {
    local_100 = -500.0;
  }
  else {
    local_100 = (float)FUN_0093a950(lVar18 + 0x28,&local_104,0);
  }
  uVar14 = (ulong)*(uint *)(param_1 + 0x294);
  pfVar13 = (float *)(param_1 + 0x10);
  local_100 = fVar30 + local_100;
  pfVar3 = pfVar13 + uVar14 * 0x20;
  if (4 < *(uint *)(param_1 + 0x294)) {
    pfVar3 = pfVar13;
  }
  local_120[0] = *pfVar3;
  if (local_120[0] != 2.8026e-45) {
    uVar16 = FUN_02085a50(param_1,2,0);
    uVar14 = (ulong)*(uint *)(param_1 + 0x294);
    if ((uVar16 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x801) = 1;
      pfVar3 = pfVar13 + uVar14 * 0x20;
      if (4 < *(uint *)(param_1 + 0x294)) {
        pfVar3 = pfVar13;
      }
      pfVar3[3] = local_104;
      pfVar3[4] = local_100;
      pfVar3[5] = local_fc;
      uVar14 = (ulong)*(uint *)(param_1 + 0x294);
    }
  }
  pfVar3 = pfVar13 + uVar14 * 0x20;
  if (4 < (uint)uVar14) {
    pfVar3 = pfVar13;
  }
  pfVar3[3] = local_104;
  pfVar3[4] = local_100;
  pfVar3[5] = local_fc;
  return;
}

