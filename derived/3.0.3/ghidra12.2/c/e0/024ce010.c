
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_024ce010(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  short *psVar11;
  byte bVar12;
  byte bVar13;
  ushort uVar14;
  uint *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint local_a4 [3];
  undefined *local_98;
  short local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  uint *local_88;
  short local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  uint local_74 [3];
  undefined2 local_68;
  undefined1 local_66;
  undefined4 local_65;
  undefined1 local_61;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x298) == 0) {
    psVar11 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    psVar11 = (short *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_90 = *psVar11;
  local_8e = (undefined1)psVar11[1];
  local_8d = *(undefined1 *)((long)psVar11 + 3);
  local_8c = *(undefined4 *)(psVar11 + 2);
  if (local_90 == -2) {
    return 0;
  }
  local_98 = PTR_DAT_04bc0510 + 0x10;
  local_88 = (uint *)0x0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_7c = local_90;
  local_7a = local_8e;
  local_79 = local_8d;
  local_78 = local_8c;
  uVar4 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 == 0) {
LAB_024ce27c:
    uVar14 = 0xbc;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024ce27c;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_7c);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), puVar9 == (uint *)0x0)
       ) goto LAB_024ce27c;
    uVar4 = *puVar9;
    uVar14 = 0;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar15 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      uVar14 = 0;
      if (*puVar15 != 0) {
        uVar4 = puVar15[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
            }
            if (*puVar15 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar14 < 0xbd)) goto LAB_024ce1dc;
          }
        }
        uVar14 = 0;
      }
    }
LAB_024ce1dc:
    local_88 = puVar9;
    if (uVar14 == 0x2b) goto LAB_024ce2a0;
    uVar4 = *puVar9;
    uVar14 = 0;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar15 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      uVar14 = 0;
      if (*puVar15 != 0) {
        uVar4 = puVar15[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar15 + lVar8 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
            }
            if (*puVar15 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar14 < 0xbd)) goto LAB_024ce290;
          }
        }
        uVar14 = 0;
      }
    }
  }
LAB_024ce290:
  if (uVar14 != 0x2c) {
    return 0;
  }
