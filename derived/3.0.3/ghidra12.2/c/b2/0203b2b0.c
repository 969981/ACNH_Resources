
/* WARNING: Removing unreachable block (ram,0x0203bb78) */
/* WARNING: Removing unreachable block (ram,0x0203ba58) */
/* WARNING: Removing unreachable block (ram,0x0203bb88) */
/* WARNING: Removing unreachable block (ram,0x0203bbe0) */
/* WARNING: Removing unreachable block (ram,0x0203bbd0) */
/* WARNING: Removing unreachable block (ram,0x0203bc08) */

undefined4 FUN_0203b2b0(long param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  undefined *puVar25;
  ushort uVar26;
  long lVar27;
  ulong uVar28;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_80;
  long lStack_78;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  char *pcStack_58;
  uint local_34;
  
  if (9 < param_2) {
    return 0;
  }
  uVar28 = (ulong)param_2;
  local_34 = param_2;
  lVar13 = FUN_0265c2a0(param_2);
  if (lVar13 != 0) {
    if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)*puVar14)();
      uVar15 = uVar15 & 0xffffffff;
    }
    local_98 = PTR_DAT_04bb2020 + 0x10;
    pcStack_90 = "MoveInCompletion";
    iVar12 = FUN_02749340(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x1267c,&local_98);
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
    if (iVar12 == 0) {
      return 0;
    }
  }
  lVar13 = uVar28 * 0xba0;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,param_2);
  puVar16 = (undefined *)0x0;
  if ((&DAT_053fee41)[lVar13] != '\0') {
    puVar16 = &DAT_053fe348 + lVar13;
  }
  pbVar2 = *(byte **)PTR_DAT_04bb4760 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    pbVar2 = *(byte **)PTR_DAT_04bb4760;
  }
  if (((&DAT_053fee41)[lVar13] != '\0') && ((&DAT_053fede8)[uVar28 * 0x174] != 0)) {
    iVar12 = *(int *)((&DAT_053fede8)[uVar28 * 0x174] + 4);
    if (iVar12 == 0xb || iVar12 == 0xd) {
      local_98 = PTR_DAT_04bb2020 + 0x10;
      pcStack_90 = "Countdown";
      iVar12 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_98);
      if (iVar12 == 2) {
        uVar24 = 8;
      }
      else {
        if (iVar12 == 1) {
          uVar28 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          uVar24 = (uint)(uVar28 >> 0x20);
          uVar23 = uVar24 & 0xff;
          if (((char)(uVar28 >> 0x20) < '\x02') || (uVar23 == 0x17)) {
            uVar17 = uVar24 >> 8 & 0xff;
            if (uVar23 == 0x17) {
              if ((char)(uVar28 >> 0x28) < '\x1e') {
                uVar24 = 1;
              }
              else if (uVar17 < 0x32) {
                uVar24 = 2;
              }
              else if (uVar17 < 0x37) {
                uVar24 = 3;
              }
              else {
                uVar24 = 4;
                if (0x3a < uVar17) {
                  uVar24 = 5;
                }
              }
            }
            else {
              bVar9 = false;
              bVar10 = false;
              if ((uVar28 & 0xff00000000) == 0 && (uVar28 >> 0x28 & 0xff) == 0) {
                iVar12 = (int)(char)(uVar28 >> 0x30);
                bVar10 = SBORROW4(iVar12,10);
                bVar9 = iVar12 + -10 < 0;
              }
              uVar24 = 6;
              if (bVar9 == bVar10) {
                uVar24 = 7;
              }
            }
            goto LAB_0203b520;
          }
        }
        uVar24 = 0;
      }
LAB_0203b520:
      local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar24);
      if (1 < uVar24) {
        uVar22 = *(ushort *)PTR_DAT_04bb6298;
        if (uVar22 == 0xffff) {
LAB_0203b5d0:
          uVar22 = 0xffff;
        }
        else {
          local_98 = (undefined *)CONCAT44(local_98._4_4_,3);
          puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar22 * 8);
          if (0xff < uVar22) {
            puVar3 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar3 >> 3 & 1) != 0) {
            if (DAT_055c1b60 != &DAT_055c1b58) {
              uVar22 = 0;
              puVar14 = DAT_055c1b60;
              do {
                if (*(int *)(puVar14 + -1) == 0x6622bd46) goto LAB_0203b5d4;
                puVar14 = (undefined8 *)puVar14[1];
                uVar22 = uVar22 + 1;
              } while (puVar14 != &DAT_055c1b58);
            }
            goto LAB_0203b5d0;
          }
        }
