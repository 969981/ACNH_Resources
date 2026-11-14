
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01841dac(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar13 = *(long *)(param_1 + 0x3d0);
  if (lVar13 == 0) {
LAB_01841e20:
    bVar7 = true;
  }
  else {
    (**(code **)(*(long *)(lVar13 + 0x2d8) + 0x28))(lVar13 + 0x2d8);
    bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar5 == 0xffffffffffffffff) goto LAB_01841e20;
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    uVar14 = (long)(char)bVar5 & 0xffffffff;
    pbVar3 = pbVar1 + uVar14 * 0x80;
    if (7 < bVar5) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 >> 3 & 1) == 0) goto LAB_01841e20;
    lVar13 = DAT_0537d558[2] + 0x108 + uVar14 * 0xc;
    if (0xb < bVar5) {
      lVar13 = DAT_0537d558[2] + 0x108;
    }
    bVar7 = *(char *)(lVar13 + 10) != '\0';
  }
  uVar9 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                       *(float *)(param_1 + 0x330) - *(float *)(*(long *)(param_1 + 0x300) + 0x280))
  ;
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x1b0) + 0xf0))
                               (*(long *)(param_1 + 0x4b0) + 0x1b0);
  fVar16 = *pfVar11;
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x180) + 0xf0))
                               (*(long *)(param_1 + 0x4b0) + 0x180);
  fVar20 = *pfVar11;
  iVar10 = 0x5000000;
  if (*(char *)(param_1 + 0x497) == '\0') {
    local_58 = 0;
    local_60 = 0;
    local_60 = 0x20;
    local_58 = 0;
    fVar17 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    fVar19 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_68 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iStack_64 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
      iVar10 = 0;
    }
    else {
      uVar14 = FUN_00949798(DAT_04cfae30 + 0x28,&local_70,&local_60);
      iVar10 = 0x5000000;
      if ((uVar14 & 1) == 0) {
        iVar10 = 0;
      }
    }
  }
  uVar4 = *(uint *)(param_1 + 800);
  if (uVar4 == uVar9) {
    lVar15 = 0;
  }
  else {
    uVar2 = uVar4 - uVar9;
    if (uVar4 < uVar9 || uVar4 - uVar9 == 0) {
      uVar2 = uVar9 - uVar4;
    }
    if (uVar2 < 0x80000001) {
      lVar13 = -1;
    }
    else {
      lVar13 = 1;
    }
    lVar15 = -lVar13;
    if (uVar9 < uVar4) {
      lVar15 = lVar13;
    }
  }
  lVar15 = lVar15 * (ulong)(uint)(iVar10 + (int)(fVar20 * (float)((long)(fVar16 * 11930465.0) &
                                                                 0xffffffff)));
  uVar2 = uVar4 + (int)lVar15;
  if (lVar15 < 1) {
    if (lVar15 < 0) {
      if (uVar2 < uVar4) {
        if (uVar4 < uVar9) goto LAB_0184200c;
      }
      else if (uVar9 <= uVar4) goto LAB_01842064;
      if (uVar9 < uVar2) goto LAB_0184200c;
LAB_01842064:
      *(uint *)(param_1 + 800) = uVar9;
      bVar6 = true;
    }
    else {
      bVar6 = (int)lVar15 == 0;
    }
  }
  else {
    if (uVar4 < uVar2) {
      if (uVar4 <= uVar9) goto LAB_01842004;
    }
    else {
      if (uVar4 <= uVar9) goto LAB_01842064;
LAB_01842004:
      if (uVar9 <= uVar2) goto LAB_01842064;
    }
LAB_0184200c:
    bVar6 = false;
    *(uint *)(param_1 + 800) = uVar2;
  }
  *(byte *)(param_1 + 0x496) = bVar6 ^ 1;
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x60) + 0xf0))();
  fVar16 = *pfVar11;
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x180) + 0xf0))
                               (*(long *)(param_1 + 0x4b0) + 0x180);
  fVar16 = fVar16 * *pfVar11;
  if (*(char *)(param_1 + 0x496) != '\0') {
    uVar4 = *(uint *)(param_1 + 800);
    fVar20 = 0.0;
    if (uVar4 - uVar9 != 0) {
      uVar2 = uVar4 - uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = uVar9 - uVar4;
      }
      uVar9 = -uVar2;
      if (uVar2 < 0x80000001) {
        uVar9 = uVar2;
      }
      fVar20 = (float)uVar9 * 1.4629181e-09;
    }
    fVar16 = fVar16 + (fVar20 / 3.1415927) * (fVar20 / 3.1415927) * (0.0 - fVar16);
  }
  if (*(float *)(param_1 + 0x308) != fVar16) {
    pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x120) + 0xf0))
                                 (*(long *)(param_1 + 0x4b0) + 0x120);
    fVar17 = *(float *)(param_1 + 0x308);
    fVar20 = fVar16;
    if (fVar16 <= fVar17) {
      if (fVar17 <= fVar16) goto LAB_01842160;
      fVar19 = fVar17 - *pfVar11;
      bVar6 = false;
      bVar8 = false;
      if (fVar19 <= fVar17) {
        bVar6 = false;
        bVar8 = true;
        if (!NAN(fVar19) && !NAN(fVar16)) {
          bVar6 = fVar19 == fVar16;
          bVar8 = fVar16 <= fVar19;
        }
      }
      if (bVar8 && !bVar6) {
        fVar20 = fVar19;
      }
    }
    else {
      fVar19 = *pfVar11 + fVar17;
      bVar6 = false;
      bVar8 = false;
      if (fVar17 <= fVar19) {
        bVar6 = false;
        bVar8 = true;
        if (!NAN(fVar19) && !NAN(fVar16)) {
          bVar6 = fVar19 < fVar16;
          bVar8 = false;
        }
      }
      if (bVar6 != bVar8) {
        fVar20 = fVar19;
      }
    }
    *(float *)(param_1 + 0x308) = fVar20;
  }
