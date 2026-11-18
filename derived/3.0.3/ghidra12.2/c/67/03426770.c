
ulong FUN_03426770(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  ushort uVar10;
  ushort uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_88 = (uint *)0x0;
  local_90 = *param_1;
  uStack_8c = param_1[1];
  local_98 = PTR_DAT_04bc0510 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar9 != (uint *)0x0)) {
        local_88 = puVar9;
      }
    }
  }
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  lVar14 = *(long *)puVar2;
  local_a0 = (uint *)0x0;
  uVar4 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar2 == 0) {
LAB_034268d4:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_034268d4;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar4) goto LAB_034268d4;
    puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar9 != (uint *)0x0) {
      local_a0 = puVar9;
    }
  }
  uVar7 = FUN_01a4e630(param_1,param_2);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_0277d7b4(param_1,param_2);
  if ((uVar7 & 1) == 0) {
    uVar7 = (ulong)local_80 >> 0x20;
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    if (local_88 == (uint *)0x0) {
      local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    }
    else {
      uVar4 = *local_88;
      uVar8 = 0;
      if ((uVar4 != 0) && (local_88 != (uint *)(ulong)uVar4)) {
        puVar12 = (uint *)((long)local_88 - (long)(ulong)uVar4);
        uVar8 = 0;
        if (*puVar12 != 0) {
          uVar4 = puVar12[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar14 != 0) {
              uVar8 = 0;
              if ((ulong)uVar4 != 0) {
                uVar8 = (uint)((ulong)((long)local_88 - lVar14) / (ulong)uVar4);
              }
              if (*puVar12 <= uVar8) {
                uVar8 = 0xffffffff;
              }
              if ((uVar8 < DAT_05326ce8) &&
                 (uVar8 = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar8 * 2), uVar8 < 0x5b6))
              goto LAB_03426d04;
            }
          }
          uVar8 = 0;
        }
      }
LAB_03426d04:
      local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar8);
      if (uVar8 != 0) {
        uVar4 = *local_88;
        uVar8 = 0;
        if ((uVar4 != 0) && (local_88 != (uint *)(ulong)uVar4)) {
          puVar12 = (uint *)((long)local_88 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar12 != 0) {
            uVar4 = puVar12[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar14 != 0) {
                uVar8 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar8 = (uint)((ulong)((long)local_88 - lVar14) / (ulong)uVar4);
                }
                if (*puVar12 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < DAT_05326ce8) &&
                   (uVar8 = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar8 * 2), uVar8 < 0x5b6))
                goto LAB_03426dbc;
              }
            }
            uVar8 = 0;
          }
        }
LAB_03426dbc:
        local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar8);
        uVar4 = 0;
        if (((puVar9 != (uint *)0x0) && (uVar1 = *puVar9, uVar1 != 0)) &&
           (puVar9 != (uint *)(ulong)uVar1)) {
          puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar1);
          uVar4 = 0;
          if (*puVar12 != 0) {
            uVar4 = puVar12[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar14 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar4);
                }
                if (*puVar12 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ce8) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uVar4 < 0x5b6))
                goto LAB_03426e54;
              }
            }
            uVar4 = 0;
          }
        }
LAB_03426e54:
        local_80 = (undefined *)CONCAT44((int)uVar7,uVar4);
        if ((uVar8 == uVar4) && (uVar7 = FUN_0342ce90(param_1,param_2), (int)uVar7 != 0)) {
          return uVar7;
        }
      }
    }
LAB_03426e74:
    if (local_88 == (uint *)0x0) {
      uVar4 = 0xbc;
    }
    else {
      uVar8 = *local_88;
      uVar4 = 0;
      if ((uVar8 != 0) && (local_88 != (uint *)(ulong)uVar8)) {
        puVar12 = (uint *)((long)local_88 - (long)(ulong)uVar8);
        uVar4 = 0;
        if (*puVar12 != 0) {
          uVar4 = puVar12[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar14 != 0) {
              uVar8 = 0;
              if ((ulong)uVar4 != 0) {
                uVar8 = (uint)((ulong)((long)local_88 - lVar14) / (ulong)uVar4);
              }
              if (*puVar12 <= uVar8) {
                uVar8 = 0xffffffff;
              }
              if ((uVar8 < DAT_05326ec0) &&
                 (uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), uVar4 < 0xbd))
              goto LAB_03426f10;
            }
          }
          uVar4 = 0;
        }
      }
    }
