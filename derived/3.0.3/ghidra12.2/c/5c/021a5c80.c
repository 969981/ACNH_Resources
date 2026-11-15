
/* WARNING: Removing unreachable block (ram,0x021a5ee0) */

void FUN_021a5c80(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ushort *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  ushort uVar15;
  char cVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  int *piVar21;
  long lVar22;
  ushort uVar23;
  long lVar24;
  undefined8 *puVar25;
  char *pcVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined4 local_74;
  undefined8 local_70;
  uint local_64;
  
  puVar6 = PTR_DAT_04bb27d0;
  if ((param_2 & 1) != 0) {
    if (DAT_055c1b60 != &DAT_055c1b58) {
      iVar12 = 0;
      puVar13 = DAT_055c1b60;
      do {
        if (*(int *)(puVar13 + -1) == 0x6622bd46) goto LAB_021a5d04;
        puVar13 = (undefined8 *)puVar13[1];
        iVar12 = iVar12 + 1;
      } while (puVar13 != &DAT_055c1b58);
    }
    iVar12 = 0xffff;
LAB_021a5d04:
    uVar8 = FUN_01d69340(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),iVar12,1);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  puVar7 = PTR_DAT_04bc39f8;
  lVar18 = **(long **)puVar6;
  if (1 < *(byte *)(lVar18 + 0x476)) {
    bVar5 = *(byte *)(lVar18 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      uVar8 = (long)(char)bVar5 & 0xffffffff;
      pbVar3 = (byte *)(lVar18 + 0x48) + uVar8 * 0x80;
      if (7 < bVar5) {
        pbVar3 = (byte *)(lVar18 + 0x48);
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar18 = (*(long **)puVar6)[2] + 0x108;
        lVar14 = lVar18 + uVar8 * 0xc;
        if (0xb < bVar5) {
          lVar14 = lVar18;
        }
        if (*(char *)(lVar14 + 10) == '\0') {
          return;
        }
      }
    }
  }
  uVar8 = 0;
  uVar28 = 0;
  lVar18 = *(long *)PTR_DAT_04bb4760;
  uVar15 = *(ushort *)PTR_DAT_04bbdeb0;
  plVar10 = (long *)PTR_DAT_04bb3968;
  puVar11 = (ushort *)PTR_DAT_04bb6298;
  pcVar26 = PTR_DAT_04bc25e8;
  puVar13 = (undefined8 *)PTR_DAT_04bc25f0;
LAB_021a5e40:
  uVar29 = (uint)uVar8;
  local_70 = CONCAT44(local_70._4_4_,uVar29);
  lVar14 = lVar18 + (uVar8 & 0xffffffff) * 0x15;
  if (0x6c < uVar29) {
    lVar14 = lVar18;
  }
  if (uVar15 == 0xffff) {
LAB_021a5efc:
    uVar23 = *puVar11;
    if (uVar23 != 0xffff) {
      local_70 = CONCAT44(local_70._4_4_,7);
      puVar27 = (uint *)(puVar7 + (ulong)(uint)(int)(short)uVar23 * 8);
      if (0xff < uVar23) {
        puVar27 = (uint *)puVar7;
      }
      if ((*puVar27 >> 7 & 1) != 0) {
        local_70 = CONCAT44(local_70._4_4_,3);
        if ((*puVar27 >> 3 & 1) != 0) {
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar23 = 0;
            puVar25 = DAT_055c1b60;
            do {
              if (*(int *)(puVar25 + -1) == 0x6622bd46) goto LAB_021a5fa4;
              puVar25 = (undefined8 *)puVar25[1];
              uVar23 = uVar23 + 1;
            } while (puVar25 != &DAT_055c1b58);
          }
          uVar23 = 0xffff;
        }
LAB_021a5fa4:
        uVar1 = (ushort)*(byte *)(lVar14 + 4) | (*(byte *)(lVar14 + 5) & 3) << 8;
        if (0x1ff < uVar1) {
          uVar1 = uVar1 | 0xfc00;
        }
        if (uVar1 == uVar23) goto LAB_021a5e34;
      }
    }
    lVar24 = param_1 + uVar8 * 0xba0;
    lVar22 = *plVar10;
    lVar19 = *(long *)(lVar24 + 0xaa0);
    if ((lVar22 == 0 || lVar19 == 0) || *(char *)(lVar24 + 0xaf9) == '\0') goto LAB_021a5e34;
    uVar4 = *(uint *)(lVar19 + 4);
    local_70 = CONCAT44(local_70._4_4_,uVar4);
    if ((int)*(uint *)(lVar22 + 0x168f0) < 1) {
      if (*(long *)(lVar22 + 0x167e0) != 0) {
        puVar27 = *(uint **)(*(long *)(lVar22 + 0x167e0) + 8);
        if (puVar27 != (uint *)0x0) {
          if (uVar4 < *(uint *)(lVar22 + 0x167f8)) {
            if (*(char *)(*(long *)(lVar22 + 0x16800) + (long)(int)uVar4) == '\0')
            goto LAB_021a5e34;
          }
          if (uVar4 < *puVar27) {
            if (puVar27[1] != 0) {
              if ((ushort)puVar27[2] != 0) {
                iVar12 = 0xc;
                if (*(char *)((long)puVar27 + 10) != '\0') {
                  iVar12 = 0x1c;
                }
                puVar27 = (uint *)((ulong)(puVar27[1] * uVar4 + (uint)(ushort)puVar27[2] * 8 +
                                          iVar12) + (long)puVar27);
                if (puVar27 != (uint *)0x0) goto LAB_021a601c;
              }
            }
          }
        }
      }
      goto LAB_021a5e34;
    }
    if (*(uint *)(lVar22 + 0x168f0) <= uVar4) goto LAB_021a5e34;
    uVar2 = uVar4;
    if (*(uint *)(lVar22 + 0x168e0) <= uVar4) {
      uVar2 = 0;
    }
    puVar27 = *(uint **)(*(long *)(lVar22 + 0x168e8) + (ulong)uVar2 * 8);
    if (puVar27 == (uint *)0x0) goto LAB_021a5e34;
LAB_021a601c:
    if (uVar4 == 5) goto LAB_021a5e34;
    if (uVar4 == 6) goto LAB_021a5e34;
    if (uVar4 == 0xe) goto LAB_021a5e34;
    if ((param_2 & 1) != 0) {
      uVar4 = (uint)*(byte *)(lVar14 + 4) | (*(byte *)(lVar14 + 5) & 3) << 8;
      if (0x1ff < uVar4) {
        uVar4 = uVar4 | 0xfffffc00;
      }
      uVar9 = FUN_01d69340(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),uVar4,1);
      lVar18 = *(long *)PTR_DAT_04bb4760;
      uVar15 = *(ushort *)PTR_DAT_04bbdeb0;
      plVar10 = (long *)PTR_DAT_04bb3968;
      puVar11 = (ushort *)PTR_DAT_04bb6298;
      pcVar26 = PTR_DAT_04bc25e8;
      puVar13 = (undefined8 *)PTR_DAT_04bc25f0;
      if ((uVar9 & 1) != 0) goto LAB_021a5e34;
    }
    if (*puVar27 != 0) {
      cVar16 = *pcVar26;
      do {
        if (cVar16 != '\0') {
          uVar9 = (ulong)*(uint *)(puVar13 + 1);
          if ((int)*(uint *)(puVar13 + 1) < 0) {
            if (uVar9 == 0xffffffff) goto LAB_021a610c;
          }
          else if (((char *)(uVar9 + (long)puVar27) != (char *)0x0) &&
                  (*(char *)(uVar9 + (long)puVar27) == '\x04')) {
            uVar17 = 0;
            goto LAB_021a62c0;
          }
LAB_021a61e8:
          if (*puVar27 != 0) goto LAB_021a61f0;
          break;
        }
        cVar16 = '\x01';
        *pcVar26 = '\x01';
        *puVar13 = 0xffffffffffffffff;
        puVar13[1] = 0xffffffffffffffff;
LAB_021a610c:
        lVar14 = (long)puVar27 - (ulong)*puVar27;
        if (*puVar27 == 0) {
LAB_021a627c:
          uVar9 = 0xffffffff;
          goto LAB_021a61e8;
        }
        uVar9 = 0xffffffff;
        if (lVar14 == 0) goto LAB_021a61e8;
        lVar19 = 0xc;
        if (*(char *)(lVar14 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        if (lVar19 + lVar14 == 0) goto LAB_021a627c;
        uVar9 = (ulong)*(ushort *)(lVar14 + 8);
        *(undefined4 *)(puVar13 + 1) = 0xfffffffe;
        if (uVar9 == 0) {
LAB_021a61e4:
          uVar9 = 0xfffffffe;
          goto LAB_021a61e8;
        }
        piVar21 = (int *)(lVar19 + lVar14 + 4);
        while (piVar21[-1] != 0x378b2f14) {
          piVar21 = piVar21 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_021a61e4;
        }
        iVar12 = 0;
        if (*piVar21 != -1) {
          iVar12 = *piVar21;
        }
        *(int *)(puVar13 + 1) = iVar12;
      } while (*puVar27 != 0);
    }
LAB_021a62bc:
    uVar17 = 2;
    goto LAB_021a62c0;
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  puVar27 = (uint *)(puVar7 + ((long)(short)uVar15 & 0xffffffffU) * 8);
  if ((uVar15 & 0xff00) != 0) {
    puVar27 = (uint *)puVar7;
  }
  uVar23 = uVar15;
  if ((*puVar27 >> 3 & 1) != 0) {
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar23 = 0;
      puVar25 = DAT_055c1b60;
      do {
        if (*(int *)(puVar25 + -1) == 0x6622bd46) goto LAB_021a5ee4;
        puVar25 = (undefined8 *)puVar25[1];
        uVar23 = uVar23 + 1;
      } while (puVar25 != &DAT_055c1b58);
    }
    uVar23 = 0xffff;
  }
LAB_021a5ee4:
  uVar1 = (ushort)*(byte *)(lVar14 + 4) | (*(byte *)(lVar14 + 5) & 3) << 8;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfc00;
  }
  if (uVar1 != uVar23) goto LAB_021a5efc;
  goto LAB_021a5e34;
  while( true ) {
    lVar14 = 0xc;
    if (*(char *)((long)puVar27 + (10 - (long)puVar20)) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar27 + (lVar14 - (long)puVar20);
    if (lVar14 == 0) goto LAB_021a62bc;
    uVar9 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar20));
    *(undefined4 *)(puVar13 + 1) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_021a62bc;
    puVar20 = (uint *)(lVar14 + 4);
    while (puVar20[-1] != 0x378b2f14) {
      puVar20 = puVar20 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_021a62bc;
    }
    uVar9 = 0;
    if (*puVar20 != 0xffffffff) {
      uVar9 = (ulong)*puVar20;
    }
    uVar17 = 2;
    *(int *)(puVar13 + 1) = (int)uVar9;
    if (*puVar27 == 0) break;
