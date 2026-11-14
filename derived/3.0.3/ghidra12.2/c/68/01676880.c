
/* WARNING: Removing unreachable block (ram,0x01676cb8) */
/* WARNING: Removing unreachable block (ram,0x016769c8) */
/* WARNING: Removing unreachable block (ram,0x016769d8) */
/* WARNING: Removing unreachable block (ram,0x01676ca8) */

undefined8 FUN_01676880(long param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  int local_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  
  puVar6 = PTR_DAT_04bb2018;
  if (DAT_04cfae30 == 0) {
    return 0;
  }
  local_90 = PTR_DAT_04bb2018 + 0x10;
  iVar16 = *(int *)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0xc);
  fVar17 = (float)iVar16 * 0.5;
  fVar20 = (float)iVar12 * 0.5;
  iVar13 = (int)fVar17;
  fVar19 = (float)(int)fVar17;
  fVar21 = (float)(int)fVar20;
  uVar7 = 0;
  if (fVar17 != fVar19) {
    uVar7 = (uint)(fVar17 < 0.0);
  }
  iVar14 = (int)fVar20;
  local_88 = iVar13 - uVar7;
  uVar7 = 0;
  if (fVar20 != fVar21) {
    uVar7 = (uint)(fVar20 < 0.0);
  }
  iStack_84 = iVar14 - uVar7;
  if (*(long *)(DAT_04cfae30 + 0x90) == 0) {
    fVar18 = -500.0;
  }
  else {
    fVar18 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
    iVar16 = *(int *)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 0xc);
    fVar17 = (float)iVar16 * 0.5;
    fVar20 = (float)iVar12 * 0.5;
    iVar13 = (int)fVar17;
    iVar14 = (int)fVar20;
    fVar19 = (float)(int)fVar17;
    fVar21 = (float)(int)fVar20;
  }
  uVar7 = 0;
  if (fVar17 != fVar19) {
    uVar7 = (uint)(fVar17 < 0.0);
  }
  uVar8 = 0;
  if (fVar20 != fVar21) {
    uVar8 = (uint)(fVar20 < 0.0);
  }
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) ||
     (lVar11 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0), lVar11 == 0)) {
    local_94 = 0;
    goto LAB_01676a78;
  }
  uVar9 = (iVar13 - uVar7) - *(int *)(lVar11 + 0x28);
  uVar10 = *(uint *)(lVar11 + 0x18);
  uVar3 = (iVar14 - uVar8) - *(int *)(lVar11 + 0x2c);
  if ((uVar9 < uVar10 && uVar3 <= *(uint *)(lVar11 + 0x1c)) &&
      (uVar10 <= uVar9 || *(uint *)(lVar11 + 0x1c) != uVar3)) {
    uVar9 = uVar9 + uVar10 * uVar3;
LAB_01676a5c:
    if (*(uint *)(lVar11 + 0x30) <= uVar9) {
      uVar9 = 0;
    }
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x38) + (long)(int)uVar9 * 0x68);
  }
  else {
    if (*(char *)(lVar11 + 0x88) != '\0') {
      uVar9 = (iVar13 - uVar7) - *(int *)(lVar11 + 0x98);
      uVar8 = (iVar14 - uVar8) - *(int *)(lVar11 + 0x9c);
      uVar7 = *(uint *)(lVar11 + 0xa0);
      if ((uVar9 < uVar7 && uVar8 <= *(uint *)(lVar11 + 0xa4)) &&
          (uVar7 <= uVar9 || *(uint *)(lVar11 + 0xa4) != uVar8)) {
        uVar9 = uVar9 + uVar7 * uVar8 + *(int *)(lVar11 + 0x8c);
        goto LAB_01676a5c;
      }
    }
    puVar15 = &DAT_051a50f0;
  }
  local_94 = (int)*(char *)(puVar15 + 2);
