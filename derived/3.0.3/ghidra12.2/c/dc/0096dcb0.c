
/* WARNING: Removing unreachable block (ram,0x0096e03c) */

undefined8
FUN_0096dcb0(float param_1,float param_2,long param_3,long param_4,long param_5,long param_6,
            ulong param_7)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte local_74;
  
  if (*(long *)(param_3 + 0x60) == 0) {
    return 0;
  }
  uVar14 = *(uint *)(param_5 + 8);
  uVar13 = *(uint *)(param_5 + 0xc);
  if (param_2 == 0.0) {
    uVar14 = *(int *)(param_4 + 0xc) + uVar14;
    iVar9 = *(int *)(param_4 + 8);
    uVar13 = *(int *)(param_4 + 0x10) + uVar13;
    uVar6 = (uVar14 + *(int *)(param_4 + 4)) - 1;
  }
  else {
    if (param_2 == 90.0) {
      iVar9 = uVar13 - *(int *)(param_4 + 4);
      uVar14 = *(int *)(param_4 + 0x10) + uVar14;
      uVar13 = uVar13 + ~*(uint *)(param_4 + 0xc);
      uVar6 = (uVar14 + *(int *)(param_4 + 8)) - 1;
      uVar19 = iVar9 - *(uint *)(param_4 + 0xc);
      goto joined_r0x0096de00;
    }
    if (param_2 == 180.0) {
      uVar14 = uVar14 + ~*(uint *)(param_4 + 0xc);
      uVar13 = uVar13 + ~*(uint *)(param_4 + 0x10);
    }
    else if (param_2 == 270.0) {
      uVar13 = *(int *)(param_4 + 0xc) + uVar13;
      uVar14 = uVar14 + ~*(uint *)(param_4 + 0x10);
    }
    iVar9 = *(int *)(param_4 + 4);
    if (param_2 == 180.0) {
      uVar6 = (uVar14 - iVar9) + 1;
      uVar19 = (uVar13 - *(int *)(param_4 + 8)) + 1;
      goto joined_r0x0096de00;
    }
    uVar6 = uVar14;
    uVar19 = uVar13;
    if (param_2 != 270.0) goto joined_r0x0096de00;
    uVar6 = (uVar14 - *(int *)(param_4 + 8)) + 1;
  }
  uVar19 = (uVar13 + iVar9) - 1;