LAB_0203b5d4:
        uVar26 = (ushort)pbVar2[4] | (pbVar2[5] & 3) << 8;
        if (0x1ff < uVar26) {
          uVar26 = uVar26 | 0xfc00;
        }
        if (uVar26 == uVar22) {
          return 2;
        }
      }
    }
    else {
      if (iVar12 == 0x10) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        pcStack_90 = "CanSetPlayerBirthdayCallNpc";
        iVar12 = FUN_02743000(&local_98);
        if (iVar12 != 0) {
          return 1;
        }
      }
      puVar8 = PTR_DAT_04bb2020;
      puVar21 = PTR_DAT_04bb2020 + 0x10;
      pcStack_90 = "FireworksAroundWater";
      local_98 = puVar21;
      sVar11 = FUN_02196ed0(&local_34,&local_98);
      if (sVar11 == 0) {
        pcStack_90 = "Fireworks";
        local_98 = puVar21;
        iVar12 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_98);
        puVar21 = PTR_DAT_04bb32e8;
        uVar15 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        uVar24 = (uint)(uVar15 >> 0x20);
        uVar23 = uVar24 >> 8 & 0xff;
        cVar4 = (char)(uVar15 >> 0x28);
        if (iVar12 == 2) {
          uVar17 = 6;
        }
        else {
          uVar24 = uVar24 & 0xff;
          if (iVar12 == 1) {
LAB_0203b66c:
            uVar17 = 4;
            if (('\x1d' < (char)(uVar15 >> 0x30) || '\0' < cVar4) || uVar24 != 0x13) {
              uVar17 = 5;
            }
          }
          else {
            if ((iVar12 == 0) && ('\x11' < (char)(uVar15 >> 0x20))) {
              if (uVar24 != 0x12) goto LAB_0203b66c;
              if ('\x1d' < cVar4) {
                if (uVar23 < 0x32) {
                  uVar17 = 1;
                }
                else {
                  uVar17 = 2;
                  if (0x3a < uVar23) {
                    uVar17 = 3;
                  }
                }
                goto LAB_0203b688;
              }
            }
            uVar17 = 0;
          }
        }
