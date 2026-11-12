
undefined8
FUN_0096c350(float param_1,float param_2,long param_3,long param_4,long param_5,long param_6,
            uint param_7)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *local_80;
  uint local_78;
  byte local_74;
  
  uVar18 = *(uint *)(param_5 + 8);
  uVar9 = *(uint *)(param_5 + 0xc);
  if (param_2 == 0.0) {
    uVar18 = *(int *)(param_4 + 0xc) + uVar18;
    uVar9 = *(int *)(param_4 + 0x10) + uVar9;
    iVar8 = *(int *)(param_4 + 8);
    uVar6 = (uVar18 + *(int *)(param_4 + 4)) - 1;
  }
  else {
    if (param_2 == 90.0) {
      iVar8 = uVar9 - *(int *)(param_4 + 4);
      uVar18 = *(int *)(param_4 + 0x10) + uVar18;
      uVar9 = uVar9 + ~*(uint *)(param_4 + 0xc);
      uVar6 = (uVar18 + *(int *)(param_4 + 8)) - 1;
      uVar17 = iVar8 - *(uint *)(param_4 + 0xc);
      goto joined_r0x0096c49c;
    }
    if (param_2 == 180.0) {
      uVar18 = uVar18 + ~*(uint *)(param_4 + 0xc);
      uVar9 = uVar9 + ~*(uint *)(param_4 + 0x10);
    }
    else if (param_2 == 270.0) {
      uVar9 = *(int *)(param_4 + 0xc) + uVar9;
      uVar18 = uVar18 + ~*(uint *)(param_4 + 0x10);
    }
    iVar8 = *(int *)(param_4 + 4);
    if (param_2 == 180.0) {
      uVar6 = (uVar18 - iVar8) + 1;
      uVar17 = (uVar9 - *(int *)(param_4 + 8)) + 1;
      goto joined_r0x0096c49c;
    }
    uVar6 = uVar18;
    uVar17 = uVar9;
    if (param_2 != 270.0) goto joined_r0x0096c49c;
    uVar6 = (uVar18 - *(int *)(param_4 + 8)) + 1;
  }
  uVar17 = (uVar9 + iVar8) - 1;
