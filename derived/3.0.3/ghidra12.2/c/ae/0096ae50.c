
/* WARNING: Removing unreachable block (ram,0x0096b190) */

undefined8
FUN_0096ae50(float param_1,float param_2,long param_3,long param_4,long param_5,long param_6)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte local_74;
  
  if (*(long *)(param_3 + 0x60) == 0) {
    return 0;
  }
  uVar12 = *(uint *)(param_5 + 8);
  uVar11 = *(uint *)(param_5 + 0xc);
  if (param_2 == 0.0) {
    uVar12 = *(int *)(param_4 + 0xc) + uVar12;
    iVar7 = *(int *)(param_4 + 8);
    uVar11 = *(int *)(param_4 + 0x10) + uVar11;
    uVar4 = (uVar12 + *(int *)(param_4 + 4)) - 1;
  }
  else {
    if (param_2 == 90.0) {
      iVar7 = uVar11 - *(int *)(param_4 + 4);
      uVar12 = *(int *)(param_4 + 0x10) + uVar12;
      uVar11 = uVar11 + ~*(uint *)(param_4 + 0xc);
      uVar4 = (uVar12 + *(int *)(param_4 + 8)) - 1;
      uVar18 = iVar7 - *(uint *)(param_4 + 0xc);
      goto joined_r0x0096af9c;
    }
    if (param_2 == 180.0) {
      uVar12 = uVar12 + ~*(uint *)(param_4 + 0xc);
      uVar11 = uVar11 + ~*(uint *)(param_4 + 0x10);
    }
    else if (param_2 == 270.0) {
      uVar11 = *(int *)(param_4 + 0xc) + uVar11;
      uVar12 = uVar12 + ~*(uint *)(param_4 + 0x10);
    }
    iVar7 = *(int *)(param_4 + 4);
    if (param_2 == 180.0) {
      uVar4 = (uVar12 - iVar7) + 1;
      uVar18 = (uVar11 - *(int *)(param_4 + 8)) + 1;
      goto joined_r0x0096af9c;
    }
    uVar4 = uVar12;
    uVar18 = uVar11;
    if (param_2 != 270.0) goto joined_r0x0096af9c;
    uVar4 = (uVar12 - *(int *)(param_4 + 8)) + 1;
  }
  uVar18 = (uVar11 + iVar7) - 1;