LAB_0203b688:
        local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar17);
        if ((uVar17 != 0) &&
           (((uVar17 < 6 || (((uVar15 & 0xff00000000) == 0 && (cVar4 < '\x1e')))) &&
            (lVar19 = (&DAT_053fec70)[uVar28 * 0x174], lVar19 != lVar13 + 0x53fec68)))) {
          lVar27 = lVar19 + -0x10;
          do {
            if (*(int *)(lVar27 + 4) == 0x1c) {
              if (5 < uVar17) {
                local_98 = puVar8 + 0x10;
                pcStack_90 = "GotoEventPlazaForCountdown";
                sVar11 = FUN_02196ed0(&local_34,&local_98);
                if (sVar11 == 0) break;
              }
              uVar28 = FUN_020e9b90(pbVar2,*(undefined2 *)PTR_DAT_04bb6298);
              if ((uVar28 & 1) != 0) {
                return 7;
              }
              break;
            }
            lVar19 = *(long *)(lVar19 + 8);
            lVar27 = lVar19 + -0x10;
          } while (lVar27 != lVar13 + 0x53fec58);
        }
        uVar28 = FUN_0203c6f4();
        if (((uVar28 & 1) != 0) &&
           (puVar20 = *(undefined **)(puVar16 + 0x928), puVar20 != puVar16 + 0x920)) {
          puVar25 = puVar20 + -0x10;
          do {
            if (*(int *)(puVar25 + 4) == 0x1e) {
              if (*(char *)(*(long *)puVar21 + 0x4064) == '\0') {
LAB_0203b7b8:
                local_98 = puVar8 + 0x10;
                pcStack_90 = "GotoEventPlazaForCountdown";
                sVar11 = FUN_02196ed0(&local_34,&local_98);
                if (sVar11 == 0) break;
              }
              else {
                local_60 = puVar8 + 0x10;
                pcStack_58 = "SeasonEventPlace";
                sVar11 = FUN_02196ed0(&local_34,&local_60);
                if (sVar11 == 1) goto LAB_0203b7b8;
              }
              uVar28 = FUN_020e9b90(pbVar2,*(undefined2 *)PTR_DAT_04bb6298);
              if ((uVar28 & 1) != 0) {
                return 8;
              }
              break;
            }
            puVar20 = *(undefined **)(puVar20 + 8);
            puVar25 = puVar20 + -0x10;
          } while (puVar25 != puVar16 + 0x910);
        }
        uVar28 = FUN_021e7290();
        if (((uVar28 & 1) != 0) &&
           (puVar21 = *(undefined **)(puVar16 + 0x928), puVar21 != puVar16 + 0x920)) {
          puVar20 = puVar21 + -0x10;
          do {
            if (*(int *)(puVar20 + 4) == 0x1f) {
              uVar28 = FUN_021b8f60(&DAT_053fe348,&local_34,0);
              if ((uVar28 & 1) == 0) {
                local_98 = puVar8 + 0x10;
                pcStack_90 = "CarnivalWanderEventPlaza";
                sVar11 = FUN_02196ed0(&local_34,&local_98);
                if (sVar11 == 0) break;
                uVar18 = 10;
              }
              else {
                pcStack_90 = "GotoEventPlazaForCountdown";
                local_98 = puVar8 + 0x10;
                sVar11 = FUN_02196ed0(&local_34,&local_98);
                if (sVar11 == 0) break;
                pcStack_90 = "CarnivalEventPlazaNpcWander";
                local_98 = puVar8 + 0x10;
                iVar12 = FUN_0273ea30(&local_98);
                uVar18 = 9;
                if (iVar12 == 1) {
                  uVar18 = 10;
                }
              }
              uVar28 = FUN_020e9b90(pbVar2,*(undefined2 *)PTR_DAT_04bb6298);
              if ((uVar28 & 1) != 0) {
                return uVar18;
              }
              break;
            }
            puVar21 = *(undefined **)(puVar21 + 8);
            puVar20 = puVar21 + -0x10;
          } while (puVar20 != puVar16 + 0x910);
        }
      }
    }
  }
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 != 0) {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar13 != 0) {
        lVar13 = lVar13 + 0x70;
        goto LAB_0203b940;
      }
    }
    else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
            (lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar13 != 0)) {
LAB_0203b940:
      if (*(long **)(lVar13 + 0xe6dc0) == (long *)0x0) {
        uVar28 = 0;
      }
      else {
        puVar14 = (undefined8 *)**(long **)(lVar13 + 0xe6dc0);
        uVar28 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar28 = (**(code **)*puVar14)();
        }
      }
      lVar19 = *(long *)(lVar13 + 0xe6da8) + *(long *)(lVar13 + 0xe6da0);
      cVar4 = *(char *)(lVar19 + 0x2f);
      cVar7 = *(char *)(lVar19 + 0x2c);
      if ((((uVar28 & 1) != 0) && (*(long *)(lVar13 + 0xe6dc0) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0xe6dc0) + 8), puVar14 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar14)();
      }
      if (cVar4 == '\x02' && (int)cVar7 == param_2) {
        return 3;
      }
    }
  }
  puVar16 = PTR_DAT_04bb27a8;
  uVar22 = *(ushort *)(param_1 + 0x2b4);
  if (uVar22 != 0xffff) {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,3);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar22 * 8);
    if (0xff < uVar22) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar26 = uVar22;
    if ((*puVar3 >> 3 & 1) == 0) goto LAB_0203ba5c;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar26 = 0;
      puVar14 = DAT_055c1b60;
      do {
        if (*(int *)(puVar14 + -1) == 0x6622bd46) goto LAB_0203ba5c;
        puVar14 = (undefined8 *)puVar14[1];
        uVar26 = uVar26 + 1;
      } while (puVar14 != &DAT_055c1b58);
    }
  }
  uVar26 = 0xffff;
