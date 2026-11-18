
float FUN_032b20e0(float param_1,float param_2,long *param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(int *)((long)param_3 + 0xac) == 0) {
    return 0.0;
  }
  uVar2 = *(uint *)(param_3 + 0x29);
  *(uint *)(param_3 + 0x29) = uVar2 + 1;
  pfVar1 = (float *)((long)(param_3 + 0x25) + (ulong)uVar2 * 2 * 4);
  if (3 < uVar2) {
    pfVar1 = (float *)(param_3 + 0x25);
  }
  *pfVar1 = -param_1;
  pfVar1[1] = -param_2;
  iVar9 = *(int *)((long)param_3 + 0x14c);
  iVar6 = 0;
  if (iVar9 != 0) {
    iVar6 = (int)param_3[0x29] / iVar9;
  }
  *(int *)(param_3 + 0x29) = (int)param_3[0x29] - iVar6 * iVar9;
  iVar9 = *(int *)((long)param_3 + 0xac);
  puVar3 = local_80;
  if (*(int *)((long)param_3 + 0xac) == 3) {
    uVar7 = (**(code **)(*param_3 + 0x80))(param_3);
    if ((uVar7 & 1) != 0) {
      if (*(int *)((long)param_3 + 0xac) == 0) {
        fVar12 = 0.0;
      }
      else {
        fVar16 = *(float *)((long)param_3 + 0xc);
        fVar17 = *(float *)(param_3 + 2);
        fVar18 = -fVar17;
        fVar15 = -fVar16;
        fVar12 = SQRT(fVar17 * fVar17 + fVar16 * fVar16);
        if (0.0 < fVar12) {
          fVar12 = 1.0 / fVar12;
          fVar15 = fVar12 * fVar15;
          fVar18 = fVar12 * fVar18;
        }
        fVar15 = *(float *)(param_3 + 0x16) * fVar15;
        fVar18 = *(float *)(param_3 + 0x16) * fVar18;
        fVar16 = fVar16 + fVar15;
        fVar17 = fVar17 + fVar18;
        fVar13 = *(float *)((long)param_3 + 0x2c);
        fVar12 = *(float *)(param_3 + 6);
        fVar19 = fVar18 * fVar17 + fVar15 * fVar16;
        while (fVar19 < 0.0) {
          fVar13 = fVar16 + fVar13;
          fVar12 = fVar17 + fVar12;
          fVar16 = fVar15 + fVar16;
          fVar17 = fVar18 + fVar17;
          fVar19 = 0.5;
          if (fVar13 < 0.0) {
            fVar19 = -0.5;
          }
          fVar20 = 0.5;
          if (fVar12 < 0.0) {
            fVar20 = -0.5;
          }
          fVar13 = (float)(int)(fVar13 + fVar19);
          fVar12 = (float)(int)(fVar12 + fVar20);
          fVar19 = fVar18 * fVar17 + fVar15 * fVar16;
        }
        if ((int)param_3[1] != 0) {
          fVar12 = fVar13;
        }
      }
      uVar5 = (**(code **)(*param_3 + 0x60))(fVar12,param_3);
      *(undefined4 *)((long)param_3 + 0xb4) = uVar5;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,4);
    puVar3 = local_80;
    iVar9 = 0;
    if (*(int *)((long)param_3 + 0xac) != 0) {
      local_80._0_4_ = 4;
      iVar9 = *(int *)((long)param_3 + 0xac);
      if (*(int *)((long)param_3 + 0xac) != 4) {
        plVar8 = (long *)param_3[0x20];
        *(undefined4 *)((long)param_3 + 0xac) = 4;
        iVar9 = (int)local_80;
        if (plVar8 != (long *)0x0) {
          local_80 = puVar3;
          (**(code **)(*plVar8 + 0x20))(plVar8,param_3);
          iVar9 = *(int *)((long)param_3 + 0xac);
          puVar3 = local_80;
        }
      }
    }
  }
  local_80 = puVar3;
  if (iVar9 == 5) {
    fVar16 = *(float *)((long)param_3 + 0x94);
    fVar17 = *(float *)(param_3 + 0x13);
    fVar18 = fVar17 - *(float *)(param_3 + 6);
    fVar15 = fVar16 - *(float *)((long)param_3 + 0x2c);
    fVar12 = *(float *)(param_3 + 0x15);
    *(float *)(param_3 + 0x15) = fVar12 + 1.0;
    if ((long *)param_3[0x1a] == (long *)0x0) {
      fVar12 = *(float *)((long)param_3 + 0xc);
      fVar13 = *(float *)(param_3 + 2);
    }
    else {
      fVar13 = (float)(**(code **)(*(long *)param_3[0x1a] + 0x20))
                                ((fVar12 + 1.0) / *(float *)((long)param_3 + 0xa4));
      fVar16 = *(float *)((long)param_3 + 0x94);
      fVar17 = *(float *)(param_3 + 0x13);
      fVar12 = (*(float *)((long)param_3 + 0x9c) +
               fVar13 * (fVar16 - *(float *)((long)param_3 + 0x9c))) -
               *(float *)((long)param_3 + 0x2c);
      fVar13 = (*(float *)(param_3 + 0x14) + fVar13 * (fVar17 - *(float *)(param_3 + 0x14))) -
               *(float *)(param_3 + 6);
      *(float *)((long)param_3 + 0xc) = fVar12;
      *(float *)(param_3 + 2) = fVar13;
    }
    if (((0.0 < fVar18 * fVar13 + fVar15 * fVar12) &&
        (SQRT(fVar13 * fVar13 + fVar12 * fVar12) < SQRT(fVar18 * fVar18 + fVar15 * fVar15))) &&
       (*(float *)(param_3 + 0x15) < *(float *)((long)param_3 + 0xa4))) goto LAB_032b2668;
    if (*(int *)((long)param_3 + 0xac) == 0) {
      *(undefined8 *)((long)param_3 + 0xc) = 0;
      goto LAB_032b2668;
    }
    fVar12 = *(float *)((long)param_3 + 0x34);
    fVar15 = *(float *)(param_3 + 7);
    *(float *)((long)param_3 + 0x2c) = fVar16;
    *(float *)(param_3 + 6) = fVar17;
    *(float *)((long)param_3 + 0x34) = fVar16;
    *(float *)(param_3 + 7) = fVar17;
    *(undefined8 *)((long)param_3 + 0xc) = 0;
    local_80._0_4_ = 1;
    uVar5 = (int)local_80;
    *(float *)((long)param_3 + 0x3c) = fVar16 + (*(float *)((long)param_3 + 0x3c) - fVar12);
    *(float *)(param_3 + 8) = fVar17 + (*(float *)(param_3 + 8) - fVar15);
    local_80._0_4_ = 1;
    iVar9 = 1;
    if (*(int *)((long)param_3 + 0xac) != 1) {
      plVar8 = (long *)param_3[0x20];
      *(undefined4 *)((long)param_3 + 0xac) = 1;
      iVar9 = (int)local_80;
      if (plVar8 != (long *)0x0) {
        local_80._0_4_ = uVar5;
        (**(code **)(*plVar8 + 0x20))(plVar8,param_3);
        iVar9 = *(int *)((long)param_3 + 0xac);
      }
    }
    *(undefined8 *)((long)param_3 + 0xc) = 0;
  }
  else {
    if (iVar9 != 4) {
      if (iVar9 != 2) goto LAB_032b2668;
      uVar2 = *(uint *)((long)param_3 + 0x14c);
      uVar7 = (ulong)uVar2;
      fVar12 = 0.0;
      fVar16 = 0.0;
      if ((int)uVar2 < 1) {
LAB_032b2370:
        if (uVar2 == 0) {
          return 0.0;
        }
      }
      else {
        fVar17 = *(float *)(param_3 + 0x25);
        fVar12 = fVar17 + 0.0;
        fVar15 = *(float *)((long)param_3 + 300);
        fVar16 = fVar15 + 0.0;
        if (uVar2 != 1) {
          fVar12 = fVar12 + *(float *)(param_3 + 0x26);
          fVar16 = fVar16 + *(float *)((long)param_3 + 0x134);
          if (uVar2 != 2) {
            fVar12 = fVar12 + *(float *)(param_3 + 0x27);
            fVar16 = fVar16 + *(float *)((long)param_3 + 0x13c);
            if (uVar2 != 3) {
              fVar12 = fVar12 + *(float *)(param_3 + 0x28);
              fVar16 = fVar16 + *(float *)((long)param_3 + 0x144);
              if (uVar2 != 4) {
                uVar10 = uVar7 & 3;
                if (2 < uVar7 - 5) {
                  lVar11 = (uVar7 & 0xfffffffc) - 4;
                  do {
                    lVar11 = lVar11 + -4;
                    fVar12 = fVar17 + fVar17 + fVar17 + fVar17 + fVar12;
                    fVar16 = fVar15 + fVar15 + fVar15 + fVar15 + fVar16;
                  } while (lVar11 != 0);
                }
                if ((uVar2 & 3) != 0) {
                  do {
                    fVar12 = fVar17 + fVar12;
                    fVar16 = fVar15 + fVar16;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                goto LAB_032b2370;
              }
            }
          }
        }
      }
      *(float *)((long)param_3 + 0xc) = (1.0 / (float)(int)uVar2) * fVar12;
      *(float *)(param_3 + 2) = (1.0 / (float)(int)uVar2) * fVar16;
      goto LAB_032b2668;
    }
    fVar12 = *(float *)(param_3 + 0x16);
    uVar7 = (**(code **)(*param_3 + 0x80))(param_3);
    if ((uVar7 & 1) != 0) {
      bVar4 = (int)param_3[1] != 0;
      pfVar1 = (float *)(param_3 + 2);
      if (bVar4) {
        pfVar1 = (float *)((long)param_3 + 0xc);
      }
      fVar16 = *pfVar1;
      pfVar1 = (float *)(param_3 + 6);
      if (bVar4) {
        pfVar1 = (float *)((long)param_3 + 0x2c);
      }
      fVar15 = *pfVar1;
      fVar17 = (float)(**(code **)(*param_3 + 0x48))(param_3,*(undefined4 *)((long)param_3 + 0xb4));
      iVar9 = *(int *)((long)param_3 + 0xb4);
      if (((0 < iVar9) && (iVar6 = (**(code **)(*param_3 + 0x38))(param_3), iVar9 < iVar6 + -1)) &&
         (fVar17 = fVar17 - fVar15, 0.0 < fVar16 * fVar17)) {
        if (fVar17 == 0.0) {
          return 0.0;
        }
        fVar12 = -fVar17;
        if (0.0 <= fVar17) {
          fVar12 = fVar17;
        }
        fVar12 = (fVar16 * fVar16) / (fVar12 + fVar12);
      }
    }
    uVar7 = (**(code **)(*param_3 + 0x80))(param_3);
    fVar17 = *(float *)((long)param_3 + 0xc);
    fVar16 = *(float *)(param_3 + 2);
    fVar15 = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
    if (((uVar7 & 1) != 0) && (fVar15 <= 10.0)) {
      uVar14 = (**(code **)(*param_3 + 0x40))(fVar12,param_3);
      local_80 = PTR_DAT_04bc9240 + 0x10;
      uStack_78 = 0;
      FUN_032b1f10(uVar14,0x41000000,param_3,&local_80);
      goto LAB_032b2668;
    }
    fVar18 = -fVar17;
    fVar13 = -fVar16;
    if (0.0 < fVar15) {
      fVar18 = (1.0 / fVar15) * fVar18;
      fVar13 = (1.0 / fVar15) * fVar13;
    }
    fVar17 = fVar17 + fVar12 * fVar18;
    fVar16 = fVar16 + fVar12 * fVar13;
    *(float *)((long)param_3 + 0xc) = fVar17;
    *(float *)(param_3 + 2) = fVar16;
    if (fVar12 * fVar13 * fVar16 + fVar12 * fVar18 * fVar17 < 0.0) goto LAB_032b2668;
    *(undefined8 *)((long)param_3 + 0xc) = 0;
    iVar9 = *(int *)((long)param_3 + 0xac);
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
  if ((iVar9 != 0) && (*(int *)((long)param_3 + 0xac) != 1)) {
    plVar8 = (long *)param_3[0x20];
    *(undefined4 *)((long)param_3 + 0xac) = 1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,param_3);
    }
  }
LAB_032b2668:
  (**(code **)(*param_3 + 0x30))(param_3,(long)param_3 + 0xc);
  uVar7 = FUN_032b26fc(param_3);
  if (((uVar7 & 1) != 0) && (*(int *)((long)param_3 + 0xac) == 4)) {
    *(undefined8 *)((long)param_3 + 0xc) = 0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    if (*(int *)((long)param_3 + 0xac) != 1) {
      plVar8 = (long *)param_3[0x20];
      *(undefined4 *)((long)param_3 + 0xac) = 1;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8,param_3);
      }
    }
  }
  return *(float *)((long)param_3 + 0x14) - *(float *)((long)param_3 + 0x2c);
}

