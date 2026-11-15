
ulong FUN_020dd1cc(undefined4 param_1,undefined8 *param_2,int *param_3,ushort param_4)

{
  undefined *puVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  short sVar14;
  undefined4 local_bc;
  undefined **local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_04bb43c0;
  switch(param_1) {
  case 0x16:
    if (*param_3 != 0xbc) {
      return 0;
    }
    bVar2 = param_3[1] == 0x2cd;
    goto LAB_020ddbc4;
  case 0x17:
    if (*param_3 != 0x15a) {
      return 0;
    }
    uVar3 = 1;
    if (param_3[4] == 0x40d) {
      uVar3 = 2;
    }
    bVar2 = param_3[1] == 0x29c;
    break;
  case 0x18:
    if (*param_3 != 0x4c) {
      return 0;
    }
    uVar3 = 1;
    if (param_3[4] == 0x40a) {
      uVar3 = 2;
    }
    if (param_3[6] == 0x247) {
      uVar3 = uVar3 + 1;
    }
    bVar2 = param_3[5] == 0x307;
    break;
  case 0x19:
    if (*param_3 != 0x10) {
      return 0;
    }
    uVar3 = 1;
    if (param_3[4] == 0x32b) {
      uVar3 = 2;
    }
    bVar2 = param_3[5] == 0x2fc;
    break;
  case 0x1a:
    if (*param_3 != 0x15b) {
      return 0;
    }
    uVar3 = 1;
    if (param_3[4] == 0x15d) {
      uVar3 = 2;
    }
    if (param_3[2] == 0x160) {
      uVar3 = uVar3 + 1;
    }
    bVar2 = param_3[5] == 0x30b;
    break;
  case 0x1b:
    if (*param_3 == 0x147) {
      bVar2 = param_3[1] == 0x3f6;
    }
    else {
      if (*param_3 != 0xb1) goto LAB_020ddb04;
      bVar2 = param_3[1] == 0x378 || param_3[1] == 0x2a8;
    }
    goto LAB_020ddbc4;
  case 0x1c:
    if ((*param_3 != 0x1a8) && (*param_3 != 0x49)) {
LAB_020ddb04:
      uVar3 = 0;
      goto LAB_020dde7c;
    }
    uVar3 = 1;
    if (param_3[1] == 0x2b3) {
      uVar3 = 2;
    }
    if (param_3[4] == 0x96) {
      uVar3 = uVar3 + 1;
    }
    bVar2 = param_3[5] == 0x300;
    break;
  case 0x1d:
    if (*param_3 != 0x51) {
      return 0;
    }
    uVar3 = 1;
    if (param_3[4] == 0x18a) {
      uVar3 = 2;
    }
    if ((param_3[1] == 0x26a) || (param_3[1] == 0x25f)) {
      uVar3 = uVar3 + 1;
    }
    goto LAB_020dde7c;
  case 0x1e:
    if (*param_3 != 0x89) {
      return 0;
    }
    bVar2 = param_3[1] == 0x2a9;
    goto LAB_020ddbc4;
  case 0x1f:
    uVar3 = 1;
    if (param_3[7] == 0x3bb) {
      uVar3 = 2;
    }
    if (1 < *param_3 - 0x3f1U) {
      uVar3 = 0;
    }
    goto LAB_020dde7c;
  case 0x20:
    iVar9 = FUN_0277d6c4(param_2);
    if (iVar9 == 0x317b) {
      iVar9 = FUN_0277d6c4(param_2 + 1);
      if (((iVar9 == 0x1416) || (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 == 0x32b4)) ||
         (param_3[1] == 0x488)) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      iVar9 = *param_3;
      if ((iVar9 == 0x48a) || (iVar9 == 0x10d)) {
        iVar9 = FUN_0277d6c4(param_2 + 1);
        uVar3 = 1;
        if (param_3[1] == 0x488 || iVar9 == 0x1416) {
          uVar3 = 2;
        }
      }
      else {
        if (iVar9 != 0x29) {
          return 0;
        }
        iVar9 = FUN_0277d6c4(param_2 + 4);
        uVar3 = 1;
        if (iVar9 == 0x3178) {
          uVar3 = 2;
        }
        iVar9 = FUN_0277d6c4(param_2 + 1);
        if (((iVar9 == 0x1416) || (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 == 0x32b4)) ||
           (param_3[1] == 0x488)) {
          uVar3 = uVar3 + 1;
        }
      }
    }
    iVar9 = FUN_0277d6c4(param_2 + 5);
    if (iVar9 == 0x3179) {
      uVar3 = uVar3 + 1;
    }
    iVar9 = FUN_0277d6c4(param_2 + 2);
    if (iVar9 == 0x3176) {
      uVar3 = uVar3 + 1;
    }
    iVar9 = FUN_0277d6c4(param_2 + 3);
    if (iVar9 == 0x3177) {
      uVar3 = uVar3 + 1;
    }
    goto LAB_020dde7c;
  case 0x21:
    if (2 < *param_3 - 0x49eU) {
      return 0;
    }
    iVar9 = param_3[2];
    if (((iVar9 == 0x161) || (iVar9 == 0x4c4)) || (iVar9 == 0x197)) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    bVar2 = param_3[1] == 0x26b;
    break;
  case 0x22:
    iVar9 = FUN_0277d6c4(param_2);
    if (((iVar9 != 0xc5f) || (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x14ce)) &&
       ((iVar9 = FUN_0277d6c4(param_2), iVar9 != 0x2598 ||
        (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x2db6)))) {
      iVar9 = FUN_0277d6c4(param_2);
      if (iVar9 != 0x2599) {
        return 0;
      }
      iVar9 = FUN_0277d6c4(param_2 + 1);
      if (iVar9 != 0x2db7) {
        return 0;
      }
    }
    bVar2 = param_3[3] == 0x174;
    goto LAB_020dd5fc;
  case 0x23:
    iVar9 = FUN_0277d6c4(param_2);
    if (((iVar9 != 0xc4a) || (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x14cd)) &&
       ((iVar9 = FUN_0277d6c4(param_2), iVar9 != 0x2596 ||
        (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x2db4)))) {
      iVar9 = FUN_0277d6c4(param_2);
      if (iVar9 != 0x2597) {
        return 0;
      }
      iVar9 = FUN_0277d6c4(param_2 + 1);
      if (iVar9 != 0x2db5) {
        return 0;
      }
    }
    bVar2 = param_3[3] == 0x1b9;
LAB_020dd5fc:
    uVar3 = 2;
    if (bVar2) {
      uVar3 = 3;
    }
    bVar2 = param_3[5] == 0x2d8;
    break;
  case 0x24:
    iVar9 = FUN_0277d6c4(param_2);
    if ((((iVar9 != 0xd59) || (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x14d2)) &&
        ((iVar9 = FUN_0277d6c4(param_2), iVar9 != 0x259c ||
         (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x2db8)))) &&
       ((iVar9 = FUN_0277d6c4(param_2), iVar9 != 0x259d ||
        (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x2db9)))) {
      iVar9 = FUN_0277d6c4(param_2);
      if (iVar9 != 0x259e) {
        return 0;
      }
      iVar9 = FUN_0277d6c4(param_2 + 1);
      if (iVar9 != 0x2dba) {
        return 0;
      }
    }
    goto LAB_020dd6b0;
  case 0x25:
    iVar9 = FUN_0277d6c4(param_2);
    if ((((iVar9 != 0x114f) || (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x1559)) &&
        ((iVar9 = FUN_0277d6c4(param_2), iVar9 != 0x25a3 ||
         (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x2dbc)))) &&
       ((iVar9 = FUN_0277d6c4(param_2), iVar9 != 0x25a4 ||
        (iVar9 = FUN_0277d6c4(param_2 + 1), iVar9 != 0x2dbd)))) {
      iVar9 = FUN_0277d6c4(param_2);
      if (iVar9 != 0x25a5) {
        return 0;
      }
      iVar9 = FUN_0277d6c4(param_2 + 1);
      if (iVar9 != 0x2dbe) {
        return 0;
      }
    }
LAB_020dd6b0:
    bVar2 = param_3[5] == 0x2d8;
    uVar3 = 2;
    break;
  case 0x26:
    if ((*param_3 != 0x405) && (*param_3 != 0x403)) {
      return 0;
    }
    goto LAB_020ddaa4;
  case 0x27:
    if (*param_3 != 0x343) {
      return 0;
    }
    uVar3 = 1;
    if (param_3[1] == 0x31e) {
      uVar3 = 2;
    }
    if (param_3[5] == 0x1f8) {
      uVar3 = uVar3 + 1;
    }
    bVar2 = param_3[6] == 0x205;
    break;
  case 0x28:
    if (*param_3 != 0x442) {
      return 0;
    }
    goto LAB_020ddaa4;
  case 0x29:
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(param_2);
    lVar11 = *(long *)puVar1;
    if (lVar11 == 0) {
      return 0;
    }
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
      return 0;
    }
    local_90 = 0;
    local_98 = *param_2;
    local_a0 = &PTR_FUN_04a36b50;
    uVar5 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar1 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
          lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar11 != 0) {
            local_90 = lVar11;
          }
        }
      }
    }
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,6);
    uVar10 = FUN_01ae23c0(&local_a0,&local_b8);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_a0._0_4_ = *(undefined4 *)(param_2 + 1);
    local_a0._4_4_ = *(undefined4 *)((long)param_2 + 0xc);
    local_98 = param_2[2];
    local_90 = param_2[3];
    local_88 = *(undefined4 *)(param_2 + 4);
    uStack_84 = *(undefined4 *)((long)param_2 + 0x24);
    local_80 = *(undefined4 *)(param_2 + 5);
    local_7c = *(undefined8 *)((long)param_2 + 0x2c);
    local_74 = *(undefined4 *)((long)param_2 + 0x34);
    local_70 = param_2[7];
    local_68 = *(undefined4 *)(param_2 + 8);
    uStack_64 = *(undefined4 *)((long)param_2 + 0x44);
    lVar11 = *(long *)puVar1;
    uVar5 = FUN_0277d6c4(&local_a0);
    lVar12 = *(long *)puVar1;
    if (lVar12 == 0) {
LAB_020ddf5c:
      uVar3 = 1;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_020ddf5c;
      local_a8 = 0;
      local_b8 = &PTR_FUN_04a36b50;
      local_b0 = (undefined4)local_a0;
      uStack_ac = local_a0._4_4_;
      uVar5 = FUN_0277d6c4(&local_b0);
      if (*(long *)puVar1 != 0) {
        lVar11 = *(long *)(lVar12 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_a0);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
            lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar11 != 0) {
              local_a8 = lVar11;
            }
          }
        }
      }
      local_bc = 6;
      uVar10 = FUN_01ae23c0(&local_b8,&local_bc);
      lVar12 = *(long *)puVar1;
      uVar3 = 1;
      if ((uVar10 & 1) != 0) {
        uVar3 = 2;
      }
    }
    uVar5 = FUN_0277d6c4(&local_98);
    lVar11 = *(long *)puVar1;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = (undefined4)local_98;
        uStack_ac = local_98._4_4_;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_98);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        lVar11 = *(long *)puVar1;
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    uVar5 = FUN_0277d6c4(&local_90);
    lVar12 = *(long *)puVar1;
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = (undefined4)local_90;
        uStack_ac = local_90._4_4_;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_90);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        lVar12 = *(long *)puVar1;
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    uVar5 = FUN_0277d6c4(&local_88);
    lVar11 = *(long *)puVar1;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = local_88;
        uStack_ac = uStack_84;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_88);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        lVar11 = *(long *)puVar1;
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    uVar5 = FUN_0277d6c4(&local_80);
    lVar12 = *(long *)puVar1;
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = local_80;
        uStack_ac = (undefined4)local_7c;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_80);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        lVar12 = *(long *)puVar1;
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    uVar5 = FUN_0277d6c4((long)&local_7c + 4);
    lVar11 = *(long *)puVar1;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = local_7c._4_4_;
        uStack_ac = local_74;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4((long)&local_7c + 4);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        lVar11 = *(long *)puVar1;
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    uVar5 = FUN_0277d6c4(&local_70);
    lVar12 = *(long *)puVar1;
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = (undefined4)local_70;
        uStack_ac = local_70._4_4_;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_70);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        lVar12 = *(long *)puVar1;
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    uVar5 = FUN_0277d6c4(&local_68);
    lVar11 = *(long *)puVar1;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = &PTR_FUN_04a36b50;
        local_b0 = local_68;
        uStack_ac = uStack_64;
        uVar5 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar1 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_68);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
              lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar11 != 0) {
                local_a8 = lVar11;
              }
            }
          }
        }
        local_bc = 6;
        uVar4 = FUN_01ae23c0(&local_b8,&local_bc);
        uVar3 = uVar3 + (uVar4 & 1);
      }
    }
    goto LAB_020dde7c;
  case 0x2a:
    iVar9 = *param_3;
    if (iVar9 < 0x12a) {
      if (iVar9 != 0x7d) {
        if (iVar9 != 0xf2) {
          return 0;
        }
        if (param_3[1] == 0x27a) {
          return 1;
        }
        return 0;
      }
    }
    else if (iVar9 != 0x12a) {
      if (iVar9 == 0x43d) {
        if (param_3[1] != 0x27e) {
          return 0;
        }
        if (((DAT_053e3af0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3af0), iVar9 != 0)) {
          DAT_053e3ab0 = 0x2b57;
          FUN_0277d4ac(&DAT_053e3ab0);
          DAT_053e3ab8 = 0x2e97;
          FUN_0277d4ac();
          DAT_053e3ac0 = 0x2e98;
          FUN_0277d4ac();
          DAT_053e3ac8 = 0x2e99;
          FUN_0277d4ac();
          DAT_053e3ad0 = 0x2e9a;
          FUN_0277d4ac();
          DAT_053e3ad8 = 0x2f9d;
          FUN_0277d4ac();
          DAT_053e3ae0 = 0x2f9e;
          FUN_0277d4ac();
          DAT_053e3ae8 = 0x2f9f;
          FUN_0277d4ac(&DAT_053e3ae8);
          __cxa_guard_release(&DAT_053e3af0);
        }
        if (((DAT_053e3b38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3b38), iVar9 != 0)) {
          DAT_053e3af8 = 0x14b8;
          FUN_0277d4ac(&DAT_053e3af8);
          DAT_053e3b00 = 0x2aae;
          FUN_0277d4ac();
          DAT_053e3b08 = 0x2aaf;
          FUN_0277d4ac();
          DAT_053e3b10 = 0x2ab0;
          FUN_0277d4ac();
          DAT_053e3b18 = 0x2ab1;
          FUN_0277d4ac();
          DAT_053e3b20 = 0x2ab2;
          FUN_0277d4ac();
          DAT_053e3b28 = 0x2ab3;
          FUN_0277d4ac();
          DAT_053e3b30 = 0x2ab4;
          FUN_0277d4ac(&DAT_053e3b30);
          __cxa_guard_release(&DAT_053e3b38);
        }
        uVar10 = FUN_0277d7b4(&DAT_053e3ab0,param_2);
        if ((uVar10 & 1) == 0) {
          uVar10 = FUN_0277d7b4(&DAT_053e3ab8,param_2);
          if ((uVar10 & 1) == 0) {
            uVar10 = FUN_0277d7b4(&DAT_053e3ac0,param_2);
            if ((uVar10 & 1) == 0) {
              uVar10 = FUN_0277d7b4(&DAT_053e3ac8,param_2);
              if ((uVar10 & 1) == 0) {
                uVar10 = FUN_0277d7b4(&DAT_053e3ad0,param_2);
                if ((uVar10 & 1) == 0) {
                  uVar10 = FUN_0277d7b4(&DAT_053e3ad8,param_2);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = FUN_0277d7b4(&DAT_053e3ae0,param_2);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = FUN_0277d7b4(&DAT_053e3ae8,param_2);
                      if ((uVar10 & 1) == 0) {
                        return 0;
                      }
                      lVar11 = 7;
                    }
                    else {
                      lVar11 = 6;
                    }
                  }
                  else {
                    lVar11 = 5;
                  }
                }
                else {
                  lVar11 = 4;
                }
              }
              else {
                lVar11 = 3;
              }
            }
            else {
              lVar11 = 2;
            }
          }
          else {
            lVar11 = 1;
          }
        }
        else {
          lVar11 = 0;
        }
        uVar10 = FUN_0277d7b4(&DAT_053e3af8 + lVar11,param_2 + 1);
        return uVar10;
      }
      if (iVar9 != 0x43e) {
        return 0;
      }
    }
    if (param_3[1] == 0x27e) {
      return 1;
    }
    return 0;
  case 0x2b:
    if (((DAT_053e3b70 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3b70), iVar9 != 0)) {
      DAT_053e3b40 = 0x2693;
      FUN_0277d4ac(&DAT_053e3b40);
      DAT_053e3b48 = 0x2dc4;
      FUN_0277d4ac();
      DAT_053e3b50 = 0x2dc5;
      FUN_0277d4ac();
      DAT_053e3b58 = 0x2dc6;
      FUN_0277d4ac();
      DAT_053e3b60 = 0x2dc7;
      FUN_0277d4ac();
      DAT_053e3b68 = 0x2dc8;
      FUN_0277d4ac(&DAT_053e3b68);
      __cxa_guard_release(&DAT_053e3b70);
    }
    if (((DAT_053e3ba8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3ba8), iVar9 != 0)) {
      DAT_053e3b78 = 0x2694;
      FUN_0277d4ac(&DAT_053e3b78);
      DAT_053e3b80 = 0x2dc9;
      FUN_0277d4ac();
      DAT_053e3b88 = 0x2dca;
      FUN_0277d4ac();
      DAT_053e3b90 = 0x2dcb;
      FUN_0277d4ac();
      DAT_053e3b98 = 0x2dcc;
      FUN_0277d4ac();
      DAT_053e3ba0 = 0x2dcd;
      FUN_0277d4ac(&DAT_053e3ba0);
      __cxa_guard_release(&DAT_053e3ba8);
    }
    if (((DAT_053e3be0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3be0), iVar9 != 0)) {
      DAT_053e3bb0 = 0x2695;
      FUN_0277d4ac(&DAT_053e3bb0);
      DAT_053e3bb8 = 0x2dce;
      FUN_0277d4ac();
      DAT_053e3bc0 = 0x2dcf;
      FUN_0277d4ac();
      DAT_053e3bc8 = 0x2dd0;
      FUN_0277d4ac();
      DAT_053e3bd0 = 0x2dd1;
      FUN_0277d4ac();
      DAT_053e3bd8 = 0x2dd2;
      FUN_0277d4ac(&DAT_053e3bd8);
      __cxa_guard_release(&DAT_053e3be0);
    }
    if (((DAT_053e3c18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3c18), iVar9 != 0)) {
      DAT_053e3be8 = 0x2696;
      FUN_0277d4ac(&DAT_053e3be8);
      DAT_053e3bf0 = 0x2dd8;
      FUN_0277d4ac();
      DAT_053e3bf8 = 0x2dd9;
      FUN_0277d4ac();
      DAT_053e3c00 = 0x2dda;
      FUN_0277d4ac();
      DAT_053e3c08 = 0x2ddb;
      FUN_0277d4ac();
      DAT_053e3c10 = 0x2ddc;
      FUN_0277d4ac(&DAT_053e3c10);
      __cxa_guard_release(&DAT_053e3c18);
    }
    if (((DAT_053e3c50 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3c50), iVar9 != 0)) {
      DAT_053e3c20 = 0x2697;
      FUN_0277d4ac(&DAT_053e3c20);
      DAT_053e3c28 = 0x2ddd;
      FUN_0277d4ac();
      DAT_053e3c30 = 0x2dde;
      FUN_0277d4ac();
      DAT_053e3c38 = 0x2ddf;
      FUN_0277d4ac();
      DAT_053e3c40 = 0x2de0;
      FUN_0277d4ac();
      DAT_053e3c48 = 0x2de1;
      FUN_0277d4ac(&DAT_053e3c48);
      __cxa_guard_release(&DAT_053e3c50);
    }
    if (((DAT_053e3c88 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3c88), iVar9 != 0)) {
      DAT_053e3c58 = 0x269b;
      FUN_0277d4ac(&DAT_053e3c58);
      DAT_053e3c60 = 0x2df1;
      FUN_0277d4ac();
      DAT_053e3c68 = 0x2df2;
      FUN_0277d4ac();
      DAT_053e3c70 = 0x2df3;
      FUN_0277d4ac();
      DAT_053e3c78 = 0x2df4;
      FUN_0277d4ac();
      DAT_053e3c80 = 0x2df5;
      FUN_0277d4ac(&DAT_053e3c80);
      __cxa_guard_release(&DAT_053e3c88);
    }
    if (((DAT_053e3cc0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3cc0), iVar9 != 0)) {
      DAT_053e3c90 = 0x269a;
      FUN_0277d4ac(&DAT_053e3c90);
      DAT_053e3c98 = 0x2dec;
      FUN_0277d4ac();
      DAT_053e3ca0 = 0x2ded;
      FUN_0277d4ac();
      DAT_053e3ca8 = 0x2dee;
      FUN_0277d4ac();
      DAT_053e3cb0 = 0x2def;
      FUN_0277d4ac();
      DAT_053e3cb8 = 0x2df0;
      FUN_0277d4ac(&DAT_053e3cb8);
      __cxa_guard_release(&DAT_053e3cc0);
    }
    if (((DAT_053e3cf8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3cf8), iVar9 != 0)) {
      DAT_053e3cc8 = 0x269d;
      FUN_0277d4ac(&DAT_053e3cc8);
      DAT_053e3cd0 = 0x2dfb;
      FUN_0277d4ac();
      DAT_053e3cd8 = 0x2dfc;
      FUN_0277d4ac();
      DAT_053e3ce0 = 0x2dfd;
      FUN_0277d4ac();
      DAT_053e3ce8 = 0x2dfe;
      FUN_0277d4ac();
      DAT_053e3cf0 = 0x2dff;
      FUN_0277d4ac(&DAT_053e3cf0);
      __cxa_guard_release(&DAT_053e3cf8);
    }
    if (((DAT_053e3d30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3d30), iVar9 != 0)) {
      DAT_053e3d00 = 0x269c;
      FUN_0277d4ac(&DAT_053e3d00);
      DAT_053e3d08 = 0x2df6;
      FUN_0277d4ac();
      DAT_053e3d10 = 0x2df7;
      FUN_0277d4ac();
      DAT_053e3d18 = 0x2df8;
      FUN_0277d4ac();
      DAT_053e3d20 = 0x2df9;
      FUN_0277d4ac();
      DAT_053e3d28 = 0x2dfa;
      FUN_0277d4ac(&DAT_053e3d28);
      __cxa_guard_release(&DAT_053e3d30);
    }
    if (((DAT_053e3d68 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3d68), iVar9 != 0)) {
      DAT_053e3d38 = 0x2698;
      FUN_0277d4ac(&DAT_053e3d38);
      DAT_053e3d40 = 0x2de2;
      FUN_0277d4ac();
      DAT_053e3d48 = 0x2de3;
      FUN_0277d4ac();
      DAT_053e3d50 = 0x2de4;
      FUN_0277d4ac();
      DAT_053e3d58 = 0x2de5;
      FUN_0277d4ac();
      DAT_053e3d60 = 0x2de6;
      FUN_0277d4ac(&DAT_053e3d60);
      __cxa_guard_release(&DAT_053e3d68);
    }
    if (((DAT_053e3da0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3da0), iVar9 != 0)) {
      DAT_053e3d70 = 0x2699;
      FUN_0277d4ac(&DAT_053e3d70);
      DAT_053e3d78 = 0x2de7;
      FUN_0277d4ac();
      DAT_053e3d80 = 0x2de8;
      FUN_0277d4ac();
      DAT_053e3d88 = 0x2de9;
      FUN_0277d4ac();
      DAT_053e3d90 = 0x2dea;
      FUN_0277d4ac();
      DAT_053e3d98 = 0x2deb;
      FUN_0277d4ac(&DAT_053e3d98);
      __cxa_guard_release(&DAT_053e3da0);
    }
    if (((DAT_053e3dd8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_053e3dd8), iVar9 != 0)) {
      DAT_053e3da8 = 0x269f;
      FUN_0277d4ac(&DAT_053e3da8);
      DAT_053e3db0 = 0x2e00;
      FUN_0277d4ac();
      DAT_053e3db8 = 0x2e01;
      FUN_0277d4ac();
      DAT_053e3dc0 = 0x2e02;
      FUN_0277d4ac();
      DAT_053e3dc8 = 0x2e03;
      FUN_0277d4ac();
      DAT_053e3dd0 = 0x2e04;
      FUN_0277d4ac(&DAT_053e3dd0);
      __cxa_guard_release(&DAT_053e3dd8);
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3b40,param_2);
    if (((uVar10 & 1) == 0) && (uVar10 = FUN_0277d7b4(&DAT_053e3b78,param_2), (uVar10 & 1) == 0)) {
      uVar6 = FUN_0277d7b4(&DAT_053e3bb0,param_2);
      uVar5 = (uVar6 & 1) - 1;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3b48,param_2);
    if (((uVar10 & 1) == 0) && (uVar10 = FUN_0277d7b4(&DAT_053e3b80,param_2), (uVar10 & 1) == 0)) {
      uVar7 = FUN_0277d7b4(&DAT_053e3bb8,param_2);
      uVar6 = uVar6 | uVar7;
      if ((uVar7 & 1) != 0) {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3b50,param_2);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_0277d7b4(&DAT_053e3b88,param_2);
      uVar7 = 2;
      if ((uVar10 & 1) == 0) {
        uVar8 = FUN_0277d7b4(&DAT_053e3bc0,param_2);
        uVar6 = uVar6 | uVar8;
        uVar7 = 2;
        if ((uVar8 & 1) == 0) {
          uVar7 = uVar5;
        }
      }
    }
    else {
      uVar7 = 2;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3b58,param_2);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_0277d7b4(&DAT_053e3b90,param_2);
      uVar5 = 3;
      if ((uVar10 & 1) == 0) {
        uVar8 = FUN_0277d7b4(&DAT_053e3bc8,param_2);
        uVar6 = uVar6 | uVar8;
        uVar5 = 3;
        if ((uVar8 & 1) == 0) {
          uVar5 = uVar7;
        }
      }
    }
    else {
      uVar5 = 3;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3b60,param_2);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_0277d7b4(&DAT_053e3b98,param_2);
      uVar7 = 4;
      if ((uVar10 & 1) == 0) {
        uVar8 = FUN_0277d7b4(&DAT_053e3bd0,param_2);
        uVar6 = uVar6 | uVar8;
        uVar7 = 4;
        if ((uVar8 & 1) == 0) {
          uVar7 = uVar5;
        }
      }
    }
    else {
      uVar7 = 4;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3b68,param_2);
    if (((uVar10 & 1) == 0) && (uVar10 = FUN_0277d7b4(&DAT_053e3ba0,param_2), (uVar10 & 1) == 0)) {
      uVar10 = FUN_0277d7b4(&DAT_053e3bd8,param_2);
      if ((uVar10 & 1) == 0) {
        if ((int)uVar7 < 0) {
          return 0;
        }
        if ((uVar6 & 1) == 0) goto LAB_020dddc4;
      }
      else {
        uVar7 = 5;
      }
LAB_020dde8c:
      uVar13 = (ulong)uVar7;
LAB_020dde90:
      sVar14 = 1;
    }
    else {
      uVar7 = 5;
      if ((uVar6 & 1) != 0) goto LAB_020dde8c;
LAB_020dddc4:
      uVar13 = (ulong)uVar7;
      uVar10 = FUN_0277d7b4(&DAT_053e3be8 + uVar7,param_2 + 4);
      if (((uVar10 & 1) == 0) &&
         (uVar10 = FUN_0277d7b4(&DAT_053e3c20 + uVar13,param_2 + 4), (uVar10 & 1) == 0))
      goto LAB_020dde90;
      sVar14 = 2;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3c58 + uVar13,param_2 + 6);
    if (((uVar10 & 1) != 0) ||
       (uVar10 = FUN_0277d7b4(&DAT_053e3c90 + uVar13,param_2 + 6), (uVar10 & 1) != 0)) {
      sVar14 = sVar14 + 1;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3cc8 + uVar13,param_2 + 5);
    if (((uVar10 & 1) != 0) ||
       (uVar10 = FUN_0277d7b4(&DAT_053e3d00 + uVar13,param_2 + 5), (uVar10 & 1) != 0)) {
      sVar14 = sVar14 + 1;
    }
    uVar10 = FUN_0277d7b4(&DAT_053e3d38 + uVar13,param_2 + 1);
    if (((uVar10 & 1) != 0) ||
       (uVar10 = FUN_0277d7b4(&DAT_053e3d70 + uVar13,param_2 + 1), (uVar10 & 1) != 0)) {
      sVar14 = sVar14 + 1;
    }
    uVar3 = FUN_0277d7b4(&DAT_053e3da8 + uVar13,param_2 + 2);
    uVar3 = sVar14 + (uVar3 & 1);
    goto LAB_020dde7c;
  case 0x2c:
    if (*param_3 != 0x2d5) {
      return 0;
    }
    bVar2 = (param_3[1] & 0xfffffffeU) == 0x3e2;
    goto LAB_020ddbc4;
  case 0x2d:
    if (*param_3 == 0x37) {
      uVar3 = 1;
    }
    else {
      if (*param_3 != 0x48) {
        return 0;
      }
      uVar3 = 1;
      if (param_3[4] == 0x66 || param_3[4] == 0x18d) {
        uVar3 = 2;
      }
    }
    bVar2 = param_3[1] == 0x27d;
    break;
  case 0x2e:
    if (*param_3 != 0x33f) {
      return 0;
    }
LAB_020ddaa4:
    uVar3 = 1;
    if (param_3[5] == 0x1f8) {
      uVar3 = 2;
    }
    bVar2 = param_3[6] == 0x205;
    break;
  case 0x2f:
    if (*param_3 != 0x93) {
      return 0;
    }
    bVar2 = param_3[5] == 0xd3;
LAB_020ddbc4:
    uVar3 = 1;
    break;
  default:
    return 0;
  }
  if (bVar2) {
    uVar3 = uVar3 + 1;
  }
LAB_020dde7c:
  return (ulong)(param_4 <= uVar3);
}

