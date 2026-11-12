
undefined8
FUN_0096b8d0(float param_1,float param_2,long param_3,long param_4,long param_5,long param_6)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte local_74;
  
  if (*(long *)(param_3 + 0x60) == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_5 + 8);
  uVar8 = *(uint *)(param_5 + 0xc);
  if (param_2 == 0.0) {
    uVar9 = *(int *)(param_4 + 0xc) + uVar9;
    iVar6 = *(int *)(param_4 + 8);
    uVar8 = *(int *)(param_4 + 0x10) + uVar8;
    uVar3 = (uVar9 + *(int *)(param_4 + 4)) - 1;
  }
  else {
    if (param_2 == 90.0) {
      iVar6 = uVar8 - *(int *)(param_4 + 4);
      uVar9 = *(int *)(param_4 + 0x10) + uVar9;
      uVar8 = uVar8 + ~*(uint *)(param_4 + 0xc);
      uVar3 = (uVar9 + *(int *)(param_4 + 8)) - 1;
      uVar15 = iVar6 - *(uint *)(param_4 + 0xc);
      goto joined_r0x0096ba1c;
    }
    if (param_2 == 180.0) {
      uVar9 = uVar9 + ~*(uint *)(param_4 + 0xc);
      uVar8 = uVar8 + ~*(uint *)(param_4 + 0x10);
    }
    else if (param_2 == 270.0) {
      uVar8 = *(int *)(param_4 + 0xc) + uVar8;
      uVar9 = uVar9 + ~*(uint *)(param_4 + 0x10);
    }
    iVar6 = *(int *)(param_4 + 4);
    if (param_2 == 180.0) {
      uVar3 = (uVar9 - iVar6) + 1;
      uVar15 = (uVar8 - *(int *)(param_4 + 8)) + 1;
      goto joined_r0x0096ba1c;
    }
    uVar3 = uVar9;
    uVar15 = uVar8;
    if (param_2 != 270.0) goto joined_r0x0096ba1c;
    uVar3 = (uVar9 - *(int *)(param_4 + 8)) + 1;
  }
  uVar15 = (uVar8 + iVar6) - 1;
