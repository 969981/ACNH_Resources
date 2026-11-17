
void FUN_02ac5668(long param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined2 uVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  if ((((*(byte *)(param_1 + 0x290) >> 1 & 1) != 0) && (*(short *)(param_1 + 0x3c0) != -2)) &&
     (*(char *)(param_1 + 0x4b0) != '\0')) {
    if (*(char *)(param_1 + 0x344) == '\0') {
      *(undefined1 *)(param_1 + 0x344) = 1;
    }
    *(short *)(param_1 + 0x3a4) = *(short *)(param_1 + 0x3c0);
    *(undefined2 *)(param_1 + 0x3a6) = *(undefined2 *)(param_1 + 0x3c2);
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x3cc);
    *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x3c4);
    *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_1 + 0x3d0);
    FUN_0076b954(param_1 + 0x2f0,param_1 + 0x3c0,param_1 + 0x3d8,1,0,0,0,0,0);
    if (*(short *)(param_1 + 0x4c0) != -2) {
      fVar25 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4d8);
      fVar26 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4d4);
      fVar23 = *(float *)(param_1 + 0x4d0) - *(float *)(param_1 + 0x4dc);
      fVar24 = *(float *)(param_1 + 0x4f0);
      fVar22 = *(float *)(param_1 + 0x4f4);
      fVar21 = *(float *)(param_1 + 0x4f8);
      bVar10 = false;
      bVar11 = false;
      if (0.2 < SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar23 * fVar23)) {
        bVar10 = false;
        bVar11 = true;
        if (!NAN(fVar24) && !NAN(fVar22)) {
          bVar10 = fVar24 == fVar22;
          bVar11 = fVar22 <= fVar24;
        }
      }
      if (bVar11 && !bVar10) {
        *(float *)(param_1 + 0x4d0) = *(float *)(param_1 + 0x4e8) + *(float *)(param_1 + 0x4d0);
        *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4e0) + *(float *)(param_1 + 0x4c8);
        *(float *)(param_1 + 0x4cc) = *(float *)(param_1 + 0x4cc) + *(float *)(param_1 + 0x4e4);
        *(float *)(param_1 + 0x4e4) = *(float *)(param_1 + 0x4e4) - *(float *)(param_1 + 0x4ec);
        if (1.0 <= fVar21) {
          if (1.0 < fVar21) {
            fVar23 = fVar21 - 1.0 / fVar24;
            bVar10 = false;
            bVar11 = false;
            if (fVar23 <= fVar21) {
              bVar10 = false;
              bVar11 = true;
              if (!NAN(fVar23)) {
                bVar10 = fVar23 == 1.0;
                bVar11 = 1.0 <= fVar23;
              }
            }
            fVar21 = 1.0;
            if (bVar11 && !bVar10) {
              fVar21 = fVar23;
            }
            goto LAB_02ac57e0;
          }
        }
        else {
          fVar23 = 1.0 / fVar24 + fVar21;
          bVar10 = false;
          bVar11 = false;
          if (fVar21 <= fVar23) {
            bVar10 = false;
            bVar11 = true;
            if (!NAN(fVar23)) {
              bVar10 = fVar23 < 1.0;
              bVar11 = false;
            }
          }
          fVar21 = 1.0;
          if (bVar10 != bVar11) {
            fVar21 = fVar23;
          }
LAB_02ac57e0:
          *(float *)(param_1 + 0x4f8) = fVar21;
        }
        *(float *)(param_1 + 0x4f4) = fVar22 + 1.0;
      }
      iVar12 = *(int *)(param_1 + 0x500);
      bVar10 = true;
      if ((*(int *)(param_1 + 0x504) == iVar12) && (*(int *)(param_1 + 0x504) != 0)) {
        psVar1 = (short *)(param_1 + 0x4c0);
        FUN_012253d0(fVar21,0,0,0,0,*(undefined8 *)PTR_DAT_04bb4778,psVar1,psVar1,
                     (undefined8 *)(param_1 + 0x4c8),1);
        bVar10 = *psVar1 != -2;
        iVar12 = *(int *)(param_1 + 0x500);
      }
      if (((iVar12 == DAT_05610120) && (bVar10)) &&
         ((fVar21 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4d4),
          fVar22 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4d8),
          fVar23 = *(float *)(param_1 + 0x4d0) - *(float *)(param_1 + 0x4dc),
          0.2 < SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23) &&
          (*(float *)(param_1 + 0x4f4) < *(float *)(param_1 + 0x4f0))))) goto LAB_02ac5a48;
    }
    local_44 = 2;
    FUN_0076c08c(param_1 + 0x2f0,&local_44);
    *(undefined1 *)(param_1 + 0x4b0) = 0;
    puVar8 = PTR_DAT_04bb27c0;
    lVar17 = *(long *)PTR_DAT_04bb27c0;
    if (lVar17 != 0) {
      uVar13 = *(uint *)(param_1 + ((ulong)*(uint *)(param_1 + 0x300) & 1) * 0x20 + 0x318);
      if ((((uVar13 == 0) ||
           (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
          ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar13)) {
        plVar20 = (long *)0x0;
      }
      if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
        plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar17 = *(long *)puVar8;
        iVar12 = (**(code **)(*plVar15 + 0x60))();
        if (iVar12 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_02ac5984;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02ac5984:
        uVar13 = 0;
      }
      if (plVar20 != (long *)0x0) {
        lVar17 = plVar20[0x2a];
        if (((*PTR_DAT_04bc4710 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04bc4710), iVar12 != 0)) {
          *(undefined **)PTR_DAT_04bc4708 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4710);
        }
        uVar16 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bc4708);
        uVar14 = 0;
        if ((int)lVar17 == 1) {
          uVar14 = uVar13;
        }
        if (((uVar16 & 1) != 0) && (uVar14 != 0)) {
          local_44 = 1;
          *(undefined4 *)((long)plVar20 + 0x27c) = 1;
          iVar12 = DAT_05610120;
          puVar8 = PTR_DAT_04bb37e0;
          if (*(int *)(param_1 + 0x500) == DAT_05610120) {
            *(undefined8 *)(param_1 + 0x4c8) = 0;
            *(undefined8 *)(param_1 + 0x4d0) = 0;
            puVar9 = PTR_DAT_04bb3238;
            *(undefined1 *)(param_1 + 0x4fc) = 0xff;
            *(undefined4 *)(param_1 + 0x4f8) = 0;
            uVar7 = *(undefined4 *)puVar8;
            uVar4 = *(undefined4 *)(puVar8 + 4);
            uVar5 = *(undefined4 *)puVar9;
            *(undefined8 *)(param_1 + 0x4d8) = 0;
            *(undefined8 *)(param_1 + 0x4e0) = 0;
            *(undefined8 *)(param_1 + 0x4e8) = 0;
            *(undefined8 *)(param_1 + 0x4f0) = 0;
            *(undefined4 *)(param_1 + 0x4c0) = uVar7;
            *(undefined4 *)(param_1 + 0x4c4) = uVar4;
            *(undefined4 *)(param_1 + 0x500) = uVar5;
            if (*(int *)(param_1 + 0x504) == iVar12) {
              *(undefined4 *)(param_1 + 0x504) = uVar5;
            }
          }
        }
      }
    }
  }
