
int FUN_038d3ee0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  short sVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  short *psVar14;
  undefined2 uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  ushort *puVar20;
  ulong uVar21;
  uint *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  undefined1 uStack_84;
  uint local_80;
  long local_78;
  int local_70;
  int local_6c;
  char local_68;
  
  if (param_2 == 0) {
    return -1;
  }
  local_70 = (int)param_2 + -1;
  local_6c = 0;
  local_b0 = (uint *)*param_4;
  local_a8 = param_4[1];
  uVar21 = 0;
  local_68 = '\0';
  local_a0 = param_4[2];
  local_98 = param_4[3];
  local_78 = param_1;
LAB_038d3f50:
  do {
    sVar10 = *(short *)(param_3 + uVar21 * 2);
    uVar1 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar1;
    if (sVar10 == 0x25) {
      local_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      puVar19 = (ushort *)(param_3 + 2 + uVar21 * 2);
      local_8c = 0;
      local_80 = 2;
      do {
        uVar12 = puVar19[-1];
        uVar11 = 1;
        switch(uVar12) {
        case 0x20:
          uVar11 = 8;
          break;
        default:
          goto switchD_038d3fe8_caseD_21;
        case 0x23:
          uVar11 = 0x10;
          break;
        case 0x2b:
          uVar11 = 2;
          break;
        case 0x2d:
          break;
        case 0x30:
          uVar11 = 4;
        }
        local_90 = uVar11 | local_90;
        puVar19 = puVar19 + 1;
      } while( true );
    }
    if (sVar10 == 0) {
      iVar17 = local_6c;
      goto LAB_038d4814;
    }
    if (local_70 <= local_6c) break;
    *(short *)(local_78 + (long)local_6c * 2) = sVar10;
    local_6c = local_6c + 1;
  } while (local_68 == '\0');
  goto LAB_038d4804;
switchD_038d3fe8_caseD_21:
  if (uVar12 == 0x2a) {
    uVar11 = (uint)local_98;
    lVar8 = (long)(int)(uint)local_98;
    if ((int)(uint)local_98 < 0) {
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8);
      if (0xfffffff8 < uVar11) goto LAB_038d40c4;
      puVar9 = (uint *)(local_a8 + lVar8);
    }
    else {
LAB_038d40c4:
      puVar9 = local_b0;
      local_b0 = local_b0 + 2;
    }
    local_8c = *puVar9;
    uVar13 = (uint)*puVar19;
    if (uVar13 != 0x2e) goto LAB_038d40e4;
LAB_038d4088:
    uStack_84 = 1;
    uVar12 = puVar19[1];
    uVar11 = (uint)uVar12;
    if (uVar12 == 0x2a) {
      uVar11 = (uint)local_98;
      lVar8 = (long)(int)(uint)local_98;
      if ((int)(uint)local_98 < 0) {
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8);
        if (0xfffffff8 < uVar11) goto LAB_038d4164;
        puVar9 = (uint *)(local_a8 + lVar8);
      }
      else {
LAB_038d4164:
        puVar9 = local_b0;
        local_b0 = local_b0 + 2;
      }
      uVar11 = (uint)puVar19[2];
      puVar20 = puVar19 + 2;
      uStack_88 = *puVar9;
    }
    else {
      uVar3 = uVar12 - 0x30;
      puVar20 = puVar19 + 1;
      if (uVar3 < 10) {
        puVar20 = puVar19 + 2;
        uVar12 = *puVar20;
        while( true ) {
          uVar11 = (uint)uVar12;
          uStack_88 = uVar3;
          if (uVar11 - 0x3a < 0xfffffff6) break;
          uVar3 = (uVar11 + uVar3 * 10) - 0x30;
          puVar20 = puVar20 + 1;
          uVar12 = *puVar20;
        }
      }
    }
    puVar19 = puVar20;
    if (uVar11 == 0x6c) goto LAB_038d40f4;
