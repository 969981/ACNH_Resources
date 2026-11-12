
void FUN_00873ad0(long *param_1,long param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *__s;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  char cVar17;
  char *pcVar18;
  ulong uVar19;
  undefined8 local_70;
  long local_68;
  
  local_70 = *param_3;
  if ((param_4 & 1) != 0) {
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    uVar19 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar19,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  __s = PTR_DAT_04bb3250;
  uVar10 = *(uint *)(param_2 + 1000);
  pcVar18 = PTR_DAT_04bb3248;
  if (((int)uVar10 < 1) &&
     (((*(long *)(param_2 + 0x2d8) == 0 ||
       (puVar16 = *(uint **)(*(long *)(param_2 + 0x2d8) + 8), puVar16 == (uint *)0x0)) ||
      (uVar10 = *puVar16, (int)uVar10 < 1)))) {
LAB_00873f2c:
    if ((((*(long *)(param_2 + 0x2d8) == 0) ||
         (piVar12 = *(int **)(*(long *)(param_2 + 0x2d8) + 8), piVar12 == (int *)0x0)) ||
        ((*(int *)(param_2 + 0x2f0) != 0 && (**(char **)(param_2 + 0x2f8) == '\0')))) ||
       (((*piVar12 == 0 || (piVar12[1] == 0)) || ((ulong)*(ushort *)(piVar12 + 2) == 0)))) {
      puVar16 = (uint *)0x0;
      uVar10 = uRam0000000000000000;
    }
    else {
      lVar11 = 0xc;
      if (*(char *)((long)piVar12 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      puVar16 = (uint *)((long)piVar12 + lVar11 + (ulong)*(ushort *)(piVar12 + 2) * 8);
      uVar10 = *puVar16;
    }
  }
  else {
    uVar19 = 0;
    do {
      if ((int)*(uint *)(param_2 + 1000) < 1) {
        if (((((*(long *)(param_2 + 0x2d8) != 0) &&
              (puVar16 = *(uint **)(*(long *)(param_2 + 0x2d8) + 8), puVar16 != (uint *)0x0)) &&
             ((*(uint *)(param_2 + 0x2f0) <= uVar19 ||
              (*(char *)(*(long *)(param_2 + 0x2f8) + uVar19) != '\0')))) &&
            ((uVar19 < *puVar16 && (puVar16[1] != 0)))) && ((ushort)puVar16[2] != 0)) {
          iVar14 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          puVar16 = (uint *)((ulong)(puVar16[1] * (int)uVar19 + (uint)(ushort)puVar16[2] * 8 +
                                    iVar14) + (long)puVar16);
          goto joined_r0x00873e04;
        }
      }
      else if (uVar19 < *(uint *)(param_2 + 1000)) {
        uVar15 = uVar19 & 0xffffffff;
        if (*(uint *)(param_2 + 0x3d8) <= uVar19) {
          uVar15 = 0;
        }
        puVar16 = *(uint **)(*(long *)(param_2 + 0x3e0) + uVar15 * 8);
joined_r0x00873e04:
        if (puVar16 != (uint *)0x0) {
          if (*puVar16 != 0) {
            cVar17 = *pcVar18;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *pcVar18 = '\x01';
                memset(__s,0xff,0x288);
              }
              else {
                uVar3 = *(uint *)(__s + 0x148);
                if (-1 < (int)uVar3) {
                  lVar11 = (ulong)uVar3 + (long)puVar16;
                  goto LAB_00873cdc;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)*puVar16;
              lVar11 = 0;
              if ((*puVar16 == 0) || (puVar16 == puVar8)) goto LAB_00873cdc;
              lVar11 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar8)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar1 = (long)puVar16 + (lVar11 - (long)puVar8);
              if (lVar1 == 0) break;
              uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar8));
              *(undefined4 *)(__s + 0x148) = 0xfffffffe;
              lVar11 = 0;
              if (uVar15 == 0) goto LAB_00873cdc;
              piVar12 = (int *)(lVar1 + 4);
              while (piVar12[-1] != 0x443c0fb7) {
                piVar12 = piVar12 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) {
                  lVar11 = 0;
                  goto LAB_00873cdc;
                }
              }
              iVar14 = 0;
              if (*piVar12 != -1) {
                iVar14 = *piVar12;
              }
              *(int *)(__s + 0x148) = iVar14;
            } while (*puVar16 != 0);
          }
          lVar11 = 0;
LAB_00873cdc:
          lVar1 = *(long *)PTR_PTR_04bb3260;
          if (lVar11 != 0) {
            lVar1 = lVar11;
          }
          uVar6 = FUN_006bd550(lVar1,0);
          local_68 = CONCAT44(local_68._4_4_,uVar6);
          puVar8 = (uint *)FUN_0088c0d0(param_2 + 8,&local_68);
          if (puVar8 == (uint *)0x0) {
            uVar9 = 4;
          }
          else {
            uVar3 = *puVar8;
            uVar9 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar13 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar9 = 0;
              if (*puVar13 != 0) {
                uVar3 = puVar13[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar11 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar3);
                    }
                    if (*puVar13 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_04ce9768) &&
                       (uVar9 = *(ushort *)(DAT_04ce9770 + (long)(int)uVar2 * 2), uVar9 < 6))
                    goto LAB_00873e10;
                  }
                }
                uVar9 = 0;
              }
            }
          }