LAB_01676a78:
  if ((param_2 & 1) == 0) {
    local_90 = puVar6 + 0x10;
    fVar17 = (float)(iVar16 + -2) * 0.5;
    uVar7 = 0;
    if (fVar17 != (float)(int)fVar17) {
      uVar7 = (uint)(fVar17 < 0.0);
    }
    local_88 = (int)fVar17 - uVar7;
    fVar17 = (float)(iVar12 + -2) * 0.5;
    uVar7 = 0;
    if (fVar17 != (float)(int)fVar17) {
      uVar7 = (uint)(fVar17 < 0.0);
    }
    iStack_84 = (int)fVar17 - uVar7;
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
      fVar17 = -500.0;
    }
    else {
      fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
    }
    if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
      local_90 = puVar6 + 0x10;
      fVar17 = (float)*(int *)(param_1 + 8) * 0.5;
      uVar7 = 0;
      if (fVar17 != (float)(int)fVar17) {
        uVar7 = (uint)(fVar17 < 0.0);
      }
      local_88 = (int)fVar17 - uVar7;
      fVar17 = (float)(*(int *)(param_1 + 0xc) + -2) * 0.5;
      uVar7 = 0;
      if (fVar17 != (float)(int)fVar17) {
        uVar7 = (uint)(fVar17 < 0.0);
      }
      iStack_84 = (int)fVar17 - uVar7;
      if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
        fVar17 = -500.0;
      }
      else {
        fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
      }
      if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
        local_90 = puVar6 + 0x10;
        fVar17 = (float)(*(int *)(param_1 + 8) + 2) * 0.5;
        uVar7 = 0;
        if (fVar17 != (float)(int)fVar17) {
          uVar7 = (uint)(fVar17 < 0.0);
        }
        local_88 = (int)fVar17 - uVar7;
        fVar17 = (float)(*(int *)(param_1 + 0xc) + -2) * 0.5;
        uVar7 = 0;
        if (fVar17 != (float)(int)fVar17) {
          uVar7 = (uint)(fVar17 < 0.0);
        }
        iStack_84 = (int)fVar17 - uVar7;
        if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
          fVar17 = -500.0;
        }
        else {
          fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
        }
        if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
          local_90 = puVar6 + 0x10;
          fVar19 = (float)(*(int *)(param_1 + 8) + -2) * 0.5;
          fVar17 = (float)*(int *)(param_1 + 0xc) * 0.5;
          uVar7 = 0;
          if (fVar19 != (float)(int)fVar19) {
            uVar7 = (uint)(fVar19 < 0.0);
          }
          local_88 = (int)fVar19 - uVar7;
          uVar7 = 0;
          if (fVar17 != (float)(int)fVar17) {
            uVar7 = (uint)(fVar17 < 0.0);
          }
          iStack_84 = (int)fVar17 - uVar7;
          if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
            fVar17 = -500.0;
          }
          else {
            fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
          }
          puVar6 = PTR_DAT_04bb2010;
          if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
            local_a8 = PTR_DAT_04bb2010 + 0x10;
            iStack_9c = *(undefined4 *)(param_1 + 0xc);
            local_a0 = *(int *)(param_1 + 8) + 2;
            FUN_0137d59c(&local_90,&local_a8);
            if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
              fVar17 = -500.0;
            }
            else {
              fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
            }
            if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
              local_a8 = puVar6 + 0x10;
              local_a0 = *(int *)(param_1 + 8) + -2;
              iStack_9c = *(int *)(param_1 + 0xc) + 2;
              FUN_0137d59c(&local_90,&local_a8);
              if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
                fVar17 = -500.0;
              }
              else {
                fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
              }
              if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
                local_a8 = puVar6 + 0x10;
                local_a0 = *(undefined4 *)(param_1 + 8);
                iStack_9c = *(int *)(param_1 + 0xc) + 2;
                FUN_0137d59c(&local_90,&local_a8);
                if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
                  fVar17 = -500.0;
                }
                else {
                  fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
                }
                if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
                  local_a8 = puVar6 + 0x10;
                  local_a0 = *(int *)(param_1 + 8) + 2;
                  iStack_9c = *(int *)(param_1 + 0xc) + 2;
                  FUN_0137d59c(&local_90,&local_a8);
                  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
                    fVar17 = -500.0;
                  }
                  else {
                    fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
                  }
                  if ((-5.0 < fVar17 - fVar18) && (fVar17 - fVar18 < 5.0)) {
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    return 1;
  }
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar16 = -2;
  do {
    iVar12 = -2;
    do {
      if (iVar12 != 0 || iVar16 != 0) {
        iVar13 = iVar12 + *(int *)(param_1 + 8);
        iVar14 = *(int *)(param_1 + 0xc) + iVar16;
        fVar17 = (float)iVar13 * 0.5;
        uVar7 = 0;
        if (fVar17 != (float)(int)fVar17) {
          uVar7 = (uint)(fVar17 < 0.0);
        }
        iVar4 = (int)fVar17 - uVar7;
        fVar17 = (float)iVar14 * 0.5;
        uVar7 = 0;
        if (fVar17 != (float)(int)fVar17) {
          uVar7 = (uint)(fVar17 < 0.0);
        }
        iVar5 = (int)fVar17 - uVar7;
        if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
          fVar17 = -500.0;
        }
        else {
          local_90 = puVar6 + 0x10;
          local_88 = iVar4;
          iStack_84 = iVar5;
          fVar17 = (float)FUN_0094bce0(DAT_04cfae30 + 0x28,&local_90);
        }
        if ((fVar17 - fVar18 <= -5.0) || (5.0 <= fVar17 - fVar18)) {
          local_90 = puVar2;
          local_88 = iVar13;
          iStack_84 = iVar14;
          uVar7 = FUN_0097d6c0(&local_90,1);
          local_90 = puVar2;
          local_88 = iVar13 + 1;
          iStack_84 = iVar14;
          uVar8 = FUN_0097d6c0(&local_90,1);
          local_90 = puVar2;
          local_88 = iVar13;
          iStack_84 = iVar14 + 1;
          uVar9 = FUN_0097d6c0(&local_90,1);
          local_90 = puVar2;
          local_88 = iVar13 + 1;
          iStack_84 = iVar14 + 1;
          uVar10 = FUN_0097d6c0(&local_90,1);
          iVar13 = (uVar8 & 1) + (uVar7 & 1) + (uVar9 & 1) + (uVar10 & 1);
          if (iVar13 == 4) {
            return 1;
          }
          if ((((iVar16 == 0) || (iVar12 == 0)) || (iVar13 == 0)) ||
             (((uVar8 ^ 0xffffffff) & 1) + ((uVar7 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1)
              == (uVar10 & 1) - 1)) {
            if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
              iVar13 = 0;
            }
            else {
              lVar11 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
              iVar13 = 0;
              if (lVar11 != 0) {
                uVar7 = iVar4 - *(int *)(lVar11 + 0x28);
                uVar8 = *(uint *)(lVar11 + 0x18);
                uVar9 = iVar5 - *(int *)(lVar11 + 0x2c);
                if ((uVar7 < uVar8 && uVar9 <= *(uint *)(lVar11 + 0x1c)) &&
                    (uVar8 <= uVar7 || *(uint *)(lVar11 + 0x1c) != uVar9)) {
                  uVar7 = uVar7 + uVar8 * uVar9;
LAB_01676d34:
                  if (*(uint *)(lVar11 + 0x30) <= uVar7) {
                    uVar7 = 0;
                  }
                  puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x38) + (long)(int)uVar7 * 0x68);
                }
                else {
                  if (*(char *)(lVar11 + 0x88) != '\0') {
                    uVar7 = iVar4 - *(int *)(lVar11 + 0x98);
                    if (uVar7 < *(uint *)(lVar11 + 0xa0)) {
                      uVar8 = iVar5 - *(int *)(lVar11 + 0x9c);
                      puVar15 = &DAT_051a50f0;
                      if (uVar8 < *(uint *)(lVar11 + 0xa4)) {
                        uVar7 = uVar7 + *(uint *)(lVar11 + 0xa0) * uVar8 + *(int *)(lVar11 + 0x8c);
                        goto LAB_01676d34;
                      }
                      goto LAB_01676ac4;
                    }
                  }
                  puVar15 = &DAT_051a50f0;
                }
LAB_01676ac4:
                iVar13 = (int)*(char *)(puVar15 + 2);
              }
            }
            if (iVar13 != local_94) {
              return 1;
            }
          }
        }
      }
      bVar1 = iVar12 < 1;
      iVar12 = iVar12 + 2;
    } while (bVar1);
    bVar1 = 0 < iVar16;
    iVar16 = iVar16 + 2;
    if (bVar1) {
      return 0;
    }
  } while( true );
}