joined_r0x0096af9c:
  uVar13 = 0;
  if (-1 < (int)uVar12) {
    uVar13 = 0;
    if ((((((-1 < (int)uVar11) && (uVar12 < *(uint *)(param_3 + 0x38))) &&
          (uVar11 < *(uint *)(param_3 + 0x3c))) &&
         ((-1 < (int)uVar4 && (uVar13 = 0, -1 < (int)uVar18)))) &&
        (uVar4 < *(uint *)(param_3 + 0x38))) && (uVar18 < *(uint *)(param_3 + 0x3c))) {
      uVar16 = uVar12;
      if ((int)uVar4 <= (int)uVar12) {
        uVar16 = uVar4;
      }
      uVar8 = uVar12;
      if ((int)uVar12 <= (int)uVar4) {
        uVar8 = uVar4;
      }
      uVar4 = uVar11;
      if ((int)uVar18 <= (int)uVar11) {
        uVar4 = uVar18;
      }
      uVar17 = uVar11;
      if ((int)uVar11 <= (int)uVar18) {
        uVar17 = uVar18;
      }
      *(uint *)(param_6 + 0x10) = uVar16;
      *(uint *)(param_6 + 0x14) = uVar4;
      *(uint *)(param_6 + 0x20) = uVar8;
      *(uint *)(param_6 + 0x24) = uVar17;
      if (*(uint *)(param_4 + 8) != 0) {
        if (*(uint *)(param_4 + 4) == 0) {
          return 1;
        }
        uVar4 = 0;
        puVar6 = (undefined8 *)(param_4 + 0x14);
        uVar8 = 1;
        uVar16 = uVar11;
        uVar18 = uVar12;
        do {
          if (uVar8 != 0) {
            uVar17 = 0;
            puVar15 = (undefined8 *)((long)puVar6 + 0x24);
            do {
              puVar6 = puVar15;
              puVar5 = (uint *)0x0;
              if ((int)uVar18 < 0) {
                pfVar14 = (float *)0x0;
              }
              else if (((int)uVar16 < 0) || (*(uint *)(param_3 + 0x38) <= uVar18)) {
                pfVar14 = (float *)0x0;
              }
              else {
                pfVar14 = (float *)0x0;
                if (uVar16 < *(uint *)(param_3 + 0x3c)) {
                  uVar8 = uVar18 + *(uint *)(param_3 + 0x38) * uVar16;
                  if (*(long *)(param_3 + 0x60) == 0) {
                    pfVar14 = (float *)0x0;
                  }
                  else {
                    pfVar14 = (float *)(*(long *)(param_3 + 0x60) + (long)(int)uVar8 * 0x34);
                    if (*(uint *)(param_3 + 0x58) <= uVar8) {
                      pfVar14 = (float *)0x0;
                    }
                  }
                  puVar5 = (uint *)(*(long *)(param_3 + 0x70) + (long)(int)uVar8 * 4);
                  if (*(uint *)(param_3 + 0x68) <= uVar8) {
                    puVar5 = (uint *)0x0;
                  }
                }
              }
              if ((((*(char *)((long)puVar6 + 0xc) == '\a') &&
                   (*(char *)((long)puVar6 + 0xd) == '\a')) &&
                  (*(char *)((long)puVar6 + 0xe) == '\a')) &&
                 (*(char *)((long)puVar6 + 0xf) == '\a')) {
                cVar9 = '\a';
                cVar10 = '\a';
                cVar2 = '\a';
LAB_0096b280:
                if (((cVar10 == '@') || (cVar9 == '@')) || (cVar2 == '@')) goto LAB_0096b2b0;
                uVar8 = *puVar5 & 0xfff7ffff;
              }
              else {
                *puVar5 = *puVar5 | 4;
                if (((((*(byte *)((long)puVar6 + 0xc) < 0x34) &&
                      ((1L << ((ulong)*(byte *)((long)puVar6 + 0xc) & 0x3f) & 0x8000000000300U) != 0
                      )) && ((*(byte *)((long)puVar6 + 0xd) < 0x34 &&
                             (((1L << ((ulong)*(byte *)((long)puVar6 + 0xd) & 0x3f) &
                               0x8000000000300U) != 0 && (*(byte *)((long)puVar6 + 0xe) < 0x34))))))
                    && ((1L << ((ulong)*(byte *)((long)puVar6 + 0xe) & 0x3f) & 0x8000000000300U) !=
                        0)) &&
                   ((*(byte *)((long)puVar6 + 0xf) < 0x34 &&
                    ((1L << ((ulong)*(byte *)((long)puVar6 + 0xf) & 0x3f) & 0x8000000000300U) != 0))
                   )) {
                  uVar8 = *puVar5 | 0x8000;
                }
                else {
                  uVar8 = *puVar5 & 0xffff7fff;
                }
                *puVar5 = uVar8;
                *puVar5 = *puVar5 | 8;
                cVar10 = *(char *)((long)puVar6 + 0xd);
                cVar9 = *(char *)((long)puVar6 + 0xe);
                cVar2 = *(char *)((long)puVar6 + 0xf);
                if (*(char *)((long)puVar6 + 0xc) != '@') goto LAB_0096b280;
LAB_0096b2b0:
                uVar8 = *puVar5 | 0x80000;
              }
              puVar15 = (undefined8 *)((long)puVar6 + -0x24);
              *puVar5 = uVar8;
              if (param_2 != 0.0) {
                if (param_2 == 90.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xf),pfVar14 + 0xc,
                               puVar6,pfVar14);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xc),
                               (long)pfVar14 + 0x31,puVar15,pfVar14 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xd),
                               (long)pfVar14 + 0x32,puVar6 + -3,pfVar14 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xe),
                               (long)pfVar14 + 0x33,(long)puVar6 + -0xc,pfVar14 + 9);
                  uVar16 = uVar16 - 1;
                }
                else if (param_2 == 180.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xe),pfVar14 + 0xc,
                               (long)puVar6 + -0xc,pfVar14);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xf),
                               (long)pfVar14 + 0x31,puVar6,pfVar14 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xc),
                               (long)pfVar14 + 0x32,puVar15,pfVar14 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xd),
                               (long)pfVar14 + 0x33,puVar6 + -3,pfVar14 + 9);
                  uVar18 = uVar18 - 1;
                }
                else if (param_2 == 270.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xd),pfVar14 + 0xc,
                               puVar6 + -3,pfVar14);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xe),
                               (long)pfVar14 + 0x31,(long)puVar6 + -0xc,pfVar14 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xf),
                               (long)pfVar14 + 0x32,puVar6,pfVar14 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar6 + 0xc),
                               (long)pfVar14 + 0x33,puVar15,pfVar14 + 9);
                  uVar16 = uVar16 + 1;
                }
                goto LAB_0096b0b8;
              }
              bVar3 = *(byte *)((long)puVar6 + 0xc);
              if ((bVar3 & 0xf7) != 7) {
                if ((bVar3 == 9) || (bVar3 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar3) {
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
switchD_0096b59c_caseD_b:
                    local_74 = bVar3;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096b59c_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar3 != 0x40) goto switchD_0096b59c_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)(pfVar14 + 0xc) = local_74;
                fVar1 = *(float *)((long)puVar6 + -0x1c);
                *(undefined8 *)pfVar14 = *puVar15;
                pfVar14[2] = fVar1;
                *pfVar14 = *pfVar14 + param_1;
                pfVar14[1] = pfVar14[1] + param_1;
                pfVar14[2] = pfVar14[2] + param_1;
              }
              bVar3 = *(byte *)((long)puVar6 + 0xd);
              if ((bVar3 & 0xf7) != 7) {
                if ((bVar3 == 9) || (bVar3 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar3) {
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
switchD_0096b5e0_caseD_b:
                    local_74 = bVar3;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096b5e0_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar3 != 0x40) goto switchD_0096b5e0_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar14 + 0x31) = local_74;
                uVar13 = puVar6[-3];
                pfVar14[5] = *(float *)(puVar6 + -2);
                *(undefined8 *)(pfVar14 + 3) = uVar13;
                pfVar14[3] = pfVar14[3] + param_1;
                pfVar14[4] = pfVar14[4] + param_1;
                pfVar14[5] = pfVar14[5] + param_1;
              }
              bVar3 = *(byte *)((long)puVar6 + 0xe);
              if ((bVar3 & 0xf7) != 7) {
                if ((bVar3 == 9) || (bVar3 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar3) {
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
switchD_0096b624_caseD_b:
                    local_74 = bVar3;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096b624_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar3 != 0x40) goto switchD_0096b624_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar14 + 0x32) = local_74;
                uVar13 = *(undefined8 *)((long)puVar6 + -0xc);
                pfVar14[8] = *(float *)((long)puVar6 + -4);
                *(undefined8 *)(pfVar14 + 6) = uVar13;
                pfVar14[6] = pfVar14[6] + param_1;
                pfVar14[7] = pfVar14[7] + param_1;
                pfVar14[8] = pfVar14[8] + param_1;
              }
              bVar3 = *(byte *)((long)puVar6 + 0xf);
              if ((bVar3 & 0xf7) != 7) {
                if ((bVar3 == 9) || (bVar3 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar3) {
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
switchD_0096b43c_caseD_b:
                    local_74 = bVar3;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096b43c_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar3 != 0x40) goto switchD_0096b43c_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar14 + 0x33) = local_74;
                uVar13 = *puVar6;
                pfVar14[0xb] = *(float *)(puVar6 + 1);
                *(undefined8 *)(pfVar14 + 9) = uVar13;
                pfVar14[10] = pfVar14[10] + param_1;
                pfVar14[9] = pfVar14[9] + param_1;
                pfVar14[0xb] = pfVar14[0xb] + param_1;
              }
              uVar18 = uVar18 + 1;
LAB_0096b0b8:
              uVar8 = *(uint *)(param_4 + 4);
              uVar17 = uVar17 + 1;
              puVar15 = (undefined8 *)((long)puVar6 + 0x34);
            } while (uVar17 < uVar8);
            puVar6 = puVar6 + 2;
          }
          if (param_2 == 0.0) {
            uVar16 = uVar16 + 1;
LAB_0096b044:
            uVar18 = uVar12;
          }
          else if (param_2 == 90.0) {
            uVar18 = uVar18 + 1;
LAB_0096b838:
            uVar16 = uVar11;
          }
          else {
            if (param_2 == 180.0) {
              uVar16 = uVar16 - 1;
              goto LAB_0096b044;
            }
            if (param_2 == 270.0) {
              uVar18 = uVar18 - 1;
              goto LAB_0096b838;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_4 + 8));
      }
      uVar13 = 1;
    }
  }
  return uVar13;
}

