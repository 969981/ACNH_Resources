
/* WARNING: Removing unreachable block (ram,0x0150f730) */
/* WARNING: Removing unreachable block (ram,0x0150f768) */
/* WARNING: Removing unreachable block (ram,0x0150f888) */

undefined8 FUN_0150ee60(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  byte *pbVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  undefined2 local_7c;
  byte local_7a;
  byte local_79;
  uint local_78;
  byte local_74 [4];
  undefined8 local_70;
  byte *local_68;
  uint *local_60;
  int local_58;
  int local_54;
  
  puVar6 = PTR_DAT_04bb6298;
  puVar1 = PTR_DAT_04bb43c0;
  uVar11 = *(ushort *)PTR_DAT_04bb6298;
  uVar12 = (ulong)(short)uVar11;
  if (uVar12 == 0xffffffffffffffff) goto LAB_0150f1dc;
  local_70 = (byte *)CONCAT44(local_70._4_4_,6);
  puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar11 * 8);
  if (0xff < (uint)(int)(short)uVar11) {
    puVar13 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar13 >> 6 & 1) == 0) {
    local_70 = (byte *)CONCAT44(local_70._4_4_,3);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar13 >> 3 & 1) != 0) goto LAB_0150f1e4;
    local_70 = (byte *)CONCAT44(local_70._4_4_,0x15);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar13 >> 0x15 & 1) != 0) goto LAB_0150f1e4;
    local_70 = (byte *)CONCAT44(local_70._4_4_,0x1a);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar13 >> 0x1a & 1) != 0) {
      if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
         ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4 ||
          (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5)))) goto LAB_0150f1e4;
    }
    local_70 = (byte *)CONCAT44(local_70._4_4_,0x19);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (uVar12 & 0xffffffff) * 8);
    if (0xff < uVar11) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar13 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(param_1 + 4);
      lVar15 = *(long *)puVar1;
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_60 = (uint *)0x0;
          local_68 = *(byte **)(param_1 + 4);
          local_70 = PTR_DAT_04bc0510 + 0x10;
          uVar7 = FUN_0277d6c4(&local_68);
          if (*(long *)puVar1 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(param_1 + 4);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                 (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
                 puVar13 != (uint *)0x0)) {
                local_60 = puVar13;
              }
            }
          }
          uVar12 = FUN_01ae59b0(&local_70);
          if ((uVar12 & 1) == 0) goto LAB_0150f1e4;
        }
      }
    }
    sVar4 = *(short *)puVar6;
    if (sVar4 != -1) {
      uVar7 = local_70._4_4_;
      local_70 = (byte *)CONCAT44(local_70._4_4_,0x22);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) >> 2 & 1) == 0) {
        local_70 = (byte *)CONCAT44(local_70._4_4_,0x20);
        puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar13 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((puVar13[1] & 1) == 0) goto LAB_0150f1dc;
        local_70 = (byte *)((ulong)local_70._4_4_ << 0x20);
        if ((*puVar13 & 1) == 0) {
          local_70 = (byte *)CONCAT44(uVar7,1);
          uVar12 = FUN_0290cbcc(&local_70);
          if (((uVar12 & 1) != 0) && (uVar12 = FUN_00975b70(param_1 + 0x18), (uVar12 & 1) != 0))
          goto LAB_0150f9f8;
        }
      }
      goto LAB_0150f1e4;
    }
LAB_0150f1dc:
    uVar12 = FUN_0180c600();
    if ((uVar12 & 1) != 0) goto LAB_0150f1e4;
    goto LAB_0150f9f8;
  }