LAB_0203ba5c:
  uVar1 = (ushort)pbVar2[4] | (pbVar2[5] & 3) << 8;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfc00;
  }
  if (uVar1 != uVar26) {
    lVar13 = *(long *)PTR_DAT_04bbaed0 + (long)(int)param_2 * 6;
    uVar26 = *(ushort *)(lVar13 + 4) & 0x3ff;
    if (0x1ff < uVar26) {
      uVar26 = uVar26 | 0xfc00;
    }
    uVar18 = 0;
    if (uVar26 == uVar22 && (*(byte *)(lVar13 + 5) & 0xc) != 4) {
      uVar18 = 5;
    }
    return uVar18;
  }
  if ((pbVar2[7] >> 2 & 3) != 1) {
    bVar5 = pbVar2[1];
    uVar24 = (uint)*pbVar2 | (bVar5 & 0xf) << 8;
    uVar23 = uVar24 | 0xfffff000;
    if ((bVar5 & 8) == 0) {
      uVar23 = uVar24;
    }
    bVar6 = pbVar2[2];
    uVar17 = (uint)(bVar5 >> 4) | (uint)bVar6 << 4;
    uVar24 = uVar17 | 0xfffff000;
    if (-1 < (char)bVar6) {
      uVar24 = uVar17;
    }
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_68 = (int)((float)(int)(float)(int)uVar23 / 5.0) - (uint)(7 < (bVar5 & 0xf));
    iStack_64 = (int)((float)(int)(float)(int)uVar24 / 5.0) + ((int)(char)bVar6 >> 7);
    local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
    local_80 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    lStack_78 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    uVar28 = FUN_035aa210(local_68,iStack_64,&local_80);
    if ((uVar28 & 1) != 0) {
      return 4;
    }
    if (*(long *)(*(long *)puVar16 + 0x1f8) != 0) {
      local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
      lVar13 = *(long *)(*(long *)(*(long *)puVar16 + 0x1f8) + 0xd0);
      if (lVar13 == 0) {
        puVar16 = PTR_DAT_04bb37e0;
      }
      else {
        lVar19 = lVar13 + 0x130 + (ulong)*(uint *)(lVar13 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar13 + 0x198)) {
          lVar19 = lVar13 + 0x130;
        }
        puVar16 = (undefined *)FUN_012eb21c(lVar19,&local_70,0);
      }
      uVar28 = FUN_0277d9a8(puVar16);
      if (((uVar28 & 1) != 0) && (uVar28 = FUN_0277e158(puVar16), (uVar28 & 1) == 0)) {
        FUN_01ad5d04(&local_98,puVar16);
        uVar28 = FUN_01ae9e0c(&local_98);
        if ((uVar28 & 1) != 0) {
          return 4;
        }
        uVar28 = FUN_01ae91b0(&local_98);
        if ((uVar28 & 1) != 0) {
          return 4;
        }
      }
    }
  }
  return 6;
}