LAB_021a61f0:
    if (-1 < (int)uVar9) {
      if ((char *)(uVar9 + (long)puVar27) == (char *)0x0) goto LAB_021a62bc;
      if (0xfb < (byte)(*(char *)(uVar9 + (long)puVar27) - 5U)) goto LAB_021a5e34;
      goto LAB_021a62bc;
    }
    if (uVar9 != 0xffffffff) goto LAB_021a62bc;
    puVar20 = (uint *)(ulong)*puVar27;
    uVar17 = 2;
    if ((*puVar27 == 0) || (puVar27 == puVar20)) break;
  }
LAB_021a62c0:
  uVar28 = 1 << (ulong)(uVar29 & 0x1f) | uVar28;
  *(undefined4 *)(param_1 + uVar8 * 0xba0 + 0x6e0) = uVar17;
LAB_021a5e34:
  uVar8 = uVar8 + 1;
  if (uVar8 == 10) goto LAB_021a62d4;
  goto LAB_021a5e40;
LAB_021a62d4:
  lVar14 = *plVar10;
  lVar18 = 0;
  do {
    uVar29 = 1 << (ulong)((uint)lVar18 & 0x1f);
    local_70 = CONCAT44(local_70._4_4_,(uint)lVar18);
    if ((uVar29 & uVar28) != 0) {
      lVar19 = *(long *)(param_1 + lVar18 * 0xba0 + 0xaa0);
      if (lVar19 != 0) {
        local_64 = *(uint *)(lVar19 + 4);
        if ((int)*(uint *)(lVar14 + 0x168f0) < 1) {
          if ((((*(long *)(lVar14 + 0x167e0) != 0) &&
               (puVar27 = *(uint **)(*(long *)(lVar14 + 0x167e0) + 8), puVar27 != (uint *)0x0)) &&
              ((*(uint *)(lVar14 + 0x167f8) <= local_64 ||
               (*(char *)(*(long *)(lVar14 + 0x16800) + (long)(int)local_64) != '\0')))) &&
             (((local_64 < *puVar27 && (puVar27[1] != 0)) && ((ushort)puVar27[2] != 0)))) {
            iVar12 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              iVar12 = 0x1c;
            }
            puVar27 = (uint *)((ulong)(puVar27[1] * local_64 + (uint)(ushort)puVar27[2] * 8 + iVar12
                                      ) + (long)puVar27);
            goto joined_r0x021a646c;
          }
        }
        else if (local_64 < *(uint *)(lVar14 + 0x168f0)) {
          uVar4 = local_64;
          if (*(uint *)(lVar14 + 0x168e0) <= local_64) {
            uVar4 = 0;
          }
          puVar27 = *(uint **)(*(long *)(lVar14 + 0x168e8) + (ulong)uVar4 * 8);
joined_r0x021a646c:
          if (puVar27 != (uint *)0x0) {
            if (*puVar27 == 0) {
LAB_021a648c:
              local_64 = 0;
            }
            else {
              cVar16 = *pcVar26;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *pcVar26 = '\x01';
                  *puVar13 = 0xffffffffffffffff;
                  puVar13[1] = 0xffffffffffffffff;
                }
                else {
                  uVar4 = *(uint *)(puVar13 + 1);
                  if (-1 < (int)uVar4) {
                    if (((byte *)((ulong)uVar4 + (long)puVar27) == (byte *)0x0) ||
                       (bVar5 = *(byte *)((ulong)uVar4 + (long)puVar27), local_64 = (uint)bVar5,
                       4 < bVar5)) goto LAB_021a648c;
                    goto LAB_021a6490;
                  }
                  if (uVar4 != 0xffffffff) goto LAB_021a648c;
                }
                puVar20 = (uint *)(ulong)*puVar27;
                local_64 = 0;
                if ((*puVar27 == 0) || (puVar27 == puVar20)) goto LAB_021a6490;
                lVar19 = 0xc;
                if (*(char *)((long)puVar27 + (10 - (long)puVar20)) != '\0') {
                  lVar19 = 0x1c;
                }
                lVar19 = (long)puVar27 + (lVar19 - (long)puVar20);
                if (lVar19 == 0) goto LAB_021a648c;
                uVar8 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar20));
                *(undefined4 *)(puVar13 + 1) = 0xfffffffe;
                local_64 = 0;
                if (uVar8 == 0) goto LAB_021a6490;
                piVar21 = (int *)(lVar19 + 4);
                while (piVar21[-1] != 0x378b2f14) {
                  piVar21 = piVar21 + 2;
                  uVar8 = uVar8 - 1;
                  if (uVar8 == 0) {
                    local_64 = 0;
                    goto LAB_021a6490;
                  }
                }
                iVar12 = 0;
                if (*piVar21 != -1) {
                  iVar12 = *piVar21;
                }
                *(int *)(puVar13 + 1) = iVar12;
              } while (*puVar27 != 0);
              local_64 = 0;
            }
