
/* WARNING: Removing unreachable block (ram,0x004685e4) */
/* WARNING: Removing unreachable block (ram,0x004683a8) */
/* WARNING: Removing unreachable block (ram,0x0046883c) */
/* WARNING: Removing unreachable block (ram,0x00468f50) */
/* WARNING: Removing unreachable block (ram,0x00468dc8) */

int FUN_004682b0(long param_1,byte *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte bVar16;
  char *pcVar17;
  char cVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *local_5e8;
  byte *pbStack_5e0;
  byte *local_5d8;
  undefined8 local_5d0;
  byte local_5c8 [256];
  byte *local_4c8;
  byte *pbStack_4c0;
  undefined8 local_4b8;
  long lStack_4b0;
  byte *local_4a8;
  byte *local_4a0;
  byte *local_498;
  byte *pbStack_490;
  byte *local_488;
  uint local_480;
  uint local_47c;
  byte local_478 [512];
  undefined1 *local_278;
  undefined8 local_270;
  undefined1 local_268 [520];
  
  pbVar15 = *(byte **)(param_1 + 0x20);
  pbVar23 = *(byte **)(param_1 + 0x28);
  if (pbVar15 == pbVar23) goto LAB_004693f4;
  if (*pbVar15 == 0x28) {
    pbVar22 = pbVar15 + 1;
    local_278 = (undefined1 *)0x0;
    if (pbVar22 == pbVar23) goto LAB_00468684;
    bVar16 = *pbVar22;
    pbVar19 = pbVar22;
    if (bVar16 != 0x29) {
      pbVar8 = pbVar15 + 2;
      do {
        pbVar19 = pbVar8;
        if (bVar16 < 0x3e) {
          if (bVar16 == 0x22) {
LAB_0046842c:
            uVar5 = 4;
LAB_00468430:
            pcVar17 = (char *)((ulong)&local_278 | uVar5);
            cVar18 = *pcVar17 + '\x01';
            goto LAB_004683bc;
          }
          if (bVar16 == 0x29) {
            pcVar17 = (char *)((ulong)&local_278 | 1);
            cVar18 = *pcVar17;
            goto joined_r0x00468384;
          }
code_r0x004683e8:
          if (0x3b < bVar16) {
            if (bVar16 == 0x3c) {
              uVar5 = 5;
            }
            else if (bVar16 == 0x5b) {
              uVar5 = 3;
            }
            else {
              if (bVar16 != 0x7b) goto LAB_004683c0;
              uVar5 = 2;
            }
            goto LAB_00468430;
          }
          if (bVar16 == 0x22) goto LAB_0046842c;
          if (bVar16 == 0x28) {
            uVar5 = 1;
            goto LAB_00468430;
          }
        }
        else {
          if (bVar16 == 0x3e) {
            pcVar17 = (char *)((ulong)&local_278 | 5);
            cVar18 = *pcVar17;
          }
          else if (bVar16 == 0x5d) {
            pcVar17 = (char *)((ulong)&local_278 | 3);
            cVar18 = *pcVar17;
          }
          else {
            if (bVar16 != 0x7d) goto code_r0x004683e8;
            pcVar17 = (char *)((ulong)&local_278 | 2);
            cVar18 = *pcVar17;
          }
joined_r0x00468384:
          if (cVar18 != '\0') {
            cVar18 = cVar18 + -1;
LAB_004683bc:
            *pcVar17 = cVar18;
          }
        }
LAB_004683c0:
        if (pbVar23 == pbVar19) goto LAB_00468684;
        bVar16 = *pbVar19;
        pbVar8 = pbVar19 + 1;
      } while (bVar16 != 0x29);
    }
    if (pbVar19 == pbVar23) goto LAB_00468684;
    if (pbVar19 != pbVar23 + -1) goto LAB_00468468;
    pbVar23 = pbVar22 + ((long)(((ulong)(uint)((int)pbVar23 - (int)pbVar15) << 0x20) + -0x200000000)
                        >> 0x20);
  }
  else {
LAB_00468468:
    pbVar22 = pbVar15;
    if (pbVar15 == (byte *)0x0) {
LAB_00468684:
      FUN_00423010(param_3,"Cannot find matching \')\'");
      return -0x7ffbfe00;
    }
  }
  puVar3 = PTR_DAT_048607b8;
  local_278 = local_268;
  local_270 = -0x7fffffe000000000;
  if (pbVar22 == pbVar23) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    pbVar15 = pbVar22;
    do {
      local_488 = (byte *)0x0;
      pbVar19 = pbVar23;
      if (pbVar15 != pbVar23) {
        bVar16 = *pbVar15;
        pbVar19 = pbVar15;
        if (bVar16 != 0x2c) {
          pbVar8 = pbVar15;
          do {
            pbVar8 = pbVar8 + 1;
            if (bVar16 < 0x3e) {
              if (bVar16 == 0x22) {
LAB_00468534:
                uVar5 = 4;
LAB_00468538:
                pcVar17 = (char *)((ulong)&local_488 | uVar5);
                cVar18 = *pcVar17 + '\x01';
                goto LAB_004685f8;
              }
              if (bVar16 == 0x29) {
                pcVar17 = (char *)((ulong)&local_488 | 1);
                cVar18 = *pcVar17;
                goto joined_r0x004685c0;
              }
code_r0x004684f0:
              if (0x3b < bVar16) {
                if (bVar16 == 0x3c) {
                  uVar5 = 5;
                }
                else if (bVar16 == 0x5b) {
                  uVar5 = 3;
                }
                else {
                  if (bVar16 != 0x7b) goto LAB_004685fc;
                  uVar5 = 2;
                }
                goto LAB_00468538;
              }
              if (bVar16 == 0x22) goto LAB_00468534;
              if (bVar16 == 0x28) {
                uVar5 = 1;
                goto LAB_00468538;
              }
            }
            else {
              if (bVar16 == 0x3e) {
                pcVar17 = (char *)((ulong)&local_488 | 5);
                cVar18 = *pcVar17;
              }
              else if (bVar16 == 0x5d) {
                pcVar17 = (char *)((ulong)&local_488 | 3);
                cVar18 = *pcVar17;
              }
              else {
                if (bVar16 != 0x7d) goto code_r0x004684f0;
                pcVar17 = (char *)((ulong)&local_488 | 2);
                cVar18 = *pcVar17;
              }
joined_r0x004685c0:
              if (cVar18 != '\0') {
                cVar18 = cVar18 + -1;
LAB_004685f8:
                *pcVar17 = cVar18;
              }
            }
LAB_004685fc:
            pbVar19 = pbVar23;
            if (pbVar23 == pbVar8) break;
            bVar16 = *pbVar8;
            pbVar19 = pbVar8;
          } while (bVar16 != 0x2c);
        }
      }
      uVar11 = uVar13;
      if (uVar13 == (local_270._4_4_ & 0x3fffffff)) {
        FUN_00426990(puVar3,&local_278,0x10);
        uVar11 = (uint)local_270;
      }
      uVar13 = uVar11 + 1;
      *(byte **)(local_278 + (long)(int)uVar11 * 0x10) = pbVar15;
      *(byte **)((long)(local_278 + (long)(int)uVar11 * 0x10) + 8) = pbVar19;
      if (pbVar19 != pbVar23) {
        pbVar19 = pbVar19 + 1;
      }
      local_270 = CONCAT44(local_270._4_4_,uVar13);
      pbVar15 = pbVar19;
    } while (pbVar19 != pbVar23);
  }
  puVar3 = PTR_DAT_048607b8;
  local_488 = local_478;
  local_480 = 0;
  local_47c = 0x80000020;
  if (0 < (int)uVar13) {
    lVar21 = 0;
LAB_00468700:
    pbVar19 = *(byte **)(local_278 + lVar21 * 0x10);
    pbVar8 = *(byte **)(local_278 + lVar21 * 0x10 + 8);
    local_5d8 = (byte *)0x0;
    pbVar15 = pbVar19;
    if ((pbVar19 != pbVar8) && (bVar16 = *pbVar19, bVar16 != 0x3d)) {
      do {
        if (bVar16 < 0x3e) {
          if (bVar16 == 0x22) {
LAB_0046878c:
            uVar5 = 4;
LAB_00468790:
            pcVar17 = (char *)((ulong)&local_5d8 | uVar5);
            cVar18 = *pcVar17 + '\x01';
            goto LAB_00468850;
          }
          if (bVar16 == 0x29) {
            pcVar17 = (char *)((ulong)&local_5d8 | 1);
            cVar18 = *pcVar17;
            goto joined_r0x00468818;
          }
code_r0x00468748:
          if (0x3b < bVar16) {
            if (bVar16 == 0x3c) {
              uVar5 = 5;
            }
            else if (bVar16 == 0x5b) {
              uVar5 = 3;
            }
            else {
              if (bVar16 != 0x7b) goto LAB_00468854;
              uVar5 = 2;
            }
            goto LAB_00468790;
          }
          if (bVar16 == 0x22) goto LAB_0046878c;
          if (bVar16 == 0x28) {
            uVar5 = 1;
            goto LAB_00468790;
          }
        }
        else {
          if (bVar16 == 0x3e) {
            pcVar17 = (char *)((ulong)&local_5d8 | 5);
            cVar18 = *pcVar17;
          }
          else if (bVar16 == 0x5d) {
            pcVar17 = (char *)((ulong)&local_5d8 | 3);
            cVar18 = *pcVar17;
          }
          else {
            if (bVar16 != 0x7d) goto code_r0x00468748;
            pcVar17 = (char *)((ulong)&local_5d8 | 2);
            cVar18 = *pcVar17;
          }
joined_r0x00468818:
          if (cVar18 != '\0') {
            cVar18 = cVar18 + -1;
LAB_00468850:
            *pcVar17 = cVar18;
          }
        }
LAB_00468854:
        if (pbVar8 + -1 == pbVar15) goto LAB_004688bc;
        bVar16 = pbVar15[1];
        pbVar15 = pbVar15 + 1;
      } while (bVar16 != 0x3d);
    }
    if (pbVar15 == pbVar8) goto LAB_004688bc;
    pbStack_490 = pbVar15;
    if (pbVar19 == pbVar15) {
LAB_004688f0:
      if (pbVar19 != pbVar15) {
        do {
          pbVar8 = pbStack_490 + -1;
          if ((0x20 < *pbVar8) || ((1L << ((ulong)*pbVar8 & 0x3f) & 0x100000600U) == 0))
          goto LAB_00468928;
          pbStack_490 = pbVar8;
        } while (pbVar19 != pbVar8);
        pbStack_490 = pbVar19;
      }
    }
    else {
      do {
        if (0x20 < *pbVar19 || (1L << ((ulong)*pbVar19 & 0x3f) & 0x100000600U) == 0)
        goto LAB_004688f0;
        pbVar19 = pbVar19 + 1;
      } while (pbVar15 != pbVar19);
      pbVar19 = pbVar15;
    }
LAB_00468928:
    local_4a0 = *(byte **)(local_278 + lVar21 * 0x10 + 8);
    local_4a8 = pbVar15 + 1;
    local_498 = pbVar19;
    if (local_4a8 != local_4a0) {
      do {
        if (0x20 < *local_4a8 || (1L << ((ulong)*local_4a8 & 0x3f) & 0x100000600U) == 0)
        goto LAB_004689e8;
        local_4a8 = local_4a8 + 1;
      } while (local_4a0 != local_4a8);
      lVar20 = (long)pbStack_490 - (long)pbVar19;
      local_4a8 = local_4a0;
      if (lVar20 != 0) goto LAB_00468970;
LAB_004690b4:
      FUN_00422780(&local_5d8,&local_498);
      pcVar17 = "Invalid field name: \'%s\'";
      goto LAB_0046927c;
    }
LAB_004689e8:
    if (local_4a8 != local_4a0) {
      do {
        pbVar15 = local_4a0 + -1;
        if ((0x20 < *pbVar15) || ((1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0))
        goto LAB_00468a1c;
        local_4a0 = pbVar15;
      } while (local_4a8 != pbVar15);
      local_4a0 = local_4a8;
    }
LAB_00468a1c:
    lVar20 = (long)pbStack_490 - (long)pbVar19;
    if (lVar20 == 0) goto LAB_004690b4;
LAB_00468970:
    bVar16 = *pbVar19;
    if ((bVar16 == 0x5f) || ((0x40 < bVar16 && ((bVar16 < 0x5b || ((byte)(bVar16 + 0x9f) < 0x1a)))))
       ) {
      local_5d0 = pbStack_490;
      local_5d8 = pbVar19;
      if (1 < (int)lVar20) {
        lVar14 = 1;
        lVar12 = (ulong)(uint)(((int)pbStack_490 + -1) - (int)pbVar19) << 0x20;
        do {
          bVar16 = pbVar19[lVar14];
          if (bVar16 != 0x5f) {
            uVar13 = (uint)bVar16;
            if (bVar16 < 0x41) {
              if (9 < uVar13 - 0x30) goto LAB_00468adc;
            }
            else if ((0x5a < uVar13) && (0x19 < (uVar13 - 0x61 & 0xff))) {
LAB_00468adc:
              local_5d0 = pbStack_490 + -(lVar12 >> 0x20);
              break;
            }
          }
          lVar14 = lVar14 + 1;
          lVar12 = lVar12 + -0x100000000;
        } while (lVar14 < (int)lVar20);
      }
    }
    else {
      local_5d0 = (byte *)0x0;
      local_5d8 = (byte *)0x0;
    }
    uVar5 = FUN_00429cb0(&local_5d8,&local_498);
    if ((uVar5 & 1) == 0) goto LAB_004690b4;
    if (*(int *)(param_2 + 8) < 1) {
      if (*(int *)(param_2 + 8) != 0) goto LAB_00468b44;
      goto LAB_00469264;
    }
    lVar14 = 0;
    lVar20 = 0;
    do {
      lVar12 = *(long *)param_2;
      local_4b8 = param_2;
      lStack_4b0 = lVar20;
      uVar5 = FUN_0043a700(local_498,(long)pbStack_490 - (long)local_498,
                           *(undefined8 *)(lVar12 + lVar14));
      if ((uVar5 & 1) != 0) {
        if (-1 < *(int *)(*(long *)param_2 + lVar14 + 0x10)) {
          uVar6 = *(undefined8 *)(lVar12 + lVar14);
          pcVar17 = "Found value for field \'%s\' which has already been set";
          goto LAB_00469348;
        }
        if (*(int *)(lVar12 + lVar14 + 8) != 0) {
          if (*local_4a8 != 0x7b) goto joined_r0x00468c40;
          local_4c8 = local_4a8 + 1;
          local_5d8 = (byte *)0x0;
          pbVar15 = local_4c8;
          if ((local_4c8 == local_4a0) || (bVar16 = *local_4c8, bVar16 == 0x7d)) goto LAB_00468f88;
          pbVar19 = local_4a8 + 2;
          goto LAB_00468ec4;
        }
        if (local_4a8 == local_4a0) {
          FUN_00423010(param_3,"Found empty value");
          uVar6 = *(undefined8 *)(lVar12 + lVar14);
          pcVar17 = " in value for field \'%s\'";
          goto LAB_00469348;
        }
        *(undefined4 *)(*(long *)param_2 + lVar14 + 0x10) = *(undefined4 *)(param_2 + 0xd8);
        *(undefined4 *)(*(long *)param_2 + lVar14 + 0x14) = *(undefined4 *)(param_2 + 0xd8);
        uVar13 = *(uint *)(param_2 + 0xd8);
        if (uVar13 == (*(uint *)(param_2 + 0xdc) & 0x3fffffff)) {
          FUN_00426990(puVar3,param_2 + 0xd0,0x10);
          uVar13 = *(uint *)(param_2 + 0xd8);
        }
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0xd0) + (long)(int)uVar13 * 0x10);
        *puVar1 = local_4a8;
        puVar1[1] = local_4a0;
        *(uint *)(param_2 + 0xd8) = uVar13 + 1;
        iVar4 = *(int *)(param_2 + 8);
        goto joined_r0x00469008;
      }
      lVar20 = lVar20 + 1;
      lVar14 = lVar14 + 0x18;
    } while (lVar20 < *(int *)(param_2 + 8));
    if ((int)lVar20 == *(int *)(param_2 + 8)) goto LAB_00469264;
    goto LAB_00468b44;
  }