LAB_00873e10:
          if (uVar9 == 0) {
            if (*puVar16 != 0) {
              cVar17 = *pcVar18;
              do {
                if (cVar17 == '\0') {
                  cVar17 = '\x01';
                  *pcVar18 = '\x01';
                  memset(__s,0xff,0x288);
                }
                else {
                  uVar3 = *(uint *)(__s + 0x148);
                  if (-1 < (int)uVar3) {
                    lVar11 = (ulong)uVar3 + (long)puVar16;
                    goto LAB_00873b7c;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar8 = (uint *)(ulong)*puVar16;
                lVar11 = 0;
                if ((*puVar16 == 0) || (puVar16 == puVar8)) goto LAB_00873b7c;
                lVar11 = 0xc;
                if (*(char *)((long)puVar16 + (10 - (long)puVar8)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar1 = (long)puVar16 + (lVar11 - (long)puVar8);
                if (lVar1 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar8));
                *(undefined4 *)(__s + 0x148) = 0xfffffffe;
                lVar11 = 0;
                if (uVar15 == 0) goto LAB_00873b7c;
                piVar12 = (int *)(lVar1 + 4);
                while (piVar12[-1] != 0x443c0fb7) {
                  piVar12 = piVar12 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) {
                    lVar11 = 0;
                    goto LAB_00873b7c;
                  }
                }
                iVar14 = 0;
                if (*piVar12 != -1) {
                  iVar14 = *piVar12;
                }
                *(int *)(__s + 0x148) = iVar14;
              } while (*puVar16 != 0);
            }
            lVar11 = 0;
LAB_00873b7c:
            uVar5 = local_70._3_1_;
            uVar4 = local_70._2_1_;
            uVar15 = local_70 & 0xffff;
            lVar1 = *(long *)PTR_PTR_04bb3260;
            if (lVar11 != 0) {
              lVar1 = lVar11;
            }
            uVar6 = FUN_006bd550(lVar1,0);
            local_68 = CONCAT44(local_68._4_4_,uVar6);
            uVar7 = FUN_0088c0d0(param_2 + 8,&local_68);
            pcVar18 = PTR_DAT_04bb3248;
            uVar15 = FUN_00875c10(param_2,uVar7,uVar15,uVar4,uVar5);
            if ((uVar15 & 1) != 0) {
              if (*puVar16 == 0) goto LAB_00874144;
              cVar17 = *pcVar18;
              goto LAB_0087408c;
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar10);
    if (*(int *)(param_2 + 1000) < 1) goto LAB_00873f2c;
    puVar16 = (uint *)**(undefined8 **)(param_2 + 0x3e0);
    uVar10 = *puVar16;
  }
  if (uVar10 != 0) {
    cVar17 = *pcVar18;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *PTR_DAT_04bb3248 = 1;
        memset(__s,0xff,0x288);
      }
      else {
        uVar10 = *(uint *)(__s + 0x148);
        if (-1 < (int)uVar10) goto LAB_00874138;
        if (uVar10 != 0xffffffff) break;
      }
      puVar8 = (uint *)(ulong)*puVar16;
      lVar11 = 0;
      if ((*puVar16 == 0) || (puVar16 == puVar8)) goto LAB_00874148;
      lVar11 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar8)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar1 = (long)puVar16 + (lVar11 - (long)puVar8);
      if (lVar1 == 0) break;
      uVar19 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar8));
      *(undefined4 *)(__s + 0x148) = 0xfffffffe;
      lVar11 = 0;
      if (uVar19 == 0) goto LAB_00874148;
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x443c0fb7) {
        piVar12 = piVar12 + 2;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) {
          lVar11 = 0;
          goto LAB_00874148;
        }
      }
      iVar14 = 0;
      if (*piVar12 != -1) {
        iVar14 = *piVar12;
      }
      *(int *)(__s + 0x148) = iVar14;
    } while (*puVar16 != 0);
  }
  goto LAB_00874144;
LAB_00874138:
  lVar11 = (ulong)uVar10 + (long)puVar16;
  goto LAB_00874148;
  while( true ) {
    puVar8 = (uint *)(ulong)*puVar16;
    lVar11 = 0;
    if ((*puVar16 == 0) || (puVar16 == puVar8)) goto LAB_00874148;
    lVar11 = 0xc;
    if (*(char *)((long)puVar16 + (10 - (long)puVar8)) != '\0') {
      lVar11 = 0x1c;
    }
    lVar1 = (long)puVar16 + (lVar11 - (long)puVar8);
    if (lVar1 == 0) break;
    uVar19 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar8));
    *(undefined4 *)(__s + 0x148) = 0xfffffffe;
    lVar11 = 0;
    if (uVar19 == 0) goto LAB_00874148;
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != 0x443c0fb7) {
      piVar12 = piVar12 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) {
        lVar11 = 0;
        goto LAB_00874148;
      }
    }
    iVar14 = 0;
    if (*piVar12 != -1) {
      iVar14 = *piVar12;
    }
    *(int *)(__s + 0x148) = iVar14;
    if (*puVar16 == 0) break;
LAB_0087408c:
    if (cVar17 == '\0') {
      cVar17 = '\x01';
      *PTR_DAT_04bb3248 = 1;
      memset(__s,0xff,0x288);
    }
    else {
      uVar10 = *(uint *)(__s + 0x148);
      if (-1 < (int)uVar10) goto LAB_00874138;
      if (uVar10 != 0xffffffff) break;
    }
  }
LAB_00874144:
  lVar11 = 0;
LAB_00874148:
  lVar1 = *(long *)PTR_PTR_04bb3260;
  if (lVar11 != 0) {
    lVar1 = lVar11;
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar1;
  return;
}