LAB_038d4184:
    if (uVar11 == 0x68) {
      bVar4 = puVar19[1] != 0x68;
      local_80 = (uint)bVar4;
      puVar20 = puVar19 + 1;
      if (!bVar4) {
        puVar20 = puVar19 + 2;
      }
      goto LAB_038d41a0;
    }
  }
  else {
    uVar11 = (uint)uVar12;
    if (uVar11 - 0x31 < 9) {
      uVar12 = *puVar19;
      while( true ) {
        uVar13 = (uint)uVar12;
        local_8c = uVar11 - 0x30;
        if (uVar13 - 0x3a < 0xfffffff6) break;
        uVar11 = uVar13 + local_8c * 10;
        puVar19 = puVar19 + 1;
        uVar12 = *puVar19;
      }
    }
    else {
      puVar19 = puVar19 + -1;
      uVar13 = uVar11;
    }
    if (uVar13 == 0x2e) goto LAB_038d4088;
LAB_038d40e4:
    uVar11 = uVar13;
    if (uVar13 != 0x6c) goto LAB_038d4184;
LAB_038d40f4:
    puVar20 = puVar19 + 1;
    local_80 = 3;
    if (*puVar20 == 0x6c) {
      local_80 = 4;
      puVar20 = puVar19 + 2;
    }
LAB_038d41a0:
    uVar11 = (uint)*puVar20;
    puVar19 = puVar20;
  }
  iVar17 = 0;
  uVar3 = (uint)local_98;
  switch(uVar11) {
  case 0x25:
    if (local_70 <= local_6c) goto LAB_038d4748;
    *(undefined2 *)(local_78 + (long)local_6c * 2) = 0x25;
LAB_038d4558:
    local_6c = local_6c + 1;
    break;
  default:
    goto switchD_038d41cc_caseD_26;
  case 0x45:
    uVar5 = 0x65;
    goto LAB_038d4234;
  case 0x47:
    uVar5 = 0x67;
LAB_038d4234:
    FUN_038d6820(&local_b0,&local_78,uVar5,1);
    break;
  case 0x58:
    uVar5 = 0x10;
    uVar6 = 0;
    uVar7 = 1;
    goto LAB_038d4338;
  case 99:
    if (local_80 - 2 < 3) {
      lVar8 = (long)(int)(uint)local_98;
      if (((int)(uint)local_98 < 0) &&
         (local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8), uVar3 < 0xfffffff9)) {
        puVar9 = (uint *)(local_a8 + lVar8);
      }
      else {
        puVar9 = local_b0;
        local_b0 = local_b0 + 2;
      }
      uVar12 = (ushort)*puVar9;
    }
    else if (local_80 < 2) {
      lVar8 = (long)(int)(uint)local_98;
      if (((int)(uint)local_98 < 0) &&
         (local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8), uVar3 < 0xfffffff9)) {
        uVar12 = (ushort)*(byte *)(local_a8 + lVar8);
      }
      else {
        uVar12 = (ushort)(byte)*local_b0;
        local_b0 = local_b0 + 2;
      }
    }
    else {
      uVar12 = 0;
    }
    uVar11 = (uint)(uVar12 != 0);
    iVar17 = uVar11 - local_8c;
    if (uVar11 < local_8c) {
      uVar11 = (uint)(uVar12 != 0);
      if ((local_90 & 1) == 0) {
        uVar15 = 0x20;
        if ((local_90 & 4) != 0) {
          uVar15 = 0x30;
        }
        if (local_8c != uVar11) {
          iVar18 = iVar17;
          do {
            if (local_70 <= local_6c) {
              local_68 = '\x01';
              break;
            }
            bVar4 = iVar18 != -1;
            iVar18 = iVar18 + 1;
            *(undefined2 *)(local_78 + (long)local_6c * 2) = uVar15;
            local_6c = local_6c + 1;
          } while (bVar4);
        }
      }
      if (uVar12 != 0) {
        if (local_6c < local_70) {
          *(ushort *)(local_78 + (long)local_6c * 2) = uVar12;
          local_6c = local_6c + 1;
        }
        else {
          local_68 = '\x01';
        }
      }
      if (((local_90 & 1) != 0) && (local_8c != uVar11)) {
        do {
          if (local_70 <= local_6c) goto LAB_038d4748;
          bVar4 = iVar17 != -1;
          iVar17 = iVar17 + 1;
          *(undefined2 *)(local_78 + (long)local_6c * 2) = 0x20;
          local_6c = local_6c + 1;
        } while (bVar4);
      }
    }
    else if (uVar12 != 0) {
      if (local_70 <= local_6c) goto LAB_038d4748;
      *(ushort *)(local_78 + (long)local_6c * 2) = uVar12;
      goto LAB_038d4558;
    }
    break;
  case 100:
  case 0x69:
    uVar5 = 10;
    uVar6 = 1;
    goto LAB_038d4334;
  case 0x65:
    uVar5 = 0x65;
    goto LAB_038d42b4;
  case 0x66:
    uVar5 = 0x66;
    goto LAB_038d42b4;
  case 0x67:
    uVar5 = 0x67;