LAB_01842160:
  lVar13 = param_1 + 0x328;
  bVar6 = bVar7;
  if (*(char *)(param_1 + 0x496) != '\0') {
    bVar6 = true;
  }
  if (!bVar6) {
    fVar20 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
    fVar17 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
    fVar20 = fVar17 * fVar17 + fVar20 * fVar20;
    if (1600.0 < fVar20) {
      fVar20 = fVar16 * SQRT(fVar20 / 1600.0);
      fVar16 = 3.0;
      if (fVar20 <= 3.0) {
        fVar16 = fVar20;
      }
    }
    *(float *)(param_1 + 0x308) = fVar16;
  }
  uVar18 = FUN_01a18270(param_1 + 0x4c0,0);
  *(undefined4 *)(param_1 + 0x344) = uVar18;
  if (!bVar7) {
    fVar16 = (float)FUN_015cb8d4(lVar13,1);
    fVar17 = *(float *)(param_1 + 0x338);
    pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x150) + 0xf0))
                                 (*(long *)(param_1 + 0x4b0) + 0x150);
    fVar20 = *pfVar11;
    if (fVar16 <= fVar17) {
      pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0xf0) + 0xf0))();
      fVar17 = *pfVar11;
      fVar16 = (float)FUN_01a1fbe0(*(long *)(param_1 + 0x300) + 0x278);
      fVar20 = fVar20 + fVar16;
      fVar16 = *(float *)(param_1 + 0x338);
      if (fVar16 < fVar20) {
        fVar17 = fVar17 + fVar16;
        bVar7 = false;
        bVar6 = false;
        if (fVar16 <= fVar17) {
          bVar7 = false;
          bVar6 = true;
          if (!NAN(fVar17) && !NAN(fVar20)) {
            bVar7 = fVar17 < fVar20;
            bVar6 = false;
          }
        }
        if (bVar7 != bVar6) {
          fVar20 = fVar17;
        }
        *(float *)(param_1 + 0x338) = fVar20;
        return;
      }
      if (fVar20 < fVar16) {
        fVar17 = fVar16 - fVar17;
        bVar7 = false;
        bVar6 = false;
        if (fVar17 <= fVar16) {
          bVar7 = false;
          bVar6 = true;
          if (!NAN(fVar17) && !NAN(fVar20)) {
            bVar7 = fVar17 == fVar20;
            bVar6 = fVar20 <= fVar17;
          }
        }
        if (bVar6 && !bVar7) {
          fVar20 = fVar17;
        }
        *(float *)(param_1 + 0x338) = fVar20;
        return;
      }
      return;
    }
    fVar16 = fVar16 + fVar20;
    pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0xf0) + 0xf0))();
    fVar20 = *(float *)(param_1 + 0x338);
    if (fVar20 < fVar16) {
      fVar17 = *pfVar11 + fVar20;
      bVar7 = false;
      bVar6 = false;
      if (fVar20 <= fVar17) {
        bVar7 = false;
        bVar6 = true;
        if (!NAN(fVar17) && !NAN(fVar16)) {
          bVar7 = fVar17 < fVar16;
          bVar6 = false;
        }
      }
      if (bVar7 != bVar6) {
        fVar16 = fVar17;
      }
      *(float *)(param_1 + 0x338) = fVar16;
      return;
    }
    if (fVar16 < fVar20) {
      fVar17 = fVar20 - *pfVar11;
      bVar7 = false;
      bVar6 = false;
      if (fVar17 <= fVar20) {
        bVar7 = false;
        bVar6 = true;
        if (!NAN(fVar17) && !NAN(fVar16)) {
          bVar7 = fVar17 == fVar16;
          bVar6 = fVar16 <= fVar17;
        }
      }
      if (bVar6 && !bVar7) {
        fVar16 = fVar17;
      }
      *(float *)(param_1 + 0x338) = fVar16;
      return;
    }
    return;
  }
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x150) + 0xf0))
                               (*(long *)(param_1 + 0x4b0) + 0x150);
  fVar16 = *pfVar11;
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0xf0) + 0xf0))();
  fVar17 = *pfVar11;
  fVar20 = (float)FUN_01a1fbe0(*(long *)(param_1 + 0x300) + 0x278);
  fVar16 = fVar16 + fVar20;
  fVar20 = *(float *)(param_1 + 0x338);
  if (fVar16 <= fVar20) {
    if (fVar16 < fVar20) {
      fVar17 = fVar20 - fVar17;
      bVar7 = false;
      bVar6 = false;
      if (fVar17 <= fVar20) {
        bVar7 = false;
        bVar6 = true;
        if (!NAN(fVar17) && !NAN(fVar16)) {
          bVar7 = fVar17 == fVar16;
          bVar6 = fVar16 <= fVar17;
        }
      }
      if (bVar6 && !bVar7) {
        fVar16 = fVar17;
      }
      goto LAB_018422bc;
    }
  }
  else {
    fVar17 = fVar17 + fVar20;
    bVar7 = false;
    bVar6 = false;
    if (fVar20 <= fVar17) {
      bVar7 = false;
      bVar6 = true;
      if (!NAN(fVar17) && !NAN(fVar16)) {
        bVar7 = fVar17 < fVar16;
        bVar6 = false;
      }
    }
    if (bVar7 != bVar6) {
      fVar16 = fVar17;
    }
LAB_018422bc:
    *(float *)(param_1 + 0x338) = fVar16;
  }
  iVar10 = (**(code **)(*(long *)(param_1 + 0x4d0) + (ulong)*(byte *)(param_1 + 0x4e4) * 8))
                     (param_1 + 0x4d0);
  *(int *)(param_1 + 0x4d8) = iVar10;
  if (iVar10 == *(int *)(param_1 + 0x4e0)) {
    *(long *)(param_1 + 0x4f8) = param_1;
    *(undefined1 **)(param_1 + 0x500) = &LAB_01842ed4;
    uVar9 = *(uint *)(param_1 + 0x3e4);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (uVar9 != 0) {
      if ((uVar9 & 0xfffffffe) != 2) {
        return;
      }
      if (uVar9 == 2) {
        *(undefined4 *)(param_1 + 0x3e4) = 0;
        *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4dc);
      }
      FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),lVar13);
      goto LAB_01842330;
    }
