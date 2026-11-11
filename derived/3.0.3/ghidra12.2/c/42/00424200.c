
undefined4 FUN_00424200(char **param_1,char *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  undefined4 uVar22;
  uint uVar23;
  long lVar24;
  char *local_f8;
  undefined8 local_f0;
  char acStack_e8 [136];
  
  if ((param_2 == (char *)0x0) || (iVar7 = FUN_0043a2d0(param_2), iVar7 == 0)) {
    return 0;
  }
  puVar4 = &DAT_0407ebb1;
  if (param_3 != (undefined8 *)0x0) {
    puVar4 = param_3;
  }
  uVar9 = FUN_0043a2d0(puVar4);
  uVar18 = uVar9 & 0xffffffff;
  iVar12 = (int)uVar9;
  if (iVar7 < iVar12) {
    local_f8 = acStack_e8;
    local_f0 = -0x7fffff8000000000;
    if (&local_f8 != param_1) {
      iVar13 = *(int *)(param_1 + 1);
      pcVar20 = *param_1;
      if (0x80 < iVar13) {
        local_f8 = (char *)FUN_004267f0(PTR_DAT_048607c0,iVar13,1,local_f8,0,(long)&local_f0 + 4);
      }
      FUN_0043aa30(local_f8,pcVar20,(long)iVar13);
      local_f0 = CONCAT44(local_f0._4_4_,iVar13);
    }
    puVar14 = (uint *)((long)param_1 + 0xc);
    if ((*puVar14 & 0x3fffffff) == 0) {
      pcVar20 = (char *)FUN_00426720(PTR_DAT_048607c0,1,1,*param_1,*(undefined4 *)(param_1 + 1),
                                     puVar14);
      *param_1 = pcVar20;
    }
    if (*(int *)(param_1 + 1) != 1) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    **param_1 = '\0';
    if ((int)local_f0 < 1) {
      uVar23 = 0;
      uVar22 = 0;
      pcVar20 = local_f8;
      lVar24 = local_f0;
    }
    else {
      pcVar20 = strstr(local_f8,param_2);
      puVar6 = PTR_DAT_048607c0;
      if (pcVar20 == (char *)0x0) {
        lVar24 = 0;
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        lVar24 = 0;
        while (iVar13 = (int)pcVar20 - (int)local_f8, -1 < iVar13) {
          pcVar20 = local_f8 + lVar24;
          if (pcVar20 != (char *)0x0) {
            iVar8 = iVar13 - (int)lVar24;
            if (iVar8 < 0) {
              iVar8 = FUN_0043a2d0(pcVar20);
            }
            iVar11 = *(int *)(param_1 + 1);
            lVar24 = (long)iVar11 + -1;
            iVar1 = (int)lVar24 + iVar8;
            iVar2 = iVar11 + iVar8;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
              pcVar10 = (char *)FUN_00426720(puVar6,iVar2,1,*param_1,(long)iVar11,puVar14);
              iVar11 = *(int *)(param_1 + 1);
              *param_1 = pcVar10;
            }
            if ((iVar11 <= iVar1) || (iVar2 < iVar11)) {
              *(int *)(param_1 + 1) = iVar2;
            }
            (*param_1)[iVar1] = '\0';
            FUN_0043a4c0(*param_1 + lVar24,pcVar20,iVar8);
          }
          iVar8 = iVar12;
          if (iVar12 < 0) {
            iVar8 = FUN_0043a2d0(puVar4);
          }
          iVar11 = *(int *)(param_1 + 1);
          lVar24 = (long)iVar11 + -1;
          iVar1 = (int)lVar24 + iVar8;
          iVar2 = iVar11 + iVar8;
          if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
            pcVar20 = (char *)FUN_00426720(puVar6,iVar2,1,*param_1,(long)iVar11,puVar14);
            iVar11 = *(int *)(param_1 + 1);
            *param_1 = pcVar20;
          }
          if ((iVar11 <= iVar1) || (iVar2 < iVar11)) {
            *(int *)(param_1 + 1) = iVar2;
          }
          (*param_1)[iVar1] = '\0';
          FUN_0043a4c0(*param_1 + lVar24,puVar4,iVar8);
          lVar24 = (long)iVar7 + (long)iVar13;
          uVar22 = 1;
          if ((param_4 == 0) || ((int)local_f0 <= (int)lVar24)) break;
          pcVar20 = strstr(local_f8 + lVar24,param_2);
          uVar22 = 1;
          if (pcVar20 == (char *)0x0) break;
        }
      }
      uVar23 = (uint)lVar24;
      pcVar20 = local_f8 + (int)uVar23;
      lVar24 = local_f0;
    }
    local_f0 = lVar24;
    if (pcVar20 == (char *)0x0) {
      local_f0._4_4_ = (uint)((ulong)lVar24 >> 0x20);
      uVar23 = local_f0._4_4_;
    }
    else {
      iVar7 = (int)local_f0 + ~uVar23;
      if (iVar7 < 0) {
        iVar7 = FUN_0043a2d0(pcVar20);
      }
      iVar8 = *(int *)(param_1 + 1);
      lVar24 = (long)iVar8 + -1;
      iVar12 = (int)lVar24 + iVar7;
      iVar13 = iVar8 + iVar7;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar12) {
        pcVar10 = (char *)FUN_00426720(PTR_DAT_048607c0,iVar13,1,*param_1,(long)iVar8,puVar14);
        iVar8 = *(int *)(param_1 + 1);
        *param_1 = pcVar10;
      }
      if ((iVar8 <= iVar12) || (iVar13 < iVar8)) {
        *(int *)(param_1 + 1) = iVar13;
      }
      (*param_1)[iVar12] = '\0';
      FUN_0043a4c0(*param_1 + lVar24,pcVar20,iVar7);
      uVar23 = local_f0._4_4_;
    }
    if ((-1 < local_f0) && (local_f0 = (ulong)uVar23 << 0x20, local_f8 != (char *)0x0)) {
      FUN_00421f90(PTR_DAT_048607c0,local_f8,1,uVar23 & 0x3fffffff);
    }
    return uVar22;
  }
  pcVar20 = *param_1;
  if (*(int *)(param_1 + 1) < 1) {
LAB_0042491c:
    uVar22 = 0;
    uVar23 = 0;
    uVar19 = 0;
LAB_00424928:
    iVar7 = (int)uVar19;
    if (*(int *)(param_1 + 1) + -1 <= (int)uVar23) goto LAB_00424964;
  }
  else {
    if (param_4 == 0) {
      pcVar10 = strstr(pcVar20,param_2);
      if (pcVar10 != (char *)0x0) {
        uVar19 = (long)pcVar10 - (long)*param_1;
        if ((int)uVar19 != -1) {
          if ((int)uVar19 < 1) {
            uVar21 = 0;
            iVar13 = 0;
            uVar19 = 0;
          }
          else {
            uVar15 = uVar19 & 7;
            if ((uVar19 & 0xffffffff) - 1 < 7) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              do {
                uVar21 = uVar21 + 8;
              } while ((uVar19 & 0xffffffff) - uVar15 != uVar21);
            }
            if (uVar15 != 0) {
              lVar24 = -uVar15;
              do {
                uVar21 = uVar21 + 1;
                lVar24 = lVar24 + 1;
              } while (lVar24 != 0);
            }
            iVar13 = (int)uVar21;
            uVar19 = uVar21 & 0xffffffff;
          }
          if (0 < iVar12) {
            iVar13 = (int)uVar21;
            uVar19 = uVar21 & 0xffffffff;
            if (iVar12 == 1) {
              lVar24 = 0;
            }
            else {
              lVar24 = 0;
              do {
                pcVar20[lVar24 + uVar19 + 1 + -1] = *(char *)((long)puVar4 + lVar24);
                pcVar20[lVar24 + uVar19 + 1] = ((char *)((long)puVar4 + lVar24))[1];
                lVar24 = lVar24 + 2;
              } while (uVar18 - (uVar9 & 1) != lVar24);
              uVar19 = uVar19 + lVar24;
            }
            if ((uVar9 & 1) != 0) {
              pcVar20[uVar19] = *(char *)((long)puVar4 + lVar24);
              uVar19 = uVar19 + 1;
            }
          }
          uVar23 = iVar13 + iVar7;
          goto LAB_00424a60;
        }
      }
      goto LAB_0042491c;
    }
    if (iVar12 < 1) {
      pcVar10 = strstr(pcVar20,param_2);
      if (pcVar10 == (char *)0x0) goto LAB_0042491c;
      uVar22 = 0;
      uVar9 = 0;
      uVar19 = 0;
      do {
        uVar23 = (uint)uVar9;
        iVar12 = (int)pcVar10 - (int)*param_1;
        if (iVar12 == -1) break;
        if ((int)uVar23 < iVar12) {
          uVar9 = (ulong)(int)uVar23;
          uVar18 = ~uVar9;
          uVar19 = (ulong)(int)uVar19;
          if ((iVar12 - uVar23 & 3) != 0) {
            lVar24 = -((ulong)(iVar12 - uVar23) & 3);
            uVar21 = uVar19;
            uVar15 = uVar9;
            do {
              uVar9 = uVar15 + 1;
              uVar19 = uVar21 + 1;
              pcVar20[uVar21] = pcVar20[uVar15];
              lVar24 = lVar24 + 1;
              uVar21 = uVar19;
              uVar15 = uVar9;
            } while (lVar24 != 0);
          }
          if (2 < uVar18 + (long)iVar12) {
            lVar24 = 0;
            do {
              pcVar10 = pcVar20 + lVar24 + uVar9 + 1;
              pcVar3 = pcVar20 + lVar24 + uVar19;
              lVar24 = lVar24 + 4;
              *pcVar3 = pcVar10[-1];
              pcVar3[1] = *pcVar10;
              pcVar3[2] = pcVar10[1];
              pcVar3[3] = pcVar10[2];
            } while ((uVar9 - (long)iVar12) + lVar24 != 0);
            uVar9 = uVar9 + lVar24;
            uVar19 = uVar19 + lVar24;
          }
        }
        uVar23 = (int)uVar9 + iVar7;
        uVar9 = (ulong)uVar23;
        if (*(int *)(param_1 + 1) <= (int)((long)iVar7 + (long)iVar12)) goto LAB_00424a60;
        pcVar10 = strstr(*param_1 + (long)iVar7 + (long)iVar12,param_2);
        uVar22 = 1;
      } while (pcVar10 != (char *)0x0);
      goto LAB_00424928;
    }
    pcVar10 = strstr(pcVar20,param_2);
    if (pcVar10 == (char *)0x0) goto LAB_0042491c;
    uVar9 = uVar9 & 3;
    uVar22 = 0;
    uVar21 = 0;
    uVar19 = 0;
    do {
      uVar23 = (uint)uVar21;
      iVar12 = (int)pcVar10 - (int)*param_1;
      if (iVar12 == -1) goto LAB_00424928;
      if ((int)uVar23 < iVar12) {
        uVar21 = (ulong)(int)uVar23;
        uVar15 = ~uVar21;
        uVar19 = (ulong)(int)uVar19;
        if ((iVar12 - uVar23 & 3) != 0) {
          lVar24 = -((ulong)(iVar12 - uVar23) & 3);
          uVar16 = uVar19;
          uVar17 = uVar21;
          do {
            uVar21 = uVar17 + 1;
            uVar19 = uVar16 + 1;
            pcVar20[uVar16] = pcVar20[uVar17];
            lVar24 = lVar24 + 1;
            uVar16 = uVar19;
            uVar17 = uVar21;
          } while (lVar24 != 0);
        }
        if (uVar15 + (long)iVar12 < 3) goto LAB_0042459c;
        lVar24 = 0;
        do {
          pcVar10 = pcVar20 + lVar24 + uVar21 + 1;
          pcVar3 = pcVar20 + lVar24 + uVar19;
          lVar24 = lVar24 + 4;
          *pcVar3 = pcVar10[-1];
          pcVar3[1] = *pcVar10;
          pcVar3[2] = pcVar10[1];
          pcVar3[3] = pcVar10[2];
        } while ((uVar21 - (long)iVar12) + lVar24 != 0);
        iVar13 = (int)uVar21 + (int)lVar24;
        uVar19 = uVar19 + lVar24;
        uVar21 = (ulong)(int)uVar19;
        if (uVar18 - 1 < 3) goto LAB_004245ac;
LAB_00424628:
        lVar24 = 0;
        do {
          pcVar10 = (char *)((long)puVar4 + lVar24 + 3);
          lVar5 = lVar24 + uVar21 + 1;
          pcVar20[lVar5 + -1] = pcVar10[-3];
          pcVar20[lVar24 + uVar21 + 1] = pcVar10[-2];
          pcVar20[lVar5 + 1] = pcVar10[-1];
          lVar24 = lVar24 + 4;
          pcVar20[lVar5 + 2] = *pcVar10;
        } while (uVar18 - uVar9 != lVar24);
        uVar21 = uVar21 + lVar24;
        uVar19 = uVar21;
      }
      else {
LAB_0042459c:
        iVar13 = (int)uVar21;
        uVar21 = (ulong)(int)uVar19;
        if (2 < uVar18 - 1) goto LAB_00424628;
LAB_004245ac:
        lVar24 = 0;
      }
      if (uVar9 != 0) {
        pcVar10 = (char *)((long)puVar4 + lVar24);
        lVar24 = -uVar9;
        do {
          uVar19 = uVar21 + 1;
          pcVar20[uVar21] = *pcVar10;
          lVar24 = lVar24 + 1;
          uVar21 = uVar19;
          pcVar10 = pcVar10 + 1;
        } while (lVar24 != 0);
      }
      uVar23 = iVar13 + iVar7;
      uVar21 = (ulong)uVar23;
      if (*(int *)(param_1 + 1) <= (int)((long)iVar7 + (long)iVar12)) break;
      pcVar10 = strstr(*param_1 + (long)iVar7 + (long)iVar12,param_2);
      uVar22 = 1;
    } while (pcVar10 != (char *)0x0);
LAB_00424a60:
    iVar7 = (int)uVar19;
    uVar22 = 1;
    if (*(int *)(param_1 + 1) + -1 <= (int)uVar23) goto LAB_00424964;
  }
  lVar24 = (long)(int)uVar23;
  uVar9 = (long)iVar7;
  do {
    uVar19 = uVar9 + 1;
    pcVar20[uVar9] = pcVar20[lVar24];
    lVar24 = lVar24 + 1;
    uVar9 = uVar19;
  } while (lVar24 < (long)*(int *)(param_1 + 1) + -1);
LAB_00424964:
  iVar12 = (int)uVar19;
  pcVar20[iVar12] = '\0';
  iVar7 = iVar12 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar12) {
    pcVar20 = (char *)FUN_00426720(PTR_DAT_048607c0,iVar7,1,*param_1,*(undefined4 *)(param_1 + 1));
    *param_1 = pcVar20;
  }
  if ((*(int *)(param_1 + 1) <= iVar12) || (iVar7 < *(int *)(param_1 + 1))) {
    *(int *)(param_1 + 1) = iVar7;
  }
  (*param_1)[iVar12] = '\0';
  return uVar22;
}

