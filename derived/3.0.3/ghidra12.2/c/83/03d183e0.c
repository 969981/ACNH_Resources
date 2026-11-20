
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03d183e0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  ulong local_120;
  undefined1 local_c0 [48];
  
  uVar17 = _UNK_04102888;
  uVar16 = _DAT_04102880;
  uVar15 = _UNK_041023d8;
  uVar14 = _DAT_041023d0;
  uVar20 = _UNK_04102208;
  uVar5 = _DAT_04102200;
  param_1[1] = _UNK_04102208;
  *param_1 = uVar5;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  param_1[5] = uVar15;
  param_1[4] = uVar14;
  lVar8 = *(long *)(*(long *)(param_2 + 0xc9) + 8);
  lVar10 = *(long *)(*(long *)(lVar8 + 0x28) + 0x28);
  local_120 = 0;
  lVar11 = param_2;
  do {
    bVar2 = *(byte *)(lVar11 + 0x58);
    if ((bVar2 >> 6 & 1) != 0) {
      uVar1 = *(uint *)(*(long *)(*(long *)(lVar8 + 8) + 0x50) + 0x218);
      if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)uVar1 * 8);
      if (((*PTR_DAT_04bbdb10 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbdb10), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbdb08 = PTR_DAT_04bbdb18 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdb10);
      }
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else {
        uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bbdb08);
        if ((uVar4 & 1) == 0) {
          plVar9 = (long *)0x0;
        }
      }
      uVar5 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x110))(*(long **)PTR_DAT_04bb26b8,plVar9);
      FUN_007535b4(local_c0,uVar5);
      fVar37 = local_c0._0_4_;
      fVar18 = (float)*(undefined8 *)(param_2 + 0x70);
      fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
      fVar21 = (float)*(undefined8 *)(param_2 + 0x78);
      fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
      fVar23 = local_c0._16_4_;
      fVar38 = local_c0._4_4_;
      fVar25 = (float)*(undefined8 *)(param_2 + 0x80);
      fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
      fVar31 = (float)*(undefined8 *)(param_2 + 0x88);
      fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
      fVar39 = local_c0._32_4_;
      fVar12 = local_c0._20_4_;
      fVar40 = local_c0._36_4_;
      fVar42 = local_c0._8_4_;
      fVar26 = (float)*(undefined8 *)(param_2 + 0x90);
      fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
      fVar32 = (float)*(undefined8 *)(param_2 + 0x98);
      fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20);
      fVar13 = local_c0._24_4_;
      fVar41 = local_c0._40_4_;
      param_1[1] = CONCAT44(local_c0._12_4_ + fVar22 * fVar37 + fVar34 * fVar38 + fVar35 * fVar42,
                            fVar21 * fVar37 + fVar31 * fVar38 + fVar32 * fVar42 + 0.0);
      *param_1 = CONCAT44(fVar19 * fVar37 + fVar28 * fVar38 + fVar30 * fVar42 + 0.0,
                          fVar18 * fVar37 + fVar25 * fVar38 + fVar26 * fVar42 + 0.0);
      param_1[3] = CONCAT44(local_c0._28_4_ + fVar22 * fVar23 + fVar34 * fVar12 + fVar35 * fVar13,
                            fVar21 * fVar23 + fVar31 * fVar12 + fVar32 * fVar13 + 0.0);
      param_1[2] = CONCAT44(fVar19 * fVar23 + fVar28 * fVar12 + fVar30 * fVar13 + 0.0,
                            fVar18 * fVar23 + fVar25 * fVar12 + fVar26 * fVar13 + 0.0);
      param_1[5] = CONCAT44(local_c0._44_4_ + fVar22 * fVar39 + fVar34 * fVar40 + fVar35 * fVar41,
                            fVar21 * fVar39 + fVar31 * fVar40 + fVar32 * fVar41 + 0.0);
      param_1[4] = CONCAT44(fVar19 * fVar39 + fVar28 * fVar40 + fVar30 * fVar41 + 0.0,
                            fVar18 * fVar39 + fVar25 * fVar40 + fVar26 * fVar41 + 0.0);
      return;
    }
    if ((bVar2 >> 5 & 1) == 0) {
      uVar29 = (ulong)(uint)*(float *)(lVar11 + 0x48);
      fVar37 = *(float *)(lVar11 + 0x4c);
      if (((bVar2 >> 2 & 1) != 0) && ((*(byte *)(lVar10 + 0x18e) & 1) != 0)) {
        fVar37 = fVar37 * *(float *)(lVar10 + 0xb4);
        uVar29 = (ulong)(uint)(*(float *)(lVar11 + 0x48) * *(float *)(lVar10 + 0xb0));
      }
      fVar42 = *(float *)(lVar11 + 0x30);
      fVar38 = *(float *)(lVar11 + 0x34);
      lVar7 = *(long *)(lVar11 + 0x18);
      if (lVar7 != 0) {
        bVar2 = *(byte *)(lVar11 + 0x5b) >> 4 & 3;
        if (bVar2 == 2) {
          fVar23 = *(float *)(lVar7 + 0x50) * 0.5;
LAB_03d18548:
          fVar42 = fVar42 + fVar23;
        }
        else if (bVar2 == 1) {
          fVar23 = *(float *)(lVar7 + 0x50) * -0.5;
          goto LAB_03d18548;
        }
        bVar2 = *(byte *)(lVar11 + 0x5b) >> 6;
        if (bVar2 == 2) {
          fVar23 = *(float *)(lVar7 + 0x54) * -0.5;
        }
        else {
          if (bVar2 != 1) goto LAB_03d18578;
          fVar23 = *(float *)(lVar7 + 0x54) * 0.5;
        }
        fVar38 = fVar38 + fVar23;
      }
LAB_03d18578:
      uVar43 = *(undefined4 *)(lVar11 + 0x38);
      if (((*(float *)(lVar11 + 0x3c) == 0.0) && (*(float *)(lVar11 + 0x40) == 0.0)) &&
         (*(float *)(lVar11 + 0x44) == 0.0)) {
        uVar24 = (ulong)(uint)fVar37 << 0x20;
        uVar36 = CONCAT44(uVar43,0x3f800000);
        uVar33 = (ulong)(uint)fVar42 << 0x20;
        uVar27 = (ulong)(uint)fVar38 << 0x20;
        uVar4 = local_120;
      }
      else {
        fVar39 = *(float *)(lVar11 + 0x3c) * 0.017453292;
        fVar40 = *(float *)(lVar11 + 0x40) * 0.017453292;
        fVar41 = *(float *)(lVar11 + 0x44) * 0.017453292;
        fVar23 = sinf(fVar39);
        fVar12 = sinf(fVar40);
        fVar13 = sinf(fVar41);
        fVar39 = cosf(fVar39);
        fVar40 = cosf(fVar40);
        fVar41 = cosf(fVar41);
        fVar18 = (float)uVar29;
        uVar29 = CONCAT44(fVar37 * (fVar23 * fVar12 * fVar41 - fVar13 * fVar39),
                          fVar18 * fVar40 * fVar41);
        uVar24 = CONCAT44(fVar37 * (fVar39 * fVar41 + fVar13 * fVar23 * fVar12),
                          fVar18 * fVar13 * fVar40);
        uVar33 = CONCAT44(fVar42,fVar23 * fVar13 + fVar12 * fVar39 * fVar41);
        uVar27 = CONCAT44(fVar38,-(fVar23 * fVar41) + fVar12 * fVar13 * fVar39);
        uVar20 = param_1[1];
        uVar5 = *param_1;
        uVar17 = param_1[3];
        uVar16 = param_1[2];
        uVar4 = CONCAT44(fVar37 * fVar23 * fVar40,-(fVar12 * fVar18));
        uVar36 = CONCAT44(uVar43,fVar39 * fVar40);
        uVar15 = param_1[5];
        uVar14 = param_1[4];
      }
    }
    else {
      puVar6 = *(ulong **)(lVar11 + 0xa0);
      uVar36 = puVar6[5];
      uVar4 = puVar6[4];
      uVar33 = puVar6[1];
      uVar29 = *puVar6;
      uVar27 = puVar6[3];
      uVar24 = puVar6[2];
    }
    fVar28 = (float)uVar29;
    fVar41 = (float)uVar5;
    fVar18 = (float)((ulong)uVar5 >> 0x20);
    fVar19 = (float)uVar20;
    fVar21 = (float)((ulong)uVar20 >> 0x20);
    fVar30 = (float)(uVar29 >> 0x20);
    fVar12 = (float)uVar16;
    fVar13 = (float)((ulong)uVar16 >> 0x20);
    fVar39 = (float)uVar17;
    fVar40 = (float)((ulong)uVar17 >> 0x20);
    fVar31 = (float)uVar33;
    fVar37 = (float)uVar14;
    fVar38 = (float)((ulong)uVar14 >> 0x20);
    fVar42 = (float)uVar15;
    fVar23 = (float)((ulong)uVar15 >> 0x20);
    fVar22 = (float)uVar24;
    fVar25 = (float)(uVar24 >> 0x20);
    fVar32 = (float)uVar4;
    fVar34 = (float)(uVar4 >> 0x20);
    fVar26 = (float)uVar27;
    fVar35 = (float)uVar36;
    uVar5 = CONCAT44(fVar18 * fVar28 + fVar13 * fVar30 + fVar38 * fVar31 + 0.0,
                     fVar41 * fVar28 + fVar12 * fVar30 + fVar37 * fVar31 + 0.0);
    uVar20 = CONCAT44((float)(uVar33 >> 0x20) + fVar21 * fVar28 + fVar40 * fVar30 + fVar23 * fVar31,
                      fVar19 * fVar28 + fVar39 * fVar30 + fVar42 * fVar31 + 0.0);
    uVar16 = CONCAT44(fVar18 * fVar22 + fVar13 * fVar25 + fVar38 * fVar26 + 0.0,
                      fVar41 * fVar22 + fVar12 * fVar25 + fVar37 * fVar26 + 0.0);
    uVar17 = CONCAT44((float)(uVar27 >> 0x20) + fVar21 * fVar22 + fVar40 * fVar25 + fVar23 * fVar26,
                      fVar19 * fVar22 + fVar39 * fVar25 + fVar42 * fVar26 + 0.0);
    param_1[1] = uVar20;
    *param_1 = uVar5;
    param_1[3] = uVar17;
    param_1[2] = uVar16;
    uVar14 = CONCAT44(fVar18 * fVar32 + fVar13 * fVar34 + fVar38 * fVar35 + 0.0,
                      fVar41 * fVar32 + fVar12 * fVar34 + fVar37 * fVar35 + 0.0);
    uVar15 = CONCAT44((float)(uVar36 >> 0x20) + fVar21 * fVar32 + fVar40 * fVar34 + fVar23 * fVar35,
                      fVar19 * fVar32 + fVar39 * fVar34 + fVar42 * fVar35 + 0.0);
    param_1[5] = uVar15;
    param_1[4] = uVar14;
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      return;
    }
  } while( true );
}

