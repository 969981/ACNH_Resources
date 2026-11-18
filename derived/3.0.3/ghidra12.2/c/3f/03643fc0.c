
void FUN_03643fc0(long param_1,short *param_2,uint param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar23;
  undefined8 uVar20;
  short sVar22;
  short sVar24;
  long lVar21;
  undefined8 uVar25;
  short sVar27;
  short sVar28;
  undefined8 uVar26;
  short sVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  psVar10 = (short *)(param_1 + 0x45f0);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x78) != param_3) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    uVar3 = *(uint *)(param_1 + 0x78);
  }
  if (uVar3 < 0x1000) {
    iVar19 = *(int *)(param_1 + 0x46e8);
  }
  else {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    iVar19 = *(int *)(param_1 + 0x46e8);
  }
  if (iVar19 == 0) {
    if (param_3 != 0) {
      uVar8 = (ulong)param_3;
      psVar10 = (short *)(param_1 + 0xfc);
      do {
        iVar19 = (int)*param_2 + (*psVar10 * 0x5d >> 8);
        if (0x7ffe < iVar19) {
          iVar19 = 0x7fff;
        }
        if (iVar19 < -0x7fff) {
          iVar19 = -0x8000;
        }
        uVar8 = uVar8 - 1;
        *psVar10 = (short)iVar19;
        psVar10 = psVar10 + 1;
        param_2 = param_2 + 1;
      } while (uVar8 != 0);
    }
  }
  else if (iVar19 == 1) {
    if (param_3 != 0) {
      uVar8 = (ulong)param_3;
      psVar9 = (short *)(param_1 + 0xfc);
      do {
        sVar13 = *param_2;
        if (*(int *)(param_1 + 0x46ec) == 2) {
          iVar19 = (0x8000 - *(int *)(param_1 + 0x46e4)) * (*psVar9 * 0x5d >> 8) +
                   (*(int *)(param_1 + 0x46e0) >> 0xf) * *(int *)(param_1 + 0x46e4);
          *(int *)(param_1 + 0x46e0) = iVar19;
        }
        else {
          sVar14 = (short)((uint)(*psVar9 * 0x5d) >> 8);
          if (*(char *)(param_1 + 0x46d4) != '\0') {
            *psVar10 = sVar14;
            *(short *)(param_1 + 0x45f2) = sVar14;
            *(short *)(param_1 + 0x45f4) = sVar14;
            *(short *)(param_1 + 0x45f6) = sVar14;
            *(short *)(param_1 + 0x45f8) = sVar14;
            *(short *)(param_1 + 0x45fa) = sVar14;
            *(short *)(param_1 + 0x45fc) = sVar14;
            *(short *)(param_1 + 0x45fe) = sVar14;
            *(short *)(param_1 + 0x4600) = sVar14;
            *(short *)(param_1 + 0x4602) = sVar14;
            *(short *)(param_1 + 0x4604) = sVar14;
            *(short *)(param_1 + 0x4606) = sVar14;
            *(short *)(param_1 + 0x4608) = sVar14;
            *(short *)(param_1 + 0x460a) = sVar14;
            *(short *)(param_1 + 0x460c) = sVar14;
            *(short *)(param_1 + 0x460e) = sVar14;
            *(undefined1 *)(param_1 + 0x46d4) = 0;
          }
          psVar10[*(uint *)(param_1 + 0x46d0)] = sVar14;
          uVar3 = *(int *)(param_1 + 0x46d0) + 1U & 0xf;
          uVar25 = *(undefined8 *)(param_1 + 0x45f8);
          uVar20 = *(undefined8 *)psVar10;
          uVar30 = *(undefined8 *)(param_1 + 0x4608);
          uVar26 = *(undefined8 *)(param_1 + 0x4600);
          *(uint *)(param_1 + 0x46d0) = uVar3;
          puVar12 = (undefined8 *)(param_1 + 0x4690 + (ulong)uVar3 * -4);
          iVar19 = (int)*puVar12 * (int)(short)uVar20 + (int)puVar12[2] * (int)(short)uVar25 +
                   (int)puVar12[4] * (int)(short)uVar26 + (int)puVar12[6] * (int)(short)uVar30 +
                   (int)((ulong)*puVar12 >> 0x20) * (int)(short)((ulong)uVar20 >> 0x10) +
                   (int)((ulong)puVar12[2] >> 0x20) * (int)(short)((ulong)uVar25 >> 0x10) +
                   (int)((ulong)puVar12[4] >> 0x20) * (int)(short)((ulong)uVar26 >> 0x10) +
                   (int)((ulong)puVar12[6] >> 0x20) * (int)(short)((ulong)uVar30 >> 0x10) +
                   (int)puVar12[1] * (int)(short)((ulong)uVar20 >> 0x20) +
                   (int)puVar12[3] * (int)(short)((ulong)uVar25 >> 0x20) +
                   (int)puVar12[5] * (int)(short)((ulong)uVar26 >> 0x20) +
                   (int)puVar12[7] * (int)(short)((ulong)uVar30 >> 0x20) +
                   (int)((ulong)puVar12[1] >> 0x20) * (int)(short)((ulong)uVar20 >> 0x30) +
                   (int)((ulong)puVar12[3] >> 0x20) * (int)(short)((ulong)uVar25 >> 0x30) +
                   (int)((ulong)puVar12[5] >> 0x20) * (int)(short)((ulong)uVar26 >> 0x30) +
                   (int)((ulong)puVar12[7] >> 0x20) * (int)(short)((ulong)uVar30 >> 0x30);
        }
        iVar19 = iVar19 >> 0xf;
        if (iVar19 < -0x7fff) {
          iVar19 = -0x8000;
        }
        if (0x7ffe < iVar19) {
          iVar19 = 0x7fff;
        }
        iVar19 = iVar19 + sVar13;
        if (0x7ffe < iVar19) {
          iVar19 = 0x7fff;
        }
        if (iVar19 < -0x7fff) {
          iVar19 = -0x8000;
        }
        uVar8 = uVar8 - 1;
        *psVar9 = (short)iVar19;
        psVar9 = psVar9 + 1;
        param_2 = param_2 + 1;
      } while (uVar8 != 0);
    }
  }
  else if (param_3 != 0) {
    uVar8 = (ulong)param_3;
    psVar9 = (short *)(param_1 + 0xfc);
    do {
      sVar13 = *param_2 + (short)((uint)(*psVar9 * 0x5d) >> 8);
      if (*(int *)(param_1 + 0x46ec) == 2) {
        iVar19 = (0x8000 - *(int *)(param_1 + 0x46e4)) * (int)sVar13 +
                 (*(int *)(param_1 + 0x46e0) >> 0xf) * *(int *)(param_1 + 0x46e4);
        *(int *)(param_1 + 0x46e0) = iVar19;
      }
      else {
        if (*(char *)(param_1 + 0x46d4) != '\0') {
          *psVar10 = sVar13;
          *(short *)(param_1 + 0x45f2) = sVar13;
          *(short *)(param_1 + 0x45f4) = sVar13;
          *(short *)(param_1 + 0x45f6) = sVar13;
          *(short *)(param_1 + 0x45f8) = sVar13;
          *(short *)(param_1 + 0x45fa) = sVar13;
          *(short *)(param_1 + 0x45fc) = sVar13;
          *(short *)(param_1 + 0x45fe) = sVar13;
          *(short *)(param_1 + 0x4600) = sVar13;
          *(short *)(param_1 + 0x4602) = sVar13;
          *(short *)(param_1 + 0x4604) = sVar13;
          *(short *)(param_1 + 0x4606) = sVar13;
          *(short *)(param_1 + 0x4608) = sVar13;
          *(short *)(param_1 + 0x460a) = sVar13;
          *(short *)(param_1 + 0x460c) = sVar13;
          *(short *)(param_1 + 0x460e) = sVar13;
          *(undefined1 *)(param_1 + 0x46d4) = 0;
        }
        psVar10[*(uint *)(param_1 + 0x46d0)] = sVar13;
        uVar3 = *(int *)(param_1 + 0x46d0) + 1U & 0xf;
        uVar25 = *(undefined8 *)(param_1 + 0x45f8);
        uVar20 = *(undefined8 *)psVar10;
        uVar30 = *(undefined8 *)(param_1 + 0x4608);
        uVar26 = *(undefined8 *)(param_1 + 0x4600);
        *(uint *)(param_1 + 0x46d0) = uVar3;
        puVar12 = (undefined8 *)(param_1 + 0x4690 + (ulong)uVar3 * -4);
        iVar19 = (int)*puVar12 * (int)(short)uVar20 + (int)puVar12[2] * (int)(short)uVar25 +
                 (int)puVar12[4] * (int)(short)uVar26 + (int)puVar12[6] * (int)(short)uVar30 +
                 (int)((ulong)*puVar12 >> 0x20) * (int)(short)((ulong)uVar20 >> 0x10) +
                 (int)((ulong)puVar12[2] >> 0x20) * (int)(short)((ulong)uVar25 >> 0x10) +
                 (int)((ulong)puVar12[4] >> 0x20) * (int)(short)((ulong)uVar26 >> 0x10) +
                 (int)((ulong)puVar12[6] >> 0x20) * (int)(short)((ulong)uVar30 >> 0x10) +
                 (int)puVar12[1] * (int)(short)((ulong)uVar20 >> 0x20) +
                 (int)puVar12[3] * (int)(short)((ulong)uVar25 >> 0x20) +
                 (int)puVar12[5] * (int)(short)((ulong)uVar26 >> 0x20) +
                 (int)puVar12[7] * (int)(short)((ulong)uVar30 >> 0x20) +
                 (int)((ulong)puVar12[1] >> 0x20) * (int)(short)((ulong)uVar20 >> 0x30) +
                 (int)((ulong)puVar12[3] >> 0x20) * (int)(short)((ulong)uVar25 >> 0x30) +
                 (int)((ulong)puVar12[5] >> 0x20) * (int)(short)((ulong)uVar26 >> 0x30) +
                 (int)((ulong)puVar12[7] >> 0x20) * (int)(short)((ulong)uVar30 >> 0x30);
      }
      iVar19 = iVar19 >> 0xf;
      if (iVar19 < -0x7fff) {
        iVar19 = -0x8000;
      }
      if (0x7ffe < iVar19) {
        iVar19 = 0x7fff;
      }
      uVar8 = uVar8 - 1;
      *psVar9 = (short)iVar19;
      psVar9 = psVar9 + 1;
      param_2 = param_2 + 1;
    } while (uVar8 != 0);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x78) != 0) {
    uVar6 = 0;
    puVar11 = (undefined2 *)(param_1 + 0xfc);
    do {
      uVar5 = *(uint *)(param_1 + 0x4110);
      uVar3 = uVar5 + 1 & 0xf;
      lVar1 = -0x80000000;
      if (0 < *(long *)(param_1 + 0x4100)) {
        lVar1 = *(long *)(param_1 + 0x4100) + -0x80000000;
      }
      *(undefined2 *)(param_1 + (ulong)uVar5 * 2 + 0x4560) = *puVar11;
      *(uint *)(param_1 + 0x4110) = uVar3;
      *(long *)(param_1 + 0x4100) = lVar1;
      if (lVar1 < 0) {
        uVar25 = *(undefined8 *)(param_1 + 0x4568);
        uVar20 = *(undefined8 *)(param_1 + 0x4560);
        uVar30 = *(undefined8 *)(param_1 + 0x4578);
        uVar26 = *(undefined8 *)(param_1 + 0x4570);
        uVar7 = lVar1 * 0x4000 + 0x200000000000 >> 0x1f;
        uVar4 = uVar7 + 0x3ff;
        if (-1 < (long)uVar7) {
          uVar4 = uVar7;
        }
        iVar19 = (int)(uVar4 >> 10) * 0x20 - uVar3;
        puVar12 = (undefined8 *)(param_1 + 0x4120 + (ulong)(iVar19 + 0x10) * 2);
        puVar2 = (undefined8 *)(param_1 + 0x4120 + (ulong)(iVar19 + 0x30) * 2);
        uVar32 = puVar12[1];
        uVar31 = *puVar12;
        uVar34 = puVar12[3];
        uVar33 = puVar12[2];
        uVar36 = puVar2[1];
        uVar35 = *puVar2;
        uVar38 = puVar2[3];
        uVar37 = puVar2[2];
        sVar27 = (short)((ulong)uVar26 >> 0x10);
        sVar28 = (short)((ulong)uVar26 >> 0x20);
        sVar29 = (short)((ulong)uVar26 >> 0x30);
        sVar13 = (short)((ulong)uVar30 >> 0x10);
        sVar15 = (short)((ulong)uVar30 >> 0x20);
        sVar17 = (short)((ulong)uVar30 >> 0x30);
        sVar22 = (short)((ulong)uVar20 >> 0x10);
        sVar23 = (short)((ulong)uVar20 >> 0x20);
        sVar24 = (short)((ulong)uVar20 >> 0x30);
        sVar14 = (short)((ulong)uVar25 >> 0x10);
        sVar16 = (short)((ulong)uVar25 >> 0x20);
        sVar18 = (short)((ulong)uVar25 >> 0x30);
        lVar21 = (long)((int)(short)uVar20 * (int)(short)uVar31 +
                       (int)(short)uVar25 * (int)(short)uVar32) +
                 (long)((int)sVar23 * (int)(short)((ulong)uVar31 >> 0x20) +
                       (int)sVar16 * (int)(short)((ulong)uVar32 >> 0x20)) +
                 (long)((int)sVar28 * (int)(short)((ulong)uVar33 >> 0x20) +
                       (int)sVar15 * (int)(short)((ulong)uVar34 >> 0x20)) +
                 (long)((int)(short)uVar26 * (int)(short)uVar33 +
                       (int)(short)uVar30 * (int)(short)uVar34) +
                 (long)((int)sVar22 * (int)(short)((ulong)uVar31 >> 0x10) +
                       (int)sVar14 * (int)(short)((ulong)uVar32 >> 0x10)) +
                 (long)((int)sVar24 * (int)(short)((ulong)uVar31 >> 0x30) +
                       (int)sVar18 * (int)(short)((ulong)uVar32 >> 0x30)) +
                 (long)((int)sVar29 * (int)(short)((ulong)uVar33 >> 0x30) +
                       (int)sVar17 * (int)(short)((ulong)uVar34 >> 0x30)) +
                 (long)((int)sVar27 * (int)(short)((ulong)uVar33 >> 0x10) +
                       (int)sVar13 * (int)(short)((ulong)uVar34 >> 0x10));
        uVar7 = ((((long)((int)sVar22 * (int)(short)((ulong)uVar35 >> 0x10) +
                         (int)sVar14 * (int)(short)((ulong)uVar36 >> 0x10)) +
                   (long)((int)sVar24 * (int)(short)((ulong)uVar35 >> 0x30) +
                         (int)sVar18 * (int)(short)((ulong)uVar36 >> 0x30)) +
                   (long)((int)sVar29 * (int)(short)((ulong)uVar37 >> 0x30) +
                         (int)sVar17 * (int)(short)((ulong)uVar38 >> 0x30)) +
                  (long)((int)sVar27 * (int)(short)((ulong)uVar37 >> 0x10) +
                        (int)sVar13 * (int)(short)((ulong)uVar38 >> 0x10))) - lVar21) +
                (long)((int)(short)uVar20 * (int)(short)uVar35 +
                      (int)(short)uVar25 * (int)(short)uVar36) +
                (long)((int)sVar23 * (int)(short)((ulong)uVar35 >> 0x20) +
                      (int)sVar16 * (int)(short)((ulong)uVar36 >> 0x20)) +
                (long)((int)sVar28 * (int)(short)((ulong)uVar37 >> 0x20) +
                      (int)sVar15 * (int)(short)((ulong)uVar38 >> 0x20)) +
                (long)((int)(short)uVar26 * (int)(short)uVar37 +
                      (int)(short)uVar30 * (int)(short)uVar38)) * (uVar7 & 0x3ff);
        uVar4 = uVar7 + 0x3ff;
        if (-1 < (long)uVar7) {
          uVar4 = uVar7;
        }
        *(long *)(param_1 + 0x4100) = *(long *)(param_1 + 0x4108) + lVar1;
        lVar1 = uVar6 * 2;
        uVar6 = (ulong)((int)uVar6 + 1);
        iVar19 = (int)(lVar21 + (uVar4 >> 10) >> 0xf);
        if (iVar19 < -0x7fff) {
          iVar19 = -0x8000;
        }
        if (0x7ffe < iVar19) {
          iVar19 = 0x7fff;
        }
        *(short *)(param_1 + lVar1 + 0x20fc) = (short)iVar19;
      }
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar8 != 0);
    if (((int)uVar6 != 0) && ((param_5 & 1) != 0)) {
      (**(code **)(param_1 + 0x4580))
                (param_1 + 0x20fc,uVar6,param_4,*(undefined8 *)(param_1 + 0x4588));
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