LAB_0150f1e4:
  puVar1 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_1 + 4);
  if (*(long *)puVar1 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0150f33c;
    iVar9 = *(int *)(param_1 + 0x20);
    local_54 = *(int *)(param_1 + 0x24);
    if ((iVar9 != DAT_0520ee18) ||
       (((local_54 != DAT_0520ee1c || (*(int *)(param_1 + 0x30) != DAT_0520ee28)) ||
        (*(int *)(param_1 + 0x34) != DAT_0520ee2c)))) {
      sVar4 = *(short *)puVar6;
      if (sVar4 != -1) {
        puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar13 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((((*puVar13 >> 3 & 1) != 0) &&
            (lVar15 = *(long *)PTR_DAT_04bb5c90, *(int *)(lVar15 + 0x28) <= iVar9)) &&
           ((*(int *)(param_1 + 0x30) <= *(int *)(lVar15 + 0x38) &&
            ((*(int *)(lVar15 + 0x2c) <= local_54 &&
             (*(int *)(param_1 + 0x34) <= *(int *)(lVar15 + 0x3c))))))) goto LAB_0150f9f8;
      }
      local_70 = param_1 + 0x18;
      local_68 = param_1 + 0x28;
      local_60 = (uint *)(PTR_DAT_04bb2010 + 0x10);
      iVar3 = *(int *)(param_1 + 0x34);
      local_58 = iVar9;
      if (iVar3 + 1 != local_54) {
        do {
          uVar12 = FUN_013861b0(&local_60,0);
          if ((uVar12 & 1) != 0) goto LAB_0150f9f8;
          if (local_58 < *(int *)(local_68 + 8)) {
            local_58 = local_58 + 1;
          }
          else {
            local_54 = local_54 + 1;
            local_58 = *(int *)(local_70 + 8);
          }
        } while (iVar9 != local_58 || iVar3 + 1 != local_54);
      }
      goto LAB_0150f33c;
    }
    goto LAB_0150f9f8;
  }
LAB_0150f33c:
  local_74[0] = *param_1;
  if (local_74[0] < 8) {
    sVar4 = *(short *)puVar6;
    if (sVar4 == -1) goto LAB_0150f4d0;
    local_70 = (byte *)CONCAT44(local_70._4_4_,3);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar13 >> 3 & 1) != 0) {
      local_70 = (byte *)CONCAT71(local_70._1_7_,local_74[0]);
      uVar12 = FUN_02669430(&local_70);
      if (((uVar12 & 1) == 0) && (uVar12 = FUN_0277e294(param_1 + 4), (uVar12 & 1) != 0))
      goto LAB_0150f9f8;
    }
    sVar4 = *(short *)puVar6;
    if (sVar4 == -1) goto LAB_0150f4d0;
    local_70 = (byte *)CONCAT44(local_70._4_4_,6);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar13 >> 6 & 1) == 0) goto LAB_0150f4d0;
    if (local_74[0] < 8) {
      local_70 = (byte *)CONCAT44(local_70._4_4_,6);
      if (((*puVar13 >> 6 & 1) != 0) && (uVar12 = FUN_02915598(local_74), (uVar12 & 1) != 0))
      goto LAB_0150f4d0;
    }
    else {
      local_70 = (byte *)CONCAT44(local_70._4_4_,6);
      if ((*puVar13 >> 6 & 1) != 0) goto LAB_0150f4d0;
    }
LAB_0150f9f8:
    uVar10 = 0;
  }
  else {
    local_74[0] = 0xff;
LAB_0150f4d0:
    local_7c = *(undefined2 *)(param_1 + 4);
    local_7a = param_1[6];
    local_79 = param_1[7];
    uVar7 = *(uint *)(param_1 + 8);
    pbVar5 = *(byte **)(param_1 + 4);
    lVar16 = *(long *)puVar1;
    local_78 = uVar7;
    uVar8 = FUN_0277d6c4(&local_7c);
    lVar15 = *(long *)puVar1;
    if (lVar15 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_70 = PTR_DAT_04bc0510 + 0x10;
        local_60 = (uint *)0x0;
        local_68 = pbVar5;
        uVar8 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar1 == 0) {
LAB_0150f718:
          uVar11 = 0xbc;
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0150f718;
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_7c);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
             (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8),
             puVar13 == (uint *)0x0)) goto LAB_0150f718;
          uVar11 = 0;
          uVar8 = *puVar13;
          if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
            uVar11 = 0;
            if (*puVar14 != 0) {
              uVar8 = puVar14[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar15 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar8);
                  }
                  if (*puVar14 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar11 < 0xbd)) goto LAB_0150f66c;
                }
              }
              uVar11 = 0;
            }
          }
