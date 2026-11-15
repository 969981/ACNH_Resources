
void FUN_0226ef60(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float local_2c;
  float local_28;
  float local_24;
  
  switch(*(undefined4 *)(param_1 + 0x49c)) {
  case 0:
    fVar14 = 1.0 / *(float *)(param_1 + 0x43c);
    fVar12 = *(float *)(param_1 + 0x438);
    if (1.0 <= fVar12) {
      if (1.0 < fVar12) {
        fVar14 = fVar12 - fVar14;
        bVar6 = false;
        bVar7 = false;
        if (fVar14 <= fVar12) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar14)) {
            bVar6 = fVar14 == 1.0;
            bVar7 = 1.0 <= fVar14;
          }
        }
        fVar12 = 1.0;
        if (bVar7 && !bVar6) {
          fVar12 = fVar14;
        }
        goto LAB_0226f0e0;
      }
    }
    else {
      fVar14 = fVar12 + fVar14;
      bVar6 = false;
      bVar7 = false;
      if (fVar12 <= fVar14) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < 1.0;
          bVar7 = false;
        }
      }
      fVar12 = 1.0;
      if (bVar6 != bVar7) {
        fVar12 = fVar14;
      }
LAB_0226f0e0:
      *(float *)(param_1 + 0x438) = fVar12;
    }
    local_2c = *(float *)(param_1 + 0x42c) +
               fVar12 * (*(float *)(param_1 + 0x420) - *(float *)(param_1 + 0x42c));
    local_28 = *(float *)(param_1 + 0x430) +
               fVar12 * (*(float *)(param_1 + 0x424) - *(float *)(param_1 + 0x430));
    local_24 = *(float *)(param_1 + 0x434) +
               fVar12 * (*(float *)(param_1 + 0x428) - *(float *)(param_1 + 0x434));
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 == (long *)0x0) {
      return;
    }
    goto LAB_0226f23c;
  case 1:
    fVar12 = *(float *)(param_1 + 0x438);
    if (1.0 <= fVar12) {
      if (1.0 < fVar12) {
        fVar14 = fVar12 + -1.0;
        bVar6 = false;
        bVar7 = false;
        if (fVar14 <= fVar12) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar14)) {
            bVar6 = fVar14 == 1.0;
            bVar7 = 1.0 <= fVar14;
          }
        }
        fVar12 = 1.0;
        if (bVar7 && !bVar6) {
          fVar12 = fVar14;
        }
        goto LAB_0226f140;
      }
    }
    else {
      fVar14 = fVar12 + 1.0;
      bVar6 = false;
      bVar7 = false;
      if (fVar12 <= fVar14) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < 1.0;
          bVar7 = false;
        }
      }
      fVar12 = 1.0;
      if (bVar6 != bVar7) {
        fVar12 = fVar14;
      }
LAB_0226f140:
      *(float *)(param_1 + 0x438) = fVar12;
    }
    bVar6 = *(int *)(param_1 + 0x178) != 5;
    fVar14 = 2.0;
    if (bVar6) {
      fVar14 = -0.0;
    }
    fVar15 = 0.0;
    if (bVar6) {
      fVar15 = -2.0;
    }
    local_2c = *(float *)(param_1 + 0x42c) +
               ((*(float *)(param_1 + 0x420) - fVar15) - *(float *)(param_1 + 0x42c));
    local_24 = *(float *)(param_1 + 0x434) +
               ((*(float *)(param_1 + 0x428) - fVar14) - *(float *)(param_1 + 0x434));
    fVar14 = 1.0;
    if (fVar12 <= 1.0) {
      fVar14 = fVar12;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar12) {
      fVar15 = fVar14;
    }
    local_28 = fVar15 * *(float *)(param_1 + 0x424) + (1.0 - fVar15) * *(float *)(param_1 + 0x430);
    plVar11 = *(long **)(param_1 + 0x68);
    break;
  case 2:
    fVar12 = *(float *)(param_1 + 0x4a4);
    if (fVar12 <= 0.0) {
      lVar10 = *(long *)(param_1 + 0x68);
      puVar1 = (undefined4 *)PTR_DAT_04bb2150;
      if (lVar10 != 0) {
        puVar1 = (undefined4 *)(lVar10 + 0x278);
      }
      puVar2 = (undefined4 *)(PTR_DAT_04bb2150 + 8);
      puVar5 = (undefined4 *)(PTR_DAT_04bb2150 + 4);
      if (lVar10 != 0) {
        puVar2 = (undefined4 *)(lVar10 + 0x280);
        puVar5 = (undefined4 *)(lVar10 + 0x27c);
      }
      uVar13 = *puVar5;
      uVar16 = *puVar2;
      *(undefined4 *)(param_1 + 0x42c) = *puVar1;
      *(undefined4 *)(param_1 + 0x430) = uVar13;
      *(undefined4 *)(param_1 + 0x434) = uVar16;
    }
    if (1.0 <= fVar12) {
      if (1.0 < fVar12) {
        fVar14 = fVar12 + -0.04;
        bVar6 = false;
        bVar7 = false;
        if (fVar14 <= fVar12) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar14)) {
            bVar6 = fVar14 == 1.0;
            bVar7 = 1.0 <= fVar14;
          }
        }
        fVar12 = 1.0;
        if (bVar7 && !bVar6) {
          fVar12 = fVar14;
        }
        goto LAB_0226f1e4;
      }
    }
    else {
      fVar14 = fVar12 + 0.04;
      bVar6 = false;
      bVar7 = false;
      if (fVar12 <= fVar14) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < 1.0;
          bVar7 = false;
        }
      }
      fVar12 = 1.0;
      if (bVar6 != bVar7) {
        fVar12 = fVar14;
      }