LAB_021a6490:
            if (local_64 == 4) {
              local_64 = 0;
              FUN_021dafb0(&local_70,&local_64,0,0,1,1);
              uVar28 = uVar28 & (uVar29 ^ 0xffffffff);
              pcVar26 = PTR_DAT_04bc25e8;
            }
          }
        }
      }
    }
    lVar18 = lVar18 + 1;
    if (lVar18 == 10) {
      local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar8 = FUN_00a8117c(&local_70);
      if ((uVar8 & 1) == 0) {
        if ((uVar28 & 1) != 0) {
          local_64 = 0;
          uVar8 = FUN_02153104(0,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xfffffffe;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 1 & 1) != 0) {
          local_64 = 1;
          uVar8 = FUN_02153104(1,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xfffffffd;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 2 & 1) != 0) {
          local_64 = 2;
          uVar8 = FUN_02153104(2,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xfffffffb;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 3 & 1) != 0) {
          local_64 = 3;
          uVar8 = FUN_02153104(3,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xfffffff7;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 4 & 1) != 0) {
          local_64 = 4;
          uVar8 = FUN_02153104(4,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xffffffef;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 5 & 1) != 0) {
          local_64 = 5;
          uVar8 = FUN_02153104(5,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xffffffdf;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 6 & 1) != 0) {
          local_64 = 6;
          uVar8 = FUN_02153104(6,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xffffffbf;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 7 & 1) != 0) {
          local_64 = 7;
          uVar8 = FUN_02153104(7,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xffffff7f;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 8 & 1) != 0) {
          local_64 = 8;
          uVar8 = FUN_02153104(8,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            uVar28 = uVar28 & 0xfffffeff;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
        if ((uVar28 >> 9 & 1) != 0) {
          local_64 = 9;
          uVar8 = FUN_02153104(9,&local_70,1);
          if ((uVar8 & 1) != 0) {
            local_74 = 1;
            FUN_021dafb0(&local_64,&local_74,0,0,1,1);
          }
        }
      }
      return;
    }
  } while( true );
}