LAB_02ac5a48:
  lVar17 = *(long *)(param_1 + 0x2e0);
  if (lVar17 != 0) {
    if (-1 < *(int *)(lVar17 + 0x58)) {
      if (*(int *)(lVar17 + 0x18) != *(int *)(lVar17 + 0x58)) {
        FUN_03ebb160(lVar17 + 0x10);
      }
      *(undefined4 *)(lVar17 + 0x58) = 0xffffffff;
    }
    FUN_03ebb268(lVar17 + 0x10);
  }
  if (((((*(byte *)(param_1 + 0x290) >> 2 & 1) == 0) ||
       (lVar17 = *(long *)(param_1 + 0x2e0), lVar17 == 0)) || (*(int *)(lVar17 + 0xc0) != 0)) ||
     ((*(int *)(lVar17 + 0xa4) != 0 || (*(char *)(lVar17 + 0xa9) != '\0')))) goto LAB_02ac5a98;
  bVar2 = 0;
  if (*(int *)(lVar17 + 0x18) == 0) {
    bVar2 = *(byte *)(lVar17 + 8) >> 1 & 1;
  }
  if (((*(int *)(param_1 + 0x17c) == 2) || (local_44 = FUN_02a6cb24(param_1 + 0x298), local_44 != 0)
      ) || (local_48 = FUN_02ac52d0(param_1), local_48 != 4)) {
    uVar13 = 0;
  }
  else {
    local_4c = 0;
    uVar16 = FUN_02b67620(&local_4c,*(undefined4 *)(param_1 + 0x2a0));
    uVar13 = 0;
    if ((uVar16 & 1) != 0) {
      uVar13 = FUN_02b5a430();
      uVar13 = uVar13 ^ 1;
    }
  }
  uVar14 = FUN_02ac5574(param_1);
  if (bVar2 == 0) {
    if ((uVar13 & uVar14 & 1) == 0) goto LAB_02ac5a98;
    lVar17 = *(long *)(param_1 + 0x2e0);
    iVar12 = *(int *)(lVar17 + 0xc0);
    iVar6 = *(int *)(lVar17 + 0xb8);
    if (iVar6 <= iVar12) goto LAB_02ac5a98;
    *(int *)(lVar17 + 0xc0) = iVar12 + 1;
    iVar12 = *(int *)(lVar17 + 0xbc) + iVar12;
    iVar3 = 0;
    if (iVar6 <= iVar12) {
      iVar3 = iVar6;
    }
    uVar7 = *(undefined4 *)PTR_DAT_04bb3238;
    puVar18 = (undefined4 *)(*(long *)(lVar17 + 0xb0) + (long)(iVar12 - iVar3) * 0xc);
    uVar19 = 0x101;
    *puVar18 = 0;
    puVar18[1] = uVar7;
  }
  else {
    local_44 = FUN_02a6cb24(param_1 + 0x298);
    if (local_44 == 0) {
      local_48 = 0;
      uVar16 = FUN_02b67620(&local_48,*(undefined4 *)(param_1 + 0x2a0));
      if (((uVar16 & 1) == 0) ||
         ((*(int *)(param_1 + 0x2c0) != -1 && (iVar12 = FUN_021d9f50(local_48), iVar12 != 2))))
      goto LAB_02ac5ce4;
      if (((*(int *)(param_1 + 0x2c4) == -1) ||
          (iVar12 = FUN_021d9f50(local_48), (uVar13 & uVar14 & 1) != 0)) || (iVar12 == 2))
      goto LAB_02ac5a98;
    }
    else {
LAB_02ac5ce4:
      if ((uVar13 & uVar14 & 1) != 0) goto LAB_02ac5a98;
    }
    lVar17 = *(long *)(param_1 + 0x2e0);
    iVar12 = *(int *)(lVar17 + 0xc0);
    iVar6 = *(int *)(lVar17 + 0xb8);
    if (iVar6 <= iVar12) goto LAB_02ac5a98;
    *(int *)(lVar17 + 0xc0) = iVar12 + 1;
    iVar12 = *(int *)(lVar17 + 0xbc) + iVar12;
    iVar3 = 0;
    if (iVar6 <= iVar12) {
      iVar3 = iVar6;
    }
    uVar7 = *(undefined4 *)PTR_DAT_04bb3238;
    puVar18 = (undefined4 *)(*(long *)(lVar17 + 0xb0) + (long)(iVar12 - iVar3) * 0xc);
    *puVar18 = 1;
    puVar18[1] = uVar7;
    uVar19 = 0x100;
  }
  *(undefined2 *)(puVar18 + 2) = uVar19;
