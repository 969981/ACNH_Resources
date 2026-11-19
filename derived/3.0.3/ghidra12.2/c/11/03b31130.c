
/* WARNING: Removing unreachable block (ram,0x03b31704) */
/* WARNING: Removing unreachable block (ram,0x03b314a0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff364 : 0x03b314b8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_03b31130(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_ca8;
  int local_ca4;
  int local_ca0;
  long lStack_c9c;
  float afStack_c94 [2];
  undefined8 auStack_c8c [383];
  undefined8 local_88;
  
  lVar12 = *(long *)(param_1 + 0x28);
  lVar8 = param_1 + 0x20;
  local_ca0 = 0;
  if (lVar12 == lVar8) {
LAB_03b315f4:
    *(undefined4 *)(param_1 + 0xe4) = 0;
    return 0;
  }
  fVar18 = 0.0;
  iVar13 = 0;
  do {
    fVar14 = *(float *)(lVar12 + 0x44);
    lVar10 = lVar12 + -8;
    fVar19 = *(float *)(lVar12 + 0x4c);
    fVar15 = -fVar14;
    bVar1 = *(byte *)(lVar12 + 0x50);
    fVar17 = fVar15;
    if (0.0 <= fVar14) {
      fVar17 = fVar14;
    }
    lVar5 = FUN_03b181f0(lVar10);
    if (lVar5 == 0) {
      bVar4 = (bool)(bVar1 & 1);
      uVar11 = FUN_03b32110(param_1,lVar10);
      uVar11 = uVar11 & 0xffffffff;
    }
    else if ((bVar1 & 1) == 0) {
      bVar4 = false;
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      bVar4 = *(char *)(*(long *)(lVar5 + 0xe8) + 0x99) != '\0';
    }
    fVar19 = fVar19 * fVar17;
    plVar6 = (long *)FUN_03b16ff0(lVar10);
    if (plVar6 == (long *)0x0) {
      fVar14 = 0.0;
      if ((uVar11 & 1) == 0) {
        fVar17 = fVar19;
      }
      else {
        lVar5 = *(long *)(lVar12 + 0x20);
        local_88 = 0xf49dc5ae749dc5ae;
        if (lVar5 == lVar12 + 0x18) {
          local_88._4_4_ = -1e+32;
          local_88._0_4_ = 1e+32;
        }
        else {
          do {
            FUN_03b32750(0,fVar17,param_1,lVar5 + -8,&local_88);
            lVar5 = *(long *)(lVar5 + 8);
          } while (lVar5 != lVar12 + 0x18);
        }
        fVar17 = local_88._4_4_ - (float)local_88;
        bVar3 = false;
        if (0.0 < fVar17) {
          bVar3 = bVar4;
        }
        bVar4 = bVar3;
        fVar14 = (float)local_88 + fVar17 * 0.5;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x148))();
      fVar17 = fVar17 * fVar15;
      bVar1 = *(byte *)((long)plVar6 + 0x116) >> 2 & 3;
      if ((*(ushort *)((long)plVar6 + 0x114) & 0x1000) != 0) {
        bVar1 = 0;
      }
      if (bVar1 == 1) {
        fVar14 = fVar19 * 0.5 - fVar17 * 0.5;
      }
      else {
        fVar14 = 0.0;
        if (bVar1 != 2) goto LAB_03b31360;
        fVar14 = fVar17 * 0.5 - fVar19 * 0.5;
      }
      fVar14 = -fVar14;
    }
LAB_03b31360:
    bVar1 = *(byte *)(lVar12 + 0x53) >> 2 & 3;
    fVar15 = fVar14;
    if (bVar1 == 1) {
      fVar15 = fVar19 * 0.5 + fVar14;
    }
    fVar14 = fVar14 + fVar19 * -0.5;
    if (bVar1 != 2) {
      fVar14 = fVar15;
    }
    if (bVar4 != false) {
      if ((*(byte *)(param_1 + 0xdf) >> 1 & 1) == 0) {
        lVar5 = FUN_0037e610(lVar10,"AlignMargin");
        pfVar7 = (float *)(param_1 + 0xe0);
        if (lVar5 != 0) {
          pfVar7 = (float *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
        }
        fVar15 = *pfVar7;
        cVar2 = *(char *)(param_1 + 0xde);
      }
      else {
        uVar11 = FUN_0037ed4c(lVar10);
        if ((uVar11 & 1) == 0) {
          fVar15 = *(float *)(param_1 + 0xe0);
          cVar2 = *(char *)(param_1 + 0xde);
        }
        else {
          fVar15 = (float)FUN_0037ee14(lVar10);
          cVar2 = *(char *)(param_1 + 0xde);
        }
      }
      if (cVar2 != '\0') {
        bVar1 = *(byte *)(param_1 + 0xdc);
        if (bVar1 < 2) {
          iVar9 = -1;
          for (lVar5 = *(long *)(param_1 + 0x28); lVar5 != lVar8; lVar5 = *(long *)(lVar5 + 8)) {
            iVar9 = iVar9 + 1;
          }
          if (iVar13 != iVar9) {
            if (bVar1 != 0) goto LAB_03b3142c;
            goto LAB_03b31434;
          }
LAB_03b31438:
          fVar18 = fVar18 + fVar15;
          local_ca8 = 0x80;
          iVar9 = 0;
          if (0x7f < local_ca0) {
            iVar9 = local_ca8;
          }
          lVar5 = (long)(local_ca0 - iVar9);
          auStack_c8c[lVar5 * 3] = 0;
          *(long *)(afStack_c94 + lVar5 * 6 + -2) = lVar10;
          afStack_c94[lVar5 * 6] = 0.0;
          afStack_c94[lVar5 * 6 + 1] = fVar15;
          local_ca0 = local_ca0 + 1;
          goto LAB_03b311e0;
        }
LAB_03b3142c:
        if (bVar1 == 2) {
LAB_03b31434:
          if (iVar13 == 0) goto LAB_03b31438;
        }
      }
      local_ca8 = 0x80;
      fVar18 = fVar18 + fVar17 + fVar15;
      iVar9 = 0;
      if (0x7f < local_ca0) {
        iVar9 = local_ca8;
      }
      lVar5 = (long)(local_ca0 - iVar9);
      auStack_c8c[lVar5 * 3] = 0;
      *(long *)(afStack_c94 + lVar5 * 6 + -2) = lVar10;
      afStack_c94[lVar5 * 6] = fVar17;
      afStack_c94[lVar5 * 6 + 1] = fVar15;
      *(float *)(auStack_c8c + lVar5 * 3) = fVar14;
      local_ca0 = local_ca0 + 1;
    }
LAB_03b311e0:
    lVar12 = *(long *)(lVar12 + 8);
    iVar13 = iVar13 + 1;
  } while (lVar12 != lVar8);
  if (local_ca0 == 0) goto LAB_03b315f4;
  local_ca8 = 0x80;
  local_ca4 = 0;
  if (*(byte *)(param_1 + 0xdc) < 2) {
    fVar18 = fVar18 - afStack_c94[1];
    fVar17 = fVar18;
    if (*(byte *)(param_1 + 0xdc) != 0) {
      fVar17 = *(float *)(param_1 + 0x54);
    }
    *(byte *)(lStack_c9c + 0x58) = *(byte *)(lStack_c9c + 0x58) | 0x10;
    auStack_c8c[0]._0_4_ = (float)auStack_c8c[0] + fVar17 * 0.5 + afStack_c94[0] * -0.5;
    fVar14 = 0.5;
    if ((float)auStack_c8c[0] < 0.0) {
      fVar14 = -0.5;
    }
    *(float *)(lStack_c9c + 0x34) = (float)(int)((float)auStack_c8c[0] + fVar14);
    iVar13 = local_ca0 + -1;
    if (iVar13 != 0) {
      afStack_c94[0] = fVar17 * 0.5 - afStack_c94[0];
      do {
        local_ca4 = local_ca4 + 1;
        iVar9 = 0;
        if (0x7f < local_ca4) {
          iVar9 = local_ca8;
        }
        lVar8 = (long)(local_ca4 - iVar9);
        fVar14 = afStack_c94[(long)(local_ca4 - iVar9) * 6 + 1];
        fVar15 = *(float *)(auStack_c8c + lVar8 * 3);
        lVar12 = *(long *)(afStack_c94 + lVar8 * 6 + -2);
        fVar17 = afStack_c94[lVar8 * 6];
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
        fVar15 = fVar15 + (afStack_c94[0] - fVar14) + fVar17 * -0.5;
        fVar17 = 0.5;
        if (fVar15 < 0.0) {
          fVar17 = -0.5;
        }
        iVar13 = iVar13 + -1;
        *(float *)(lVar12 + 0x34) = (float)(int)(fVar15 + fVar17);
        afStack_c94[0] = (afStack_c94[0] - fVar14) - afStack_c94[lVar8 * 6];
      } while (iVar13 != 0);
    }
    if (*(char *)(param_1 + 0xde) == '\0') goto LAB_03b3180c;
    if (*(char *)(param_1 + 0xdc) == '\0') {
      iVar13 = 0;
      if (0x7f < local_ca0 + -1) {
        iVar13 = local_ca8;
      }
      lVar8 = (long)((local_ca0 + -1) - iVar13);
      lVar12 = *(long *)(afStack_c94 + lVar8 * 6 + -2);
      fVar17 = (*(float *)(param_1 + 0x54) - fVar18) * 0.5;
      *(float *)(lVar12 + 0x54) = fVar17;
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
      lVar8 = *(long *)(afStack_c94 + lVar8 * 6 + -2);
      bVar1 = *(byte *)(lVar8 + 0x5b) >> 2 & 3;
      if (bVar1 == 2) {
        fVar14 = *(float *)(lVar8 + 0x34) - fVar17;
LAB_03b317ac:
        *(float *)(lVar8 + 0x34) = fVar14;
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
      }
      else if (bVar1 == 0) {
        fVar14 = *(float *)(lVar8 + 0x34) + fVar17 * -0.5;
        goto LAB_03b317ac;
      }
      *(float *)(lStack_c9c + 0x54) = fVar17;
      *(byte *)(lStack_c9c + 0x58) = *(byte *)(lStack_c9c + 0x58) | 0x10;
      goto LAB_03b317d4;
    }
    if (*(char *)(param_1 + 0xdc) != '\x01') goto LAB_03b3180c;
    iVar13 = 0;
    if (0x7f < local_ca0 + -1) {
      iVar13 = local_ca8;
    }
    lVar8 = (long)((local_ca0 + -1) - iVar13);
    fVar17 = *(float *)(param_1 + 0x54) - fVar18;
    lVar12 = *(long *)(afStack_c94 + lVar8 * 6 + -2);
    *(float *)(lVar12 + 0x54) = fVar17;
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
    lStack_c9c = *(long *)(afStack_c94 + lVar8 * 6 + -2);
    bVar1 = *(byte *)(lStack_c9c + 0x5b) >> 2 & 3;
    if (bVar1 == 2) {
      fVar17 = *(float *)(lStack_c9c + 0x34) - fVar17;
    }
    else {
      if (bVar1 != 0) goto LAB_03b3180c;
      fVar17 = *(float *)(lStack_c9c + 0x34) + fVar17 * -0.5;
    }
  }
  else {
    iVar9 = local_ca0 + -1;
    fVar17 = *(float *)(param_1 + 0x54) * -0.5;
    iVar13 = 0;
    if (0x7f < iVar9) {
      iVar13 = local_ca8;
    }
    lVar8 = (long)(iVar9 - iVar13);
    lVar12 = *(long *)(afStack_c94 + lVar8 * 6 + -2);
    fVar15 = *(float *)(auStack_c8c + lVar8 * 3) + fVar17 + afStack_c94[lVar8 * 6] * 0.5;
    fVar14 = 0.5;
    if (fVar15 < 0.0) {
      fVar14 = -0.5;
    }
    fVar19 = afStack_c94[lVar8 * 6 + 1];
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
    *(float *)(lVar12 + 0x34) = (float)(int)(fVar15 + fVar14);
    if (iVar9 != 0) {
      fVar17 = fVar17 + afStack_c94[lVar8 * 6];
      do {
        iVar13 = local_ca0 + -2;
        local_ca0 = local_ca0 + -1;
        iVar9 = 0;
        if (0x7f < iVar13) {
          iVar9 = local_ca8;
        }
        iVar13 = iVar13 - iVar9;
        lVar8 = (long)iVar13;
        fVar15 = afStack_c94[(long)iVar13 * 6 + 1];
        fVar16 = *(float *)(auStack_c8c + lVar8 * 3);
        lVar12 = *(long *)(afStack_c94 + lVar8 * 6 + -2);
        fVar14 = afStack_c94[lVar8 * 6];
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
        fVar16 = fVar16 + fVar17 + fVar15 + fVar14 * 0.5;
        fVar14 = 0.5;
        if (fVar16 < 0.0) {
          fVar14 = -0.5;
        }
        *(float *)(lVar12 + 0x34) = (float)(int)(fVar16 + fVar14);
        fVar17 = fVar17 + fVar15 + afStack_c94[lVar8 * 6];
      } while (local_ca0 != 1);
    }
    fVar18 = fVar18 - fVar19;
    if (*(char *)(param_1 + 0xde) == '\0') goto LAB_03b3180c;
    fVar17 = *(float *)(param_1 + 0x54) - fVar18;
    *(float *)(lStack_c9c + 0x54) = fVar17;
    *(byte *)(lStack_c9c + 0x58) = *(byte *)(lStack_c9c + 0x58) | 0x10;
LAB_03b317d4:
    bVar1 = *(byte *)(lStack_c9c + 0x5b) >> 2 & 3;
    if (bVar1 == 1) {
      fVar14 = *(float *)(lStack_c9c + 0x34);
    }
    else {
      if (bVar1 != 0) goto LAB_03b3180c;
      fVar14 = *(float *)(lStack_c9c + 0x34);
      fVar17 = fVar17 * 0.5;
    }
    fVar17 = fVar17 + fVar14;
  }
  *(float *)(lStack_c9c + 0x34) = fVar17;
  *(byte *)(lStack_c9c + 0x58) = *(byte *)(lStack_c9c + 0x58) | 0x10;
LAB_03b3180c:
  *(float *)(param_1 + 0xe4) = fVar18;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return 1;
}

