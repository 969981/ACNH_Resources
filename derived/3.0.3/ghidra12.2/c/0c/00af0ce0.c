
void FUN_00af0ce0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined1 *__src;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 auStack_74 [31];
  undefined1 local_55;
  uint local_48 [2];
  
  local_55 = 0;
  plVar10 = (long *)(param_1 + 0xf0);
  local_78 = 0x20;
  local_88 = PTR_DAT_04bb2a08 + 0x10;
  local_80 = auStack_74;
  (**(code **)(*plVar10 + 0x18))(plVar10);
  __src = *(undefined1 **)(param_1 + 0xf8);
  if (auStack_74 != __src) {
    (**(code **)(*(long *)(param_1 + 0xf0) + 0x18))(plVar10);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xf8) + lVar9) == '\0') goto LAB_00af0da0;
      lVar4 = *(long *)(param_1 + 0xf8) + lVar9;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_00af0da0;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_00af0da0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_00af0da0:
    iVar6 = (int)lVar9;
    if (local_78 <= (int)lVar9) {
      iVar6 = local_78 + -1;
    }
    memcpy(auStack_74,__src,(long)iVar6);
    auStack_74[iVar6] = 0;
  }
  local_88 = PTR_DAT_04bb2028 + 0x10;
  lVar9 = FUN_02917a1c(&local_88);
  if (lVar9 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x48);
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    if ((plVar10 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0), (uVar7 & 1) != 0)) {
      if (plVar10[0x14] != 0) {
        *(undefined1 *)(plVar10[0x14] + 0x4f41) = 0;
      }
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(lVar9 + 0x2c);
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x20));
      uVar8 = (uint)(long)(fVar11 * 11930465.0);
      *(uint *)(param_1 + 0xc4) = uVar8;
      puVar5 = PTR_DAT_04bb2d00;
      fVar18 = *(float *)(lVar9 + 0x10);
      fVar20 = *(float *)(lVar9 + 0x14);
      fVar23 = *(float *)(param_1 + 0x148);
      local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
      local_48[1] = 0;
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x20));
      fVar15 = (float)(uVar8 & 0xffffff) * 5.9604645e-08;
      pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                        ((ulong)(long)(fVar12 * 11930465.0) >> 0x18 & 0xff) * 0x10);
      fVar13 = *(float *)(lVar9 + 0x24) + *(float *)(lVar9 + 0x1c) * 0.5 + *(float *)(lVar9 + 0x28);
      fVar22 = pfVar1[2];
      fVar24 = pfVar1[3];
      pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                        ((ulong)(long)(fVar11 * 11930465.0) >> 0x18 & 0xff) * 0x10);
      pfVar3 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar8 + 0xc0000000 >> 0x18) * 0x10);
      fVar11 = (float)((uint)(long)(fVar12 * 11930465.0) & 0xffffff) * 5.9604645e-08;
      fVar14 = *pfVar3 + fVar15 * pfVar3[1];
      fVar16 = pfVar3[2] + fVar15 * pfVar3[3];
      fVar17 = fVar14 * 0.0;
      fVar12 = (float)*(int *)(param_1 + 0x120) * 5.0;
      fVar19 = *pfVar2 + fVar15 * pfVar2[1];
      fVar15 = pfVar2[2] + fVar15 * pfVar2[3];
      fVar21 = fVar19 * 0.0;
      *(float *)(param_1 + 0xb8) =
           fVar17 * 0.0 + fVar16 * 0.0 + fVar23 * (fVar14 + 0.0) + 0.0 +
           *(float *)(lVar9 + 0xc) + fVar13 * (*pfVar1 + fVar11 * pfVar1[1]) +
           fVar21 * 0.0 + fVar15 * 0.0 + fVar12 * (fVar19 + 0.0);
      *(float *)(param_1 + 0xbc) =
           (fVar17 * 0.0 + 1.0) * 0.0 + fVar16 * 0.0 * 0.0 + fVar23 * fVar17 + 0.0 +
           fVar18 + 0.0 + (fVar21 * 0.0 + 1.0) * 0.0 + fVar15 * 0.0 * 0.0 + fVar12 * fVar21;
      *(float *)(param_1 + 0xc0) =
           (fVar16 * 0.0 * 0.0 - fVar14 * 0.0) + fVar23 * fVar16 + 0.0 +
           fVar13 * (fVar22 + fVar11 * fVar24) + fVar20 +
           (fVar15 * 0.0 * 0.0 - fVar19 * 0.0) + fVar12 * fVar15;
      FUN_01e5a930(0x40000000,plVar10[0x76],0x13,PTR_DAT_04bb2150,&local_88,local_48 + 1,
                   PTR_DAT_04bc1600,6);
      if ((*(uint *)(param_1 + 200) & 0xfffffffe) == 4) {
        fVar11 = *(float *)(param_1 + 0xb8);
        fVar13 = *(float *)(param_1 + 0xbc);
        fVar12 = *(float *)(param_1 + 0xc0);
        local_48[0] = *(uint *)(param_1 + 0xc4);
      }
      else {
        local_48[0] = *(uint *)(param_1 + 0xc4);
        fVar12 = fVar12 + 30.0;
        pfVar1 = (float *)(puVar5 + ((ulong)(local_48[0] >> 0x14) & 0xff0));
        fVar11 = (float)(local_48[0] & 0xffffff) * 5.9604645e-08;
        fVar15 = *pfVar1 + fVar11 * pfVar1[1];
        fVar14 = pfVar1[2] + fVar11 * pfVar1[3];
        fVar13 = fVar15 * 0.0;
        fVar11 = *(float *)(param_1 + 0xb8) +
                 ((fVar13 * 0.0 + fVar14 * 0.0) - fVar12 * (fVar15 + 0.0));
        fVar13 = *(float *)(param_1 + 0xbc) +
                 (((fVar13 * 0.0 + 1.0) * 0.0 + fVar14 * 0.0 * 0.0) - fVar12 * fVar13);
        fVar12 = *(float *)(param_1 + 0xc0) +
                 ((fVar14 * 0.0 * 0.0 - fVar15 * 0.0) - fVar12 * fVar14);
      }
      local_88 = (undefined *)CONCAT44(fVar13,fVar11);
      local_80 = (undefined1 *)CONCAT44(local_80._4_4_,fVar12);
      FUN_01e39778(plVar10,&local_88,local_48,0);
      *(undefined4 *)(param_1 + 0xb4) = 2;
    }
  }
  return;
}

