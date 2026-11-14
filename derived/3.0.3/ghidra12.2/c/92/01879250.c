
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01879250(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar12 = *(long *)(param_1 + 0x3d0);
  if (lVar12 == 0) {
LAB_018792b8:
    uVar6 = 1;
  }
  else {
    (**(code **)(*(long *)(lVar12 + 0x2d8) + 0x28))(lVar12 + 0x2d8);
    plVar3 = DAT_0537d558;
    uVar9 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if ((uVar9 & 1) == 0) goto LAB_018792b8;
    uVar6 = FUN_01d692e8(plVar3[2]);
  }
  uVar7 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                       *(float *)(param_1 + 0x330) - *(float *)(*(long *)(param_1 + 0x300) + 0x280))
  ;
  pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x218) + 0xf0))
                               (*(long *)(param_1 + 0x4b8) + 0x218);
  fVar14 = *pfVar10;
  iVar8 = 0x5000000;
  if (*(char *)(param_1 + 0x497) == '\0') {
    local_58 = 0;
    local_60 = 0;
    local_60 = 0x20;
    local_58 = 0;
    fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    fVar17 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_68 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iStack_64 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
      iVar8 = 0;
    }
    else {
      uVar9 = FUN_00949798(DAT_04cfae30 + 0x28,&local_70,&local_60);
      iVar8 = 0x5000000;
      if ((uVar9 & 1) == 0) {
        iVar8 = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 800);
  if (uVar2 == uVar7) {
    lVar13 = 0;
  }
  else {
    uVar1 = uVar2 - uVar7;
    if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
      uVar1 = uVar7 - uVar2;
    }
    if (uVar1 < 0x80000001) {
      lVar12 = -1;
    }
    else {
      lVar12 = 1;
    }
    lVar13 = -lVar12;
    if (uVar7 < uVar2) {
      lVar13 = lVar12;
    }
  }
  lVar13 = lVar13 * (ulong)(uint)(iVar8 + (int)(float)((long)(fVar14 * 11930465.0) & 0xffffffff));
  uVar1 = uVar2 + (int)lVar13;
  if (lVar13 < 1) {
    if (lVar13 < 0) {
      if (uVar1 < uVar2) {
        if (uVar2 < uVar7) goto LAB_01879488;
      }
      else if (uVar7 <= uVar2) goto LAB_018794b8;
      if (uVar7 < uVar1) goto LAB_01879488;
LAB_018794b8:
      *(uint *)(param_1 + 800) = uVar7;
      bVar4 = true;
    }
    else {
      bVar4 = (int)lVar13 == 0;
    }
  }
  else {
    if (uVar2 < uVar1) {
      if (uVar2 <= uVar7) goto LAB_01879480;
    }
    else {
      if (uVar2 <= uVar7) goto LAB_018794b8;
LAB_01879480:
      if (uVar7 <= uVar1) goto LAB_018794b8;
    }
LAB_01879488:
    bVar4 = false;
    *(uint *)(param_1 + 800) = uVar1;
  }
  *(byte *)(param_1 + 0x496) = bVar4 ^ 1;
  pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 200) + 0xf0))();
  fVar14 = *pfVar10;
  if (bVar4 == false) {
    uVar2 = *(uint *)(param_1 + 800);
    fVar15 = 0.0;
    if (uVar2 - uVar7 != 0) {
      uVar1 = uVar2 - uVar7;
      if (uVar2 <= uVar7) {
        uVar1 = uVar7 - uVar2;
      }
      uVar7 = -uVar1;
      if (uVar1 < 0x80000001) {
        uVar7 = uVar1;
      }
      fVar15 = (float)uVar7 * 1.4629181e-09;
    }
    fVar14 = fVar14 + (fVar15 / 3.1415927) * (fVar15 / 3.1415927) * (0.0 - fVar14);
  }
  if (*(float *)(param_1 + 0x308) != fVar14) {
    pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x188) + 0xf0))
                                 (*(long *)(param_1 + 0x4b8) + 0x188);
    fVar17 = *(float *)(param_1 + 0x308);
    fVar15 = fVar14;
    if (fVar14 <= fVar17) {
      if (fVar17 <= fVar14) goto LAB_01879594;
      fVar18 = fVar17 - *pfVar10;
      bVar4 = false;
      bVar5 = false;
      if (fVar18 <= fVar17) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar18) && !NAN(fVar14)) {
          bVar4 = fVar18 == fVar14;
          bVar5 = fVar14 <= fVar18;
        }
      }
      if (bVar5 && !bVar4) {
        fVar15 = fVar18;
      }
    }
    else {
      fVar18 = *pfVar10 + fVar17;
      bVar4 = false;
      bVar5 = false;
      if (fVar17 <= fVar18) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar18) && !NAN(fVar14)) {
          bVar4 = fVar18 < fVar14;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) {
        fVar15 = fVar18;
      }
    }
    *(float *)(param_1 + 0x308) = fVar15;
  }