LAB_0226f1e4:
      *(float *)(param_1 + 0x4a4) = fVar12;
    }
    fVar12 = sinf(fVar12 * 1.5707964);
    local_2c = *(float *)(param_1 + 0x42c) +
               fVar12 * (*(float *)(param_1 + 0x420) - *(float *)(param_1 + 0x42c));
    local_28 = *(float *)(param_1 + 0x430) +
               fVar12 * (*(float *)(param_1 + 0x424) - *(float *)(param_1 + 0x430));
    local_24 = *(float *)(param_1 + 0x434) +
               fVar12 * (*(float *)(param_1 + 0x428) - *(float *)(param_1 + 0x434));
    plVar11 = *(long **)(param_1 + 0x68);
    break;
  case 3:
    lVar10 = *(long *)(param_1 + 0x68);
    pfVar3 = (float *)(PTR_DAT_04bb2150 + 8);
    pfVar4 = (float *)(PTR_DAT_04bb2150 + 4);
    if (lVar10 != 0) {
      pfVar3 = (float *)(lVar10 + 0x280);
      pfVar4 = (float *)(lVar10 + 0x27c);
    }
    local_24 = *pfVar3;
    local_28 = *pfVar4;
    fVar12 = *(float *)(param_1 + 0x4a4);
    if (1.0 <= fVar12) {
      if (1.0 < fVar12) {
        fVar14 = fVar12 + -0.04;
        bVar6 = false;
        bVar7 = false;
        if (fVar14 <= fVar12) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar14)) {
            bVar6 = fVar14 == 1.0;
            bVar7 = 1.0 <= fVar14;
          }
        }
        fVar12 = 1.0;
        if (bVar7 && !bVar6) {
          fVar12 = fVar14;
        }
        goto LAB_0226f298;
      }
    }
    else {
      fVar14 = fVar12 + 0.04;
      bVar6 = false;
      bVar7 = false;
      if (fVar12 <= fVar14) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < 1.0;
          bVar7 = false;
        }
      }
      fVar12 = 1.0;
      if (bVar6 != bVar7) {
        fVar12 = fVar14;
      }
LAB_0226f298:
      *(float *)(param_1 + 0x4a4) = fVar12;
    }
    fVar12 = sinf(fVar12 * 1.5707964);
    local_2c = *(float *)(param_1 + 0x420) + fVar12 * 2.0;
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 == (long *)0x0) {
      return;
    }
    if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
      goto LAB_0226f340;
    }
    goto LAB_0226f2d8;
  default:
    goto switchD_0226ef94_default;
  }
  if (plVar11 != (long *)0x0) {
LAB_0226f23c:
    if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
LAB_0226f340:
      __cxa_guard_release(PTR_DAT_04bb2f68);
    }
LAB_0226f2d8:
    uVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb2f60);
    if ((uVar9 & 1) != 0) {
      (**(code **)(*plVar11 + 0x100))(plVar11,&local_2c);
    }
  }
switchD_0226ef94_default:
  return;
}