LAB_0150f66c:
          if (uVar11 == 0x76) {
            uVar11 = 0;
            uVar8 = *puVar13;
            if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
              puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
              uVar11 = 0;
              if (*puVar14 != 0) {
                uVar8 = puVar14[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar8);
                    }
                    if (*puVar14 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if (uVar2 < *(uint *)PTR_DAT_04bc00c8) {
                      uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2);
                      if (0xbc < uVar11) {
                        uVar11 = 0;
                      }
                      goto LAB_0150f73c;
                    }
                  }
                }
                uVar11 = 0;
              }
            }
LAB_0150f73c:
            uVar7 = uVar7 & 0xf;
            uVar8 = uVar7;
            if (uVar11 != 0x76) {
              uVar8 = 0;
            }
            local_60 = puVar13;
            uVar12 = FUN_0266cce0(uVar8,local_74);
            if ((uVar12 & 1) == 0) goto LAB_0150f9f8;
            uVar8 = *puVar13;
            uVar11 = 0;
            if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
              puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
              uVar11 = 0;
              if (*puVar14 != 0) {
                uVar8 = puVar14[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar8);
                    }
                    if (*puVar14 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
                       , uVar11 < 0xbd)) goto LAB_0150f854;
                  }
                }
                uVar11 = 0;
              }
            }
LAB_0150f854:
            if (uVar11 != 0x76) {
              uVar7 = 0;
            }
            iVar9 = FUN_0266ca90(uVar7);
            if (iVar9 < 5) goto LAB_0150f9f8;
          }
          uVar7 = *puVar13;
          uVar11 = 0;
          if ((uVar7 != 0) && (puVar13 != (uint *)(ulong)uVar7)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar7);
            if ((*puVar14 == 0) ||
               ((uVar7 = puVar14[1], uVar7 == 0 || ((ulong)(ushort)puVar14[2] == 0)))) {
LAB_0150f930:
              uVar11 = 0;
            }
            else {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              uVar11 = 0;
              if (lVar15 != 0) {
                uVar8 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar8 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar7);
                }
                if (*puVar14 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if (*(uint *)PTR_DAT_04bc00c8 <= uVar8) goto LAB_0150f930;
                uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2);
                if (0xbc < uVar11) {
                  uVar11 = 0;
                }
              }
            }
          }
          if (uVar11 == 0xa9) goto LAB_0150f9f8;
          uVar11 = 0;
          uVar7 = *puVar13;
          if ((uVar7 != 0) && (puVar13 != (uint *)(ulong)uVar7)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar7);
            uVar11 = 0;
            if (*puVar14 != 0) {
              uVar7 = puVar14[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar15 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar8 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar7);
                  }
                  if (*puVar14 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar8 * 2),
                     uVar11 < 0x52)) goto LAB_0150f9e4;
                }
              }
              uVar11 = 0;
            }
          }
LAB_0150f9e4:
          if (uVar11 == 0x42) goto LAB_0150f9f8;
          uVar7 = *puVar13;
          uVar11 = 0;
          if ((uVar7 != 0) && (puVar13 != (uint *)(ulong)uVar7)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar7);
            uVar11 = 0;
            if (*puVar14 != 0) {
              uVar7 = puVar14[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar15 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar8 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar7);
                  }
                  if (*puVar14 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
                     uVar11 < 0xbd)) goto LAB_0150f7ac;
                }
              }
              uVar11 = 0;
            }
          }
        }
LAB_0150f7ac:
        if (uVar11 == 0xb0) goto LAB_0150f9f8;
      }
    }
    uVar10 = 1;
  }
  return uVar10;
}

