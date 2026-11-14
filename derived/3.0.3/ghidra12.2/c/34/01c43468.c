
void FUN_01c43468(undefined4 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  undefined8 local_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  uint local_5c;
  undefined *local_58;
  
  local_58 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_58);
  FUN_01c43f00(&local_78,param_2,param_3,0);
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = local_78;
  if ((short)local_78 == -2) {
    iVar8 = -1;
LAB_01c436a8:
    FUN_01c43f00(&local_78,param_2,param_3,1);
    puVar3 = PTR_DAT_04bb43c0;
    local_58 = local_78;
    if ((short)local_78 != -2) {
      local_70 = (short)local_78;
      local_6e = local_78._2_1_;
      local_6d = local_78._3_1_;
      local_6c = local_78._4_4_;
      local_68 = 0;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 == 0) {
LAB_01c43820:
        local_5c = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c43820;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar6 == (uint *)0x0)) goto LAB_01c43820;
        uVar4 = *puVar6;
        local_5c = 0;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          local_5c = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_5c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_5c < 0xbd)) goto LAB_01c43824;
              }
            }
            local_5c = 0;
          }
        }
      }
LAB_01c43824:
      if (local_5c - 0x69 < 3) {
        uVar4 = FUN_01c27f3c(*(undefined8 *)PTR_DAT_04bb4828,&local_58,0);
LAB_01c43894:
        iVar8 = iVar8 + (uVar4 & 1);
      }
      else {
        if (local_5c - 0xa4 < 2) {
          uVar4 = FUN_01c172f8(*(undefined8 *)PTR_DAT_04bb4838,&local_58);
          goto LAB_01c43894;
        }
        if (local_5c == 0x70) {
          uVar4 = FUN_01c1ee08(*(undefined8 *)PTR_DAT_04bb4830,&local_58);
          goto LAB_01c43894;
        }
      }
      if (iVar8 == param_4) goto LAB_01c43eb8;
    }
    FUN_01c43f00(&local_78,param_2,param_3,2);
    puVar3 = PTR_DAT_04bb43c0;
    local_58 = local_78;
    if ((short)local_78 != -2) {
      local_70 = (short)local_78;
      local_6e = local_78._2_1_;
      local_6d = local_78._3_1_;
      local_6c = local_78._4_4_;
      local_68 = 0;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 == 0) {
LAB_01c43a20:
        local_5c = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c43a20;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar6 == (uint *)0x0)) goto LAB_01c43a20;
        uVar4 = *puVar6;
        local_5c = 0;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          local_5c = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_5c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_5c < 0xbd)) goto LAB_01c43a24;
              }
            }
            local_5c = 0;
          }
        }
      }
LAB_01c43a24:
      if (local_5c - 0x69 < 3) {
        uVar4 = FUN_01c27f3c(*(undefined8 *)PTR_DAT_04bb4828,&local_58,0);
LAB_01c43a94:
        iVar8 = iVar8 + (uVar4 & 1);
      }
      else {
        if (local_5c - 0xa4 < 2) {
          uVar4 = FUN_01c172f8(*(undefined8 *)PTR_DAT_04bb4838,&local_58);
          goto LAB_01c43a94;
        }
        if (local_5c == 0x70) {
          uVar4 = FUN_01c1ee08(*(undefined8 *)PTR_DAT_04bb4830,&local_58);
          goto LAB_01c43a94;
        }
      }
      if (iVar8 == param_4) goto LAB_01c43eb8;
    }
    FUN_01c43f00(&local_78,param_2,param_3,3);
    puVar3 = PTR_DAT_04bb43c0;
    local_58 = local_78;
    if ((short)local_78 != -2) {
      local_70 = (short)local_78;
      local_6e = local_78._2_1_;
      local_6d = local_78._3_1_;
      local_6c = local_78._4_4_;
      local_68 = 0;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 == 0) {
LAB_01c43c1c:
        local_5c = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c43c1c;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar6 == (uint *)0x0)) goto LAB_01c43c1c;
        uVar4 = *puVar6;
        local_5c = 0;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          local_5c = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_5c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_5c < 0xbd)) goto LAB_01c43c20;
              }
            }
            local_5c = 0;
          }
        }
      }
