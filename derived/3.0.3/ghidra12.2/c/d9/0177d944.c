
void FUN_0177d944(long param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_48;
  
  uVar10 = *(uint *)(param_1 + 0x638);
  if (uVar10 < 7 && (1 << (ulong)(uVar10 & 0x1f) & 0x52U) != 0) {
    lVar12 = *(long *)(param_1 + 0x60);
    lVar16 = *(long *)(lVar12 + 0x1150);
    if (lVar16 != 0) {
      cVar2 = *(char *)(param_1 + 0x99a);
      local_70 = &DAT_3f8000003f800000;
      local_48 = 0;
      uVar19 = 0;
      if (*(char *)(param_1 + 0xad8) != '\0' &&
          (*(char *)(param_1 + 0x72d) != '\0' || cVar2 != '\0')) {
        uVar19 = 0x3fc90fdb;
      }
      if (*(char *)(param_1 + 0x72d) != '\0' || cVar2 != '\0') {
        if (cVar2 == '\0') {
          fVar17 = 1.0;
        }
        else {
          fVar17 = 1.0 / *(float *)(*(long *)PTR_DAT_04bb5ce0 + 0xd34);
        }
        fVar18 = fVar17 * 4.0;
        fVar4 = fVar17 + fVar17;
        if (*(char *)(param_1 + 0xad8) != '\0') {
          fVar18 = fVar17 + fVar17;
          fVar4 = fVar17 * 4.0;
        }
        local_70 = (undefined1 *)CONCAT44(fVar18,fVar4);
      }
      puVar14 = *(ulong **)(lVar12 + 0x1180);
      bVar5 = *(long *)(lVar12 + 0x1160) != 0;
      if (puVar14 != (ulong *)0x0 && bVar5) {
        uVar15 = *puVar14;
      }
      else {
        uVar15 = 0xffffffffffff;
      }
      if (((((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) && ((uVar15 & 0xffff) != 0xffff))
         && ((uVar15 & 0xffff0000) != 0xffff0000)) {
        if (puVar14 != (ulong *)0x0 && bVar5) {
          uVar15 = *puVar14;
        }
        else {
          uVar15 = 0xffffffffffff;
        }
        plVar9 = (long *)**(undefined8 **)
                           (*(long *)(lVar16 + 0x38) +
                           (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
        (**(code **)(*plVar9 + 0x178))
                  (uVar19,plVar9,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_70,
                   &local_48);
        uVar10 = *(uint *)(param_1 + 0x638);
        lVar12 = *(long *)(param_1 + 0x60);
      }
      if (uVar10 == 4) {
        lVar13 = *(long *)(lVar12 + 0x1180);
        bVar5 = *(long *)(lVar12 + 0x1160) != 0;
        if (lVar13 != 0 && bVar5) {
          lVar1 = 0x18;
          if (*(uint *)(lVar12 + 0x1178) < 4) {
            lVar1 = 0;
          }
          uVar15 = *(ulong *)(lVar13 + lVar1);
        }
        else {
          uVar15 = 0xffffffffffff;
        }
        if (((((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) &&
            ((uVar15 & 0xffff) != 0xffff)) && ((uVar15 & 0xffff0000) != 0xffff0000)) {
          if (lVar13 != 0 && bVar5) {
            lVar1 = 0x18;
            if (*(uint *)(lVar12 + 0x1178) < 4) {
              lVar1 = 0;
            }
            uVar15 = *(ulong *)(lVar13 + lVar1);
          }
          else {
            uVar15 = 0xffffffffffff;
          }
          plVar9 = (long *)**(undefined8 **)
                             (*(long *)(lVar16 + 0x38) +
                             (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
          (**(code **)(*plVar9 + 0x178))
                    (uVar19,plVar9,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_70,
                     &local_48);
          lVar12 = *(long *)(param_1 + 0x60);
        }
      }
    }
    local_48 = CONCAT44(local_48._4_4_,0xe);
    local_60 = 0;
    local_58 = (long *)0x0;
    local_70 = (undefined1 *)0x0;
    uStack_68 = 0;
    if ((*(long *)(lVar12 + 0x1138) != 0) &&
       (uVar15 = FUN_03850a90(*(long *)(lVar12 + 0x1138),0xe,&local_70,0), (uVar15 & 1) != 0)) {
      if ((local_58 == (long *)0x0) || (lVar12 = *local_58, lVar12 == 0)) {
        uVar10 = 1;
      }
      else {
        fVar17 = *(float *)(lVar12 + 0x18);
        if (fVar17 < 0.0) {
          fVar17 = *(float *)(local_58[1] + 0xc);
        }
        uVar10 = (uint)(fVar17 - *(float *)(lVar12 + 0x14));
        if (uVar10 < 2) {
          uVar10 = 1;
        }
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
      if (lVar12 != 0) {
        cVar2 = *(char *)(param_1 + 0xb41);
        uVar19 = *(undefined4 *)(param_1 + 0x17c);
        uVar8 = FUN_03850368(lVar12,0);
        if (cVar2 == '\0') {
          if ((DAT_05292338 == 0) ||
             (FUN_017f9c4c(DAT_05292338 + 0xda0,uVar10,uVar19,uVar8 & 1), DAT_05292338 == 0))
          goto LAB_0177dc70;
          uVar10 = FUN_017f9da0(DAT_05292338 + 0xda0,*(undefined4 *)(param_1 + 0x17c));
        }
        else if ((DAT_05292338 == 0) ||
                (FUN_017f9efc(DAT_05292338 + 0xda0,uVar10,uVar19,uVar8 & 1), DAT_05292338 == 0)) {
LAB_0177dc70:
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_017fa050(DAT_05292338 + 0xda0,*(undefined4 *)(param_1 + 0x17c));
        }
        FUN_0384ff0c((float)uVar10,lVar12,0);
      }
    }
    uVar10 = *(uint *)(param_1 + 0x638);
  }
  if (uVar10 != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x6e8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x72d) == '\0' && *(char *)(param_1 + 0x99a) == '\0') {
    return;
  }
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar17 = fVar17 * 8.381903e-08;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (45.0 <= fVar17) {
    bVar5 = false;
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar17)) {
      bVar5 = fVar17 < 315.0;
      bVar6 = fVar17 == 315.0;
      bVar7 = false;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    bVar5 = false;
    if ((45.0 <= fVar17) && (bVar5 = false, !NAN(fVar17))) {
      bVar5 = fVar17 < 135.0;
    }
    if (bVar5) {
      iVar11 = 1;
    }
    else {
      bVar5 = true;
      bVar6 = false;
      if (fVar17 < 225.0) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar17)) {
          bVar5 = fVar17 < 135.0;
          bVar6 = false;
        }
      }
      iVar11 = 2;
      if (bVar5 != bVar6) {
        iVar11 = 3;
      }
    }
  }
  else {
    iVar11 = 0;
  }
  if (DAT_05292338 == 0) {
    return;
  }
  if (*(char *)(DAT_05292338 + 0xe9e) == '\0') {
    bVar3 = *(byte *)(DAT_05292338 + 0xedc);
  }
  else {
    bVar3 = *(byte *)(DAT_05292338 + 0xedc);
    if (*(int *)(DAT_05292338 + 0xea0) == iVar11) {
      if (-1 < (char)bVar3) {
        return;
      }
      goto LAB_0177dd68;
    }
  }
  if ((bVar3 >> 4 & 1) == 0) {
    return;
  }
LAB_0177dd68:
  lVar12 = *(long *)(param_1 + 0x60);
  local_48 = 0;
  local_70 = &DAT_3f8000003f800000;
  lVar16 = *(long *)(lVar12 + 0x1180);
  bVar5 = *(long *)(lVar12 + 0x1160) != 0;
  if (lVar16 != 0 && bVar5) {
    lVar13 = 0x50;
    if (*(uint *)(lVar12 + 0x1178) < 0xb) {
      lVar13 = 0;
    }
    uVar15 = *(ulong *)(lVar16 + lVar13);
  }
  else {
    uVar15 = 0xffffffffffff;
  }
  if (((((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) && ((uVar15 & 0xffff) != 0xffff)) &&
     ((uVar15 & 0xffff0000) != 0xffff0000)) {
    if (lVar16 != 0 && bVar5) {
      lVar13 = 0x50;
      if (*(uint *)(lVar12 + 0x1178) < 0xb) {
        lVar13 = 0;
      }
      uVar15 = *(ulong *)(lVar16 + lVar13);
    }
    else {
      uVar15 = 0xffffffffffff;
    }
    plVar9 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(lVar12 + 0x1150) + 0x38) +
                       (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
    (**(code **)(*plVar9 + 0x178))
              (0x3fc90fdb,plVar9,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_70,
               &local_48);
  }
  return;
}

