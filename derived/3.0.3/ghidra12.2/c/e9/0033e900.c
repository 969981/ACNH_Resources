
undefined8
FUN_0033e900(ulong param_1,long param_2,long *param_3,uint *param_4,long param_5,undefined4 param_6,
            int param_7)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  long *plVar6;
  float fVar7;
  char cVar8;
  undefined1 auVar9 [16];
  float fVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if (*(int *)(param_2 + 0x19d4) < *(int *)(param_5 + 0x28)) {
    FUN_0032c410("Particle sort has failed. More buffer size is needed. \n");
    uVar16 = 0;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_3 = *(long *)(param_2 + 0x19d8) + (long)(*(int *)(param_2 + 0x19d4) * param_7) * 8;
    *param_4 = 0;
    plVar6 = (long *)(param_5 + 0x1d0);
    if (*(char *)(*(long *)(param_5 + 0xa0) + 0x792) != '\0') {
      plVar6 = *(long **)(param_5 + 0xc0);
    }
    fVar10 = (float)param_1;
    switch(param_6) {
    case 1:
      iVar12 = *(int *)(param_5 + 0x28);
      if (iVar12 < 1) {
        uVar13 = 0;
      }
      else {
        lVar14 = 0;
        uVar13 = 0;
        lVar11 = 0;
        lVar17 = 0xc;
        do {
          lVar15 = *(long *)(param_5 + 0xb0) + lVar14;
          if (fVar10 - *(float *)(lVar15 + 8) < *(float *)(lVar15 + 0xc)) {
            *(undefined4 *)(*param_3 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) =
                 *(undefined4 *)(plVar6[1] + lVar17);
            *(int *)(*param_3 + (long)(int)*param_4 * 8 + 4) = (int)lVar11;
            uVar13 = (ulong)(*param_4 + 1);
            *param_4 = *param_4 + 1;
            iVar12 = *(int *)(param_5 + 0x28);
          }
          lVar11 = lVar11 + 1;
          lVar17 = lVar17 + 0x10;
          lVar14 = lVar14 + 0x20;
        } while (lVar11 < iVar12);
      }
      iVar12 = (int)uVar13;
      uVar16 = 1;
      lVar11 = 0;
      if (iVar12 != 0) {
        lVar11 = LZCOUNT((long)iVar12) * -2 + 0x7e;
      }
      FUN_00341780(*param_3,*param_3 + (long)iVar12 * 8,auStack_4c,lVar11,1);
      break;
    case 2:
      iVar12 = *(int *)(param_5 + 0x28);
      if (iVar12 < 1) {
        uVar13 = 0;
      }
      else {
        param_1 = 0;
        lVar14 = 0;
        uVar13 = 0;
        lVar11 = 0;
        lVar17 = 8;
        lVar15 = *(long *)(param_2 + 0x1c8) + (long)param_7 * 0x7d8;
        do {
          lVar2 = *(long *)(param_5 + 0xb0) + lVar14;
          if (fVar10 - *(float *)(lVar2 + 8) < *(float *)(lVar2 + 0xc)) {
            puVar3 = (undefined4 *)(*(long *)(param_5 + 0x210) + lVar17);
            cVar8 = *(char *)(*(long *)(param_5 + 0xa0) + 0x793);
            puVar4 = (undefined4 *)(*(long *)(param_5 + 0x218) + lVar17);
            uVar16 = *(undefined8 *)((float *)(*plVar6 + lVar17) + -2);
            fVar7 = *(float *)(*plVar6 + lVar17);
            pfVar5 = (float *)(*(long *)(param_5 + 0x220) + lVar17);
            if (cVar8 == '\x02') {
              pauVar1 = (undefined1 (*) [12])(param_5 + 0x400);
              uVar29 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x408) >> 0x20);
              fVar26 = (float)*(undefined8 *)*pauVar1;
              fVar27 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              auVar30._12_4_ = uVar29;
              auVar30._0_12_ = *pauVar1;
              auVar9._12_4_ = uVar29;
              auVar9._0_12_ = *pauVar1;
              auVar30 = NEON_ext(auVar30,auVar9,8,1);
              uVar20 = CONCAT44(puVar4[-2],puVar3[-2]);
              uVar24 = CONCAT44(*puVar4,*puVar3);
              fVar28 = auVar30._0_4_;
              fVar21 = pfVar5[-2];
              fVar25 = *pfVar5;
              uVar22 = CONCAT44(puVar4[-1],puVar3[-1]);
              fVar23 = pfVar5[-1];
            }
            else if (cVar8 == '\0') {
              fVar21 = (float)*(undefined8 *)(param_5 + 0x3d8);
              uVar20 = *(undefined8 *)(param_5 + 0x3d0);
              fVar23 = (float)*(undefined8 *)(param_5 + 1000);
              uVar22 = *(undefined8 *)(param_5 + 0x3e0);
              fVar25 = (float)*(undefined8 *)(param_5 + 0x3f8);
              uVar24 = *(undefined8 *)(param_5 + 0x3f0);
              fVar28 = (float)*(undefined8 *)(param_5 + 0x408);
              fVar26 = (float)*(undefined8 *)(param_5 + 0x400);
              fVar27 = (float)((ulong)*(undefined8 *)(param_5 + 0x400) >> 0x20);
            }
            else {
              uVar20 = CONCAT44(puVar4[-2],puVar3[-2]);
              uVar22 = CONCAT44(puVar4[-1],puVar3[-1]);
              fVar21 = pfVar5[-2];
              fVar23 = pfVar5[-1];
              uVar24 = CONCAT44(*puVar4,*puVar3);
              fVar25 = *pfVar5;
              fVar26 = (float)puVar3[1];
              fVar27 = (float)puVar4[1];
              fVar28 = pfVar5[1];
            }
            fVar18 = (float)uVar16;
            fVar19 = (float)((ulong)uVar16 >> 0x20);
            *(float *)(*param_3 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) =
                 *(float *)(lVar15 + 0x574) +
                 *(float *)(lVar15 + 0x56c) *
                 (fVar27 + (float)((ulong)uVar20 >> 0x20) * fVar18 +
                           (float)((ulong)uVar22 >> 0x20) * fVar19 +
                           (float)((ulong)uVar24 >> 0x20) * fVar7) +
                 *(float *)(lVar15 + 0x568) *
                 (fVar26 + (float)uVar20 * fVar18 + (float)uVar22 * fVar19 + (float)uVar24 * fVar7)
                 + *(float *)(lVar15 + 0x570) *
                   (fVar28 + fVar21 * fVar18 + fVar23 * fVar19 + fVar25 * fVar7);
            *(int *)(*param_3 + (long)(int)*param_4 * 8 + 4) = (int)lVar11;
            uVar13 = (ulong)(*param_4 + 1);
            *param_4 = *param_4 + 1;
            iVar12 = *(int *)(param_5 + 0x28);
          }
          lVar11 = lVar11 + 1;
          lVar17 = lVar17 + 0x10;
          lVar14 = lVar14 + 0x20;
        } while (lVar11 < iVar12);
      }
      lVar14 = *param_3;
      iVar12 = (int)uVar13;
      uVar16 = 1;
      lVar11 = lVar14 + (long)iVar12 * 8;
      lVar17 = 0;
      if (iVar12 != 0) {
        lVar17 = LZCOUNT((long)iVar12) * -2 + 0x7e;
      }
      if (*(char *)(*(long *)(*(long *)(param_5 + 0x240) + 0x10) + 0x8e3) == '\0') {
        FUN_015fdbc0(param_1,lVar14,lVar11,auStack_44,lVar17,1);
      }
      else {
        FUN_003427e0(lVar14,lVar11,auStack_48,lVar17,1);
      }
      break;
    case 3:
      iVar12 = *(int *)(param_5 + 0x28);
      if (iVar12 < 1) {
        uVar13 = 0;
      }
      else {
        lVar14 = 0;
        uVar13 = 0;
        lVar11 = 0;
        lVar17 = 0xc;
        do {
          lVar15 = *(long *)(param_5 + 0xb0) + lVar14;
          if (fVar10 - *(float *)(lVar15 + 8) < *(float *)(lVar15 + 0xc)) {
            *(undefined4 *)(*param_3 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) =
                 *(undefined4 *)(plVar6[1] + lVar17);
            *(int *)(*param_3 + (long)(int)*param_4 * 8 + 4) = (int)lVar11;
            uVar13 = (ulong)(*param_4 + 1);
            *param_4 = *param_4 + 1;
            iVar12 = *(int *)(param_5 + 0x28);
          }
          lVar11 = lVar11 + 1;
          lVar17 = lVar17 + 0x10;
          lVar14 = lVar14 + 0x20;
        } while (lVar11 < iVar12);
      }
      iVar12 = (int)uVar13;
      uVar16 = 1;
      lVar11 = 0;
      if (iVar12 != 0) {
        lVar11 = LZCOUNT((long)iVar12) * -2 + 0x7e;
      }
      FUN_00340720(*param_3,*param_3 + (long)iVar12 * 8,auStack_50,lVar11,1);
      break;
    case 4:
      lVar17 = *(long *)(param_2 + 0x1c8);
      lVar11 = FUN_0031e3e8(param_5);
      if (*(code **)(lVar11 + 0x15f0) == (code *)0x0) {
        FUN_0032c410("A custom sort callback is not set.\n");
        return 0;
      }
      (**(code **)(lVar11 + 0x15f0))
                (param_1 & 0xffffffff,param_3,param_4,param_5,lVar17 + (long)param_7 * 0x7d8 + 0x548
                );
    default:
      uVar16 = 1;
    }
  }
  return uVar16;
}