LAB_004690d4:
  uVar11 = *(uint *)(param_2 + 8);
  if ((((uVar11 == 1) && ((*(byte *)(*(long *)param_2 + 0xc) >> 1 & 1) == 0)) &&
      (0 < (int)local_480)) && (local_480 == uVar13)) {
    local_4b8 = (byte *)((ulong)local_4b8._4_4_ << 0x20);
    local_5d0 = pbVar23;
    if (pbVar22 == pbVar23) {
LAB_004692a4:
      if (pbVar22 != pbVar23) {
        do {
          pbVar15 = pbVar23 + -1;
          local_5d0 = pbVar23;
          if ((0x20 < *pbVar15) || ((1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0))
          goto LAB_004692e4;
          pbVar23 = pbVar15;
        } while (pbVar22 != pbVar15);
        local_5d0 = pbVar22;
      }
    }
    else {
      do {
        if (0x20 < *pbVar22 || (1L << ((ulong)*pbVar22 & 0x3f) & 0x100000600U) == 0)
        goto LAB_004692a4;
        pbVar22 = pbVar22 + 1;
      } while (pbVar23 != pbVar22);
      pbVar22 = pbVar23;
    }
LAB_004692e4:
    local_4a0 = local_488 + (long)(int)uVar13 * 0x10;
    pbStack_490 = (byte *)0x0;
    local_4a8 = local_488;
    local_5d8 = pbVar22;
    local_498 = param_2;
    iVar4 = FUN_004697d0(&local_5d8,&local_498,param_3,&local_4a8,&local_4b8);
    if (-1 < iVar4) goto LAB_0046922c;
LAB_00469398:
    bVar2 = true;
  }
  else {
    local_4b8 = (byte *)((ulong)local_4b8._4_4_ << 0x20);
    iVar4 = -0x7ffbfe00;
    if (0 < (int)local_480) {
      uVar13 = 0;
      iVar7 = 0;
      if ((int)uVar11 < 1) goto LAB_004691c4;
      do {
        lVar21 = (long)(int)uVar13;
        piVar10 = (int *)(*(long *)param_2 + (long)(int)uVar13 * 0x18 + 0x10);
        do {
          if ((*piVar10 < 0) && ((*(byte *)(piVar10 + -1) >> 1 & 1) == 0)) break;
          lVar21 = lVar21 + 1;
          piVar10 = piVar10 + 6;
        } while (lVar21 < (int)uVar11);
        uVar13 = (uint)lVar21;
        if (uVar13 == uVar11) {
LAB_0046924c:
          FUN_00423010(param_3,"Too many positional arguments");
          iVar4 = -0x7ffbfe00;
          goto LAB_00469398;
        }
        while( true ) {
          local_4a0 = local_488 + (long)(int)local_480 * 0x10;
          local_5d8 = *(byte **)(local_488 + (long)iVar7 * 0x10);
          local_5d0 = *(byte **)(local_488 + (long)iVar7 * 0x10 + 8);
          pbStack_490 = (byte *)(ulong)uVar13;
          local_4a8 = local_488;
          local_498 = param_2;
          iVar4 = FUN_004697d0(&local_5d8,&local_498,param_3,&local_4a8,&local_4b8);
          if (iVar4 < 0) goto LAB_00469398;
          iVar7 = (int)local_4b8 + 1;
          local_4b8 = (byte *)CONCAT44(local_4b8._4_4_,iVar7);
          if ((int)local_480 <= iVar7) goto LAB_0046922c;
          uVar11 = *(uint *)(param_2 + 8);
          uVar13 = uVar13 + 1;
          if ((int)uVar13 < (int)uVar11) break;
LAB_004691c4:
          if (uVar13 == uVar11) goto LAB_0046924c;
        }
      } while( true );
    }
LAB_0046922c:
    bVar2 = false;
  }
  puVar3 = PTR_DAT_048607b8;
  local_480 = 0;
  if ((-1 < (int)local_47c) && (local_488 != (byte *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_488,0x10,local_47c & 0x3fffffff);
  }
  lVar21 = local_270;
  uVar13 = local_270._4_4_;
  local_270 = (ulong)local_270._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_278 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar3,local_278,0x10,uVar13 & 0x3fffffff);
  }
  if (bVar2) {
    return iVar4;
  }