LAB_03426f10:
    local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar4);
    if (puVar9 == (uint *)0x0) {
      uVar8 = 0xbc;
    }
    else {
      uVar1 = *puVar9;
      uVar8 = 0;
      if ((uVar1 != 0) && (puVar9 != (uint *)(ulong)uVar1)) {
        puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar1);
        uVar8 = 0;
        if (*puVar12 != 0) {
          uVar8 = puVar12[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar14 != 0) {
              uVar1 = 0;
              if ((ulong)uVar8 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar8);
              }
              if (*puVar12 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar8 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
              goto LAB_03426fb0;
            }
          }
          uVar8 = 0;
        }
      }
    }
LAB_03426fb0:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar8);
    if (uVar4 != uVar8) {
      local_60 = *param_1;
      uStack_5c = param_1[1];
      lVar14 = *(long *)puVar2;
      local_58 = 0;
      local_68 = puVar3 + 0x10;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_03427054:
        puVar9 = (uint *)0x0;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_03427054;
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (*(uint *)(lVar14 + 0x1d8) <= uVar4) goto LAB_03427054;
        puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
      }
      local_78 = *param_2;
      uStack_74 = param_2[1];
      lVar14 = *(long *)puVar2;
      local_70 = 0;
      local_80 = puVar3 + 0x10;
      uVar4 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar2 == 0) {
LAB_034270f4:
        puVar12 = (uint *)0x0;
joined_r0x034270f4:
        if (puVar9 == (uint *)0x0) goto LAB_034270e8;
LAB_034270f8:
        uVar4 = *puVar9;
        uVar10 = 0;
        if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
          puVar13 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
          uVar10 = 0;
          if (*puVar13 != 0) {
            uVar4 = puVar13[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar14 != 0) {
                uVar8 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar8 = (uint)((ulong)((long)puVar9 - lVar14) / (ulong)uVar4);
                }
                if (*puVar13 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < DAT_05326ec0) &&
                   (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), uVar10 < 0xbd))
                goto LAB_03427184;
              }
            }
            uVar10 = 0;
          }
        }
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_034270f4;
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
          puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
          goto joined_r0x034270f4;
        }
        puVar12 = (uint *)0x0;
        if (puVar9 != (uint *)0x0) goto LAB_034270f8;
LAB_034270e8:
        uVar10 = 0xbc;
      }
LAB_03427184:
      if (puVar12 == (uint *)0x0) {
        uVar11 = 0xbc;
      }
      else {
        uVar4 = *puVar12;
        uVar11 = 0;
        if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
          uVar11 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar14 != 0) {
                uVar8 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar8 = (uint)((ulong)((long)puVar12 - lVar14) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < DAT_05326ec0) &&
                   (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), uVar11 < 0xbd))
                goto LAB_03427224;
              }
            }
            uVar11 = 0;
          }
        }
      }