joined_r0x0096de00:
  uVar15 = 0;
  if (-1 < (int)uVar14) {
    uVar15 = 0;
    if ((((((-1 < (int)uVar13) && (uVar14 < *(uint *)(param_3 + 0x38))) &&
          (uVar13 < *(uint *)(param_3 + 0x3c))) &&
         ((-1 < (int)uVar6 && (uVar15 = 0, -1 < (int)uVar19)))) &&
        (uVar6 < *(uint *)(param_3 + 0x38))) && (uVar19 < *(uint *)(param_3 + 0x3c))) {
      uVar18 = uVar14;
      if ((int)uVar6 <= (int)uVar14) {
        uVar18 = uVar6;
      }
      uVar10 = uVar14;
      if ((int)uVar14 <= (int)uVar6) {
        uVar10 = uVar6;
      }
      uVar6 = uVar13;
      if ((int)uVar19 <= (int)uVar13) {
        uVar6 = uVar19;
      }
      uVar20 = uVar13;
      if ((int)uVar13 <= (int)uVar19) {
        uVar20 = uVar19;
      }
      *(uint *)(param_6 + 0x10) = uVar18;
      *(uint *)(param_6 + 0x14) = uVar6;
      *(uint *)(param_6 + 0x20) = uVar10;
      *(uint *)(param_6 + 0x24) = uVar20;
      if (*(uint *)(param_4 + 8) != 0) {
        if (*(uint *)(param_4 + 4) == 0) {
          return 1;
        }
        uVar6 = 0;
        puVar8 = (undefined8 *)(param_4 + 0x14);
        uVar10 = 1;
        uVar18 = uVar13;
        uVar19 = uVar14;
        do {
          if (uVar10 != 0) {
            uVar20 = 0;
            puVar17 = (undefined8 *)((long)puVar8 + 0x24);
            do {
              puVar8 = puVar17;
              if ((param_7 & 1) == 0) {
                if (-1 < (int)uVar19) {
                  uVar10 = *(uint *)(param_3 + 0x38);
                  uVar1 = *(uint *)(param_3 + 0x3c);
                  pfVar16 = (float *)0x0;
                  if (((-1 < (int)uVar18) && (uVar19 < uVar10)) && (uVar18 < uVar1)) {
                    if (*(long *)(param_3 + 0x60) == 0) {
                      pfVar16 = (float *)0x0;
                    }
                    else {
                      uVar5 = uVar19 + uVar10 * uVar18;
                      pfVar16 = (float *)(*(long *)(param_3 + 0x60) + (long)(int)uVar5 * 0x34);
                      if (*(uint *)(param_3 + 0x58) <= uVar5) {
                        pfVar16 = (float *)0x0;
                      }
                    }
                  }
                  goto joined_r0x0096dfb8;
                }
LAB_0096dff0:
                puVar7 = (uint *)0x0;
                pfVar16 = (float *)0x0;
              }
              else {
                if ((int)uVar19 < 0) goto LAB_0096dff0;
                uVar10 = *(uint *)(param_3 + 0x38);
                uVar1 = *(uint *)(param_3 + 0x3c);
                pfVar16 = (float *)0x0;
                if ((((-1 < (int)uVar18) && (uVar19 < uVar10)) && (uVar18 < uVar1)) &&
                   (uVar5 = uVar19 + uVar10 * uVar18,
                   pfVar16 = (float *)(*(long *)(param_3 + 0x50) + (long)(int)uVar5 * 0x34),
                   *(uint *)(param_3 + 0x48) <= uVar5)) {
                  pfVar16 = (float *)0x0;
                }
joined_r0x0096dfb8:
                puVar7 = (uint *)0x0;
                if (((-1 < (int)uVar18) && (puVar7 = (uint *)0x0, uVar19 < uVar10)) &&
                   ((uVar18 < uVar1 &&
                    (uVar10 = uVar19 + uVar10 * uVar18,
                    puVar7 = (uint *)(*(long *)(param_3 + 0x70) + (long)(int)uVar10 * 4),
                    *(uint *)(param_3 + 0x68) <= uVar10)))) {
                  puVar7 = (uint *)0x0;
                }
              }
              if (((*(char *)((long)puVar8 + 0xc) == '\a') &&
                  (*(char *)((long)puVar8 + 0xd) == '\a')) &&
                 ((*(char *)((long)puVar8 + 0xe) == '\a' && (*(char *)((long)puVar8 + 0xf) == '\a'))
                 )) {
                cVar11 = '\a';
                cVar12 = '\a';
                cVar3 = '\a';
LAB_0096e114:
                if (((cVar12 == '@') || (cVar11 == '@')) || (cVar3 == '@')) goto LAB_0096e144;
                uVar10 = *puVar7 & 0xfff7ffff;
              }
              else {
                *puVar7 = *puVar7 | 4;
                if ((((*(byte *)((long)puVar8 + 0xc) < 0x34) &&
                     ((1L << ((ulong)*(byte *)((long)puVar8 + 0xc) & 0x3f) & 0x8000000000300U) != 0)
                     ) && (*(byte *)((long)puVar8 + 0xd) < 0x34)) &&
                   ((((1L << ((ulong)*(byte *)((long)puVar8 + 0xd) & 0x3f) & 0x8000000000300U) != 0
                     && (*(byte *)((long)puVar8 + 0xe) < 0x34)) &&
                    (((1L << ((ulong)*(byte *)((long)puVar8 + 0xe) & 0x3f) & 0x8000000000300U) != 0
                     && ((*(byte *)((long)puVar8 + 0xf) < 0x34 &&
                         ((1L << ((ulong)*(byte *)((long)puVar8 + 0xf) & 0x3f) & 0x8000000000300U)
                          != 0)))))))) {
                  uVar10 = *puVar7 | 0x8000;
                }
                else {
                  uVar10 = *puVar7 & 0xffff7fff;
                }
                *puVar7 = uVar10;
                cVar12 = *(char *)((long)puVar8 + 0xd);
                cVar11 = *(char *)((long)puVar8 + 0xe);
                cVar3 = *(char *)((long)puVar8 + 0xf);
                if (*(char *)((long)puVar8 + 0xc) != '@') goto LAB_0096e114;
LAB_0096e144:
                uVar10 = *puVar7 | 0x80000;
              }
              puVar17 = (undefined8 *)((long)puVar8 + -0x24);
              *puVar7 = uVar10;
              if (param_2 != 0.0) {
                if (param_2 == 90.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xf),pfVar16 + 0xc,
                               puVar8,pfVar16);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xc),
                               (long)pfVar16 + 0x31,puVar17,pfVar16 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xd),
                               (long)pfVar16 + 0x32,puVar8 + -3,pfVar16 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xe),
                               (long)pfVar16 + 0x33,(long)puVar8 + -0xc,pfVar16 + 9);
                  uVar18 = uVar18 - 1;
                }
                else if (param_2 == 180.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xe),pfVar16 + 0xc,
                               (long)puVar8 + -0xc,pfVar16);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xf),
                               (long)pfVar16 + 0x31,puVar8,pfVar16 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xc),
                               (long)pfVar16 + 0x32,puVar17,pfVar16 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xd),
                               (long)pfVar16 + 0x33,puVar8 + -3,pfVar16 + 9);
                  uVar19 = uVar19 - 1;
                }
                else if (param_2 == 270.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xd),pfVar16 + 0xc,
                               puVar8 + -3,pfVar16);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xe),
                               (long)pfVar16 + 0x31,(long)puVar8 + -0xc,pfVar16 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xf),
                               (long)pfVar16 + 0x32,puVar8,pfVar16 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar8 + 0xc),
                               (long)pfVar16 + 0x33,puVar17,pfVar16 + 9);
                  uVar18 = uVar18 + 1;
                }
                goto LAB_0096df14;
              }
              bVar4 = *(byte *)((long)puVar8 + 0xc);
              if ((bVar4 & 0xf7) != 7) {
                if ((bVar4 == 9) || (bVar4 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar4) {
                  case 0xb:
                  case 0xc:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                  case 0x1e:
                  case 0x1f:
                  case 0x20:
                  case 0x21:
                  case 0x22:
                  case 0x23:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
switchD_0096e43c_caseD_b:
                    local_74 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar4 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096e43c_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar4 != 0x40) goto switchD_0096e43c_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)(pfVar16 + 0xc) = local_74;
                fVar2 = *(float *)((long)puVar8 + -0x1c);
                *(undefined8 *)pfVar16 = *puVar17;
                pfVar16[2] = fVar2;
                *pfVar16 = *pfVar16 + param_1;
                pfVar16[1] = pfVar16[1] + param_1;
                pfVar16[2] = pfVar16[2] + param_1;
              }
              bVar4 = *(byte *)((long)puVar8 + 0xd);
              if ((bVar4 & 0xf7) != 7) {
                if ((bVar4 == 9) || (bVar4 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar4) {
                  case 0xb:
                  case 0xc:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                  case 0x1e:
                  case 0x1f:
                  case 0x20:
                  case 0x21:
                  case 0x22:
                  case 0x23:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
switchD_0096e480_caseD_b:
                    local_74 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar4 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096e480_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar4 != 0x40) goto switchD_0096e480_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar16 + 0x31) = local_74;
                uVar15 = puVar8[-3];
                pfVar16[5] = *(float *)(puVar8 + -2);
                *(undefined8 *)(pfVar16 + 3) = uVar15;
                pfVar16[3] = pfVar16[3] + param_1;
                pfVar16[4] = pfVar16[4] + param_1;
                pfVar16[5] = pfVar16[5] + param_1;
              }
              bVar4 = *(byte *)((long)puVar8 + 0xe);
              if ((bVar4 & 0xf7) != 7) {
                if ((bVar4 == 9) || (bVar4 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar4) {
                  case 0xb:
                  case 0xc:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                  case 0x1e:
                  case 0x1f:
                  case 0x20:
                  case 0x21:
                  case 0x22:
                  case 0x23:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
switchD_0096e4c4_caseD_b:
                    local_74 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar4 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096e4c4_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar4 != 0x40) goto switchD_0096e4c4_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar16 + 0x32) = local_74;
                uVar15 = *(undefined8 *)((long)puVar8 + -0xc);
                pfVar16[8] = *(float *)((long)puVar8 + -4);
                *(undefined8 *)(pfVar16 + 6) = uVar15;
                pfVar16[6] = pfVar16[6] + param_1;
                pfVar16[7] = pfVar16[7] + param_1;
                pfVar16[8] = pfVar16[8] + param_1;
              }
              bVar4 = *(byte *)((long)puVar8 + 0xf);
              if ((bVar4 & 0xf7) != 7) {
                if ((bVar4 == 9) || (bVar4 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar4) {
                  case 0xb:
                  case 0xc:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                  case 0x1e:
                  case 0x1f:
                  case 0x20:
                  case 0x21:
                  case 0x22:
                  case 0x23:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
switchD_0096e2d0_caseD_b:
                    local_74 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar4 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096e2d0_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar4 != 0x40) goto switchD_0096e2d0_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar16 + 0x33) = local_74;
                uVar15 = *puVar8;
                pfVar16[0xb] = *(float *)(puVar8 + 1);
                *(undefined8 *)(pfVar16 + 9) = uVar15;
                pfVar16[9] = pfVar16[9] + param_1;
                pfVar16[10] = pfVar16[10] + param_1;
                pfVar16[0xb] = pfVar16[0xb] + param_1;
              }
              uVar19 = uVar19 + 1;
LAB_0096df14:
              uVar10 = *(uint *)(param_4 + 4);
              uVar20 = uVar20 + 1;
              puVar17 = (undefined8 *)((long)puVar8 + 0x34);
            } while (uVar20 < uVar10);
            puVar8 = puVar8 + 2;
          }
          if (param_2 == 0.0) {
            uVar18 = uVar18 + 1;
LAB_0096dea4:
            uVar19 = uVar14;
          }
          else if (param_2 == 90.0) {
            uVar19 = uVar19 + 1;
LAB_0096e718:
            uVar18 = uVar13;
          }
          else {
            if (param_2 == 180.0) {
              uVar18 = uVar18 - 1;
              goto LAB_0096dea4;
            }
            if (param_2 == 270.0) {
              uVar19 = uVar19 - 1;
              goto LAB_0096e718;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_4 + 8));
      }
      uVar15 = 1;
    }
  }
  return uVar15;
}

