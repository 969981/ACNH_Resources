
void FUN_018484a0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  ulong uVar12;
  short *psVar13;
  undefined4 *puVar14;
  uint uVar15;
  long lVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_178;
  undefined8 local_170;
  uint local_168;
  short local_164;
  undefined1 local_162;
  undefined1 local_161;
  undefined4 local_160;
  uint local_15c;
  undefined *local_158;
  undefined8 local_150;
  uint local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  uVar18 = *(uint *)(param_1 + 0x4d0);
  pfVar11 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x128) + 0xf0))
                               (*(long *)(param_1 + 0x4b8) + 0x128);
  uVar8 = *(uint *)(param_1 + 800);
  if (uVar8 == uVar18) {
    lVar20 = 0;
  }
  else {
    uVar15 = uVar8 - uVar18;
    if (uVar8 < uVar18 || uVar8 - uVar18 == 0) {
      uVar15 = uVar18 - uVar8;
    }
    if (uVar15 < 0x80000001) {
      lVar16 = -1;
    }
    else {
      lVar16 = 1;
    }
    lVar20 = -lVar16;
    if (uVar18 < uVar8) {
      lVar20 = lVar16;
    }
  }
  lVar20 = lVar20 * ((long)(*pfVar11 * 11930465.0) & 0xffffffffU);
  uVar15 = uVar8 + (int)lVar20;
  if (lVar20 < 1) {
    if (lVar20 < 0) {
      if (uVar15 < uVar8) {
        if (uVar8 < uVar18) goto LAB_0184857c;
      }
      else if (uVar18 <= uVar8) goto LAB_0184866c;
      if (uVar18 < uVar15) goto LAB_0184857c;
LAB_0184866c:
      *(uint *)(param_1 + 800) = uVar18;
    }
    else if ((int)lVar20 != 0) goto LAB_01848580;
    *(undefined1 *)(param_1 + 0x3b4) = 1;
    iVar9 = *(int *)(param_1 + 0x3a8);
    if (iVar9 == 0x263) {
      lVar16 = *(long *)(param_1 + 0x300);
      fVar23 = *(float *)(param_1 + 0x328) - *(float *)(lVar16 + 0x278);
      fVar24 = *(float *)(param_1 + 0x330) - *(float *)(lVar16 + 0x280);
      uVar8 = FUN_006f0400(-(*(float *)(param_1 + 0x32c) - *(float *)(lVar16 + 0x27c)),
                           SQRT(fVar24 * fVar24 + fVar23 * fVar23));
      uVar18 = *(uint *)(param_1 + 0x31c);
      if (uVar18 != uVar8) {
        bVar5 = uVar18 < uVar8;
        bVar6 = uVar18 - uVar8 == 0;
        uVar15 = uVar18 - uVar8;
        if (bVar5 || bVar6) {
          uVar15 = uVar8 - uVar18;
        }
        lVar16 = -1;
        if (!bVar5 && !bVar6) {
          lVar16 = 1;
        }
        lVar20 = 1;
        if (!bVar5 && !bVar6) {
          lVar20 = -1;
        }
        if (uVar15 < 0x80000001) {
          lVar16 = lVar20;
        }
        uVar15 = uVar18 + (int)lVar16 * 0x4feae2;
        if (lVar16 < 1) {
          if (lVar16 < 0) {
            if (uVar15 < uVar18) {
              if (uVar18 < uVar8 || uVar8 < uVar15) goto LAB_0184874c;
            }
            else if ((uVar8 > uVar18 && uVar8 <= uVar15) && (uVar8 <= uVar18 || uVar15 != uVar8))
            goto LAB_0184874c;
            goto LAB_01848750;
          }
        }
        else {
          if (uVar18 < uVar15) {
            if ((uVar8 < uVar18) || (uVar15 < uVar8)) goto LAB_0184874c;
          }
          else if (uVar8 < uVar18 && uVar15 < uVar8) {
LAB_0184874c:
            uVar8 = uVar15;
          }
LAB_01848750:
          *(uint *)(param_1 + 0x31c) = uVar8;
        }
      }
      iVar9 = *(int *)(param_1 + 0x3a8);
      if ((iVar9 != 0x263) || (*(int *)(param_1 + 0x510) < 0)) goto LAB_01848768;
    }
    else {
LAB_01848768:
      fVar23 = *(float *)(param_1 + 0x32c);
      fVar24 = 0.01;
      if (iVar9 != 0x260 && iVar9 != 0x287) {
        fVar24 = 0.00625;
      }
      fVar25 = *(float *)(param_1 + 0x338);
      if (fVar23 <= fVar25) {
        if (fVar23 < fVar25) {
          fVar24 = fVar25 - fVar24;
          bVar5 = false;
          bVar6 = false;
          if (fVar24 <= fVar25) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar24) && !NAN(fVar23)) {
              bVar5 = fVar24 == fVar23;
              bVar6 = fVar23 <= fVar24;
            }
          }
          if (bVar6 && !bVar5) {
            fVar23 = fVar24;
          }
          goto LAB_018487c8;
        }
      }
      else {
        fVar24 = fVar25 + fVar24;
        bVar5 = false;
        bVar6 = false;
        if (fVar25 <= fVar24) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar24) && !NAN(fVar23)) {
            bVar5 = fVar24 < fVar23;
            bVar6 = false;
          }
        }
        if (bVar5 != bVar6) {
          fVar23 = fVar24;
        }