LAB_038d42b4:
    FUN_038d6820(&local_b0,&local_78,uVar5,0);
    break;
  case 0x6f:
    uVar5 = 8;
    goto LAB_038d4330;
  case 0x70:
    local_90 = local_90 & 0xfffffffb;
    local_80 = 2;
    uStack_88 = 8;
  case 0x78:
    uVar5 = 0x10;
LAB_038d4330:
    uVar6 = 0;
LAB_038d4334:
    uVar7 = 0;
LAB_038d4338:
    FUN_038d56e0(&local_b0,&local_78,uVar5,uVar6,uVar7);
    break;
  case 0x73:
    if (local_80 - 2 < 3) {
      lVar8 = (long)(int)(uint)local_98;
      if (((int)(uint)local_98 < 0) &&
         (local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8), uVar3 < 0xfffffff9)) {
        puVar9 = (uint *)(local_a8 + lVar8);
      }
      else {
        puVar9 = local_b0;
        local_b0 = local_b0 + 2;
      }
      psVar2 = &DAT_041a15bc;
      if (*(short **)puVar9 != (short *)0x0) {
        psVar2 = *(short **)puVar9;
      }
      if ((local_90 & 1) == 0) {
        if (uVar13 == 0x2e) {
          uVar11 = 0;
          if ((*psVar2 != 0) && (uStack_88 != 0)) {
            uVar16 = 2;
            do {
              psVar14 = (short *)((long)psVar2 + uVar16);
              uVar11 = (uint)(uVar16 >> 1);
              uVar16 = uVar16 + 2;
              bVar4 = *psVar14 == 0;
            } while ((!bVar4 && uVar11 <= uStack_88) && (bVar4 || uStack_88 != uVar11));
          }
        }
        else {
          uVar11 = 0xffffffff;
          psVar14 = psVar2;
          do {
            sVar10 = *psVar14;
            uVar11 = uVar11 + 1;
            psVar14 = psVar14 + 1;
          } while (sVar10 != 0);
        }
        iVar17 = uVar11 - local_8c;
        if (uVar11 < local_8c) {
          uVar15 = 0x20;
          if ((local_90 & 4) != 0) {
            uVar15 = 0x30;
          }
          if (local_8c != uVar11) {
            do {
              if (local_70 <= local_6c) {
                local_68 = '\x01';
                break;
              }
              bVar4 = iVar17 != -1;
              iVar17 = iVar17 + 1;
              *(undefined2 *)(local_78 + (long)local_6c * 2) = uVar15;
              local_6c = local_6c + 1;
            } while (bVar4);
          }
        }
        if (uVar11 != 0) {
          if (local_6c < local_70) {
            iVar17 = local_6c;
            if (uVar11 == 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              do {
                if (iVar17 < local_70) {
                  *(short *)(local_78 + (long)iVar17 * 2) = psVar2[uVar16];
                  iVar17 = local_6c + 1;
                  local_6c = iVar17;
                }
                else {
                  local_68 = '\x01';
                }
                if (iVar17 < local_70) {
                  *(short *)(local_78 + (long)iVar17 * 2) = psVar2[uVar16 + 1];
                  iVar17 = local_6c + 1;
                  local_6c = iVar17;
                }
                else {
                  local_68 = '\x01';
                }
                uVar16 = uVar16 + 2;
              } while (((ulong)uVar11 & 0xfffffffe) != uVar16);
            }
            if ((uVar11 & 1) == 0) break;
            if (iVar17 < local_70) {
              *(short *)(local_78 + (long)iVar17 * 2) = psVar2[uVar16];
              goto LAB_038d4558;
            }
          }
LAB_038d4748:
          local_68 = '\x01';
        }
      }
      else {
        sVar10 = *psVar2;
        if (uVar13 == 0x2e) {
          uVar11 = 0;
          if ((sVar10 != 0) && (uStack_88 != 0)) {
            if (local_6c < local_70) {
              uVar16 = 2;
              iVar17 = local_6c;
              do {
                if (iVar17 < local_70) {
                  *(short *)(local_78 + (long)iVar17 * 2) = sVar10;
                  iVar17 = local_6c + 1;
                  local_6c = iVar17;
                }
                else {
                  local_68 = '\x01';
                }
                sVar10 = *(short *)((long)psVar2 + uVar16);
                uVar11 = (uint)(uVar16 >> 1);
              } while ((sVar10 != 0) && (uVar16 = uVar16 + 2, uVar11 < uStack_88));
            }
            else {
              uVar16 = 2;
              do {
                uVar11 = (uint)(uVar16 >> 1);
                local_68 = '\x01';
                psVar14 = (short *)((long)psVar2 + uVar16);
                uVar16 = uVar16 + 2;
                bVar4 = *psVar14 == 0;
              } while ((!bVar4 && uVar11 <= uStack_88) && (bVar4 || uStack_88 != uVar11));
            }
          }
        }
        else {
          psVar14 = psVar2;
          if (sVar10 != 0) {
            iVar17 = local_6c;
            if (local_6c < local_70) {
              do {
                while (iVar17 < local_70) {
                  *(short *)(local_78 + (long)iVar17 * 2) = sVar10;
                  iVar17 = local_6c + 1;
                  psVar14 = psVar14 + 1;
                  sVar10 = *psVar14;
                  local_6c = iVar17;
                  if (sVar10 == 0) goto LAB_038d46b4;
                }
                local_68 = '\x01';
                psVar14 = psVar14 + 1;
                sVar10 = *psVar14;
              } while (sVar10 != 0);
            }
            else {
              do {
                local_68 = '\x01';
                psVar14 = psVar14 + 1;
              } while (*psVar14 != 0);
            }
          }
LAB_038d46b4:
          uVar11 = (uint)((ulong)((long)psVar14 - (long)psVar2) >> 1);
        }
        iVar17 = uVar11 - local_8c;
        if ((uVar11 < local_8c) && (local_8c != uVar11)) {
          do {
            if (local_70 <= local_6c) goto LAB_038d4748;
            bVar4 = iVar17 != -1;
            iVar17 = iVar17 + 1;
            *(undefined2 *)(local_78 + (long)local_6c * 2) = 0x20;
            local_6c = local_6c + 1;
          } while (bVar4);
        }
      }
    }
    else if (local_80 < 2) {
      lVar8 = (long)(int)(uint)local_98;
      if (((int)(uint)local_98 < 0) &&
         (local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8), uVar3 < 0xfffffff9)) {
        puVar9 = (uint *)(local_a8 + lVar8);
      }
      else {
        puVar9 = local_b0;
        local_b0 = local_b0 + 2;
      }
      FUN_038d7420(&local_b0,&local_78,*(undefined8 *)puVar9);
    }
    break;
  case 0x75:
    uVar5 = 10;
    goto LAB_038d4330;
  }
  iVar17 = (int)((long)puVar19 + (2 - (param_3 + uVar21 * 2)) >> 1);
switchD_038d41cc_caseD_26:
  uVar21 = (ulong)(iVar17 + uVar1);
  if (local_68 != '\0') {
LAB_038d4804:
    iVar17 = -1;
LAB_038d4814:
    *(undefined2 *)(local_78 + (long)local_6c * 2) = 0;
    return iVar17;
  }
  goto LAB_038d3f50;
}