LAB_01c43c20:
      if (local_5c - 0x69 < 3) {
        uVar4 = FUN_01c27f3c(*(undefined8 *)PTR_DAT_04bb4828,&local_58,0);
LAB_01c43ca0:
        iVar8 = iVar8 + (uVar4 & 1);
      }
      else {
        if (local_5c - 0xa4 < 2) {
          uVar4 = FUN_01c172f8(*(undefined8 *)PTR_DAT_04bb4838,&local_58);
          goto LAB_01c43ca0;
        }
        if (local_5c == 0x70) {
          uVar4 = FUN_01c1ee08(*(undefined8 *)PTR_DAT_04bb4830,&local_58);
          goto LAB_01c43ca0;
        }
      }
      if (iVar8 == param_4) goto LAB_01c43eb8;
    }
    FUN_01c43f00(&local_78,param_2,param_3,4);
    puVar3 = PTR_DAT_04bb43c0;
    local_58 = local_78;
    if ((short)local_78 != -2) {
      local_70 = (short)local_78;
      local_6e = local_78._2_1_;
      local_6d = local_78._3_1_;
      local_6c = local_78._4_4_;
      local_68 = 0;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 == 0) {
LAB_01c43e2c:
        local_5c = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c43e2c;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar6 == (uint *)0x0)) goto LAB_01c43e2c;
        uVar4 = *puVar6;
        local_5c = 0;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          local_5c = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_5c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_5c < 0xbd)) goto LAB_01c43e30;
              }
            }
            local_5c = 0;
          }
        }
      }
LAB_01c43e30:
      if (local_5c - 0x69 < 3) {
        uVar4 = FUN_01c27f3c(*(undefined8 *)PTR_DAT_04bb4828,&local_58,0);
LAB_01c43ea0:
        iVar8 = iVar8 + (uVar4 & 1);
      }
      else {
        if (local_5c - 0xa4 < 2) {
          uVar4 = FUN_01c172f8(*(undefined8 *)PTR_DAT_04bb4838,&local_58);
          goto LAB_01c43ea0;
        }
        if (local_5c == 0x70) {
          uVar4 = FUN_01c1ee08(*(undefined8 *)PTR_DAT_04bb4830,&local_58);
          goto LAB_01c43ea0;
        }
      }
      if (iVar8 == param_4) goto LAB_01c43eb8;
    }
    if (iVar8 != param_4) {
      ppuVar5 = (undefined **)PTR_DAT_04bb37e0;
      goto LAB_01c43ed0;
    }
  }
  else {
    local_70 = (short)local_78;
    local_6e = local_78._2_1_;
    local_6d = local_78._3_1_;
    local_6c = local_78._4_4_;
    local_68 = 0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    uVar4 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 == 0) {
LAB_01c43624:
      local_5c = 0xbc;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c43624;
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
         (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 == (uint *)0x0)) goto LAB_01c43624;
      uVar4 = *puVar6;
      local_5c = 0;
      if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
        local_5c = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_5c = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_5c < 0xbd)) goto LAB_01c43628;
            }
          }
          local_5c = 0;
        }
      }
    }
LAB_01c43628:
    if (local_5c - 0x69 < 3) {
      uVar4 = FUN_01c27f3c(*(undefined8 *)PTR_DAT_04bb4828,&local_58,0);
LAB_01c43698:
      iVar8 = (uVar4 & 1) - 1;
      if (iVar8 != param_4) goto LAB_01c436a8;
    }
    else {
      if (local_5c - 0xa4 < 2) {
        uVar4 = FUN_01c172f8(*(undefined8 *)PTR_DAT_04bb4838,&local_58);
        goto LAB_01c43698;
      }
      if (local_5c == 0x70) {
        uVar4 = FUN_01c1ee08(*(undefined8 *)PTR_DAT_04bb4830,&local_58);
        goto LAB_01c43698;
      }
      iVar8 = -1;
      if (param_4 != -1) goto LAB_01c436a8;
    }
  }
LAB_01c43eb8:
  ppuVar5 = (undefined **)PTR_DAT_04bb37e0;
  if ((short)local_58 != -2) {
    ppuVar5 = &local_58;
  }
LAB_01c43ed0:
  uVar2 = *(undefined4 *)((long)ppuVar5 + 4);
  *param_1 = *(undefined4 *)ppuVar5;
  param_1[1] = uVar2;
  return;
}