LAB_024ce2a0:
  local_a4[0] = 0xdd;
  lVar10 = *(long *)(param_1 + 0x70);
  local_74[0] = 0;
  lVar8 = 0;
  if (lVar10 != 0) {
    local_74[0] = 0;
    if (*(uint *)(lVar10 + 0x280) < 0x149) {
      local_74[0] = *(uint *)(lVar10 + 0x280);
    }
    lVar8 = lVar10 + 0x278;
  }
  if (local_74[0] != 0xdd) {
    local_74[0] = 0xdd;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    FUN_03ebb160(lVar8,0xdd);
  }
  puVar2 = PTR_DAT_04bb39b0;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x15c) != 0)) {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar16 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar8 + 0x158);
      }
      bVar13 = *(byte *)(param_1 + 0x1ee8);
      bVar12 = *pbVar16;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (bVar12 != bVar13) {
        return 1;
      }
    }
    FUN_02507c6c(local_a4,1,1,0,0);
    puVar3 = PTR_DAT_04bb5038;
    bVar12 = (byte)local_a4[0];
    if ((byte)local_a4[0] < 8) {
      do {
        bVar13 = *(byte *)(param_1 + 0x1ee8);
        if (bVar13 < 8 && bVar13 == bVar12) {
LAB_024ce580:
          uVar6 = (ulong)(byte)local_a4[0];
        }
        else {
          local_74[2] = *(undefined4 *)(param_1 + 0x230);
          local_61 = 0;
          local_65 = 0;
          local_74[0] = CONCAT31(local_74[0]._1_3_,bVar12);
          local_68 = 1;
          local_66 = 0;
          local_74[1] = 1;
          uVar6 = FUN_02530cec(local_74);
          if ((uVar6 & 1) != 0) {
LAB_024ce49c:
            FUN_0255c4b0(local_a4);
            goto LAB_024ce580;
          }
          lVar8 = *(long *)puVar2;
          if ((lVar8 == 0) || (*(int *)(lVar8 + 0x15c) == 0)) goto LAB_024ce580;
          uVar6 = (ulong)(byte)local_a4[0];
          pbVar16 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar8 + 0x15c) != 0) {
            pbVar16 = (byte *)(lVar8 + 0x158);
          }
          uVar4 = (uint)*pbVar16;
          if (7 < uVar4) {
            uVar4 = 0xff;
          }
          uVar17 = local_a4[0] & 0xff;
          uVar1 = 0xff;
          if ((byte)local_a4[0] < 8) {
            uVar1 = uVar17;
          }
          if (uVar4 != uVar1) {
            lVar8 = *(long *)PTR_DAT_04bb4718;
            if ((lVar8 == 0) || (7 < uVar17)) {
              psVar11 = &DAT_054f0c08;
              if ((DAT_054f0c70 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
                if (iVar5 == 0) {
                  psVar11 = &DAT_054f0c08;
                }
                else {
                  DAT_054f0c68 = 1;
                  DAT_054f0c6c = 0;
                  DAT_054f0c1c._0_4_ = 0;
                  DAT_054f0c1c._4_4_ = 0;
                  DAT_054f0c24._0_4_ = 0;
                  DAT_054f0c24._4_4_ = 0;
                  DAT_054f0c2c._0_4_ = 0;
                  DAT_054f0c2c._4_4_ = 0;
                  _DAT_054f0c44 = 0;
                  DAT_054f0c34._0_4_ = 0;
                  DAT_054f0c34._4_4_ = 0;
                  DAT_054f0c3c._0_4_ = 0;
                  DAT_054f0c3c._4_4_ = 0;
                  _DAT_054f0c08 = 0;
                  _DAT_054f0c10 = 1;
                  DAT_054f0c14._0_4_ = 0;
                  DAT_054f0c14._4_4_ = 0;
                  DAT_054f0c48 = 0;
                  DAT_054f0c50 = 0;
                  DAT_054f0c58 = 0;
                  DAT_054f0c60 = 0;
                  __cxa_guard_release(&DAT_054f0c70);
                  psVar11 = &DAT_054f0c08;
                }
              }
            }
            else {
              psVar11 = (short *)(lVar8 + (ulong)uVar17 * 0xd0 +
                                  (ulong)(*(uint *)(lVar8 + uVar6 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
            }
            if (((((char)psVar11[0x32] != '\0') && (*psVar11 == *(short *)PTR_DAT_04bb6298)) &&
                (uVar4 = *(uint *)(psVar11 + 2), uVar4 < 0x149)) &&
               ((uVar4 == 0xdc || (uVar4 == 0xda)))) goto LAB_024ce49c;
            goto LAB_024ce580;
          }
        }
        if (7 < (uint)uVar6) {
          return 1;
        }
        if (uVar6 + 1 == 8) {
          return 1;
        }
        pbVar16 = puVar3 + uVar6 + 1;
        uVar7 = FUN_02507924(local_a4,pbVar16);
        if ((uVar7 & 1) == 0) {
          if (uVar6 + 2 == 8) {
            return 1;
          }
          pbVar16 = puVar3 + uVar6 + 2;
          uVar7 = FUN_02507924(local_a4,pbVar16);
          if ((uVar7 & 1) == 0) {
            if (uVar6 + 3 == 8) {
              return 1;
            }
            pbVar16 = puVar3 + uVar6 + 3;
            uVar7 = FUN_02507924(local_a4,pbVar16);
            if ((uVar7 & 1) == 0) {
              if (uVar6 + 4 == 8) {
                return 1;
              }
              pbVar16 = puVar3 + uVar6 + 4;
              uVar7 = FUN_02507924(local_a4,pbVar16);
              if ((uVar7 & 1) == 0) {
                if (uVar6 + 5 == 8) {
                  return 1;
                }
                pbVar16 = puVar3 + uVar6 + 5;
                uVar7 = FUN_02507924(local_a4,pbVar16);
                if ((uVar7 & 1) == 0) {
                  if (uVar6 + 6 == 8) {
                    return 1;
                  }
                  pbVar16 = puVar3 + uVar6 + 6;
                  uVar7 = FUN_02507924(local_a4,pbVar16);
                  if ((uVar7 & 1) == 0) {
                    if (uVar6 + 7 == 8) {
                      return 1;
                    }
                    pbVar16 = puVar3 + uVar6 + 7;
                    uVar7 = FUN_02507924(local_a4,pbVar16);
                    if ((uVar7 & 1) == 0) {
                      if ((uint)uVar6 == 0) {
                        return 1;
                      }
                      pbVar16 = puVar3 + uVar6 + 8;
                      FUN_02507924(local_a4,pbVar16);
                    }
                  }
                }
              }
            }
          }
        }
        bVar12 = *pbVar16;
        if (7 < bVar12) {
          return 1;
        }
        local_a4[0] = CONCAT31(local_a4[0]._1_3_,bVar12);
      } while( true );
    }
  }
  return 1;
}