joined_r0x0096c49c:
  uVar4 = 0;
  if (-1 < (int)uVar18) {
    local_80 = (uint *)(param_4 + 8);
    uVar4 = 0;
    puVar16 = (uint *)(param_4 + 4);
    if (((((-1 < (int)uVar9) && (uVar18 < *(uint *)(param_3 + 0x38))) &&
         (uVar9 < *(uint *)(param_3 + 0x3c))) &&
        ((-1 < (int)uVar6 && (uVar4 = 0, -1 < (int)uVar17)))) &&
       ((uVar6 < *(uint *)(param_3 + 0x38) && (uVar17 < *(uint *)(param_3 + 0x3c))))) {
      uVar7 = uVar18;
      if ((int)uVar6 <= (int)uVar18) {
        uVar7 = uVar6;
      }
      uVar12 = uVar18;
      if ((int)uVar18 <= (int)uVar6) {
        uVar12 = uVar6;
      }
      uVar6 = uVar9;
      if ((int)uVar17 <= (int)uVar9) {
        uVar6 = uVar17;
      }
      uVar1 = uVar9;
      if ((int)uVar9 <= (int)uVar17) {
        uVar1 = uVar17;
      }
      *(uint *)(param_6 + 0x20) = uVar12;
      *(uint *)(param_6 + 0x24) = uVar1;
      *(uint *)(param_6 + 0x10) = uVar7;
      *(uint *)(param_6 + 0x14) = uVar6;
      if ((*local_80 != 0) && (*puVar16 != 0)) {
        puVar10 = (undefined8 *)(param_4 + 0x14);
        uVar7 = 1;
        local_78 = 0;
        uVar17 = uVar9;
        uVar6 = uVar18;
        do {
          if (uVar7 == 0) {
LAB_0096c9b8:
            if (param_2 != 0.0) goto LAB_0096c9c0;
LAB_0096c540:
            uVar17 = uVar17 + 1;
LAB_0096c544:
            uVar6 = uVar18;
          }
          else {
            if (param_2 == 0.0) {
              uVar12 = 0;
              do {
                lVar5 = 0;
                if ((int)(uVar6 + uVar12) < 0) {
                  pfVar14 = (float *)0x0;
                }
                else if (((int)uVar17 < 0) || (*(uint *)(param_3 + 0x38) <= uVar6 + uVar12)) {
                  pfVar14 = (float *)0x0;
                }
                else {
                  pfVar14 = (float *)0x0;
                  if (uVar17 < *(uint *)(param_3 + 0x3c)) {
                    uVar7 = uVar6 + uVar12 + *(uint *)(param_3 + 0x38) * uVar17;
                    lVar5 = *(long *)(param_3 + 0x70) + (long)(int)uVar7 * 4;
                    if (*(uint *)(param_3 + 0x68) <= uVar7) {
                      lVar5 = 0;
                    }
                    pfVar14 = (float *)(*(long *)(param_3 + 0x50) + (long)(int)uVar7 * 0x34);
                    if (*(uint *)(param_3 + 0x48) <= uVar7) {
                      pfVar14 = (float *)0x0;
                    }
                  }
                }
                FUN_0096a3f8(puVar10,lVar5,param_7 & 1);
                bVar3 = *(byte *)(puVar10 + 6);
                if ((bVar3 & 0xf7) != 7) {
                  if ((bVar3 == 0x31) || (bVar3 == 9)) {
                    local_74 = 9;
                  }
                  else {
                    local_74 = 8;
                    switch(bVar3) {
                    case 10:
                    case 0x2f:
                      break;
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
switchD_0096c6a8_caseD_b:
                      local_74 = bVar3;
                      if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                        local_74 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096c6a8_caseD_b;
                      local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar3 != 0x40) goto switchD_0096c6a8_caseD_b;
                      local_74 = 5;
                    }
                  }
                  *(byte *)(pfVar14 + 0xc) = local_74;
                  fVar2 = *(float *)(puVar10 + 1);
                  *(undefined8 *)pfVar14 = *puVar10;
                  pfVar14[2] = fVar2;
                  *pfVar14 = *pfVar14 + param_1;
                  pfVar14[1] = pfVar14[1] + param_1;
                  pfVar14[2] = pfVar14[2] + param_1;
                }
                bVar3 = *(byte *)((long)puVar10 + 0x31);
                if ((bVar3 & 0xf7) != 7) {
                  if ((bVar3 == 0x31) || (bVar3 == 9)) {
                    local_74 = 9;
                  }
                  else {
                    local_74 = 8;
                    switch(bVar3) {
                    case 10:
                    case 0x2f:
                      break;
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
switchD_0096c788_caseD_b:
                      local_74 = bVar3;
                      if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                        local_74 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096c788_caseD_b;
                      local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar3 != 0x40) goto switchD_0096c788_caseD_b;
                      local_74 = 5;
                    }
                  }
                  *(byte *)((long)pfVar14 + 0x31) = local_74;
                  uVar4 = *(undefined8 *)((long)puVar10 + 0xc);
                  pfVar14[5] = *(float *)((long)puVar10 + 0x14);
                  *(undefined8 *)(pfVar14 + 3) = uVar4;
                  pfVar14[3] = pfVar14[3] + param_1;
                  pfVar14[4] = pfVar14[4] + param_1;
                  pfVar14[5] = pfVar14[5] + param_1;
                }
                bVar3 = *(byte *)((long)puVar10 + 0x32);
                if ((bVar3 & 0xf7) != 7) {
                  if ((bVar3 == 0x31) || (bVar3 == 9)) {
                    local_74 = 9;
                  }
                  else {
                    local_74 = 8;
                    switch(bVar3) {
                    case 10:
                    case 0x2f:
                      break;
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
switchD_0096c870_caseD_b:
                      local_74 = bVar3;
                      if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                        local_74 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096c870_caseD_b;
                      local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar3 != 0x40) goto switchD_0096c870_caseD_b;
                      local_74 = 5;
                    }
                  }
                  *(byte *)((long)pfVar14 + 0x32) = local_74;
                  uVar4 = puVar10[3];
                  pfVar14[8] = *(float *)(puVar10 + 4);
                  *(undefined8 *)(pfVar14 + 6) = uVar4;
                  pfVar14[6] = pfVar14[6] + param_1;
                  pfVar14[7] = pfVar14[7] + param_1;
                  pfVar14[8] = pfVar14[8] + param_1;
                }
                bVar3 = *(byte *)((long)puVar10 + 0x33);
                if ((bVar3 & 0xf7) != 7) {
                  if ((bVar3 == 0x31) || (bVar3 == 9)) {
                    local_74 = 9;
                  }
                  else {
                    local_74 = 8;
                    switch(bVar3) {
                    case 10:
                    case 0x2f:
                      break;
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
switchD_0096c950_caseD_b:
                      local_74 = bVar3;
                      if (*(char *)(param_3 + 0x120) != '\0' && bVar3 == 0) {
                        local_74 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096c950_caseD_b;
                      local_74 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_74 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar3 != 0x40) goto switchD_0096c950_caseD_b;
                      local_74 = 5;
                    }
                  }
                  *(byte *)((long)pfVar14 + 0x33) = local_74;
                  uVar4 = *(undefined8 *)((long)puVar10 + 0x24);
                  pfVar14[0xb] = *(float *)((long)puVar10 + 0x2c);
                  *(undefined8 *)(pfVar14 + 9) = uVar4;
                  pfVar14[9] = pfVar14[9] + param_1;
                  pfVar14[10] = pfVar14[10] + param_1;
                  pfVar14[0xb] = pfVar14[0xb] + param_1;
                }
                uVar7 = *puVar16;
                uVar12 = uVar12 + 1;
                puVar10 = (undefined8 *)((long)puVar10 + 0x34);
              } while (uVar12 < uVar7);
              uVar6 = uVar6 + uVar12;
              goto LAB_0096c9b8;
            }
            uVar12 = 0;
            lVar5 = (long)puVar10 + 0x24;
            do {
              lVar11 = lVar5;
              lVar5 = 0;
              if ((int)uVar6 < 0) {
                lVar13 = 0;
              }
              else if (((int)uVar17 < 0) || (*(uint *)(param_3 + 0x38) <= uVar6)) {
                lVar13 = 0;
              }
              else {
                lVar13 = 0;
                if (uVar17 < *(uint *)(param_3 + 0x3c)) {
                  uVar7 = uVar6 + *(uint *)(param_3 + 0x38) * uVar17;
                  lVar5 = *(long *)(param_3 + 0x70) + (long)(int)uVar7 * 4;
                  if (*(uint *)(param_3 + 0x68) <= uVar7) {
                    lVar5 = 0;
                  }
                  lVar13 = *(long *)(param_3 + 0x50) + (long)(int)uVar7 * 0x34;
                  if (*(uint *)(param_3 + 0x48) <= uVar7) {
                    lVar13 = 0;
                  }
                }
              }
              lVar15 = lVar11 + -0x24;
              FUN_0096a3f8(lVar15,lVar5,param_7 & 1);
              if (param_2 == 90.0) {
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xf),lVar13 + 0x30,lVar11,
                             lVar13);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xc),lVar13 + 0x31,lVar15,
                             lVar13 + 0xc);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xd),lVar13 + 0x32,
                             lVar11 + -0x18,lVar13 + 0x18);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xe),lVar13 + 0x33,
                             lVar11 + -0xc,lVar13 + 0x24);
                uVar17 = uVar17 - 1;
              }
              else if (param_2 == 180.0) {
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xe),lVar13 + 0x30,
                             lVar11 + -0xc,lVar13);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xf),lVar13 + 0x31,lVar11,
                             lVar13 + 0xc);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xc),lVar13 + 0x32,lVar15,
                             lVar13 + 0x18);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xd),lVar13 + 0x33,
                             lVar11 + -0x18,lVar13 + 0x24);
                uVar6 = uVar6 - 1;
              }
              else if (param_2 == 270.0) {
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xd),lVar13 + 0x30,
                             lVar11 + -0x18,lVar13);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xe),lVar13 + 0x31,
                             lVar11 + -0xc,lVar13 + 0xc);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xf),lVar13 + 0x32,lVar11,
                             lVar13 + 0x18);
                FUN_0096a594(param_1,param_3,*(undefined1 *)(lVar11 + 0xc),lVar13 + 0x33,lVar15,
                             lVar13 + 0x24);
                uVar17 = uVar17 + 1;
              }
              uVar7 = *puVar16;
              uVar12 = uVar12 + 1;
              lVar5 = lVar11 + 0x34;
            } while (uVar12 < uVar7);
            puVar10 = (undefined8 *)(lVar11 + 0x10);
            if (param_2 == 0.0) goto LAB_0096c540;
LAB_0096c9c0:
            if (param_2 == 90.0) {
              uVar6 = uVar6 + 1;
LAB_0096c9d4:
              uVar17 = uVar9;
            }
            else {
              if (param_2 == 180.0) {
                uVar17 = uVar17 - 1;
                goto LAB_0096c544;
              }
              if (param_2 == 270.0) {
                uVar6 = uVar6 - 1;
                goto LAB_0096c9d4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < *local_80);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