joined_r0x0096ba1c:
  uVar10 = 0;
  if (-1 < (int)uVar9) {
    uVar10 = 0;
    if ((((((-1 < (int)uVar8) && (uVar9 < *(uint *)(param_3 + 0x38))) &&
          (uVar8 < *(uint *)(param_3 + 0x3c))) &&
         ((-1 < (int)uVar3 && (uVar10 = 0, -1 < (int)uVar15)))) &&
        (uVar3 < *(uint *)(param_3 + 0x38))) && (uVar15 < *(uint *)(param_3 + 0x3c))) {
      uVar13 = uVar9;
      if ((int)uVar3 <= (int)uVar9) {
        uVar13 = uVar3;
      }
      uVar7 = uVar9;
      if ((int)uVar9 <= (int)uVar3) {
        uVar7 = uVar3;
      }
      uVar3 = uVar8;
      if ((int)uVar15 <= (int)uVar8) {
        uVar3 = uVar15;
      }
      uVar14 = uVar8;
      if ((int)uVar8 <= (int)uVar15) {
        uVar14 = uVar15;
      }
      *(uint *)(param_6 + 0x10) = uVar13;
      *(uint *)(param_6 + 0x14) = uVar3;
      *(uint *)(param_6 + 0x20) = uVar7;
      *(uint *)(param_6 + 0x24) = uVar14;
      if (*(uint *)(param_4 + 8) != 0) {
        if (*(uint *)(param_4 + 4) == 0) {
          return 1;
        }
        uVar3 = 0;
        puVar5 = (undefined8 *)(param_4 + 0x14);
        uVar7 = 1;
        uVar13 = uVar8;
        uVar15 = uVar9;
        do {
          if (uVar7 != 0) {
            uVar14 = 0;
            puVar12 = (undefined8 *)((long)puVar5 + 0x24);
            do {
              puVar5 = puVar12;
              puVar4 = (uint *)0x0;
              if ((int)uVar15 < 0) {
                pfVar11 = (float *)0x0;
              }
              else if (((int)uVar13 < 0) || (*(uint *)(param_3 + 0x38) <= uVar15)) {
                pfVar11 = (float *)0x0;
              }
              else {
                pfVar11 = (float *)0x0;
                if (uVar13 < *(uint *)(param_3 + 0x3c)) {
                  uVar7 = uVar15 + *(uint *)(param_3 + 0x38) * uVar13;
                  if (*(long *)(param_3 + 0x60) == 0) {
                    pfVar11 = (float *)0x0;
                  }
                  else {
                    pfVar11 = (float *)(*(long *)(param_3 + 0x60) + (long)(int)uVar7 * 0x34);
                    if (*(uint *)(param_3 + 0x58) <= uVar7) {
                      pfVar11 = (float *)0x0;
                    }
                  }
                  puVar4 = (uint *)(*(long *)(param_3 + 0x70) + (long)(int)uVar7 * 4);
                  if (*(uint *)(param_3 + 0x68) <= uVar7) {
                    puVar4 = (uint *)0x0;
                  }
                }
              }
              if ((((*(char *)((long)puVar5 + 0xc) != '\a') ||
                   (*(char *)((long)puVar5 + 0xd) != '\a')) ||
                  (*(char *)((long)puVar5 + 0xe) != '\a')) ||
                 (*(char *)((long)puVar5 + 0xf) != '\a')) {
                *puVar4 = *puVar4 | 4;
                if (((((*(byte *)((long)puVar5 + 0xc) < 0x34) &&
                      ((1L << ((ulong)*(byte *)((long)puVar5 + 0xc) & 0x3f) & 0x8000000000300U) != 0
                      )) && ((*(byte *)((long)puVar5 + 0xd) < 0x34 &&
                             (((1L << ((ulong)*(byte *)((long)puVar5 + 0xd) & 0x3f) &
                               0x8000000000300U) != 0 && (*(byte *)((long)puVar5 + 0xe) < 0x34))))))
                    && ((1L << ((ulong)*(byte *)((long)puVar5 + 0xe) & 0x3f) & 0x8000000000300U) !=
                        0)) &&
                   ((*(byte *)((long)puVar5 + 0xf) < 0x34 &&
                    ((1L << ((ulong)*(byte *)((long)puVar5 + 0xf) & 0x3f) & 0x8000000000300U) != 0))
                   )) {
                  uVar7 = *puVar4 | 0x8000;
                }
                else {
                  uVar7 = *puVar4 & 0xffff7fff;
                }
                *puVar4 = uVar7;
              }
              *puVar4 = *puVar4 | 0x20;
              if ((((*(char *)((long)puVar5 + 0xc) == '@') || (*(char *)((long)puVar5 + 0xd) == '@')
                   ) || (*(char *)((long)puVar5 + 0xe) == '@')) ||
                 (*(char *)((long)puVar5 + 0xf) == '@')) {
                uVar7 = *puVar4 | 0x80000;
              }
              else {
                uVar7 = *puVar4 & 0xfff7ffff;
              }
              puVar12 = (undefined8 *)((long)puVar5 + -0x24);
              *puVar4 = uVar7;
              if (param_2 != 0.0) {
                if (param_2 == 90.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xf),pfVar11 + 0xc,
                               puVar5,pfVar11);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xc),
                               (long)pfVar11 + 0x31,puVar12,pfVar11 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xd),
                               (long)pfVar11 + 0x32,puVar5 + -3,pfVar11 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xe),
                               (long)pfVar11 + 0x33,(long)puVar5 + -0xc,pfVar11 + 9);
                  uVar13 = uVar13 - 1;
                }
                else if (param_2 == 180.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xe),pfVar11 + 0xc,
                               (long)puVar5 + -0xc,pfVar11);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xf),
                               (long)pfVar11 + 0x31,puVar5,pfVar11 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xc),
                               (long)pfVar11 + 0x32,puVar12,pfVar11 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xd),
                               (long)pfVar11 + 0x33,puVar5 + -3,pfVar11 + 9);
                  uVar15 = uVar15 - 1;
                }
                else if (param_2 == 270.0) {
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xd),pfVar11 + 0xc,
                               puVar5 + -3,pfVar11);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xe),
                               (long)pfVar11 + 0x31,(long)puVar5 + -0xc,pfVar11 + 3);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xf),
                               (long)pfVar11 + 0x32,puVar5,pfVar11 + 6);
                  FUN_0096a594(param_1,param_3,*(undefined1 *)((long)puVar5 + 0xc),
                               (long)pfVar11 + 0x33,puVar12,pfVar11 + 9);
                  uVar13 = uVar13 + 1;
                }
                goto LAB_0096bb34;
              }
              bVar2 = *(byte *)((long)puVar5 + 0xc);
              if ((bVar2 & 0xf7) != 7) {
                if ((bVar2 == 9) || (bVar2 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar2) {
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
switchD_0096c004_caseD_b:
                    local_74 = bVar2;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar2 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096c004_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar2 != 0x40) goto switchD_0096c004_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)(pfVar11 + 0xc) = local_74;
                fVar1 = *(float *)((long)puVar5 + -0x1c);
                *(undefined8 *)pfVar11 = *puVar12;
                pfVar11[2] = fVar1;
                *pfVar11 = *pfVar11 + param_1;
                pfVar11[1] = pfVar11[1] + param_1;
                pfVar11[2] = pfVar11[2] + param_1;
              }
              bVar2 = *(byte *)((long)puVar5 + 0xd);
              if ((bVar2 & 0xf7) != 7) {
                if ((bVar2 == 9) || (bVar2 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar2) {
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
switchD_0096c048_caseD_b:
                    local_74 = bVar2;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar2 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096c048_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar2 != 0x40) goto switchD_0096c048_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar11 + 0x31) = local_74;
                uVar10 = puVar5[-3];
                pfVar11[5] = *(float *)(puVar5 + -2);
                *(undefined8 *)(pfVar11 + 3) = uVar10;
                pfVar11[3] = pfVar11[3] + param_1;
                pfVar11[4] = pfVar11[4] + param_1;
                pfVar11[5] = pfVar11[5] + param_1;
              }
              bVar2 = *(byte *)((long)puVar5 + 0xe);
              if ((bVar2 & 0xf7) != 7) {
                if ((bVar2 == 9) || (bVar2 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar2) {
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
switchD_0096c08c_caseD_b:
                    local_74 = bVar2;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar2 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096c08c_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar2 != 0x40) goto switchD_0096c08c_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar11 + 0x32) = local_74;
                uVar10 = *(undefined8 *)((long)puVar5 + -0xc);
                pfVar11[8] = *(float *)((long)puVar5 + -4);
                *(undefined8 *)(pfVar11 + 6) = uVar10;
                pfVar11[6] = pfVar11[6] + param_1;
                pfVar11[7] = pfVar11[7] + param_1;
                pfVar11[8] = pfVar11[8] + param_1;
              }
              bVar2 = *(byte *)((long)puVar5 + 0xf);
              if ((bVar2 & 0xf7) != 7) {
                if ((bVar2 == 9) || (bVar2 == 0x31)) {
                  local_74 = 9;
                }
                else {
                  local_74 = 8;
                  switch(bVar2) {
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
switchD_0096be9c_caseD_b:
                    local_74 = bVar2;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar2 == 0) {
                      local_74 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096be9c_caseD_b;
                    local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (bVar2 != 0x40) goto switchD_0096be9c_caseD_b;
                    local_74 = 5;
                  case 10:
                  case 0x2f:
                  }
                }
                *(byte *)((long)pfVar11 + 0x33) = local_74;
                uVar10 = *puVar5;
                pfVar11[0xb] = *(float *)(puVar5 + 1);
                *(undefined8 *)(pfVar11 + 9) = uVar10;
                pfVar11[9] = pfVar11[9] + param_1;
                pfVar11[10] = pfVar11[10] + param_1;
                pfVar11[0xb] = pfVar11[0xb] + param_1;
              }
              uVar15 = uVar15 + 1;
LAB_0096bb34:
              uVar7 = *(uint *)(param_4 + 4);
              uVar14 = uVar14 + 1;
              puVar12 = (undefined8 *)((long)puVar5 + 0x34);
            } while (uVar14 < uVar7);
            puVar5 = puVar5 + 2;
          }
          if (param_2 == 0.0) {
            uVar13 = uVar13 + 1;
LAB_0096bac4:
            uVar15 = uVar9;
          }
          else if (param_2 == 90.0) {
            uVar15 = uVar15 + 1;
LAB_0096c2b8:
            uVar13 = uVar8;
          }
          else {
            if (param_2 == 180.0) {
              uVar13 = uVar13 - 1;
              goto LAB_0096bac4;
            }
            if (param_2 == 270.0) {
              uVar15 = uVar15 - 1;
              goto LAB_0096c2b8;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_4 + 8));
      }
      uVar10 = 1;
    }
  }
  return uVar10;
}