LAB_018487c8:
        *(float *)(param_1 + 0x338) = fVar23;
      }
      if ((iVar9 == 0x260) || (iVar9 == 0x287)) goto LAB_018487f4;
    }
    puVar14 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x98) + 0xf0))();
    *(undefined4 *)(param_1 + 0x308) = *puVar14;
  }
  else {
    if (uVar8 < uVar15) {
      if (uVar8 <= uVar18) goto LAB_01848574;
    }
    else {
      if (uVar8 <= uVar18) goto LAB_0184866c;
LAB_01848574:
      if (uVar18 <= uVar15) goto LAB_0184866c;
    }
LAB_0184857c:
    *(uint *)(param_1 + 800) = uVar15;
    uVar8 = uVar15;
LAB_01848580:
    if ((*(int *)(param_1 + 0x3a8) == 0x263) && (*(char *)(param_1 + 0x524) != '\0')) {
      uVar15 = *(uint *)(param_1 + 0x520);
      uVar18 = uVar15 - uVar8;
      if (uVar18 != 0) {
        uVar4 = uVar18;
        if (uVar15 <= uVar8) {
          uVar4 = uVar8 - uVar15;
        }
        uVar18 = -uVar4;
        if (uVar4 < 0x80000001) {
          uVar18 = uVar4;
        }
      }
      uVar8 = *(uint *)(param_1 + 0x4d0);
      if (uVar15 - uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar4 = uVar15 - uVar8;
        if (uVar15 <= uVar8) {
          uVar4 = uVar8 - uVar15;
        }
        uVar8 = -uVar4;
        if (uVar4 < 0x80000001) {
          uVar8 = uVar4;
        }
      }
      uVar15 = *(uint *)(param_1 + 0x518);
      uVar4 = *(uint *)(param_1 + 0x51c);
      if (uVar15 - uVar4 != 0) {
        uVar3 = uVar15 - uVar4;
        if (uVar4 >= uVar15) {
          uVar3 = uVar4 - uVar15;
        }
        uVar2 = -uVar3;
        if (uVar3 < 0x80000001) {
          uVar2 = uVar3;
        }
        iVar19 = (int)((((float)uVar18 * 8.381903e-08) / ((float)uVar8 * 8.381903e-08)) *
                      (float)uVar2);
        iVar9 = -iVar19;
        if (uVar4 < uVar15 != uVar3 < 0x80000001) {
          iVar9 = iVar19;
        }
        uVar15 = iVar9 + uVar15;
      }
      *(uint *)(param_1 + 0x31c) = uVar15;
    }
  }