LAB_01842374:
    *(undefined4 *)(param_1 + 0x3e4) = 1;
  }
  else {
LAB_01842330:
    lVar15 = *(long *)(param_1 + 0x3d8);
    if ((lVar15 != 0) && (*(float *)(lVar15 + 0x2b8) < *(float *)(lVar15 + 0x2b0))) {
      return;
    }
    *(long *)(param_1 + 0x4f8) = param_1;
    *(undefined1 **)(param_1 + 0x500) = &LAB_01842ea8;
    iVar10 = *(int *)(param_1 + 0x3e4);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (iVar10 == 3) {
      if (*(int *)(param_1 + 0x280) == 1) {
        uVar18 = 1;
      }
      else {
        uVar12 = 1;
LAB_0184243c:
        FUN_03ebb160(param_1 + 0x278,uVar12);
        uVar18 = *(undefined4 *)(param_1 + 0x280);
      }
    }
    else {
      if (iVar10 != 2) {
        if (iVar10 != 0) {
          return;
        }
        goto LAB_01842374;
      }
      if (*(int *)(param_1 + 0x280) != 5) {
        uVar12 = 5;
        goto LAB_0184243c;
      }
      uVar18 = 5;
    }
    FUN_01815e0c(param_1,uVar18,lVar13);
  }
  return;
}