LAB_03427224:
      if ((uVar10 != uVar11) && (uVar7 = FUN_01a4eb00(param_1,param_2), (int)uVar7 != 0)) {
        return uVar7;
      }
    }
    uVar7 = FUN_0277d7b4(param_1,param_2);
    if ((uVar7 & 1) == 0) {
      iVar5 = FUN_0277d6c4(param_1);
      iVar6 = FUN_0277d6c4(param_2);
      if (iVar5 != iVar6) {
        if (iVar6 < iVar5) goto LAB_0342727c;
        if (iVar5 < iVar6) {
          return 0xffffffff;
        }
      }
    }
    uVar7 = 0;
  }
  else {
    iVar5 = FUN_01ad7260(&local_98);
    if (((iVar5 == 0) && (iVar5 = FUN_01afcfa0(&local_98), iVar5 == 0)) ||
       (uVar7 = FUN_0277d7b4(param_1,param_2), (uVar7 & 1) == 0)) {
LAB_03426ae4:
      uVar7 = FUN_01af0020(&local_98);
      if (((uVar7 & 1) != 0) && (uVar7 = FUN_0277d7b4(param_1,param_2), (uVar7 & 1) != 0)) {
        local_60 = *param_1;
        uStack_5c = param_1[1];
        lVar14 = *(long *)puVar2;
        local_58 = 0;
        local_68 = puVar3 + 0x10;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
               (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 != 0))
            {
              local_58 = lVar14;
            }
          }
        }
        local_78 = *param_2;
        uStack_74 = param_2[1];
        lVar14 = *(long *)puVar2;
        local_70 = 0;
        local_80 = puVar3 + 0x10;
        uVar4 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar2 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
               (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 != 0))
            {
              local_70 = lVar14;
            }
          }
        }
        uVar7 = FUN_01af0020(&local_68);
        if (((uVar7 & 1) != 0) && (uVar7 = FUN_01af0020(&local_80), (uVar7 & 1) != 0)) {
          iVar5 = FUN_01af02d0(&local_68);
          iVar6 = FUN_01af02d0(&local_80);
          if (iVar5 != iVar6) {
            uVar4 = 0xffffffff;
            if (iVar6 < iVar5) {
              uVar4 = 1;
            }
            return (ulong)uVar4;
          }
        }
      }
      goto LAB_03426e74;
    }
    local_60 = *param_1;
    uStack_5c = param_1[1];
    lVar14 = *(long *)puVar2;
    local_58 = 0;
    local_68 = puVar3 + 0x10;
    uVar4 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
           (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 != 0)) {
          local_58 = lVar14;
        }
      }
    }
    local_78 = *param_2;
    uStack_74 = param_2[1];
    lVar14 = *(long *)puVar2;
    local_70 = 0;
    local_80 = puVar3 + 0x10;
    uVar4 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar2 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
           (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 != 0)) {
          local_70 = lVar14;
        }
      }
    }
    iVar5 = FUN_01ad7260(&local_68);
    if ((iVar5 == 0) || (iVar5 = FUN_01ad7260(&local_80), iVar5 == 0)) {
LAB_03426a84:
      iVar5 = FUN_01afcfa0(&local_68);
      if ((iVar5 == 0) || (iVar5 = FUN_01afcfa0(&local_80), iVar5 == 0)) goto LAB_03426ae4;
      iVar5 = FUN_01ae3a40(&local_68);
      iVar6 = FUN_01ae3a40(&local_80);
      if (iVar5 == iVar6) {
LAB_03426ac4:
        iVar5 = FUN_01ae3a80(&local_68);
        iVar6 = FUN_01ae3a80(&local_80);
        if (iVar5 <= iVar6) {
          if (iVar5 < iVar6) {
            return 0xffffffff;
          }
          goto LAB_03426ae4;
        }
      }
      else if ((iVar5 == DAT_05752434) || (iVar6 != DAT_05752434)) {
        if ((iVar5 == DAT_05752434) && (iVar6 != DAT_05752434)) {
          return 0xffffffff;
        }
        if ((iVar5 == DAT_05752438) || (iVar6 != DAT_05752438)) {
          if ((iVar5 == DAT_05752438) && (iVar6 != DAT_05752438)) {
            return 0xffffffff;
          }
          if ((iVar5 == DAT_0575243c) || (iVar6 != DAT_0575243c)) {
            if ((iVar5 == DAT_0575243c) && (iVar6 != DAT_0575243c)) {
              return 0xffffffff;
            }
            goto LAB_03426ac4;
          }
        }
      }
    }
    else {
      iVar5 = FUN_01ae39f8(&local_68);
      iVar6 = FUN_01ae39f8(&local_80);
      if (iVar5 <= iVar6) {
        if (iVar5 < iVar6) {
          return 0xffffffff;
        }
        goto LAB_03426a84;
      }
    }
LAB_0342727c:
    uVar7 = 1;
  }
  return uVar7;
}