LAB_018487f4:
  *(uint *)(param_1 + 0x508) = (uint)*(byte *)(param_1 + 0x3b4);
  lVar16 = *(long *)(param_1 + 0x3d0);
  if (lVar16 == 0) {
LAB_0184885c:
    local_150 = (undefined1 *)((ulong)local_150 & 0xffffffff00000000);
    local_158 = PTR_DAT_04bbfe68 + 0x10;
    lVar16 = *(long *)PTR_DAT_04bb2720;
    if (lVar16 == 0) {
      puVar22 = &DAT_055c04a0;
    }
    else {
      puVar22 = &DAT_055c04a0;
      if (*(long *)(lVar16 + 0x330) != 0) {
        puVar22 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar9 = FUN_006bd550(*puVar22,0);
        puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar22 = &DAT_055c04a0;
        }
      }
    }
    local_150 = (undefined1 *)CONCAT44(*(undefined4 *)(puVar22 + 7),(undefined4)local_150);
    uVar7 = FUN_017baf44();
    local_148 = CONCAT31(local_148._1_3_,uVar7) & 0xffffff01;
    local_178 = PTR_DAT_04bb2010 + 0x10;
    local_170 = CONCAT44((int)((float)(int)*(float *)(param_1 + 0x4cc) / 5.0) -
                         (uint)(*(float *)(param_1 + 0x4cc) < 0.0),
                         (int)((float)(int)*(float *)(param_1 + 0x4c4) / 5.0) -
                         (uint)(*(float *)(param_1 + 0x4c4) < 0.0));
    psVar13 = (short *)FUN_01a5190c(&local_158,0,&local_178,0);
    puVar1 = PTR_DAT_04bb4008;
    uVar10 = *(undefined4 *)(param_1 + 0x3a8);
    uVar12 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,uVar10);
    if ((uVar12 & 1) == 0) {
      uVar18 = 1;
    }
    else {
      if (*psVar13 == -2) goto LAB_01848a04;
      local_162 = (undefined1)psVar13[1];
      local_161 = *(undefined1 *)((long)psVar13 + 3);
      local_160 = *(undefined4 *)(psVar13 + 2);
      local_164 = *psVar13;
      local_15c = FUN_01241ca0(&local_164);
      if (local_15c == 0x13) {
        uVar18 = 0;
      }
      else {
        local_168 = 0;
        uVar12 = FUN_01a12d50(*(undefined8 *)puVar1,&local_168,uVar10);
        uVar18 = 0;
        if ((uVar12 & 1) != 0) {
          uVar18 = local_168 >> (ulong)(local_15c & 0x1f) & 1;
        }
      }
    }
    if ((uVar18 != 0) && (*(int *)(param_1 + 0x3cc) != 0)) {
      if ((*(long *)(param_1 + 0x3d0) == 0) ||
         ((lVar16 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar16 == 0 ||
          (*(float *)(lVar16 + 0x2b0) <= *(float *)(lVar16 + 0x2b4))))) {
        if (*(char *)(param_1 + 0x3b4) == '\0') {
          return;
        }
        lVar16 = *(long *)(param_1 + 0x300);
        fVar23 = *(float *)(lVar16 + 0x278) - *(float *)(param_1 + 0x328);
        if (*(int *)(param_1 + 0x3a8) == 0x263) {
          fVar24 = *(float *)(lVar16 + 0x27c) - *(float *)(param_1 + 0x32c);
          fVar25 = *(float *)(lVar16 + 0x280) - *(float *)(param_1 + 0x330);
          fVar23 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
        }
        else {
          fVar24 = *(float *)(lVar16 + 0x280) - *(float *)(param_1 + 0x330);
          fVar23 = fVar24 * fVar24 + fVar23 * fVar23;
        }
        uVar10 = (**(code **)(*(long *)(param_1 + 0x4d8) + (ulong)*(byte *)(param_1 + 0x4ec) * 8))
                           (param_1 + 0x4d8);
        *(undefined4 *)(param_1 + 0x4e0) = uVar10;
        if (0.25 <= fVar23) {
          if ((*(int *)(param_1 + 0x3a8) != 0x287) && (*(int *)(param_1 + 0x3a8) != 0x260)) {
            return;
          }
          if (*(int *)(param_1 + 0x510) < 0) {
            if (*(float *)(param_1 + 0x514) == 0.0) {
              *(undefined4 *)(param_1 + 0x344) = 0;
              return;
            }
            fVar24 = SQRT(fVar23);
            if (NAN(fVar24)) {
              fVar24 = sqrtf(fVar23);
            }
            fVar23 = *(float *)(param_1 + 0x514);
            if (fVar23 * 0.7 <= fVar24) {
              fVar23 = sinf((((fVar23 - fVar24) * 90.0) / (fVar23 * 0.3)) * 0.017453292);
              fVar23 = fVar23 + fVar23;
            }
            else {
              fVar23 = (fVar24 + fVar24) / (fVar23 * 0.7);
            }
            *(float *)(param_1 + 0x344) = fVar23;
            return;
          }
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_150 = &DAT_040ba9de;
          local_158 = puVar1;
          local_170 = FUN_0384fe18(*(undefined8 *)
                                    (*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138),0);
          local_178 = puVar1;
          uVar12 = FUN_00710cb0(&local_158,&local_178);
          if ((uVar12 & 1) != 0) {
            local_150 = &DAT_0407c690;
            local_158 = puVar1;
            FUN_018172e4(0,param_1,&local_158);
            *(undefined4 *)(param_1 + 0x510) = 10;
            return;
          }
          iVar9 = *(int *)(param_1 + 0x510);
          *(int *)(param_1 + 0x510) = iVar9 + -1;
          if (0 < iVar9) {
            return;
          }
          if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) != 0) {
            FUN_03850760(0x3f800000);
          }
          puVar14 = (undefined4 *)
                    (**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x98) + 0xf0))();
          *(undefined4 *)(param_1 + 0x308) = *puVar14;
          fVar23 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
          fVar24 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
          *(float *)(param_1 + 0x514) = SQRT(fVar24 * fVar24 + fVar23 * fVar23);
          return;
        }
        iVar9 = 6;
      }
      else {
        iVar9 = 7;
      }
      goto LAB_01848a0c;
    }
  }
  else {
    (**(code **)(*(long *)(lVar16 + 0x2d8) + 0x28))(lVar16 + 0x2d8);
    plVar21 = *(long **)PTR_DAT_04bb27d0;
    uVar12 = FUN_01d3e29c(*plVar21 + 8);
    if (((uVar12 & 1) != 0) && (uVar12 = FUN_01d692e8(plVar21[2]), (uVar12 & 1) == 0)) {
      if (*(char *)(param_1 + 0x3b4) == '\0') {
        return;
      }
      lVar16 = *(long *)(param_1 + 0x300);
      iVar9 = *(int *)(param_1 + 0x3a8);
      fVar23 = *(float *)(lVar16 + 0x278) - *(float *)(param_1 + 0x328);
      if (iVar9 == 0x263) {
        fVar24 = *(float *)(lVar16 + 0x27c) - *(float *)(param_1 + 0x32c);
        fVar25 = *(float *)(lVar16 + 0x280) - *(float *)(param_1 + 0x330);
        fVar23 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
LAB_01848c30:
        if (fVar23 < 1.0) {
          *(undefined4 *)(param_1 + 0x308) = 0;
          return;
        }
        return;
      }
      fVar24 = *(float *)(lVar16 + 0x280) - *(float *)(param_1 + 0x330);
      fVar23 = fVar24 * fVar24 + fVar23 * fVar23;
      if ((iVar9 != 0x287) && (iVar9 != 0x260)) goto LAB_01848c30;
      if (*(int *)(param_1 + 0x510) < 0) {
        fVar24 = *(float *)(param_1 + 0x514);
        if (fVar24 == 0.0) {
          *(undefined4 *)(param_1 + 0x344) = 0;
        }
        else {
          fVar25 = SQRT(fVar23);
          if (fVar24 * 0.7 <= fVar25) {
            fVar24 = sinf((((fVar24 - fVar25) * 90.0) / (fVar24 * 0.3)) * 0.017453292);
            fVar24 = fVar24 + fVar24;
          }
          else {
            fVar24 = (fVar25 + fVar25) / (fVar24 * 0.7);
          }
          *(float *)(param_1 + 0x344) = fVar24;
        }
      }
      else {
        lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138);
        if (*(char *)(lVar16 + 0xae) == '\0') {
          lVar16 = *(long *)(lVar16 + 0x88);
          plVar21 = (long *)(lVar16 + 0x60);
          (**(code **)(*plVar21 + 0x18))(plVar21);
          pcVar17 = *(char **)(lVar16 + 0x68);
        }
        else {
          lVar16 = *(long *)(lVar16 + 0x78);
          if (*(int *)(lVar16 + 0x18) < 1) {
            local_45 = 0;
            local_148 = 0x100;
            local_150 = local_144;
            local_144[0] = 0;
            local_158 = PTR_DAT_04bb21f8 + 0x10;
            lVar16 = *(long *)(*(long *)(*(long *)(lVar16 + 0x50) + 0x10) + 8);
            FUN_038d1270(&local_158,"%s.as",
                         lVar16 + *(int *)(lVar16 + 0x24) + (long)*(int *)(lVar16 + 8));
            pcVar17 = "";
          }
          else {
            pcVar17 = *(char **)(**(long **)(lVar16 + 0x20) + 0x10);
          }
        }
        if ((pcVar17 == "Wait") ||
           ((((*pcVar17 == 'W' && (pcVar17[1] == 'a')) && (pcVar17[2] == 'i')) &&
            ((pcVar17[3] == 't' && (pcVar17[4] == '\0')))))) {
          local_158 = PTR_DAT_04bb2020 + 0x10;
          local_150 = &DAT_0407c690;
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar16 != 0)) {
            FUN_0073d870(lVar16,&local_158,10,0,0);
          }
          if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
            FUN_03850760(0);
          }
          *(undefined4 *)(param_1 + 0x510) = 10;
          return;
        }
        iVar9 = *(int *)(param_1 + 0x510);
        *(int *)(param_1 + 0x510) = iVar9 + -1;
        if (0 < iVar9) {
          return;
        }
        if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) != 0) {
          FUN_03850760(0x3f800000);
        }
        puVar14 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x98) + 0xf0))()
        ;
        *(undefined4 *)(param_1 + 0x308) = *puVar14;
        fVar24 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
        fVar25 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x514) = SQRT(fVar25 * fVar25 + fVar24 * fVar24);
      }
      if (0.25 <= fVar23) {
        return;
      }
      iVar9 = 6;
      goto LAB_01848a0c;
    }
    if (((*(long *)(param_1 + 0x3d0) == 0) ||
        (lVar16 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar16 == 0)) ||
       (*(float *)(lVar16 + 0x2b0) <= *(float *)(lVar16 + 0x2b8))) goto LAB_0184885c;
  }
LAB_01848a04:
  iVar9 = 0;
LAB_01848a0c:
  if (*(int *)(param_1 + 0x280) != iVar9) {
    FUN_03ebb160(param_1 + 0x278);
  }
  return;
}