LAB_004693f4:
  if (0 < *(int *)(param_2 + 8)) {
    lVar21 = 0;
    piVar10 = (int *)(*(long *)param_2 + 0x10);
    do {
      if ((((*(byte *)(piVar10 + -1) & 1) == 0) && (piVar10[-2] != -1)) && (*piVar10 < 0)) {
        FUN_00423010(param_3,"Missing value for field \'%s\'",*(undefined8 *)(piVar10 + -4));
        return -0x7ffbfe00;
      }
      lVar21 = lVar21 + 1;
      piVar10 = piVar10 + 6;
    } while (lVar21 < *(int *)(param_2 + 8));
  }
  return 0;
LAB_004688bc:
  if (pbVar19 == pbVar8) {
LAB_00468a2c:
    if (pbVar19 != pbVar8) {
      do {
        pbVar15 = pbVar8 + -1;
        if ((0x20 < *pbVar15) || ((1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0))
        goto LAB_00468a60;
        pbVar8 = pbVar15;
      } while (pbVar19 != pbVar15);
      pbVar8 = pbVar19;
    }
  }
  else {
    do {
      if (0x20 < *pbVar19 || (1L << ((ulong)*pbVar19 & 0x3f) & 0x100000600U) == 0)
      goto LAB_00468a2c;
      pbVar19 = pbVar19 + 1;
    } while (pbVar8 != pbVar19);
    pbVar19 = pbVar8;
  }
LAB_00468a60:
  if (local_480 == (local_47c & 0x3fffffff)) {
    FUN_00426990(puVar3,&local_488,0x10);
  }
  lVar20 = (long)(int)local_480;
  local_480 = local_480 + 1;
  *(byte **)(local_488 + lVar20 * 0x10) = pbVar19;
  *(byte **)(local_488 + lVar20 * 0x10 + 8) = pbVar8;
  lVar21 = lVar21 + 1;
  uVar13 = (uint)local_270;
  if ((int)(uint)local_270 <= lVar21) goto LAB_004690d4;
  goto LAB_00468700;
  while( true ) {
    bVar16 = *pbVar15;
    pbVar19 = pbVar15 + 1;
    if (bVar16 == 0x7d) break;
LAB_00468ec4:
    pbVar15 = pbVar19;
    if (bVar16 < 0x3e) {
      if (bVar16 == 0x22) {
LAB_00468ea0:
        uVar5 = 4;
LAB_00468ea4:
        pcVar17 = (char *)((ulong)&local_5d8 | uVar5);
        cVar18 = *pcVar17 + '\x01';
        goto LAB_00468f64;
      }
      if (bVar16 == 0x29) {
        pcVar17 = (char *)((ulong)&local_5d8 | 1);
        cVar18 = *pcVar17;
        goto joined_r0x00468f2c;
      }
code_r0x00468e5c:
      if (0x3b < bVar16) {
        if (bVar16 == 0x3c) {
          uVar5 = 5;
        }
        else if (bVar16 == 0x5b) {
          uVar5 = 3;
        }
        else {
          if (bVar16 != 0x7b) goto LAB_00468f68;
          uVar5 = 2;
        }
        goto LAB_00468ea4;
      }
      if (bVar16 == 0x22) goto LAB_00468ea0;
      if (bVar16 == 0x28) {
        uVar5 = 1;
        goto LAB_00468ea4;
      }
    }
    else {
      if (bVar16 == 0x3e) {
        pcVar17 = (char *)((ulong)&local_5d8 | 5);
        cVar18 = *pcVar17;
      }
      else if (bVar16 == 0x5d) {
        pcVar17 = (char *)((ulong)&local_5d8 | 3);
        cVar18 = *pcVar17;
      }
      else {
        if (bVar16 != 0x7d) goto code_r0x00468e5c;
        pcVar17 = (char *)((ulong)&local_5d8 | 2);
        cVar18 = *pcVar17;
      }
joined_r0x00468f2c:
      if (cVar18 != '\0') {
        cVar18 = cVar18 + -1;
LAB_00468f64:
        *pcVar17 = cVar18;
      }
    }
LAB_00468f68:
    if (local_4a0 == pbVar15) goto LAB_00469290;
  }
LAB_00468f88:
  if (pbVar15 == local_4a0) {
LAB_00469290:
    local_4c8 = (byte *)0x0;
    pbStack_4c0 = (byte *)0x0;
LAB_00469294:
    uVar6 = *(undefined8 *)(lVar12 + lVar14);
    pcVar17 = "Can\'t find matching braces in value for field \'%s\'";
  }
  else {
    if (pbVar15 == local_4a0 + -1) {
      pbStack_4c0 = local_4c8 +
                    ((long)(((ulong)(uint)((int)local_4a0 - (int)local_4a8) << 0x20) + -0x200000000)
                    >> 0x20);
      uVar5 = FUN_00429cb0(&local_4a8,&local_4c8);
      pbVar15 = pbStack_4c0;
    }
    else {
joined_r0x00468c40:
      local_4c8 = local_4a8;
      pbStack_4c0 = local_4a0;
      if (local_4a8 == (byte *)0x0) goto LAB_00469294;
      uVar5 = FUN_00429cb0(&local_4a8,&local_4c8);
      pbVar15 = pbStack_4c0;
    }
    pbStack_4c0 = pbVar15;
    if ((uVar5 & 1) == 0) {
      local_5d0._0_4_ = 0;
      local_5d0._4_4_ = 0x80000010;
      local_5d8 = local_5c8;
      if (local_4c8 != pbVar15) {
        pbVar19 = local_4c8;
        do {
          local_5e8 = (byte *)0x0;
          pbVar8 = pbVar15;
          if (pbVar19 != pbVar15) {
            bVar16 = *pbVar19;
            pbVar8 = pbVar19;
            if (bVar16 != 0x2c) {
              pbVar9 = pbVar19;
              do {
                pbVar9 = pbVar9 + 1;
                if (bVar16 < 0x3e) {
                  if (bVar16 == 0x22) {
LAB_00468d18:
                    uVar5 = 4;
LAB_00468d1c:
                    pcVar17 = (char *)((ulong)&local_5e8 | uVar5);
                    cVar18 = *pcVar17 + '\x01';
                    goto LAB_00468ddc;
                  }
                  if (bVar16 == 0x29) {
                    pcVar17 = (char *)((ulong)&local_5e8 | 1);
                    cVar18 = *pcVar17;
                    goto joined_r0x00468da4;
                  }
code_r0x00468cd4:
                  if (0x3b < bVar16) {
                    if (bVar16 == 0x3c) {
                      uVar5 = 5;
                    }
                    else if (bVar16 == 0x5b) {
                      uVar5 = 3;
                    }
                    else {
                      if (bVar16 != 0x7b) goto LAB_00468de0;
                      uVar5 = 2;
                    }
                    goto LAB_00468d1c;
                  }
                  if (bVar16 == 0x22) goto LAB_00468d18;
                  if (bVar16 == 0x28) {
                    uVar5 = 1;
                    goto LAB_00468d1c;
                  }
                }
                else {
                  if (bVar16 == 0x3e) {
                    pcVar17 = (char *)((ulong)&local_5e8 | 5);
                    cVar18 = *pcVar17;
                  }
                  else if (bVar16 == 0x5d) {
                    pcVar17 = (char *)((ulong)&local_5e8 | 3);
                    cVar18 = *pcVar17;
                  }
                  else {
                    if (bVar16 != 0x7d) goto code_r0x00468cd4;
                    pcVar17 = (char *)((ulong)&local_5e8 | 2);
                    cVar18 = *pcVar17;
                  }
joined_r0x00468da4:
                  if (cVar18 != '\0') {
                    cVar18 = cVar18 + -1;
LAB_00468ddc:
                    *pcVar17 = cVar18;
                  }
                }
LAB_00468de0:
                pbVar8 = pbVar15;
                if (pbVar15 == pbVar9) break;
                bVar16 = *pbVar9;
                pbVar8 = pbVar9;
              } while (bVar16 != 0x2c);
            }
          }
          if ((uint)local_5d0 == (local_5d0._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar3,&local_5d8,0x10);
          }
          *(byte **)(local_5d8 + (long)(int)(uint)local_5d0 * 0x10) = pbVar19;
          *(byte **)(local_5d8 + (long)(int)(uint)local_5d0 * 0x10 + 8) = pbVar8;
          if (pbVar8 != pbVar15) {
            pbVar8 = pbVar8 + 1;
          }
          local_5d0._0_4_ = (uint)local_5d0 + 1;
          pbVar19 = pbVar8;
        } while (pbVar8 != pbVar15);
      }
      pbStack_5e0 = local_5d8 + (long)(int)(uint)local_5d0 * 0x10;
      local_5e8 = local_5d8;
      iVar4 = FUN_00469480(&local_4b8,&local_5e8,param_3);
      uVar13 = local_5d0._4_4_;
      if (iVar4 < 0) {
        FUN_00423010(param_3," in value for field \'%s\'",*(undefined8 *)(lVar12 + lVar14));
        FUN_00423880(param_3," (value: \'",0xffffffff);
        FUN_00423880(param_3,local_4a8,(int)local_4a0 - (int)local_4a8);
        FUN_00423880(param_3,&DAT_0407f992,0xffffffff);
        uVar13 = local_5d0._4_4_;
        bVar2 = true;
        local_5d0 = (byte *)((ulong)local_5d0._4_4_ << 0x20);
        if (-1 < (int)uVar13) goto LAB_00468fe4;
LAB_00469078:
        if (bVar2) goto LAB_00469390;
      }
      else {
        bVar2 = false;
        local_5d0 = (byte *)((ulong)local_5d0._4_4_ << 0x20);
        if ((int)uVar13 < 0) goto LAB_00469078;
LAB_00468fe4:
        if (local_5d8 == (byte *)0x0) goto LAB_00469078;
        FUN_00421f90(puVar3,local_5d8,0x10,uVar13 & 0x3fffffff);
        if (bVar2) goto LAB_00469390;
      }
      iVar4 = *(int *)(param_2 + 8);
joined_r0x00469008:
      if ((int)lVar20 != iVar4) {
LAB_00468b44:
        lVar21 = lVar21 + 1;
        uVar13 = (uint)local_270;
        if ((int)(uint)local_270 <= lVar21) goto LAB_004690d4;
        goto LAB_00468700;
      }
LAB_00469264:
      FUN_00422780(&local_5d8,&local_498);
      pcVar17 = "Field \'%s\' not found";
LAB_0046927c:
      FUN_00423010(param_3,pcVar17,local_5d8);
      FUN_00422550(&local_5d8);
      goto LAB_00469390;
    }
    uVar6 = *(undefined8 *)(lVar12 + lVar14);
    pcVar17 = "Value for field \'%s\' needs braces";
  }
LAB_00469348:
  FUN_00423010(param_3,pcVar17,uVar6);
  FUN_00423880(param_3," (value: \'",0xffffffff);
  FUN_00423880(param_3,local_4a8,(int)local_4a0 - (int)local_4a8);
  FUN_00423880(param_3,&DAT_0407f992,0xffffffff);
LAB_00469390:
  iVar4 = -0x7ffbfe00;
  goto LAB_00469398;
}