LAB_01879594:
  if ((uVar6 & 1) == 0 && *(char *)(param_1 + 0x496) == '\0') {
    fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
    fVar17 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
    fVar15 = fVar17 * fVar17 + fVar15 * fVar15;
    if (1600.0 < fVar15) {
      fVar15 = fVar14 * SQRT(fVar15 / 1600.0);
      fVar14 = 3.0;
      if (fVar15 <= 3.0) {
        fVar14 = fVar15;
      }
    }
    *(float *)(param_1 + 0x308) = fVar14;
  }
  uVar16 = FUN_01a18270(param_1 + 0x4c0,0);
  *(undefined4 *)(param_1 + 0x344) = uVar16;
  if ((uVar6 & 1) == 0) {
    fVar14 = (float)FUN_015cb8d4(param_1 + 0x328,1);
    fVar17 = *(float *)(param_1 + 0x338);
    pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x1b8) + 0xf0))
                                 (*(long *)(param_1 + 0x4b8) + 0x1b8);
    fVar15 = *pfVar10;
    if (fVar14 <= fVar17) {
      pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x158) + 0xf0))
                                   (*(long *)(param_1 + 0x4b8) + 0x158);
      fVar17 = *pfVar10;
      fVar14 = (float)FUN_01a1fbe0(*(long *)(param_1 + 0x300) + 0x278);
      fVar15 = fVar15 + fVar14;
      fVar14 = *(float *)(param_1 + 0x338);
      if (fVar14 < fVar15) {
        fVar17 = fVar17 + fVar14;
        bVar4 = false;
        bVar5 = false;
        if (fVar14 <= fVar17) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar17) && !NAN(fVar15)) {
            bVar4 = fVar17 < fVar15;
            bVar5 = false;
          }
        }
        if (bVar4 != bVar5) {
          fVar15 = fVar17;
        }
        *(float *)(param_1 + 0x338) = fVar15;
        return;
      }
      if (fVar15 < fVar14) {
        fVar17 = fVar14 - fVar17;
        bVar4 = false;
        bVar5 = false;
        if (fVar17 <= fVar14) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar17) && !NAN(fVar15)) {
            bVar4 = fVar17 == fVar15;
            bVar5 = fVar15 <= fVar17;
          }
        }
        if (bVar5 && !bVar4) {
          fVar15 = fVar17;
        }
        *(float *)(param_1 + 0x338) = fVar15;
        return;
      }
      return;
    }
    fVar14 = fVar14 + fVar15;
    pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x158) + 0xf0))
                                 (*(long *)(param_1 + 0x4b8) + 0x158);
    fVar15 = *(float *)(param_1 + 0x338);
    if (fVar15 < fVar14) {
      fVar17 = *pfVar10 + fVar15;
      bVar4 = false;
      bVar5 = false;
      if (fVar15 <= fVar17) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar17) && !NAN(fVar14)) {
          bVar4 = fVar17 < fVar14;
          bVar5 = false;
        }
      }
      if (bVar4 != bVar5) {
        fVar14 = fVar17;
      }
      *(float *)(param_1 + 0x338) = fVar14;
      return;
    }
    if (fVar14 < fVar15) {
      fVar17 = fVar15 - *pfVar10;
      bVar4 = false;
      bVar5 = false;
      if (fVar17 <= fVar15) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar17) && !NAN(fVar14)) {
          bVar4 = fVar17 == fVar14;
          bVar5 = fVar14 <= fVar17;
        }
      }
      if (bVar5 && !bVar4) {
        fVar14 = fVar17;
      }
      *(float *)(param_1 + 0x338) = fVar14;
      return;
    }
    return;
  }
  pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x1b8) + 0xf0))
                               (*(long *)(param_1 + 0x4b8) + 0x1b8);
  fVar14 = *pfVar10;
  pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x158) + 0xf0))
                               (*(long *)(param_1 + 0x4b8) + 0x158);
  fVar17 = *pfVar10;
  fVar15 = (float)FUN_01a1fbe0(*(long *)(param_1 + 0x300) + 0x278);
  fVar14 = fVar14 + fVar15;
  fVar15 = *(float *)(param_1 + 0x338);
  if (fVar14 <= fVar15) {
    if (fVar15 <= fVar14) goto LAB_01879700;
    fVar17 = fVar15 - fVar17;
    bVar4 = false;
    bVar5 = false;
    if (fVar17 <= fVar15) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar17) && !NAN(fVar14)) {
        bVar4 = fVar17 == fVar14;
        bVar5 = fVar14 <= fVar17;
      }
    }
    if (bVar5 && !bVar4) {
      fVar14 = fVar17;
    }
  }
  else {
    fVar17 = fVar17 + fVar15;
    bVar4 = false;
    bVar5 = false;
    if (fVar15 <= fVar17) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar17) && !NAN(fVar14)) {
        bVar4 = fVar17 < fVar14;
        bVar5 = false;
      }
    }
    if (bVar4 != bVar5) {
      fVar14 = fVar17;
    }
  }
  *(float *)(param_1 + 0x338) = fVar14;
LAB_01879700:
  lVar12 = *(long *)(param_1 + 0x3d8);
  if ((lVar12 == 0) || (*(float *)(lVar12 + 0x2b0) <= *(float *)(lVar12 + 0x2b8))) {
    iVar8 = (**(code **)(*(long *)(param_1 + 0x4d0) + (ulong)*(byte *)(param_1 + 0x4e4) * 8))
                      (param_1 + 0x4d0);
    *(int *)(param_1 + 0x4d8) = iVar8;
    fVar14 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
    fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
    if ((*(float *)(param_1 + 0x3ac) < fVar15 * fVar15 + fVar14 * fVar14) &&
       (iVar8 != *(int *)(param_1 + 0x4e0))) {
      return;
    }
    *(long *)(param_1 + 0x4f8) = param_1;
    *(undefined1 **)(param_1 + 0x500) = &LAB_0187a89c;
    uVar6 = *(uint *)(param_1 + 0x3e4);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 0x3e4) = 1;
      return;
    }
    if ((uVar6 & 0xfffffffe) != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4dc);
    if (uVar6 == 2) {
      FUN_01815e0c(param_1,*(int *)(param_1 + 0x280),param_1 + 0x328);
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x280) == 1) {
      return;
    }
    uVar11 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x280) == 0) {
      return;
    }
    uVar11 = 0;
  }
  FUN_03ebb160(param_1 + 0x278,uVar11);
  return;
}