LAB_02ac5a98:
  puVar8 = PTR_DAT_04bc44f0;
  if (((*(byte *)(param_1 + 0x290) & 1) == 0) &&
     (plVar20 = *(long **)(param_1 + 0x288), plVar20 != (long *)0x0)) {
    if (((*PTR_DAT_04bc44f0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bc44f0), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bc44e8 = PTR_DAT_04bc44f8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc44f0);
    }
    puVar9 = PTR_DAT_04bc44e8;
    uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,PTR_DAT_04bc44e8);
    if ((uVar16 & 1) != 0) {
      bVar2 = 0;
      if (*(int *)(*(long *)(param_1 + 0x2e0) + 0x18) == 0) {
        bVar2 = *(byte *)(*(long *)(param_1 + 0x2e0) + 8) >> 1 & 1;
      }
      if (((char)plVar20[0x70] == '\0') && (bVar2 != 0)) {
        FUN_02ac53d4(param_1);
      }
      else {
        if ((char)plVar20[0x70] == '\0') {
          bVar2 = 1;
        }
        if ((bVar2 == 0) && (plVar20 = *(long **)(param_1 + 0x288), plVar20 != (long *)0x0)) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bc44f0), iVar12 != 0))
          {
            *(undefined **)puVar9 = PTR_DAT_04bc44f8 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc44f0);
          }
          uVar16 = (**(code **)(*plVar20 + 0x10))(plVar20,PTR_DAT_04bc44e8);
          if ((uVar16 & 1) != 0) {
            *(undefined1 *)(plVar20 + 0x70) = 0;
            *(undefined8 *)((long)plVar20 + 0x394) = 0;
            *(undefined8 *)((long)plVar20 + 0x39c) = 0;
            *(undefined8 *)((long)plVar20 + 900) = 0x7f7fffff7f7fffff;
            *(undefined8 *)((long)plVar20 + 0x3a4) = 0;
            *(undefined8 *)((long)plVar20 + 0x3ac) = 0;
            *(undefined8 *)((long)plVar20 + 0x3b4) = 0;
            *(undefined8 *)((long)plVar20 + 0x38c) = 0xff7fffffff7fffff;
          }
        }
      }
    }
  }
  return;
}

